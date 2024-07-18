// Fill out your copyright notice in the Description page of Project Settings.


#include "AstralPlayerState.h"

#include "AstralPlague/AbilitySystem/AstralAbilitySet.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "..\AbilitySystem\Attributes\AstralAttributeSet.h"
#include "AstralPlague/AbilitySystem/Attributes/UProgressionAttributeSet.h"
#include "AstralPlague/UI/AstralHUDWidget.h"


AAstralPlayerState::AAstralPlayerState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<UAstralAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Full); //Unless we enable multiplayer full replication is the best bet

	CharacterAttributeSet = CreateDefaultSubobject<UCharacterAttributeSet>(TEXT("CharacterAttributeSet"));
	ProgressionAttributeSet = CreateDefaultSubobject<UProgressionAttributeSet>(TEXT("CharacterAttributeSet"));
	
	// Set PlayerState's NetUpdateFrequency to the same as the Character.
	// Default is very low for PlayerStates and introduces perceived lag in the ability system.
	// 100 is probably way too high for a shipping game, you can adjust to fit your needs.
	NetUpdateFrequency = 100.0f;

	// Cache tags
	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
	
}


UAbilitySystemComponent* AAstralPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

AAstralPlayerController* AAstralPlayerState::GetAstralPlayerController() const
{
	return Cast<AAstralPlayerController>(GetOwner());
}


UCharacterAttributeSet * AAstralPlayerState::GetAttributeSetBase() const
{
	return CharacterAttributeSet;
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
	return CharacterAttributeSet->GetHealth();
}

float AAstralPlayerState::GetMaxHealth() const
{
	return CharacterAttributeSet->GetMaxHealth();
}

float AAstralPlayerState::GetHealthRegenRate() const
{
	return CharacterAttributeSet->GetHealthRegenRate();
}

float AAstralPlayerState::GetSoulEnergy() const
{
	return CharacterAttributeSet->GetSoulEnergy();
}

float AAstralPlayerState::GetMaxSoulEnergy() const
{
	return CharacterAttributeSet->GetMaxSoulEnergy();
}

float AAstralPlayerState::GetStamina() const
{
	return CharacterAttributeSet->GetStamina();
}

float AAstralPlayerState::GetMaxStamina() const
{
	return CharacterAttributeSet->GetMaxStamina();
}

float AAstralPlayerState::GetStaminaRegenRate() const
{
	return CharacterAttributeSet->GetStaminaRegenRate();
}

float AAstralPlayerState::GetMoveSpeed() const
{
	return CharacterAttributeSet->GetMoveSpeed();
}

int32 AAstralPlayerState::GetCharacterLevel() const
{
	return ProgressionAttributeSet->GetCharacterLevel();
}

int32 AAstralPlayerState::GetCharacterXP() const
{
	return ProgressionAttributeSet->GetCharacterXP();
}


int32 AAstralPlayerState::GetGems() const
{
	return ProgressionAttributeSet->GetCharacterGems();
}

void AAstralPlayerState::BeginPlay()
{
	Super::BeginPlay();

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
	AAstralPlagueCharacter* Hero = Cast<AAstralPlagueCharacter>(GetPawn());
	if (Hero)
	{
		UGDFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
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
	AAstralPlagueCharacter* Hero = Cast<AAstralPlagueCharacter>(GetPawn());
	if (Hero)
	{
		UGDFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
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
	AAstralPlagueCharacter* Hero = Cast<AAstralPlagueCharacter>(GetPawn());
	if (Hero)
	{
		UGDFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		if (HeroFloatingStatusBar)
		{
			HeroFloatingStatusBar->SetManaPercentage(Mana / GetMaxMana());
		}
	}

	// Update the HUD
	// Handled in the UI itself using the AsyncTaskAttributeChanged node as an example how to do it in Blueprint
}

void AAstralPlayerState::MaxSoulEnergyChanged(const FOnAttributeChangeData & Data)
{
	float MaxMana = Data.NewValue;

	// Update floating status bar
	AAstralPlagueCharacter* Hero = Cast<AAstralPlagueCharacter>(GetPawn());
	if (Hero)
	{
		UGDFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		if (HeroFloatingStatusBar)
		{
			HeroFloatingStatusBar->SetManaPercentage(GetSoulEnergy() / MaxMana);
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