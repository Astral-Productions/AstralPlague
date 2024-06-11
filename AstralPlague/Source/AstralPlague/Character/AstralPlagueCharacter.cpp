// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralPlagueCharacter.h"

#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "AstralPlague/Camera/AstralCameraComponent.h"
#include "AstralPlague/Components/AstralStatsComponent.h"
#include "AstralPlague/Character/AstralPawnExtensionComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "AstralPlague/Character/AstralCharacterMovementComponent.h"
#include "AstralPlague/AstralGameplayTags.h"
#include "AstralPlague/AstralLogChannels.h"
#include "Net/UnrealNetwork.h"
#include "AstralPlague/Player/AstralPlayerController.h"
#include "AstralPlague/Player/AstralPlayerState.h"

#include "TimerManager.h"

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

	PawnExtComponent = CreateDefaultSubobject<UAstralPawnExtensionComponent>(TEXT("PawnExtensionComponent"));
	PawnExtComponent->OnAbilitySystemInitialized_RegisterAndCall(FSimpleMulticastDelegate::FDelegate::CreateUObject(this, &ThisClass::OnAbilitySystemInitialized));
	PawnExtComponent->OnAbilitySystemUninitialized_Register(FSimpleMulticastDelegate::FDelegate::CreateUObject(this, &ThisClass::OnAbilitySystemUninitialized));

	StatsComponent = CreateDefaultSubobject<UAstralStatsComponent>(TEXT("StatsComponent"));
	StatsComponent->OnDeathStarted.AddDynamic(this, &ThisClass::OnDeathStarted);
	StatsComponent->OnDeathFinished.AddDynamic(this, &ThisClass::OnDeathFinished);

	CameraComponent = CreateDefaultSubobject<UAstralCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetRelativeLocation(FVector(-300.0f, 0.0f, 75.0f));

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	BaseEyeHeight = 80.0f;
	CrouchedEyeHeight = 50.0f;
}

void AAstralPlagueCharacter::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void AAstralPlagueCharacter::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
}

void AAstralPlagueCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UWorld* World = GetWorld();

	
}

void AAstralPlagueCharacter::Reset()
{
	DisableMovementAndCollision();

	K2_OnReset();

	UninitAndDestroy();
}

void AAstralPlagueCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ThisClass, ReplicatedAcceleration, COND_SimulatedOnly);
}

void AAstralPlagueCharacter::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);

	if (UCharacterMovementComponent* MovementComponent = GetCharacterMovement())
	{
		// Compress Acceleration: XY components as direction + magnitude, Z component as direct value
		const double MaxAccel = MovementComponent->MaxAcceleration;
		const FVector CurrentAccel = MovementComponent->GetCurrentAcceleration();
		double AccelXYRadians, AccelXYMagnitude;
		FMath::CartesianToPolar(CurrentAccel.X, CurrentAccel.Y, AccelXYMagnitude, AccelXYRadians);

		ReplicatedAcceleration.AccelXYRadians   = FMath::FloorToInt((AccelXYRadians / TWO_PI) * 255.0);     // [0, 2PI] -> [0, 255]
		ReplicatedAcceleration.AccelXYMagnitude = FMath::FloorToInt((AccelXYMagnitude / MaxAccel) * 255.0);	// [0, MaxAccel] -> [0, 255]
		ReplicatedAcceleration.AccelZ           = FMath::FloorToInt((CurrentAccel.Z / MaxAccel) * 127.0);   // [-MaxAccel, MaxAccel] -> [-127, 127]
	}
}

void AAstralPlagueCharacter::NotifyControllerChanged()
{


	Super::NotifyControllerChanged();

	

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
	if (PawnExtComponent == nullptr)
	{
		return nullptr;
	}

	return PawnExtComponent->GetAstralAbilitySystemComponent();
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

	PawnExtComponent->HandleControllerChanged();

	
}

void AAstralPlagueCharacter::UnPossessed()
{
	AController* const OldController = Controller;

	// Stop listening for changes from the old controller
	

	Super::UnPossessed();

	PawnExtComponent->HandleControllerChanged();

	// Determine what the new team ID should be afterwards

}

void AAstralPlagueCharacter::OnRep_Controller()
{
	Super::OnRep_Controller();

	PawnExtComponent->HandleControllerChanged();
}

void AAstralPlagueCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	PawnExtComponent->HandlePlayerStateReplicated();
}

void AAstralPlagueCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PawnExtComponent->SetupPlayerInputComponent();
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

void AAstralPlagueCharacter::FellOutOfWorld(const class UDamageType& dmgType)
{
	StatsComponent->DamageSelfDestruct(/*bFellOutOfWorld=*/ true);
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
	K2_OnDeathFinished();

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
			PawnExtComponent->UninitializeAbilitySystem();
		}
	}

	SetActorHiddenInGame(true);
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

void AAstralPlagueCharacter::ToggleCrouch()
{
	const UAstralCharacterMovementComponent* AstralMoveComp = CastChecked<UAstralCharacterMovementComponent>(GetCharacterMovement());

	if (bIsCrouched || AstralMoveComp->bWantsToCrouch)
	{
		UnCrouch();
	}
	else if (AstralMoveComp->IsMovingOnGround())
	{
		Crouch();
	}
}

void AAstralPlagueCharacter::OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	if (UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		AstralASC->SetLooseGameplayTagCount(AstralGameplayTags::Status_Crouching, 1);
	}


	Super::OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
}

void AAstralPlagueCharacter::OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	if (UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		AstralASC->SetLooseGameplayTagCount(AstralGameplayTags::Status_Crouching, 0);
	}

	Super::OnEndCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
}

bool AAstralPlagueCharacter::CanJumpInternal_Implementation() const
{
	// same as ACharacter's implementation but without the crouch check
	return JumpIsAllowedInternal();
}

void AAstralPlagueCharacter::OnRep_ReplicatedAcceleration()
{
	if (UAstralCharacterMovementComponent* AstralMovementComponent = Cast<UAstralCharacterMovementComponent>(GetCharacterMovement()))
	{
		// Decompress Acceleration
		const double MaxAccel         = AstralMovementComponent->MaxAcceleration;
		const double AccelXYMagnitude = double(ReplicatedAcceleration.AccelXYMagnitude) * MaxAccel / 255.0; // [0, 255] -> [0, MaxAccel]
		const double AccelXYRadians   = double(ReplicatedAcceleration.AccelXYRadians) * TWO_PI / 255.0;     // [0, 255] -> [0, 2PI]

		FVector UnpackedAcceleration(FVector::ZeroVector);
		FMath::PolarToCartesian(AccelXYMagnitude, AccelXYRadians, UnpackedAcceleration.X, UnpackedAcceleration.Y);
		UnpackedAcceleration.Z = double(ReplicatedAcceleration.AccelZ) * MaxAccel / 127.0; // [-127, 127] -> [-MaxAccel, MaxAccel]

		AstralMovementComponent->SetReplicatedAcceleration(UnpackedAcceleration);
	}
}



bool AAstralPlagueCharacter::UpdateSharedReplication()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		FSharedRepMovement SharedMovement;
		if (SharedMovement.FillForCharacter(this))
		{
			// Only call FastSharedReplication if data has changed since the last frame.
			// Skipping this call will cause replication to reuse the same bunch that we previously
			// produced, but not send it to clients that already received. (But a new client who has not received
			// it, will get it this frame)
			if (!SharedMovement.Equals(LastSharedReplication, this))
			{
				LastSharedReplication = SharedMovement;
				ReplicatedMovementMode = SharedMovement.RepMovementMode;

				FastSharedReplication(SharedMovement);
			}
			return true;
		}
	}

	// We cannot fastrep right now. Don't send anything.
	return false;
}

void AAstralPlagueCharacter::FastSharedReplication_Implementation(const FSharedRepMovement& SharedRepMovement)
{
	if (GetWorld()->IsPlayingReplay())
	{
		return;
	}

	// Timestamp is checked to reject old moves.
	if (GetLocalRole() == ROLE_SimulatedProxy)
	{
		// Timestamp
		ReplicatedServerLastTransformUpdateTimeStamp = SharedRepMovement.RepTimeStamp;

		// Movement mode
		if (ReplicatedMovementMode != SharedRepMovement.RepMovementMode)
		{
			ReplicatedMovementMode = SharedRepMovement.RepMovementMode;
			GetCharacterMovement()->bNetworkMovementModeChanged = true;
			GetCharacterMovement()->bNetworkUpdateReceived = true;
		}

		// Location, Rotation, Velocity, etc.
		FRepMovement& MutableRepMovement = GetReplicatedMovement_Mutable();
		MutableRepMovement = SharedRepMovement.RepMovement;

		// This also sets LastRepMovement
		OnRep_ReplicatedMovement();

		// Jump force
		bProxyIsJumpForceApplied = SharedRepMovement.bProxyIsJumpForceApplied;

		// Crouch
		if (bIsCrouched != SharedRepMovement.bIsCrouched)
		{
			bIsCrouched = SharedRepMovement.bIsCrouched;
			OnRep_IsCrouched();
		}
	}
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
