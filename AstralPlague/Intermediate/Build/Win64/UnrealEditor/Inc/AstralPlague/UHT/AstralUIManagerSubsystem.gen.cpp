// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/UI/SubSystem/AstralUIManagerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralUIManagerSubsystem() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralUIManagerSubsystem();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralUIManagerSubsystem_NoRegister();
COMMONGAME_API UClass* Z_Construct_UClass_UGameUIManagerSubsystem();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralUIManagerSubsystem
void UAstralUIManagerSubsystem::StaticRegisterNativesUAstralUIManagerSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralUIManagerSubsystem);
UClass* Z_Construct_UClass_UAstralUIManagerSubsystem_NoRegister()
{
	return UAstralUIManagerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UAstralUIManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/SubSystem/AstralUIManagerSubsystem.h" },
		{ "ModuleRelativePath", "UI/SubSystem/AstralUIManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralUIManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralUIManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUIManagerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralUIManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralUIManagerSubsystem_Statics::ClassParams = {
	&UAstralUIManagerSubsystem::StaticClass,
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
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralUIManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralUIManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralUIManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UAstralUIManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralUIManagerSubsystem.OuterSingleton, Z_Construct_UClass_UAstralUIManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralUIManagerSubsystem.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralUIManagerSubsystem>()
{
	return UAstralUIManagerSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralUIManagerSubsystem);
UAstralUIManagerSubsystem::~UAstralUIManagerSubsystem() {}
// End Class UAstralUIManagerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_UI_SubSystem_AstralUIManagerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralUIManagerSubsystem, UAstralUIManagerSubsystem::StaticClass, TEXT("UAstralUIManagerSubsystem"), &Z_Registration_Info_UClass_UAstralUIManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralUIManagerSubsystem), 2550179988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_UI_SubSystem_AstralUIManagerSubsystem_h_3356360135(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_UI_SubSystem_AstralUIManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_UI_SubSystem_AstralUIManagerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
