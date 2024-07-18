// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Camera/AstralPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPlayerCameraManager() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerCameraManager();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerCameraManager_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralUICameraManagerComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class AAstralPlayerCameraManager
void AAstralPlayerCameraManager::StaticRegisterNativesAAstralPlayerCameraManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstralPlayerCameraManager);
UClass* Z_Construct_UClass_AAstralPlayerCameraManager_NoRegister()
{
	return AAstralPlayerCameraManager::StaticClass();
}
struct Z_Construct_UClass_AAstralPlayerCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AAstralPlayerCameraManager\n *\n *\x09The base player camera manager class used by this project.\n */" },
#endif
		{ "IncludePath", "Camera/AstralPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Camera/AstralPlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAstralPlayerCameraManager\n\n    The base player camera manager class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UICamera_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The UI Camera Component, controls the camera when UI is doing something important that gameplay doesn't get priority over. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/AstralPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UI Camera Component, controls the camera when UI is doing something important that gameplay doesn't get priority over." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UICamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstralPlayerCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlayerCameraManager_Statics::NewProp_UICamera = { "UICamera", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerCameraManager, UICamera), Z_Construct_UClass_UAstralUICameraManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UICamera_MetaData), NewProp_UICamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAstralPlayerCameraManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerCameraManager_Statics::NewProp_UICamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerCameraManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAstralPlayerCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstralPlayerCameraManager_Statics::ClassParams = {
	&AAstralPlayerCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAstralPlayerCameraManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerCameraManager_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstralPlayerCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstralPlayerCameraManager()
{
	if (!Z_Registration_Info_UClass_AAstralPlayerCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstralPlayerCameraManager.OuterSingleton, Z_Construct_UClass_AAstralPlayerCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstralPlayerCameraManager.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<AAstralPlayerCameraManager>()
{
	return AAstralPlayerCameraManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstralPlayerCameraManager);
AAstralPlayerCameraManager::~AAstralPlayerCameraManager() {}
// End Class AAstralPlayerCameraManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Camera_AstralPlayerCameraManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstralPlayerCameraManager, AAstralPlayerCameraManager::StaticClass, TEXT("AAstralPlayerCameraManager"), &Z_Registration_Info_UClass_AAstralPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstralPlayerCameraManager), 1052095226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Camera_AstralPlayerCameraManager_h_1709878403(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Camera_AstralPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Camera_AstralPlayerCameraManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
