// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/AstralCameraAssistInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTRALPLAGUE_AstralCameraAssistInterface_generated_h
#error "AstralCameraAssistInterface.generated.h already included, missing '#pragma once' in AstralCameraAssistInterface.h"
#endif
#define ASTRALPLAGUE_AstralCameraAssistInterface_generated_h

#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAstralCameraAssistInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralCameraAssistInterface(UAstralCameraAssistInterface&&); \
	UAstralCameraAssistInterface(const UAstralCameraAssistInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralCameraAssistInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralCameraAssistInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralCameraAssistInterface) \
	NO_API virtual ~UAstralCameraAssistInterface();


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAstralCameraAssistInterface(); \
	friend struct Z_Construct_UClass_UAstralCameraAssistInterface_Statics; \
public: \
	DECLARE_CLASS(UAstralCameraAssistInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralCameraAssistInterface)


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAstralCameraAssistInterface() {} \
public: \
	typedef UAstralCameraAssistInterface UClassType; \
	typedef IAstralCameraAssistInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_11_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralCameraAssistInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
