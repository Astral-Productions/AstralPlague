﻿// Copyright Astral Productions 2024

#pragma once

#include "GameFramework/WorldSettings.h"
#include "AstralWorldSettings.generated.h"

class UAstralExperienceDefinition;

/**
 * The default world settings object, used primarily to set the default gameplay experience to use when playing on this map
 */
UCLASS()
class ASTRALPLAGUE_API AAstralWorldSettings : public AWorldSettings
{
	GENERATED_BODY()

public:

	AAstralWorldSettings(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITOR
	virtual void CheckForErrors() override;
#endif

public:
	// Returns the default experience to use when a server opens this map if it is not overridden by the user-facing experience
	FPrimaryAssetId GetDefaultGameplayExperience() const;

protected:
	// The default experience to use when a server opens this map if it is not overridden by the user-facing experience
	UPROPERTY(EditDefaultsOnly, Category=GameMode)
	TSoftClassPtr<UAstralExperienceDefinition> DefaultGameplayExperience;

public:

#if WITH_EDITORONLY_DATA
	// Is this level part of a front-end or other standalone experience?
	// When set, the net mode will be forced to Standalone when you hit Play in the editor
	UPROPERTY(EditDefaultsOnly, Category=PIE)
	bool ForceStandaloneNetMode = false;
#endif
};