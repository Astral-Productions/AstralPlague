// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Camera/AstralCameraAssistInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralCameraAssistInterface() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCameraAssistInterface();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCameraAssistInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Interface UAstralCameraAssistInterface
void UAstralCameraAssistInterface::StaticRegisterNativesUAstralCameraAssistInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralCameraAssistInterface);
UClass* Z_Construct_UClass_UAstralCameraAssistInterface_NoRegister()
{
	return UAstralCameraAssistInterface::StaticClass();
}
struct Z_Construct_UClass_UAstralCameraAssistInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Camera/AstralCameraAssistInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAstralCameraAssistInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralCameraAssistInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCameraAssistInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralCameraAssistInterface_Statics::ClassParams = {
	&UAstralCameraAssistInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCameraAssistInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralCameraAssistInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralCameraAssistInterface()
{
	if (!Z_Registration_Info_UClass_UAstralCameraAssistInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralCameraAssistInterface.OuterSingleton, Z_Construct_UClass_UAstralCameraAssistInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralCameraAssistInterface.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralCameraAssistInterface>()
{
	return UAstralCameraAssistInterface::StaticClass();
}
UAstralCameraAssistInterface::UAstralCameraAssistInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralCameraAssistInterface);
UAstralCameraAssistInterface::~UAstralCameraAssistInterface() {}
// End Interface UAstralCameraAssistInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralCameraAssistInterface, UAstralCameraAssistInterface::StaticClass, TEXT("UAstralCameraAssistInterface"), &Z_Registration_Info_UClass_UAstralCameraAssistInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralCameraAssistInterface), 553574371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_1502262859(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraAssistInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
