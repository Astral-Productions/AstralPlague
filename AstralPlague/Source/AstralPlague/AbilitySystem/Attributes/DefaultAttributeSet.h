// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "DefaultAttributeSet.generated.h"

class UAstralAbilitySystemComponent;

/**
 * This macro defines a set of helper functions for accessing and initializing attributes.
 *
 * The following example of the macro:
 *		ATTRIBUTE_ACCESSORS(ULyraHealthSet, Health)
 * will create the following functions:
 *		static FGameplayAttribute GetHealthAttribute();
 *		float GetHealth() const;
 *		void SetHealth(float NewVal);
 *		void InitHealth(float NewVal);
 */
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
UCLASS()
class ASTRALPLAGUE_API UDefaultAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UDefaultAttributeSet();

	UAstralAbilitySystemComponent* GetAstralAbilitySystemComponent() const;

	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, Health);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, MaxHealth);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, Healing);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, HealthRegenRate);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, SoulEnergy);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, MaxSoulEnergy);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, Stamina);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, MaxStamina);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, StaminaRegenRate);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, CharacterLevel);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, CharacterXP);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, CharacterGems);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, Damage);
	ATTRIBUTE_ACCESSORS(UDefaultAttributeSet, MoveSpeed);
	


private:
	// The current health attribute.  The health will be capped by the max health attribute.  Health is hidden from modifiers so only executions can modify it.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (HideFromModifiers, AllowPrivateAccess = true))
	FGameplayAttributeData Health;

	// The current max health attribute.  Max health is an attribute since gameplay effects can modify it.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxHealth;

	// The health regeneration rate. We can change this as needed if buffs are applied.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HealthRegenRate;
	
	// Soul Energy acts as mana for ability casts or special activations. It has a sister attribute called MaxSoulEnergy that can be referenced for the max energy/mana we can contain 
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SoulEnergy;
	
	// Soul Energy acts as mana for ability casts or special activations. This is the max energy/mana the player can have. 
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxSoulEnergy;
	
	// Stamina is an internal value that isn't shown to the player. Repeated actions of the same kind will slowly drain the player's stamina and cause them to get exhausted.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Stamina;

	// Stamina is an internal value that isn't shown to the player. Repeated actions of the same kind will slowly drain the player's stamina and cause them to get exhausted.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxStamina;

	//How quickly Stamina regenerates. 
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData StaminaRegenRate;

	//The player's front facing level used for ability upgrades.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CharacterLevel;

	//The player's progress towards the next level (i.e. 100/250 xp)
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CharacterXP;

	//Gems are the game's currency acting as a way to purchase items or other things from shopkeepers.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CharacterGems;

	//Gems are the game's currency acting as a way to purchase items or other things from shopkeepers.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
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
