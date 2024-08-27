// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/Attributes/CharacterAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAttributeSet() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAttributeSet();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UCharacterAttributeSet();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UCharacterAttributeSet
void UCharacterAttributeSet::StaticRegisterNativesUCharacterAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAttributeSet);
UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister()
{
	return UCharacterAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UCharacterAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Attribute|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current health attribute.  The health will be capped by the max health attribute.  Health is hidden from modifiers so only executions can modify it.\n" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current health attribute.  The health will be capped by the max health attribute.  Health is hidden from modifiers so only executions can modify it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Attribute|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current max health attribute.  Max health is an attribute since gameplay effects can modify it.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current max health attribute.  Max health is an attribute since gameplay effects can modify it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Attribute|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The health regeneration rate. We can change this as needed if buffs are applied.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The health regeneration rate. We can change this as needed if buffs are applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoulEnergy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Attribute|Soul Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Soul Energy acts as mana for ability casts or special activations. It has a sister attribute called MaxSoulEnergy that can be referenced for the max energy/mana we can contain \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soul Energy acts as mana for ability casts or special activations. It has a sister attribute called MaxSoulEnergy that can be referenced for the max energy/mana we can contain" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSoulEnergy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Attribute|Soul Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Soul Energy acts as mana for ability casts or special activations. This is the max energy/mana the player can have. \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soul Energy acts as mana for ability casts or special activations. This is the max energy/mana the player can have." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Attribute|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stamina is an internal value that isn't shown to the player. Repeated actions of the same kind will slowly drain the player's stamina and cause them to get exhausted.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stamina is an internal value that isn't shown to the player. Repeated actions of the same kind will slowly drain the player's stamina and cause them to get exhausted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Attribute|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stamina is an internal value that isn't shown to the player. Repeated actions of the same kind will slowly drain the player's stamina and cause them to get exhausted.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stamina is an internal value that isn't shown to the player. Repeated actions of the same kind will slowly drain the player's stamina and cause them to get exhausted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Attribute|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//How quickly Stamina regenerates. \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How quickly Stamina regenerates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Attribute|Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gems are the game's currency acting as a way to purchase items or other things from shopkeepers.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gems are the game's currency acting as a way to purchase items or other things from shopkeepers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Healing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Incoming healing. This is mapped directly to +Health\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Incoming healing. This is mapped directly to +Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Incoming damage. This is mapped directly to -Health\n" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Incoming damage. This is mapped directly to -Health" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoulEnergy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxSoulEnergy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Healing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, HealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenRate_MetaData), NewProp_HealthRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_SoulEnergy = { "SoulEnergy", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, SoulEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoulEnergy_MetaData), NewProp_SoulEnergy_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxSoulEnergy = { "MaxSoulEnergy", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, MaxSoulEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSoulEnergy_MetaData), NewProp_MaxSoulEnergy_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, StaminaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenRate_MetaData), NewProp_StaminaRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, MoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Healing = { "Healing", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, Healing), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Healing_MetaData), NewProp_Healing_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_HealthRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_SoulEnergy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxSoulEnergy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_StaminaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Healing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAstralAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAttributeSet_Statics::ClassParams = {
	&UCharacterAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAttributeSet()
{
	if (!Z_Registration_Info_UClass_UCharacterAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAttributeSet.OuterSingleton, Z_Construct_UClass_UCharacterAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAttributeSet.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UCharacterAttributeSet>()
{
	return UCharacterAttributeSet::StaticClass();
}
UCharacterAttributeSet::UCharacterAttributeSet() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAttributeSet);
UCharacterAttributeSet::~UCharacterAttributeSet() {}
// End Class UCharacterAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_CharacterAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAttributeSet, UCharacterAttributeSet::StaticClass, TEXT("UCharacterAttributeSet"), &Z_Registration_Info_UClass_UCharacterAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAttributeSet), 3454264376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_CharacterAttributeSet_h_659111376(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_CharacterAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_CharacterAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
