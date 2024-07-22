// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AstralPlague.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTRALPLAGUE_AstralPlague_generated_h
#error "AstralPlague.generated.h already included, missing '#pragma once' in AstralPlague.h"
#endif
#define ASTRALPLAGUE_AstralPlague_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_AstralPlague_h


#define FOREACH_ENUM_EASTRALHITREACTDIRECTION(op) \
	op(EAstralHitReactDirection::None) \
	op(EAstralHitReactDirection::Left) \
	op(EAstralHitReactDirection::Front) \
	op(EAstralHitReactDirection::Right) \
	op(EAstralHitReactDirection::Back) 

enum class EAstralHitReactDirection : uint8;
template<> struct TIsUEnumClass<EAstralHitReactDirection> { enum { Value = true }; };
template<> ASTRALPLAGUE_API UEnum* StaticEnum<EAstralHitReactDirection>();

#define FOREACH_ENUM_EASTRALABILITYINPUTID(op) \
	op(EAstralAbilityInputID::None) \
	op(EAstralAbilityInputID::Confirm) \
	op(EAstralAbilityInputID::Cancel) \
	op(EAstralAbilityInputID::LightAttack) \
	op(EAstralAbilityInputID::HeavyAttack) \
	op(EAstralAbilityInputID::Ability1) \
	op(EAstralAbilityInputID::Ability2) \
	op(EAstralAbilityInputID::Ability3) \
	op(EAstralAbilityInputID::Ability4) \
	op(EAstralAbilityInputID::Sprint) \
	op(EAstralAbilityInputID::Jump) 

enum class EAstralAbilityInputID : uint8;
template<> struct TIsUEnumClass<EAstralAbilityInputID> { enum { Value = true }; };
template<> ASTRALPLAGUE_API UEnum* StaticEnum<EAstralAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
