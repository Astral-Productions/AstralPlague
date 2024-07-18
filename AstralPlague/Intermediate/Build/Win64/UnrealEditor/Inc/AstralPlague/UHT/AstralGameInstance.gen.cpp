// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/System/AstralGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralGameInstance() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameInstance();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameInstance_NoRegister();
COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralGameInstance
void UAstralGameInstance::StaticRegisterNativesUAstralGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralGameInstance);
UClass* Z_Construct_UClass_UAstralGameInstance_NoRegister()
{
	return UAstralGameInstance::StaticClass();
}
struct Z_Construct_UClass_UAstralGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "System/AstralGameInstance.h" },
		{ "ModuleRelativePath", "System/AstralGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralGameInstance_Statics::ClassParams = {
	&UAstralGameInstance::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralGameInstance()
{
	if (!Z_Registration_Info_UClass_UAstralGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralGameInstance.OuterSingleton, Z_Construct_UClass_UAstralGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralGameInstance.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralGameInstance>()
{
	return UAstralGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralGameInstance);
UAstralGameInstance::~UAstralGameInstance() {}
// End Class UAstralGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_System_AstralGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralGameInstance, UAstralGameInstance::StaticClass, TEXT("UAstralGameInstance"), &Z_Registration_Info_UClass_UAstralGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralGameInstance), 3547762008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_System_AstralGameInstance_h_2124389090(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_System_AstralGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_System_AstralGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
