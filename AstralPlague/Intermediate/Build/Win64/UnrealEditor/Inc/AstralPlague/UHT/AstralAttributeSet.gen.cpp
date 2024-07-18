// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/Attributes/AstralAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralAttributeSet() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAttributeSet();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralAttributeSet
void UAstralAttributeSet::StaticRegisterNativesUAstralAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralAttributeSet);
UClass* Z_Construct_UClass_UAstralAttributeSet_NoRegister()
{
	return UAstralAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UAstralAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/AstralAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/AstralAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralAttributeSet_Statics::ClassParams = {
	&UAstralAttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralAttributeSet()
{
	if (!Z_Registration_Info_UClass_UAstralAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralAttributeSet.OuterSingleton, Z_Construct_UClass_UAstralAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralAttributeSet.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralAttributeSet>()
{
	return UAstralAttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralAttributeSet);
UAstralAttributeSet::~UAstralAttributeSet() {}
// End Class UAstralAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_AstralAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralAttributeSet, UAstralAttributeSet::StaticClass, TEXT("UAstralAttributeSet"), &Z_Registration_Info_UClass_UAstralAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralAttributeSet), 98585094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_AstralAttributeSet_h_4080884550(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_AstralAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_AstralAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
