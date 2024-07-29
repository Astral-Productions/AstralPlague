// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/AstralCameraMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTRALPLAGUE_AstralCameraMode_generated_h
#error "AstralCameraMode.generated.h already included, missing '#pragma once' in AstralCameraMode.h"
#endif
#define ASTRALPLAGUE_AstralCameraMode_generated_h

#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralCameraMode(); \
	friend struct Z_Construct_UClass_UAstralCameraMode_Statics; \
public: \
	DECLARE_CLASS(UAstralCameraMode, UCameraMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralCameraMode)


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAstralCameraMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralCameraMode(UAstralCameraMode&&); \
	UAstralCameraMode(const UAstralCameraMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralCameraMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralCameraMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralCameraMode) \
	NO_API virtual ~UAstralCameraMode();


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_13_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralCameraMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
