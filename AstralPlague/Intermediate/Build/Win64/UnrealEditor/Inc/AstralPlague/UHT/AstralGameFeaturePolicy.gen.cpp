// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/GameFeatures/AstralGameFeaturePolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralGameFeaturePolicy() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameFeaturePolicy();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameFeaturePolicy_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEFEATURES_API UClass* Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralGameFeaturePolicy
void UAstralGameFeaturePolicy::StaticRegisterNativesUAstralGameFeaturePolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralGameFeaturePolicy);
UClass* Z_Construct_UClass_UAstralGameFeaturePolicy_NoRegister()
{
	return UAstralGameFeaturePolicy::StaticClass();
}
struct Z_Construct_UClass_UAstralGameFeaturePolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manager to keep track of the state machines that bring a game feature plugin into memory and active\n * This class discovers plugins either that are built-in and distributed with the game or are reported externally (i.e. by a web service or other endpoint)\n */" },
#endif
		{ "IncludePath", "GameFeatures/AstralGameFeaturePolicy.h" },
		{ "ModuleRelativePath", "GameFeatures/AstralGameFeaturePolicy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager to keep track of the state machines that bring a game feature plugin into memory and active\nThis class discovers plugins either that are built-in and distributed with the game or are reported externally (i.e. by a web service or other endpoint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observers_MetaData[] = {
		{ "ModuleRelativePath", "GameFeatures/AstralGameFeaturePolicy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Observers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Observers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralGameFeaturePolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::NewProp_Observers_Inner = { "Observers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::NewProp_Observers = { "Observers", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralGameFeaturePolicy, Observers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observers_MetaData), NewProp_Observers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::NewProp_Observers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::NewProp_Observers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::ClassParams = {
	&UAstralGameFeaturePolicy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralGameFeaturePolicy()
{
	if (!Z_Registration_Info_UClass_UAstralGameFeaturePolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralGameFeaturePolicy.OuterSingleton, Z_Construct_UClass_UAstralGameFeaturePolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralGameFeaturePolicy.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralGameFeaturePolicy>()
{
	return UAstralGameFeaturePolicy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralGameFeaturePolicy);
UAstralGameFeaturePolicy::~UAstralGameFeaturePolicy() {}
// End Class UAstralGameFeaturePolicy

// Begin Class UAstralGameFeature_AddGameplayCuePaths
void UAstralGameFeature_AddGameplayCuePaths::StaticRegisterNativesUAstralGameFeature_AddGameplayCuePaths()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralGameFeature_AddGameplayCuePaths);
UClass* Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths_NoRegister()
{
	return UAstralGameFeature_AddGameplayCuePaths::StaticClass();
}
struct Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// checked\n" },
#endif
		{ "IncludePath", "GameFeatures/AstralGameFeaturePolicy.h" },
		{ "ModuleRelativePath", "GameFeatures/AstralGameFeaturePolicy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "checked" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralGameFeature_AddGameplayCuePaths>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister, (int32)VTABLE_OFFSET(UAstralGameFeature_AddGameplayCuePaths, IGameFeatureStateChangeObserver), false },  // 487324916
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths_Statics::ClassParams = {
	&UAstralGameFeature_AddGameplayCuePaths::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths()
{
	if (!Z_Registration_Info_UClass_UAstralGameFeature_AddGameplayCuePaths.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralGameFeature_AddGameplayCuePaths.OuterSingleton, Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralGameFeature_AddGameplayCuePaths.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralGameFeature_AddGameplayCuePaths>()
{
	return UAstralGameFeature_AddGameplayCuePaths::StaticClass();
}
UAstralGameFeature_AddGameplayCuePaths::UAstralGameFeature_AddGameplayCuePaths(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralGameFeature_AddGameplayCuePaths);
UAstralGameFeature_AddGameplayCuePaths::~UAstralGameFeature_AddGameplayCuePaths() {}
// End Class UAstralGameFeature_AddGameplayCuePaths

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_GameFeatures_AstralGameFeaturePolicy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralGameFeaturePolicy, UAstralGameFeaturePolicy::StaticClass, TEXT("UAstralGameFeaturePolicy"), &Z_Registration_Info_UClass_UAstralGameFeaturePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralGameFeaturePolicy), 3807281686U) },
		{ Z_Construct_UClass_UAstralGameFeature_AddGameplayCuePaths, UAstralGameFeature_AddGameplayCuePaths::StaticClass, TEXT("UAstralGameFeature_AddGameplayCuePaths"), &Z_Registration_Info_UClass_UAstralGameFeature_AddGameplayCuePaths, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralGameFeature_AddGameplayCuePaths), 2193379464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_GameFeatures_AstralGameFeaturePolicy_h_531646597(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_GameFeatures_AstralGameFeaturePolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_GameFeatures_AstralGameFeaturePolicy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
