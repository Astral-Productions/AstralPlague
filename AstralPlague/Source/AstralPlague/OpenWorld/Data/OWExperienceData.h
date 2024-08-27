// Copyright Astral Productions 2024

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "OWExperienceData.generated.h"

/**
 * Base class used for Open World experiences.
 * This class should really not be used but instead subclassed for specific use cases, though it does have the essential information for most experiences. 
 */
UCLASS()
class ASTRALPLAGUE_API UOWExperienceData : public UPrimaryDataAsset
{
	GENERATED_BODY()


public:
	//The experience's default state to be used for initial spawning or modifications.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Astral|Open World Experience|State")
	FGameplayTagContainer DefaultExperienceState;
	
	//The experience's health is a global value that is influenced by the NPCs or locations tied to the experience. Losing health will result in slower production speeds or complete destruction of the experience. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Astral|Open World Experience|Health")
	float DefaultExperienceHeath = 100;

	//The percent at which the experience begins to degrade in production speed. Only applicable to some experience types. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Astral|Open World Experience|Health")
	float ExperienceDegradationThreshold = .5f;

	//The amount production drops after the degradation threshold is met. Usually a percent <.99 of the production rate. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Astral|Open World Experience|Health")
	float ExperienceDegradationAmount = 0.85f;

	//The percent at which the experience totally fails and results in a death/destroyed state. This would result in additional behaviors designated by the experience. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Astral|Open World Experience|Health")
	float ExperienceDestructionThreshold = 0.25f;

	//The rate at which materials are generated by this experience, only applicable to some. Default rate is 100% unless changed.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Astral|Open World Experience|Production")
	float ExperienceProductionRate = 100;

	//Returns the health value at which the experience will enter the degraded state.
    UFUNCTION(BlueprintPure)
	float GetDestructionThreshold() const {return DefaultExperienceHeath*ExperienceDegradationThreshold; };

	//Returns the health value at which the experience will enter the destroyed state.
	UFUNCTION(BlueprintPure)
	float GetDegradationThreshold() const {return DefaultExperienceHeath*ExperienceDestructionThreshold; };

	//Returns the expected drop the production amount once the experience enters the degraded state.
	//Please note this value will *NOT* account for additional modifiers it is only the default Rate*DegradationAmount
	UFUNCTION(BlueprintPure)
	float GetCurrentProductionRate() const {return ExperienceProductionRate*ExperienceDegradationAmount; };
};
