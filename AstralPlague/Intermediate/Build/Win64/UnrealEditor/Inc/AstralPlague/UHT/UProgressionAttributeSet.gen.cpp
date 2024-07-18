// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/Attributes/UProgressionAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUProgressionAttributeSet() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAttributeSet();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UProgressionAttributeSet();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UProgressionAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UProgressionAttributeSet
void UProgressionAttributeSet::StaticRegisterNativesUProgressionAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProgressionAttributeSet);
UClass* Z_Construct_UClass_UProgressionAttributeSet_NoRegister()
{
	return UProgressionAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UProgressionAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/UProgressionAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/UProgressionAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The player's front facing level used for ability upgrades.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/UProgressionAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player's front facing level used for ability upgrades." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterXP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The player's progress towards the next level (i.e. 100/250 xp)\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/UProgressionAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player's progress towards the next level (i.e. 100/250 xp)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterGems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gems are the game's currency acting as a way to purchase items or other things from shopkeepers.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/UProgressionAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gems are the game's currency acting as a way to purchase items or other things from shopkeepers." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterXP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterGems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgressionAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressionAttributeSet_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProgressionAttributeSet, CharacterLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterLevel_MetaData), NewProp_CharacterLevel_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressionAttributeSet_Statics::NewProp_CharacterXP = { "CharacterXP", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProgressionAttributeSet, CharacterXP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterXP_MetaData), NewProp_CharacterXP_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressionAttributeSet_Statics::NewProp_CharacterGems = { "CharacterGems", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProgressionAttributeSet, CharacterGems), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterGems_MetaData), NewProp_CharacterGems_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProgressionAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressionAttributeSet_Statics::NewProp_CharacterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressionAttributeSet_Statics::NewProp_CharacterXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressionAttributeSet_Statics::NewProp_CharacterGems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressionAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProgressionAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAstralAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressionAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProgressionAttributeSet_Statics::ClassParams = {
	&UProgressionAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProgressionAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProgressionAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressionAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UProgressionAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProgressionAttributeSet()
{
	if (!Z_Registration_Info_UClass_UProgressionAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProgressionAttributeSet.OuterSingleton, Z_Construct_UClass_UProgressionAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProgressionAttributeSet.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UProgressionAttributeSet>()
{
	return UProgressionAttributeSet::StaticClass();
}
UProgressionAttributeSet::UProgressionAttributeSet() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressionAttributeSet);
UProgressionAttributeSet::~UProgressionAttributeSet() {}
// End Class UProgressionAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_UProgressionAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProgressionAttributeSet, UProgressionAttributeSet::StaticClass, TEXT("UProgressionAttributeSet"), &Z_Registration_Info_UClass_UProgressionAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProgressionAttributeSet), 2335178445U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_UProgressionAttributeSet_h_315400958(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_UProgressionAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_UProgressionAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
