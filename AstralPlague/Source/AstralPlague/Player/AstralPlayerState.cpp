// Fill out your copyright notice in the Description page of Project Settings.


#include "AstralPlayerState.h"

#include "AstralPlague/AbilitySystem/AstralAbilitySet.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "AstralPlague/AbilitySystem/Attributes/DefaultAttributeSet.h"



AAstralPlayerState::AAstralPlayerState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<UAstralAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Full); //Unless we enable multiplayer full replication is the best bet

	AttributeSetBase = CreateDefaultSubobject<UDefaultAttributeSet>(TEXT("StatsSet"));

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


UDefaultAttributeSet * AAstralPlayerState::GetAttributeSetBase() const
{
	return AttributeSetBase;
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
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->ShowAbilityConfirmCancelText(ShowText);
		}
	}
}

float AAstralPlayerState::GetHealth() const
{
	return AttributeSetBase->GetHealth();
}

float AAstralPlayerState::GetMaxHealth() const
{
	return AttributeSetBase->GetMaxHealth();
}

float AAstralPlayerState::GetHealthRegenRate() const
{
	return AttributeSetBase->GetHealthRegenRate();
}

float AAstralPlayerState::GetSoulEnergy() const
{
	return AttributeSetBase->GetSoulEnergy();
}

float AAstralPlayerState::GetMaxSoulEnergy() const
{
	return AttributeSetBase->GetMaxSoulEnergy();
}

float AAstralPlayerState::GetStamina() const
{
	return AttributeSetBase->GetStamina();
}

float AAstralPlayerState::GetMaxStamina() const
{
	return AttributeSetBase->GetMaxStamina();
}

float AAstralPlayerState::GetStaminaRegenRate() const
{
	return AttributeSetBase->GetStaminaRegenRate();
}

float AAstralPlayerState::GetMoveSpeed() const
{
	return AttributeSetBase->GetMoveSpeed();
}

int32 AAstralPlayerState::GetCharacterLevel() const
{
	return AttributeSetBase->GetCharacterLevel();
}

int32 AAstralPlayerState::GetCharacterXP() const
{
	return AttributeSetBase->GetCharacterXP();
}


int32 AAstralPlayerState::GetGems() const
{
	return AttributeSetBase->GetCharacterGems();
}

void AAstralPlayerState::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		// Attribute change callbacks
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthAttribute()).AddUObject(this, &AAstralPlayerState::HealthChanged);
		MaxHealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxHealthAttribute()).AddUObject(this, &AAstralPlayerState::MaxHealthChanged);
		HealthRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthRegenRateAttribute()).AddUObject(this, &AAstralPlayerState::HealthRegenRateChanged);
		ManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetSoulEnergyAttribute()).AddUObject(this, &AAstralPlayerState::ManaChanged);
		MaxManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase-> GetMaxSoulEnergyAttribute()).AddUObject(this, &AAstralPlayerState::MaxManaChanged);		
		StaminaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetStaminaAttribute()).AddUObject(this, &AAstralPlayerState::StaminaChanged);
		MaxStaminaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxStaminaAttribute()).AddUObject(this, &AAstralPlayerState::MaxStaminaChanged);
		StaminaRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetStaminaRegenRateAttribute()).AddUObject(this, &AAstralPlayerState::StaminaRegenRateChanged);
		XPChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetCharacterXPAttribute()).AddUObject(this, &AAstralPlayerState::XPChanged);
		GoldChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetCharacterGemsAttribute()).AddUObject(this, &AAstralPlayerState::GoldChanged);
		CharacterLevelChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetCharacterLevelAttribute()).AddUObject(this, &AAstralPlayerState::CharacterLevelChanged);

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
		UGDHUDWidget* HUD = PC->GetHUD();
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
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetHealthRegenRate(HealthRegenRate);
		}
	}
}

void AAstralPlayerState::ManaChanged(const FOnAttributeChangeData & Data)
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

void AAstralPlayerState::MaxManaChanged(const FOnAttributeChangeData & Data)
{
	float MaxMana = Data.NewValue;

	// Update floating status bar
	AAstralPlagueCharacter* Hero = Cast<AAstralPlagueCharacter>(GetPawn());
	if (Hero)
	{
		UGDFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		if (HeroFloatingStatusBar)
		{
			HeroFloatingStatusBar->SetManaPercentage(GetMana() / MaxMana);
		}
	}

	// Update the HUD
	AAstralPlayerController* PC = Cast<AAstralPlayerController>(GetOwner());
	if (PC)
	{
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetMaxMana(MaxMana);
		}
	}
}

void AAstralPlayerState::ManaRegenRateChanged(const FOnAttributeChangeData & Data)
{
	float ManaRegenRate = Data.NewValue;

	// Update the HUD
	AAstralPlayerController* PC = Cast<AAstralPlayerController>(GetOwner());
	if (PC)
	{
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetManaRegenRate(ManaRegenRate);
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
		UGDHUDWidget* HUD = PC->GetHUD();
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
		UGDHUDWidget* HUD = PC->GetHUD();
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
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetExperience(XP);
		}
	}
}

void AAstralPlayerState::GoldChanged(const FOnAttributeChangeData & Data)
{
	float Gold = Data.NewValue;

	// Update the HUD
	AAstralPlayerController* PC = Cast<AAstralPlayerController>(GetOwner());
	if (PC)
	{
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetGold(Gold);
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
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetHeroLevel(CharacterLevel);
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