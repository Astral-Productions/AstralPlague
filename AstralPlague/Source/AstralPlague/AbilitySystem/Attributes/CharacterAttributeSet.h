// Copyright Astral Productions 2024

#pragma once

#include "CoreMinimal.h"
#include "AstralAttributeSet.h"
#include "CharacterAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class ASTRALPLAGUE_API UCharacterAttributeSet : public UAstralAttributeSet
{
	GENERATED_BODY()

public:
	
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Health);
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, MaxHealth);
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Healing);
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, HealthRegenRate);
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, SoulEnergy);
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, MaxSoulEnergy);
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Stamina);
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, MaxStamina);
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, StaminaRegenRate);
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Damage);
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, MoveSpeed);

	// Delegate when health changes due to damage/healing, some information may be missing on the client
	mutable FAstralAttributeEvent OnHealthChanged;

	// Delegate when max health changes
	mutable FAstralAttributeEvent OnMaxHealthChanged;

	// Delegate to broadcast when the health attribute reaches zero
	mutable FAstralAttributeEvent OnOutOfHealth;

	
	// The current health attribute.  The health will be capped by the max health attribute.  Health is hidden from modifiers so only executions can modify it.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Attribute|Health", Meta = (HideFromModifiers, AllowPrivateAccess = true))
	FGameplayAttributeData Health;

	// The current max health attribute.  Max health is an attribute since gameplay effects can modify it.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Attribute|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxHealth;

	// The health regeneration rate. We can change this as needed if buffs are applied.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Attribute|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HealthRegenRate;
	
	// Soul Energy acts as mana for ability casts or special activations. It has a sister attribute called MaxSoulEnergy that can be referenced for the max energy/mana we can contain 
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Attribute|Soul Energy", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SoulEnergy;
	
	// Soul Energy acts as mana for ability casts or special activations. This is the max energy/mana the player can have. 
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Attribute|Soul Energy", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxSoulEnergy;
	
	// Stamina is an internal value that isn't shown to the player. Repeated actions of the same kind will slowly drain the player's stamina and cause them to get exhausted.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Attribute|Stamina", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Stamina;

	// Stamina is an internal value that isn't shown to the player. Repeated actions of the same kind will slowly drain the player's stamina and cause them to get exhausted.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Attribute|Stamina", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxStamina;

	//How quickly Stamina regenerates. 
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Attribute|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData StaminaRegenRate;
	
	//Gems are the game's currency acting as a way to purchase items or other things from shopkeepers.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Attribute|Speed", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MoveSpeed;


	// Used to track when the health reaches 0.
	bool bOutOfHealth;

	// Store the health before any changes 
	float MaxHealthBeforeAttributeChange;
	float HealthBeforeAttributeChange;
	
	// -------------------------------------------------------------------
	//	Meta Attribute (please keep attributes that aren't 'stateful' below 
	// -------------------------------------------------------------------

	// Incoming healing. This is mapped directly to +Health
	UPROPERTY(BlueprintReadOnly, Category="Astral|Health", Meta=(AllowPrivateAccess=true))
	FGameplayAttributeData Healing;

	// Incoming damage. This is mapped directly to -Health
	UPROPERTY(BlueprintReadOnly, Category="Astral|Health", Meta=(HideFromModifiers, AllowPrivateAccess=true))
	FGameplayAttributeData Damage;
};
