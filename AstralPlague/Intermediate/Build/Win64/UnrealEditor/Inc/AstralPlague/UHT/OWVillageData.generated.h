// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenWorld/Data/OWVillageData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTRALPLAGUE_OWVillageData_generated_h
#error "OWVillageData.generated.h already included, missing '#pragma once' in OWVillageData.h"
#endif
#define ASTRALPLAGUE_OWVillageData_generated_h

#define FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWVillageData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWVillageData(); \
	friend struct Z_Construct_UClass_UOWVillageData_Statics; \
public: \
	DECLARE_CLASS(UOWVillageData, UOWExperienceData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UOWVillageData)


#define FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWVillageData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWVillageData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWVillageData(UOWVillageData&&); \
	UOWVillageData(const UOWVillageData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWVillageData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWVillageData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWVillageData) \
	NO_API virtual ~UOWVillageData();


#define FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWVillageData_h_12_PROLOG
#define FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWVillageData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWVillageData_h_15_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWVillageData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UOWVillageData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWVillageData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
