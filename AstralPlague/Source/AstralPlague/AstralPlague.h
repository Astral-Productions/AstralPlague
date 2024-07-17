// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EAstralHitReactDirection : uint8
{
	// 0
	None			UMETA(DisplayName = "None"),
	// 1
	Left 			UMETA(DisplayName = "Left"),
	// 2
	Front 			UMETA(DisplayName = "Front"),
	// 3
	Right			UMETA(DisplayName = "Right"),
	// 4
	Back			UMETA(DisplayName = "Back")
};

UENUM(BlueprintType)
enum class EAstralAbilityInputID : uint8
{
	// 0 None
	None			UMETA(DisplayName = "None"),
	// 1 Confirm
	Confirm			UMETA(DisplayName = "Confirm"),
	// 2 Cancel
	Cancel			UMETA(DisplayName = "Cancel"),
	// 3 LMB
	LightAttack		UMETA(DisplayName = "LightAttack"),
	// 4 RMB
	HeavyAttack		UMETA(DisplayName = "HeavyAttack"),
	// 5 Q
	Ability1		UMETA(DisplayName = "Ability1"),
	// 6 E
	Ability2		UMETA(DisplayName = "Ability2"),
	// 7 R
	Ability3		UMETA(DisplayName = "Ability3"),
	// 8 Sprint
	Ability4		UMETA(DisplayName = "Ability4"),
	// 9 Sprint
	Sprint			UMETA(DisplayName = "Sprint"),
	// 10 Jump
	Jump			UMETA(DisplayName = "Jump")
};