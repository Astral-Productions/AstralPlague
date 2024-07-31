// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralPlagueCharacter.h"

#include "AbilitySystemGlobals.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "AstralPlague/Camera/AstralCameraComponent.h"
#include "AstralPlague/Components/AstralStatsComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "AstralPlague/Character/AstralCharacterMovementComponent.h"
#include "AstralPlague/Player/AstralPlayerController.h"
#include "AstralPlague/Player/AstralPlayerState.h"

#include "TimerManager.h"
#include "AstralPlague/AstralGameplayTags.h"
#include "AstralPlague/AbilitySystem/Attributes/ProgressionAttributeSet.h"
#include "AstralPlague/Components/AstralCharacterComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralPlagueCharacter)

class AActor;
class FLifetimeProperty;
class IRepChangedPropertyTracker;
class UInputComponent;

static FName NAME_AstralPlagueCharacterCollisionProfile_Capsule(TEXT("AstralPawnCapsule"));
static FName NAME_AstralPlagueCharacterCollisionProfile_Mesh(TEXT("AstralPawnMesh"));

AAstralPlagueCharacter::AAstralPlagueCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UAstralCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Avoid ticking characters if possible.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	NetCullDistanceSquared = 900000000.0f;

	UCapsuleComponent* CapsuleComp = GetCapsuleComponent();
	check(CapsuleComp);
	CapsuleComp->InitCapsuleSize(40.0f, 90.0f);
	CapsuleComp->SetCollisionProfileName(NAME_AstralPlagueCharacterCollisionProfile_Capsule);

	USkeletalMeshComponent* MeshComp = GetMesh();
	check(MeshComp);
	MeshComp->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));  // Rotate mesh to be X forward since it is exported as Y forward.
	MeshComp->SetCollisionProfileName(NAME_AstralPlagueCharacterCollisionProfile_Mesh);
	
	UAstralCharacterMovementComponent* AstralMoveComp = CastChecked<UAstralCharacterMovementComponent>(GetCharacterMovement());
	AstralMoveComp->GravityScale = 1.0f;
	AstralMoveComp->MaxAcceleration = 2400.0f;
	AstralMoveComp->BrakingFrictionFactor = 1.0f;
	AstralMoveComp->BrakingFriction = 6.0f;
	AstralMoveComp->GroundFriction = 8.0f;
	AstralMoveComp->BrakingDecelerationWalking = 1400.0f;
	AstralMoveComp->bUseControllerDesiredRotation = false;
	AstralMoveComp->bOrientRotationToMovement = false;
	AstralMoveComp->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
	AstralMoveComp->bAllowPhysicsRotationDuringAnimRootMotion = false;
	AstralMoveComp->GetNavAgentPropertiesRef().bCanCrouch = true;
	AstralMoveComp->bCanWalkOffLedgesWhenCrouching = true;
	AstralMoveComp->SetCrouchedHalfHeight(65.0f);

	StatsComponent = CreateDefaultSubobject<UAstralStatsComponent>(TEXT("StatsComponent"));
	StatsComponent->OnDeathStarted.AddDynamic(this, &ThisClass::OnDeathStarted);
	StatsComponent->OnDeathFinished.AddDynamic(this, &ThisClass::OnDeathFinished);

	//Because we merged the functionality of PawnExtensionComponent and HeroComponents from Lyra we can safely define it now rather than later down the line in Blueprints.
	//Furthermore, practically all NPCs or characters that we interact with will need its functionality in some capacity.
	CharacterComponent = CreateDefaultSubobject<UAstralCharacterComponent>(TEXT("CharacterComponent"));	
	
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	BaseEyeHeight = 80.0f;
	CrouchedEyeHeight = 50.0f;

	HitDirectionFrontTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Front"));
	HitDirectionBackTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Back"));
	HitDirectionRightTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Right"));
	HitDirectionLeftTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Left"));
	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
	EffectRemoveOnDeathTag = FGameplayTag::RequestGameplayTag(FName("Effect.RemoveOnDeath"));
}

void AAstralPlagueCharacter::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
}

void AAstralPlagueCharacter::OnAbilitySystemInitialized()
{
	UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent();
	check(AstralASC);

	StatsComponent->InitializeWithAbilitySystem(AstralASC);

	InitializeGameplayTags();
}

void AAstralPlagueCharacter::OnAbilitySystemUninitialized()
{
	StatsComponent->UninitializeFromAbilitySystem();
}

void AAstralPlagueCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

}

void AAstralPlagueCharacter::UnPossessed()
{
	
}

void AAstralPlagueCharacter::InitializeGameplayTags()
{
	// Clear tags that may be lingering on the ability system from the previous pawn.
	if (UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		for (const TPair<uint8, FGameplayTag>& TagMapping : AstralGameplayTags::MovementModeTagMap)
		{
			if (TagMapping.Value.IsValid())
			{
				AstralASC->SetLooseGameplayTagCount(TagMapping.Value, 0);
			}
		}

		for (const TPair<uint8, FGameplayTag>& TagMapping : AstralGameplayTags::CustomMovementModeTagMap)
		{
			if (TagMapping.Value.IsValid())
			{
				AstralASC->SetLooseGameplayTagCount(TagMapping.Value, 0);
			}
		}

		UAstralCharacterMovementComponent* AstralMoveComp = CastChecked<UAstralCharacterMovementComponent>(GetCharacterMovement());
		SetMovementModeTag(AstralMoveComp->MovementMode, AstralMoveComp->CustomMovementMode, true);
	}
}

void AAstralPlagueCharacter::OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	Super::OnMovementModeChanged(PrevMovementMode, PreviousCustomMode);

	UAstralCharacterMovementComponent* AstralMoveComp = CastChecked<UAstralCharacterMovementComponent>(GetCharacterMovement());

	SetMovementModeTag(PrevMovementMode, PreviousCustomMode, false);
	SetMovementModeTag(AstralMoveComp->MovementMode, AstralMoveComp->CustomMovementMode, true);
}

void AAstralPlagueCharacter::SetMovementModeTag(EMovementMode MovementMode, uint8 CustomMovementMode, bool bTagEnabled)
{
	if (UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		const FGameplayTag* MovementModeTag = nullptr;
		if (MovementMode == MOVE_Custom)
		{
			MovementModeTag = AstralGameplayTags::CustomMovementModeTagMap.Find(CustomMovementMode);
		}
		else
		{
			MovementModeTag = AstralGameplayTags::MovementModeTagMap.Find(MovementMode);
		}

		if (MovementModeTag && MovementModeTag->IsValid())
		{
			AstralASC->SetLooseGameplayTagCount(*MovementModeTag, (bTagEnabled ? 1 : 0));
		}
	}
}

AAstralPlayerController* AAstralPlagueCharacter::GetAstralPlayerController() const
{
	return CastChecked<AAstralPlayerController>(Controller, ECastCheckedType::NullAllowed);
}

AAstralPlayerState* AAstralPlagueCharacter::GetAstralPlayerState() const
{
	return CastChecked<AAstralPlayerState>(GetPlayerState(), ECastCheckedType::NullAllowed);
}

UAstralAbilitySystemComponent* AAstralPlagueCharacter::GetAstralAbilitySystemComponent() const
{
	return Cast<UAstralAbilitySystemComponent>(GetAbilitySystemComponent());
}
UAbilitySystemComponent* AAstralPlagueCharacter::GetAbilitySystemComponent() const
{
	if(CharacterComponent == nullptr)
	{
		return nullptr;
	}
	
	return CharacterComponent->GetAstralAbilitySystemComponent();
}


void AAstralPlagueCharacter::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	if (const UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		AstralASC->GetOwnedGameplayTags(TagContainer);
	}
}

bool AAstralPlagueCharacter::HasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
	if (const UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		return AstralASC->HasMatchingGameplayTag(TagToCheck);
	}

	return false;
}

bool AAstralPlagueCharacter::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (const UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		return AstralASC->HasAllMatchingGameplayTags(TagContainer);
	}

	return false;
}

bool AAstralPlagueCharacter::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (const UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		return AstralASC->HasAnyMatchingGameplayTags(TagContainer);
	}

	return false;
}


void AAstralPlagueCharacter::OnDeathStarted(AActor*)
{
	DisableMovementAndCollision();
}

void AAstralPlagueCharacter::OnDeathFinished(AActor*)
{
	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::DestroyDueToDeath);
}


void AAstralPlagueCharacter::DisableMovementAndCollision()
{
	if (Controller)
	{
		Controller->SetIgnoreMoveInput(true);
	}

	UCapsuleComponent* CapsuleComp = GetCapsuleComponent();
	check(CapsuleComp);
	CapsuleComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CapsuleComp->SetCollisionResponseToAllChannels(ECR_Ignore);

	UAstralCharacterMovementComponent* AstralMoveComp = CastChecked<UAstralCharacterMovementComponent>(GetCharacterMovement());
	AstralMoveComp->StopMovementImmediately();
	AstralMoveComp->DisableMovement();
}

void AAstralPlagueCharacter::DestroyDueToDeath()
{
	UninitAndDestroy();
}


void AAstralPlagueCharacter::UninitAndDestroy()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		DetachFromControllerPendingDestroy();
		SetLifeSpan(0.1f);
	}

	// Uninitialize the ASC if we're still the avatar actor (otherwise another pawn already did it when they became the avatar actor)
	if (UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		if (AstralASC->GetAvatarActor() == this)
		{
			/*PawnExtComponent->UninitializeAbilitySystem();*/
		}
	}

	SetActorHiddenInGame(true);
}


FSharedRepMovement::FSharedRepMovement()
{
	RepMovement.LocationQuantizationLevel = EVectorQuantization::RoundTwoDecimals;
}

bool FSharedRepMovement::FillForCharacter(ACharacter* Character)
{
	if (USceneComponent* PawnRootComponent = Character->GetRootComponent())
	{
		UCharacterMovementComponent* CharacterMovement = Character->GetCharacterMovement();

		RepMovement.Location = FRepMovement::RebaseOntoZeroOrigin(PawnRootComponent->GetComponentLocation(), Character);
		RepMovement.Rotation = PawnRootComponent->GetComponentRotation();
		RepMovement.LinearVelocity = CharacterMovement->Velocity;
		RepMovementMode = CharacterMovement->PackNetworkMovementMode();
		bProxyIsJumpForceApplied = Character->bProxyIsJumpForceApplied || (Character->JumpForceTimeRemaining > 0.0f);
		bIsCrouched = Character->bIsCrouched;

		// Timestamp is sent as zero if unused
		if ((CharacterMovement->NetworkSmoothingMode == ENetworkSmoothingMode::Linear) || CharacterMovement->bNetworkAlwaysReplicateTransformUpdateTimestamp)
		{
			RepTimeStamp = CharacterMovement->GetServerLastTransformUpdateTimeStamp();
		}
		else
		{
			RepTimeStamp = 0.f;
		}

		return true;
	}
	return false;
}

bool FSharedRepMovement::Equals(const FSharedRepMovement& Other, ACharacter* Character) const
{
	if (RepMovement.Location != Other.RepMovement.Location)
	{
		return false;
	}

	if (RepMovement.Rotation != Other.RepMovement.Rotation)
	{
		return false;
	}

	if (RepMovement.LinearVelocity != Other.RepMovement.LinearVelocity)
	{
		return false;
	}

	if (RepMovementMode != Other.RepMovementMode)
	{
		return false;
	}

	if (bProxyIsJumpForceApplied != Other.bProxyIsJumpForceApplied)
	{
		return false;
	}

	if (bIsCrouched != Other.bIsCrouched)
	{
		return false;
	}

	return true;
}

bool FSharedRepMovement::NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess)
{
	bOutSuccess = true;
	RepMovement.NetSerialize(Ar, Map, bOutSuccess);
	Ar << RepMovementMode;
	Ar << bProxyIsJumpForceApplied;
	Ar << bIsCrouched;

	// Timestamp, if non-zero.
	uint8 bHasTimeStamp = (RepTimeStamp != 0.f);
	Ar.SerializeBits(&bHasTimeStamp, 1);
	if (bHasTimeStamp)
	{
		Ar << RepTimeStamp;
	}
	else
	{
		RepTimeStamp = 0.f;
	}

	return true;
}

bool AAstralPlagueCharacter::IsAlive() const
{
	//@TODO: Implement Me
	return true;
}

int32 AAstralPlagueCharacter::GetAbilityLevel(EAstralAbilityInputID InputID) const
{
	return 1;
}

void AAstralPlagueCharacter::RemoveCharacterAbilities()
{
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || !AbilitySystemComponent->bCharacterAbilitiesGiven)
	{
		return;
	}

	// Remove any abilities added from a previous call. This checks to make sure the ability is in the startup 'CharacterAbilities' array.
	TArray<FGameplayAbilitySpecHandle> AbilitiesToRemove;
	for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
	{
		if ((Spec.SourceObject == this) && CharacterAbilities.Contains(Spec.Ability->GetClass()))
		{
			AbilitiesToRemove.Add(Spec.Handle);
		}
	}

	// Do in two passes so the removal happens after we have the full list
	for (int32 i = 0; i < AbilitiesToRemove.Num(); i++)
	{
		AbilitySystemComponent->ClearAbility(AbilitiesToRemove[i]);
	}

	AbilitySystemComponent->bCharacterAbilitiesGiven = false;
}

EAstralHitReactDirection AAstralPlagueCharacter::GetHitReactDirection(const FVector & ImpactPoint)
{
	const FVector& ActorLocation = GetActorLocation();
	// PointPlaneDist is super cheap - 1 vector subtraction, 1 dot product.
	float DistanceToFrontBackPlane = FVector::PointPlaneDist(ImpactPoint, ActorLocation, GetActorRightVector());
	float DistanceToRightLeftPlane = FVector::PointPlaneDist(ImpactPoint, ActorLocation, GetActorForwardVector());


	if (FMath::Abs(DistanceToFrontBackPlane) <= FMath::Abs(DistanceToRightLeftPlane))
	{
		// Determine if Front or Back

		// Can see if it's left or right of Left/Right plane which would determine Front or Back
		if (DistanceToRightLeftPlane >= 0)
		{
			return EAstralHitReactDirection::Front;
		}
		else
		{
			return EAstralHitReactDirection::Back;
		}
	}
	else
	{
		// Determine if Right or Left

		if (DistanceToFrontBackPlane >= 0)
		{
			return EAstralHitReactDirection::Right;
		}
		else
		{
			return EAstralHitReactDirection::Left;
		}
	}

	return EAstralHitReactDirection::Front;
}

void AAstralPlagueCharacter::PlayHitReact_Implementation(FGameplayTag HitDirection, AActor * DamageCauser)
{
	if (IsAlive())
	{
		if (HitDirection == HitDirectionLeftTag)
		{
			ShowHitReact.Broadcast(EAstralHitReactDirection::Left);
		}
		else if (HitDirection == HitDirectionFrontTag)
		{
			ShowHitReact.Broadcast(EAstralHitReactDirection::Front);
		}
		else if (HitDirection == HitDirectionRightTag)
		{
			ShowHitReact.Broadcast(EAstralHitReactDirection::Right);
		}
		else if (HitDirection == HitDirectionBackTag)
		{
			ShowHitReact.Broadcast(EAstralHitReactDirection::Back);
		}
	}
}

bool AAstralPlagueCharacter::PlayHitReact_Validate(FGameplayTag HitDirection, AActor * DamageCauser)
{
	return true;
}

int32 AAstralPlagueCharacter::GetCharacterLevel() const
{
	if (ProgressionAttributeSet.IsValid())
	{
		return static_cast<int32>(ProgressionAttributeSet->GetCharacterLevel());
	}

	return 0;
}

float AAstralPlagueCharacter::GetHealth() const
{
	if (CharacterAttributeSet.IsValid())
	{
		return CharacterAttributeSet->GetHealth();
	}

	return 0.0f;
}

float AAstralPlagueCharacter::GetMaxHealth() const
{
	if (CharacterAttributeSet.IsValid())
	{
		return CharacterAttributeSet->GetMaxHealth();
	}

	return 0.0f;
}

float AAstralPlagueCharacter::GetSoulEnergy() const
{
	if (CharacterAttributeSet.IsValid())
	{
		return CharacterAttributeSet->GetSoulEnergy();
	}

	return 0.0f;
}

float AAstralPlagueCharacter::GetMaxSoulEnergy() const
{
	if(CharacterAttributeSet.IsValid())
	{
		return CharacterAttributeSet->GetMaxSoulEnergy();
	}

	return 0.0f;
}

float AAstralPlagueCharacter::GetStamina() const
{
	if (CharacterAttributeSet.IsValid())
	{
		return CharacterAttributeSet->GetStamina();
	}

	return 0.0f;
}

float AAstralPlagueCharacter::GetMaxStamina() const
{
	if (CharacterAttributeSet.IsValid())
	{
		return CharacterAttributeSet->GetMaxStamina();
	}

	return 0.0f;
}

float AAstralPlagueCharacter::GetMoveSpeed() const
{
	if (CharacterAttributeSet.IsValid())
	{
		return CharacterAttributeSet->GetMoveSpeed();
	}

	return 0.0f;
}

float AAstralPlagueCharacter::GetMoveSpeedBaseValue() const
{
	if (CharacterAttributeSet.IsValid())
	{
		return CharacterAttributeSet->GetMoveSpeedAttribute().GetGameplayAttributeData(CharacterAttributeSet.Get())->GetBaseValue();
	}

	return 0.0f;
}

// Run on Server and all clients
void AAstralPlagueCharacter::Die()
{
	// Only runs on Server
	RemoveCharacterAbilities();

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetCharacterMovement()->GravityScale = 0;
	GetCharacterMovement()->Velocity = FVector(0);

	OnCharacterDied.Broadcast(this);

	if (AbilitySystemComponent.IsValid())
	{
		AbilitySystemComponent->CancelAllAbilities();

		FGameplayTagContainer EffectTagsToRemove;
		EffectTagsToRemove.AddTag(EffectRemoveOnDeathTag);
		int32 NumEffectsRemoved = AbilitySystemComponent->RemoveActiveEffectsWithTags(EffectTagsToRemove);

		AbilitySystemComponent->AddLooseGameplayTag(DeadTag);
	}

	if (DeathMontage)
	{
		PlayAnimMontage(DeathMontage);
	}
	else
	{
		FinishDying();
	}
}

void AAstralPlagueCharacter::FinishDying()
{
	Destroy();
}


void AAstralPlagueCharacter::AddCharacterAbilities()
{
	// Grant abilities, but only on the server	
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || AbilitySystemComponent->bCharacterAbilitiesGiven)
	{
		return;
	}

	for (TSubclassOf<UAstralGameplayAbility>& StartupAbility : CharacterAbilities)
	{
		AbilitySystemComponent->GiveAbility(
			FGameplayAbilitySpec(StartupAbility, GetAbilityLevel(StartupAbility.GetDefaultObject()->AbilityInputID), static_cast<int32>(StartupAbility.GetDefaultObject()->AbilityInputID), this));
	}

	AbilitySystemComponent->bCharacterAbilitiesGiven = true;
}

void AAstralPlagueCharacter::InitializeAttributes()
{
	if (!AbilitySystemComponent.IsValid())
	{
		return;
	}

	if (!DefaultAttributes)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Missing CharacterAttributeSet for %s. Please fill in the character's Blueprint."), *FString(__FUNCTION__), *GetName());
		return;
	}

	// Can run on Server and Client
	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(DefaultAttributes, GetCharacterLevel(), EffectContext);
	if (NewHandle.IsValid())
	{
		FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent.Get());
	}
}

void AAstralPlagueCharacter::AddStartupEffects()
{
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || AbilitySystemComponent->bStartupEffectsApplied)
	{
		return;
	}

	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	for (TSubclassOf<UGameplayEffect> GameplayEffect : StartupEffects)
	{
		FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, GetCharacterLevel(), EffectContext);
		if (NewHandle.IsValid())
		{
			FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent.Get());
		}
	}

	AbilitySystemComponent->bStartupEffectsApplied = true;
}

void AAstralPlagueCharacter::SetHealth(float Health)
{
	if (CharacterAttributeSet.IsValid())
	{
		CharacterAttributeSet->SetHealth(Health);
	}
}

void AAstralPlagueCharacter::SetSoulEnergy(float Mana)
{
	if (CharacterAttributeSet.IsValid())
	{
		CharacterAttributeSet->SetSoulEnergy(Mana);
	}
}

void AAstralPlagueCharacter::SetStamina(float Stamina)
{
	if (CharacterAttributeSet.IsValid())
	{
		CharacterAttributeSet->SetStamina(Stamina);
	}
}