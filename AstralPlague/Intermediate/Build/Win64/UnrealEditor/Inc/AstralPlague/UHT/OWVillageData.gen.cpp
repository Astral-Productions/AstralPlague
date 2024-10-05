// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/OpenWorld/Data/OWVillageData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWVillageData() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UOWExperienceData();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UOWVillageData();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UOWVillageData_NoRegister();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UOWVillageData
void UOWVillageData::StaticRegisterNativesUOWVillageData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWVillageData);
UClass* Z_Construct_UClass_UOWVillageData_NoRegister()
{
	return UOWVillageData::StaticClass();
}
struct Z_Construct_UClass_UOWVillageData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data specifically pertaining to the spawning of villages or towns.\n */" },
#endif
		{ "IncludePath", "OpenWorld/Data/OWVillageData.h" },
		{ "ModuleRelativePath", "OpenWorld/Data/OWVillageData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data specifically pertaining to the spawning of villages or towns." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWVillageData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOWVillageData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOWExperienceData,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWVillageData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWVillageData_Statics::ClassParams = {
	&UOWVillageData::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWVillageData_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWVillageData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWVillageData()
{
	if (!Z_Registration_Info_UClass_UOWVillageData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWVillageData.OuterSingleton, Z_Construct_UClass_UOWVillageData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWVillageData.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UOWVillageData>()
{
	return UOWVillageData::StaticClass();
}
UOWVillageData::UOWVillageData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWVillageData);
UOWVillageData::~UOWVillageData() {}
// End Class UOWVillageData

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWVillageData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWVillageData, UOWVillageData::StaticClass, TEXT("UOWVillageData"), &Z_Registration_Info_UClass_UOWVillageData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWVillageData), 1995261176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWVillageData_h_2161777221(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWVillageData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWVillageData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
