// Fill out your copyright notice in the Description page of Project Settings.

#include "AstralPlayerState.h"

#include "AstralPlague/AbilitySystem/AstralAbilitySet.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "AstralPlague/AstralLogChannels.h"
#include "AstralPlague/AbilitySystem/Attributes/ProgressionAttributeSet.h"
#include "AstralPlague/Character/AstralPawnData.h"
#include "AstralPlague/Character/Playable/AstralMainCharacter.h"
#include "AstralPlague/Components/AstralCharacterComponent.h"
#include "AstralPlague/GameModes/AstralExperienceManagerComponent.h"
#include "AstralPlague/GameModes/AstralGameMode.h"
#include "AstralPlague/UI/AstralFloatingStatusBarWidget.h"
#include "AstralPlague/UI/AstralHUDWidget.h"
#include "Components/GameFrameworkComponentManager.h"


const FName AAstralPlayerState::NAME_AstralAbilityReady("AstralAbilitiesReady");

AAstralPlayerState::AAstralPlayerState(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<UAstralAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Full); //Unless we enable multiplayer full replication is the best bet

	// These attribute sets will be detected by AbilitySystemComponent::InitializeComponent. Keeping a reference so that the sets don't get garbage collected before that.
	CharacterAttributeSet = CreateDefaultSubobject<UCharacterAttributeSet>(TEXT("CharacterAttributeSet"));
	ProgressionAttributeSet = CreateDefaultSubobject<UProgressionAttributeSet>(TEXT("ProgressionAttributeSet"));

	// Cache tags
	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));	
}

TObjectPtr<const UCharacterAttributeSet> AAstralPlayerState::GetCharacterAttributeSet() const
{
	return CharacterAttributeSet;
}

TObjectPtr<const UProgressionAttributeSet> AAstralPlayerState::GetProgressionAttributeSet() const
{
	return ProgressionAttributeSet;
}

UAbilitySystemComponent* AAstralPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

AAstralPlayerController* AAstralPlayerState::GetAstralPlayerController() const
{
	return Cast<AAstralPlayerController>(GetOwner());
}


bool AAstralPlayerState::IsAlive() const
{
	return GetHealth() > 0.0f;
}

void AAstralPlayerState::ShowAbilityConfirmCancelText(bool ShowText)
{
	AAstralPlayerController* PC = Cast<AAstralPlayerController>(GetOwner());
	if (PC)
	{
		UAstralHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->ShowAbilityConfirmCancelText(ShowText);
		}
	}
}

float AAstralPlayerState::GetHealth() const
{
	return GetCharacterAttributeSet()->GetHealth();
}

float AAstralPlayerState::GetMaxHealth() const
{
	return GetCharacterAttributeSet()->GetMaxHealth();
}

float AAstralPlayerState::GetHealthRegenRate() const
{
	return GetCharacterAttributeSet()->GetHealthRegenRate();
}

float AAstralPlayerState::GetSoulEnergy() const
{
	return GetCharacterAttributeSet()->GetSoulEnergy();
}

float AAstralPlayerState::GetMaxSoulEnergy() const
{
	return GetCharacterAttributeSet()->GetMaxSoulEnergy();
}

float AAstralPlayerState::GetStamina() const
{
	return GetCharacterAttributeSet()->GetStamina();
}

float AAstralPlayerState::GetMaxStamina() const
{
	return GetCharacterAttributeSet()->GetMaxStamina();
}

float AAstralPlayerState::GetStaminaRegenRate() const
{
	return GetCharacterAttributeSet()->GetStaminaRegenRate();
}

float AAstralPlayerState::GetMoveSpeed() const
{
	return GetCharacterAttributeSet()->GetMoveSpeed();
}

int32 AAstralPlayerState::GetCharacterLevel() const
{
	return GetProgressionAttributeSet()->GetCharacterLevel();
}

int32 AAstralPlayerState::GetCharacterXP() const
{
	return GetProgressionAttributeSet()->GetCharacterXP();
}


int32 AAstralPlayerState::GetGems() const
{
	return GetProgressionAttributeSet()->GetCharacterGems();
}

void AAstralPlayerState::SetPawnData(const UAstralPawnData* InPawnData)
{
	check(InPawnData)

	if (GetLocalRole() != ROLE_Authority)
	{
		return;
	}

	if(PawnData)
	{
		//@todo add additional debug information
		return;
	}

	PawnData = InPawnData;
	
	for(const UAstralAbilitySet* AbilitySet : PawnData->AbilitySets)
	{
		if(AbilitySet)
		{
 			AbilitySet->GiveToAbilitySystem(AbilitySystemComponent, nullptr);
		}
	}

	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(this, NAME_AstralAbilityReady);

	ForceNetUpdate(); // Not strictly necessary but employed by all multiplayer versions of this code.
}

void AAstralPlayerState::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void AAstralPlayerState::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	check(AbilitySystemComponent);
	AbilitySystemComponent->InitAbilityActorInfo(this, GetPawn());

	UWorld* World = GetWorld();
	if (World && World->IsGameWorld() && World->GetNetMode() != NM_Client)
	{
		AGameStateBase* GameState = GetWorld()->GetGameState();
		check(GameState);
		UAstralExperienceManagerComponent* ExperienceComponent = GameState->FindComponentByClass<UAstralExperienceManagerComponent>();
		check(ExperienceComponent);
		ExperienceComponent->CallOrRegister_OnExperienceLoaded(FOnAstralExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));
	}
}

void AAstralPlayerState::Reset()
{
	Super::Reset();
}

void AAstralPlayerState::ClientInitialize(AController* C)
{
	Super::ClientInitialize(C);

	if (UAstralCharacterComponent* CharacterComp = UAstralCharacterComponent::FindCharacterComponent(GetPawn()))
	{
		CharacterComp->CheckDefaultInitialization();
	}
}

void AAstralPlayerState::CopyProperties(APlayerState* PlayerState)
{
	Super::CopyProperties(PlayerState);

	//@TODO: Copy stats
}


void AAstralPlayerState::OnExperienceLoaded(const UAstralExperienceDefinition* CurrentExperience)
{
	if (AAstralGameMode* AstralGameMode = GetWorld()->GetAuthGameMode<AAstralGameMode>())
	{
		if (const UAstralPawnData* NewPawnData = AstralGameMode->GetPawnDataForController(GetOwningController()))
		{
			SetPawnData(NewPawnData);
		}
		else
		{
			UE_LOG(LogAstral, Error, TEXT("AAstralPlayerState::OnExperienceLoaded(): Unable to find PawnData to initialize player state [%s]!"), *GetNameSafe(this));
		}
	}
}

void AAstralPlayerState::BeginPlay()
{
	Super::BeginPlay();

	AAstralPlayerController* controller = GetAstralPlayerController();
	
	if (AbilitySystemComponent)
	{
		// Attribute change callbacks
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharacterAttributeSet->GetHealthAttribute()).AddUObject(this, &AAstralPlayerState::HealthChanged);
		MaxHealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharacterAttributeSet->GetMaxHealthAttribute()).AddUObject(this, &AAstralPlayerState::MaxHealthChanged);
		HealthRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharacterAttributeSet->GetHealthRegenRateAttribute()).AddUObject(this, &AAstralPlayerState::HealthRegenRateChanged);
		ManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharacterAttributeSet->GetSoulEnergyAttribute()).AddUObject(this, &AAstralPlayerState::SoulEnergyChanged);
		MaxManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharacterAttributeSet-> GetMaxSoulEnergyAttribute()).AddUObject(this, &AAstralPlayerState::MaxSoulEnergyChanged);		
		StaminaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharacterAttributeSet->GetStaminaAttribute()).AddUObject(this, &AAstralPlayerState::StaminaChanged);
		MaxStaminaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharacterAttributeSet->GetMaxStaminaAttribute()).AddUObject(this, &AAstralPlayerState::MaxStaminaChanged);
		StaminaRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharacterAttributeSet->GetStaminaRegenRateAttribute()).AddUObject(this, &AAstralPlayerState::StaminaRegenRateChanged);
		XPChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(ProgressionAttributeSet->GetCharacterXPAttribute()).AddUObject(this, &AAstralPlayerState::XPChanged);
		GemsChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(ProgressionAttributeSet->GetCharacterGemsAttribute()).AddUObject(this, &AAstralPlayerState::GemsChanged);
		CharacterLevelChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(ProgressionAttributeSet->GetCharacterLevelAttribute()).AddUObject(this, &AAstralPlayerState::CharacterLevelChanged);

		// Tag change callbacks
		AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTag::RequestGameplayTag(FName("State.Debuff.Stun")), EGameplayTagEventType::NewOrRemoved).AddUObject(this, &AAstralPlayerState::StunTagChanged);
	}
}

void AAstralPlayerState::HealthChanged(const FOnAttributeChangeData & Data)
{
	float Health = Data.NewValue;

	// Update floating status bar
	AAstralMainCharacter* Hero = Cast<AAstralMainCharacter>(GetPawn());
	if (Hero)
	{
		UAstralFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		if (HeroFloatingStatusBar)
		{
			HeroFloatingStatusBar->SetHealthPercentage(Health / GetMaxHealth());
		}
	}

	// Update the HUD
	// Handled in the UI itself using the AsyncTaskAttributeChanged node as an example how to do it in Blueprint

	// If the player died, handle death
	if (!IsAlive() && !AbilitySystemComponent->HasMatchingGameplayTag(DeadTag))
	{
		if (Hero)
		{
			Hero->Die();
		}
	}
}

void AAstralPlayerState::MaxHealthChanged(const FOnAttributeChangeData & Data)
{
	float MaxHealth = Data.NewValue;

	// Update floating status bar
	AAstralMainCharacter* Hero = Cast<AAstralMainCharacter>(GetPawn());
	if (Hero)
	{
		UAstralFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		if (HeroFloatingStatusBar)
		{
			HeroFloatingStatusBar->SetHealthPercentage(GetHealth() / MaxHealth);
		}
	}

	// Update the HUD
	AAstralPlayerController* PC = Cast<AAstralPlayerController>(GetOwner());
	if (PC)
	{
		UAstralHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetMaxHealth(MaxHealth);
		}
	}
}

void AAstralPlayerState::HealthRegenRateChanged(const FOnAttributeChangeData & Data)
{
	float HealthRegenRate = Data.NewValue;

	// Update the HUD
	AAstralPlayerController* PC = Cast<AAstralPlayerController>(GetOwner());
	if (PC)
	{
		UAstralHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetHealthRegenRate(HealthRegenRate);
		}
	}
}

void AAstralPlayerState::SoulEnergyChanged(const FOnAttributeChangeData & Data)
{
	float Mana = Data.NewValue;

	// Update floating status bar
	AAstralMainCharacter* Hero = Cast<AAstralMainCharacter>(GetPawn());
	if (Hero)
	{
		UAstralFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		if (HeroFloatingStatusBar)
		{
			HeroFloatingStatusBar->SetSoulEnergyPercentage(Mana / GetMaxSoulEnergy());
		}
	}

	// Update the HUD
	// Handled in the UI itself using the AsyncTaskAttributeChanged node as an example how to do it in Blueprint
}

void AAstralPlayerState::MaxSoulEnergyChanged(const FOnAttributeChangeData & Data)
{
	float MaxMana = Data.NewValue;

	// Update floating status bar
	AAstralMainCharacter* Hero = Cast<AAstralMainCharacter>(GetPawn());
	if (Hero)
	{
		UAstralFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		if (HeroFloatingStatusBar)
		{
			HeroFloatingStatusBar->SetSoulEnergyPercentage(GetSoulEnergy() / MaxMana);
		}
	}

	// Update the HUD
	AAstralPlayerController* PC = Cast<AAstralPlayerController>(GetOwner());
	if (PC)
	{
		UAstralHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetMaxSoulEnergy(MaxMana);
		}
	}
}

void AAstralPlayerState::StaminaChanged(const FOnAttributeChangeData & Data)
{
	float Stamina = Data.NewValue;

	// Update the HUD
	// Handled in the UI itself using the AsyncTaskAttributeChanged node as an example how to do it in Blueprint
}

void AAstralPlayerState::MaxStaminaChanged(const FOnAttributeChangeData & Data)
{
	float MaxStamina = Data.NewValue;

	// Update the HUD
	AAstralPlayerController* PC = Cast<AAstralPlayerController>(GetOwner());
	if (PC)
	{
		UAstralHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetMaxStamina(MaxStamina);
		}
	}
}

void AAstralPlayerState::StaminaRegenRateChanged(const FOnAttributeChangeData & Data)
{
	float StaminaRegenRate = Data.NewValue;

	// Update the HUD
	AAstralPlayerController* PC = Cast<AAstralPlayerController>(GetOwner());
	if (PC)
	{
		UAstralHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetStaminaRegenRate(StaminaRegenRate);
		}
	}
}

void AAstralPlayerState::XPChanged(const FOnAttributeChangeData & Data)
{
	float XP = Data.NewValue;

	// Update the HUD
	AAstralPlayerController* PC = Cast<AAstralPlayerController>(GetOwner());
	if (PC)
	{
		UAstralHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetExperience(XP);
		}
	}
}

void AAstralPlayerState::GemsChanged(const FOnAttributeChangeData & Data)
{
	float Gold = Data.NewValue;

	// Update the HUD
	AAstralPlayerController* PC = Cast<AAstralPlayerController>(GetOwner());
	if (PC)
	{
		UAstralHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetGems(Gold);
		}
	}
}

void AAstralPlayerState::CharacterLevelChanged(const FOnAttributeChangeData & Data)
{
	float CharacterLevel = Data.NewValue;

	// Update the HUD
	AAstralPlayerController* PC = Cast<AAstralPlayerController>(GetOwner());
	if (PC)
	{
		UAstralHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetCharacterLevel(CharacterLevel);
		}
	}
}

void AAstralPlayerState::StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	if (NewCount > 0)
	{
		FGameplayTagContainer AbilityTagsToCancel;
		AbilityTagsToCancel.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability")));

		FGameplayTagContainer AbilityTagsToIgnore;
		AbilityTagsToIgnore.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.NotCanceledByStun")));

		AbilitySystemComponent->CancelAbilities(&AbilityTagsToCancel, &AbilityTagsToIgnore);
	}
}