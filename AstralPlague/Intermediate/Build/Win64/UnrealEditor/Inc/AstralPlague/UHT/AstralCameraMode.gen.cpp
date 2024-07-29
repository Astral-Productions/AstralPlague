// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Camera/AstralCameraMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralCameraMode() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCameraMode();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCameraMode_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraMode();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralCameraMode
void UAstralCameraMode::StaticRegisterNativesUAstralCameraMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralCameraMode);
UClass* Z_Construct_UClass_UAstralCameraMode_NoRegister()
{
	return UAstralCameraMode::StaticClass();
}
struct Z_Construct_UClass_UAstralCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Camera/AstralCameraMode.h" },
		{ "ModuleRelativePath", "Camera/AstralCameraMode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralCameraMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralCameraMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraMode,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCameraMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralCameraMode_Statics::ClassParams = {
	&UAstralCameraMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCameraMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralCameraMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralCameraMode()
{
	if (!Z_Registration_Info_UClass_UAstralCameraMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralCameraMode.OuterSingleton, Z_Construct_UClass_UAstralCameraMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralCameraMode.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralCameraMode>()
{
	return UAstralCameraMode::StaticClass();
}
UAstralCameraMode::UAstralCameraMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralCameraMode);
UAstralCameraMode::~UAstralCameraMode() {}
// End Class UAstralCameraMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralCameraMode, UAstralCameraMode::StaticClass, TEXT("UAstralCameraMode"), &Z_Registration_Info_UClass_UAstralCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralCameraMode), 3437844311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_844970507(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
