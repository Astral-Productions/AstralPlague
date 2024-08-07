// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AstralStatsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAstralAbilitySystemComponent;
class UAstralStatsComponent;
enum class EAstralDeathState : uint8;
#ifdef ASTRALPLAGUE_AstralStatsComponent_generated_h
#error "AstralStatsComponent.generated.h already included, missing '#pragma once' in AstralStatsComponent.h"
#endif
#define ASTRALPLAGUE_AstralStatsComponent_generated_h

#define FID_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_11_DELEGATE \
ASTRALPLAGUE_API void FAstralHealth_DeathEvent_DelegateWrapper(const FMulticastScriptDelegate& AstralHealth_DeathEvent, AActor* OwningActor);


#define FID_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_12_DELEGATE \
ASTRALPLAGUE_API void FAstralHealth_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& AstralHealth_AttributeChanged, UAstralStatsComponent* HealthComponent, float OldValue, float NewValue, AActor* Instigator);


#define FID_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_DeathState); \
	DECLARE_FUNCTION(execIsDeadOrDying); \
	DECLARE_FUNCTION(execGetDeathState); \
	DECLARE_FUNCTION(execGetHealthNormalized); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execFindHealthComponent);


#define FID_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralStatsComponent(); \
	friend struct Z_Construct_UClass_UAstralStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UAstralStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralStatsComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DeathState=NETFIELD_REP_START, \
		NETFIELD_REP_END=DeathState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralStatsComponent(UAstralStatsComponent&&); \
	UAstralStatsComponent(const UAstralStatsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralStatsComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralStatsComponent) \
	NO_API virtual ~UAstralStatsComponent();


#define FID_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_32_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_35_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralStatsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h


#define FOREACH_ENUM_EASTRALDEATHSTATE(op) \
	op(EAstralDeathState::NotDead) \
	op(EAstralDeathState::DeathStarted) \
	op(EAstralDeathState::DeathFinished) 

enum class EAstralDeathState : uint8;
template<> struct TIsUEnumClass<EAstralDeathState> { enum { Value = true }; };
template<> ASTRALPLAGUE_API UEnum* StaticEnum<EAstralDeathState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
