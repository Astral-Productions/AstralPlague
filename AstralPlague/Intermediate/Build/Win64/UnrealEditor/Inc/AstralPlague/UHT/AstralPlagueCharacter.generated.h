// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AstralPlagueCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAstralPlagueCharacter;
class AAstralPlayerState;
class UAstralAbilitySystemComponent;
enum class EAstralAbilityInputID : uint8;
enum class EAstralHitReactDirection : uint8;
struct FGameplayTag;
#ifdef ASTRALPLAGUE_AstralPlagueCharacter_generated_h
#error "AstralPlagueCharacter.generated.h already included, missing '#pragma once' in AstralPlagueCharacter.h"
#endif
#define ASTRALPLAGUE_AstralPlagueCharacter_generated_h

#define FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_32_DELEGATE \
ASTRALPLAGUE_API void FCharacterBaseHitReactDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterBaseHitReactDelegate, EAstralHitReactDirection Direction);


#define FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_33_DELEGATE \
ASTRALPLAGUE_API void FCharacterDiedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterDiedDelegate, AAstralPlagueCharacter* Character);


#define FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics; \
	ASTRALPLAGUE_API static class UScriptStruct* StaticStruct();


template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<struct FAstralReplicatedAcceleration>();

#define FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSharedRepMovement_Statics; \
	ASTRALPLAGUE_API static class UScriptStruct* StaticStruct();


template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<struct FSharedRepMovement>();

#define FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDeathFinished); \
	DECLARE_FUNCTION(execOnDeathStarted); \
	DECLARE_FUNCTION(execFinishDying); \
	DECLARE_FUNCTION(execGetMoveSpeedBaseValue); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxSoulEnergy); \
	DECLARE_FUNCTION(execGetSoulEnergy); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execPlayHitReact); \
	DECLARE_FUNCTION(execGetHitReactDirection); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetAstralAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetAstralPlayerState);


#define FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_102_CALLBACK_WRAPPERS
#define FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAstralPlagueCharacter(); \
	friend struct Z_Construct_UClass_AAstralPlagueCharacter_Statics; \
public: \
	DECLARE_CLASS(AAstralPlagueCharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(AAstralPlagueCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AAstralPlagueCharacter*>(this); }


#define FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_102_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAstralPlagueCharacter(AAstralPlagueCharacter&&); \
	AAstralPlagueCharacter(const AAstralPlagueCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAstralPlagueCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAstralPlagueCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAstralPlagueCharacter) \
	NO_API virtual ~AAstralPlagueCharacter();


#define FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_99_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_102_CALLBACK_WRAPPERS \
	FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_102_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class AAstralPlagueCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
