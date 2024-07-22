// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AstralPlague.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPlague() {}

// Begin Cross Module References
ASTRALPLAGUE_API UEnum* Z_Construct_UEnum_AstralPlague_EAstralAbilityInputID();
ASTRALPLAGUE_API UEnum* Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Enum EAstralHitReactDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAstralHitReactDirection;
static UEnum* EAstralHitReactDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAstralHitReactDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAstralHitReactDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("EAstralHitReactDirection"));
	}
	return Z_Registration_Info_UEnum_EAstralHitReactDirection.OuterSingleton;
}
template<> ASTRALPLAGUE_API UEnum* StaticEnum<EAstralHitReactDirection>()
{
	return EAstralHitReactDirection_StaticEnum();
}
struct Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Back.Comment", "// 4\n" },
		{ "Back.DisplayName", "Back" },
		{ "Back.Name", "EAstralHitReactDirection::Back" },
		{ "Back.ToolTip", "4" },
		{ "BlueprintType", "true" },
		{ "Front.Comment", "// 2\n" },
		{ "Front.DisplayName", "Front" },
		{ "Front.Name", "EAstralHitReactDirection::Front" },
		{ "Front.ToolTip", "2" },
		{ "Left.Comment", "// 1\n" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EAstralHitReactDirection::Left" },
		{ "Left.ToolTip", "1" },
		{ "ModuleRelativePath", "AstralPlague.h" },
		{ "None.Comment", "// 0\n" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAstralHitReactDirection::None" },
		{ "None.ToolTip", "0" },
		{ "Right.Comment", "// 3\n" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EAstralHitReactDirection::Right" },
		{ "Right.ToolTip", "3" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAstralHitReactDirection::None", (int64)EAstralHitReactDirection::None },
		{ "EAstralHitReactDirection::Left", (int64)EAstralHitReactDirection::Left },
		{ "EAstralHitReactDirection::Front", (int64)EAstralHitReactDirection::Front },
		{ "EAstralHitReactDirection::Right", (int64)EAstralHitReactDirection::Right },
		{ "EAstralHitReactDirection::Back", (int64)EAstralHitReactDirection::Back },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	"EAstralHitReactDirection",
	"EAstralHitReactDirection",
	Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection()
{
	if (!Z_Registration_Info_UEnum_EAstralHitReactDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAstralHitReactDirection.InnerSingleton, Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAstralHitReactDirection.InnerSingleton;
}
// End Enum EAstralHitReactDirection

// Begin Enum EAstralAbilityInputID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAstralAbilityInputID;
static UEnum* EAstralAbilityInputID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAstralAbilityInputID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAstralAbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AstralPlague_EAstralAbilityInputID, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("EAstralAbilityInputID"));
	}
	return Z_Registration_Info_UEnum_EAstralAbilityInputID.OuterSingleton;
}
template<> ASTRALPLAGUE_API UEnum* StaticEnum<EAstralAbilityInputID>()
{
	return EAstralAbilityInputID_StaticEnum();
}
struct Z_Construct_UEnum_AstralPlague_EAstralAbilityInputID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ability1.Comment", "// 5 Q\n" },
		{ "Ability1.DisplayName", "Ability1" },
		{ "Ability1.Name", "EAstralAbilityInputID::Ability1" },
		{ "Ability1.ToolTip", "5 Q" },
		{ "Ability2.Comment", "// 6 E\n" },
		{ "Ability2.DisplayName", "Ability2" },
		{ "Ability2.Name", "EAstralAbilityInputID::Ability2" },
		{ "Ability2.ToolTip", "6 E" },
		{ "Ability3.Comment", "// 7 R\n" },
		{ "Ability3.DisplayName", "Ability3" },
		{ "Ability3.Name", "EAstralAbilityInputID::Ability3" },
		{ "Ability3.ToolTip", "7 R" },
		{ "Ability4.Comment", "// 8 Sprint\n" },
		{ "Ability4.DisplayName", "Ability4" },
		{ "Ability4.Name", "EAstralAbilityInputID::Ability4" },
		{ "Ability4.ToolTip", "8 Sprint" },
		{ "BlueprintType", "true" },
		{ "Cancel.Comment", "// 2 Cancel\n" },
		{ "Cancel.DisplayName", "Cancel" },
		{ "Cancel.Name", "EAstralAbilityInputID::Cancel" },
		{ "Cancel.ToolTip", "2 Cancel" },
		{ "Confirm.Comment", "// 1 Confirm\n" },
		{ "Confirm.DisplayName", "Confirm" },
		{ "Confirm.Name", "EAstralAbilityInputID::Confirm" },
		{ "Confirm.ToolTip", "1 Confirm" },
		{ "HeavyAttack.Comment", "// 4 RMB\n" },
		{ "HeavyAttack.DisplayName", "HeavyAttack" },
		{ "HeavyAttack.Name", "EAstralAbilityInputID::HeavyAttack" },
		{ "HeavyAttack.ToolTip", "4 RMB" },
		{ "Jump.Comment", "// 10 Jump\n" },
		{ "Jump.DisplayName", "Jump" },
		{ "Jump.Name", "EAstralAbilityInputID::Jump" },
		{ "Jump.ToolTip", "10 Jump" },
		{ "LightAttack.Comment", "// 3 LMB\n" },
		{ "LightAttack.DisplayName", "LightAttack" },
		{ "LightAttack.Name", "EAstralAbilityInputID::LightAttack" },
		{ "LightAttack.ToolTip", "3 LMB" },
		{ "ModuleRelativePath", "AstralPlague.h" },
		{ "None.Comment", "// 0 None\n" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAstralAbilityInputID::None" },
		{ "None.ToolTip", "0 None" },
		{ "Sprint.Comment", "// 9 Sprint\n" },
		{ "Sprint.DisplayName", "Sprint" },
		{ "Sprint.Name", "EAstralAbilityInputID::Sprint" },
		{ "Sprint.ToolTip", "9 Sprint" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAstralAbilityInputID::None", (int64)EAstralAbilityInputID::None },
		{ "EAstralAbilityInputID::Confirm", (int64)EAstralAbilityInputID::Confirm },
		{ "EAstralAbilityInputID::Cancel", (int64)EAstralAbilityInputID::Cancel },
		{ "EAstralAbilityInputID::LightAttack", (int64)EAstralAbilityInputID::LightAttack },
		{ "EAstralAbilityInputID::HeavyAttack", (int64)EAstralAbilityInputID::HeavyAttack },
		{ "EAstralAbilityInputID::Ability1", (int64)EAstralAbilityInputID::Ability1 },
		{ "EAstralAbilityInputID::Ability2", (int64)EAstralAbilityInputID::Ability2 },
		{ "EAstralAbilityInputID::Ability3", (int64)EAstralAbilityInputID::Ability3 },
		{ "EAstralAbilityInputID::Ability4", (int64)EAstralAbilityInputID::Ability4 },
		{ "EAstralAbilityInputID::Sprint", (int64)EAstralAbilityInputID::Sprint },
		{ "EAstralAbilityInputID::Jump", (int64)EAstralAbilityInputID::Jump },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AstralPlague_EAstralAbilityInputID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	"EAstralAbilityInputID",
	"EAstralAbilityInputID",
	Z_Construct_UEnum_AstralPlague_EAstralAbilityInputID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AstralPlague_EAstralAbilityInputID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AstralPlague_EAstralAbilityInputID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AstralPlague_EAstralAbilityInputID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AstralPlague_EAstralAbilityInputID()
{
	if (!Z_Registration_Info_UEnum_EAstralAbilityInputID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAstralAbilityInputID.InnerSingleton, Z_Construct_UEnum_AstralPlague_EAstralAbilityInputID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAstralAbilityInputID.InnerSingleton;
}
// End Enum EAstralAbilityInputID

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AstralPlague_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAstralHitReactDirection_StaticEnum, TEXT("EAstralHitReactDirection"), &Z_Registration_Info_UEnum_EAstralHitReactDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 267192895U) },
		{ EAstralAbilityInputID_StaticEnum, TEXT("EAstralAbilityInputID"), &Z_Registration_Info_UEnum_EAstralAbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1629908191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AstralPlague_h_999670941(TEXT("/Script/AstralPlague"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AstralPlague_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AstralPlague_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
