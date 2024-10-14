// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AsyncTaskAttributeChanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UAsyncTaskAttributeChanged;
struct FGameplayAttribute;
#ifdef ASTRALPLAGUE_AsyncTaskAttributeChanged_generated_h
#error "AsyncTaskAttributeChanged.generated.h already included, missing '#pragma once' in AsyncTaskAttributeChanged.h"
#endif
#define ASTRALPLAGUE_AsyncTaskAttributeChanged_generated_h

#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_10_DELEGATE \
ASTRALPLAGUE_API void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, FGameplayAttribute Attribute, float NewValue, float OldValue);


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForAttributesChange); \
	DECLARE_FUNCTION(execListenForAttributeChange);


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTaskAttributeChanged(); \
	friend struct Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics; \
public: \
	DECLARE_CLASS(UAsyncTaskAttributeChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTaskAttributeChanged)


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTaskAttributeChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncTaskAttributeChanged(UAsyncTaskAttributeChanged&&); \
	UAsyncTaskAttributeChanged(const UAsyncTaskAttributeChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskAttributeChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskAttributeChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTaskAttributeChanged) \
	NO_API virtual ~UAsyncTaskAttributeChanged();


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_16_PROLOG
#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_19_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAsyncTaskAttributeChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
