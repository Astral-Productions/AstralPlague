// Copyright Astral Productions 2024

#pragma once

#include "CoreMinimal.h"
#include "AstralAttributeSet.h"
#include "ProgressionAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class ASTRALPLAGUE_API UProgressionAttributeSet : public UAstralAttributeSet
{
	GENERATED_BODY()

public:
	ATTRIBUTE_ACCESSORS(UProgressionAttributeSet, CharacterLevel);
	ATTRIBUTE_ACCESSORS(UProgressionAttributeSet, CharacterXP);
	ATTRIBUTE_ACCESSORS(UProgressionAttributeSet, CharacterGems);

	
	//The player's front facing level used for ability upgrades.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CharacterLevel;

	//The player's progress towards the next level (i.e. 100/250 xp)
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CharacterXP;

	//Gems are the game's currency acting as a way to purchase items or other things from shopkeepers.
	UPROPERTY(BlueprintReadOnly, Category = "Astral|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CharacterGems;

};
