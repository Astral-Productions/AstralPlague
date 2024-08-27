// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenWorld/Data/OWExperienceData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTRALPLAGUE_OWExperienceData_generated_h
#error "OWExperienceData.generated.h already included, missing '#pragma once' in OWExperienceData.h"
#endif
#define ASTRALPLAGUE_OWExperienceData_generated_h

#define FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentProductionRate); \
	DECLARE_FUNCTION(execGetDegradationThreshold); \
	DECLARE_FUNCTION(execGetDestructionThreshold);


#define FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWExperienceData(); \
	friend struct Z_Construct_UClass_UOWExperienceData_Statics; \
public: \
	DECLARE_CLASS(UOWExperienceData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UOWExperienceData)


#define FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWExperienceData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWExperienceData(UOWExperienceData&&); \
	UOWExperienceData(const UOWExperienceData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWExperienceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWExperienceData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWExperienceData) \
	NO_API virtual ~UOWExperienceData();


#define FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h_14_PROLOG
#define FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h_17_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UOWExperienceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
