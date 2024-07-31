// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AstralCharacterComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAstralAbilitySystemComponent;
class UAstralCharacterComponent;
#ifdef ASTRALPLAGUE_AstralCharacterComponent_generated_h
#error "AstralCharacterComponent.generated.h already included, missing '#pragma once' in AstralCharacterComponent.h"
#endif
#define ASTRALPLAGUE_AstralCharacterComponent_generated_h

#define FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAstralAbilitySystemComponent); \
	DECLARE_FUNCTION(execFindCharacterComponent);


#define FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralCharacterComponent(); \
	friend struct Z_Construct_UClass_UAstralCharacterComponent_Statics; \
public: \
	DECLARE_CLASS(UAstralCharacterComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralCharacterComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAstralCharacterComponent*>(this); }


#define FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralCharacterComponent(UAstralCharacterComponent&&); \
	UAstralCharacterComponent(const UAstralCharacterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralCharacterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralCharacterComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralCharacterComponent) \
	NO_API virtual ~UAstralCharacterComponent();


#define FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h_29_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralCharacterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
