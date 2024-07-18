// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Player/AstralPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPlayerState() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerController_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerState();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerState_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UProgressionAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerState();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class AAstralPlayerState Function GetAstralAbilitySystemComponent
struct Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics
{
	struct AstralPlayerState_eventGetAstralAbilitySystemComponent_Parms
	{
		UAstralAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the ability system component used for game wide things\n" },
#endif
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the ability system component used for game wide things" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetAstralAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetAstralAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::AstralPlayerState_eventGetAstralAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::AstralPlayerState_eventGetAstralAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetAstralAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAstralAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetAstralAbilitySystemComponent

// Begin Class AAstralPlayerState Function GetAstralPlayerController
struct Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics
{
	struct AstralPlayerState_eventGetAstralPlayerController_Parms
	{
		AAstralPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|PlayerState" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetAstralPlayerController_Parms, ReturnValue), Z_Construct_UClass_AAstralPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetAstralPlayerController", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::AstralPlayerState_eventGetAstralPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::AstralPlayerState_eventGetAstralPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetAstralPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AAstralPlayerController**)Z_Param__Result=P_THIS->GetAstralPlayerController();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetAstralPlayerController

// Begin Class AAstralPlayerState Function GetCharacterLevel
struct Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics
{
	struct AstralPlayerState_eventGetCharacterLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState|Attributes" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetCharacterLevel", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics::AstralPlayerState_eventGetCharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics::AstralPlayerState_eventGetCharacterLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetCharacterLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCharacterLevel();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetCharacterLevel

// Begin Class AAstralPlayerState Function GetCharacterXP
struct Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics
{
	struct AstralPlayerState_eventGetCharacterXP_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState|Attributes" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetCharacterXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetCharacterXP", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics::AstralPlayerState_eventGetCharacterXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics::AstralPlayerState_eventGetCharacterXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetCharacterXP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCharacterXP();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetCharacterXP

// Begin Class AAstralPlayerState Function GetGems
struct Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics
{
	struct AstralPlayerState_eventGetGems_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState|Attributes" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetGems_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetGems", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics::AstralPlayerState_eventGetGems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics::AstralPlayerState_eventGetGems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetGems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetGems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetGems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGems();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetGems

// Begin Class AAstralPlayerState Function GetHealth
struct Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics
{
	struct AstralPlayerState_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Getters for attributes from GDAttributeSetBase. Returns Current Value unless otherwise specified.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters for attributes from GDAttributeSetBase. Returns Current Value unless otherwise specified." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics::AstralPlayerState_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics::AstralPlayerState_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetHealth

// Begin Class AAstralPlayerState Function GetHealthRegenRate
struct Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics
{
	struct AstralPlayerState_eventGetHealthRegenRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState|Attributes" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetHealthRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics::AstralPlayerState_eventGetHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics::AstralPlayerState_eventGetHealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetHealthRegenRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthRegenRate();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetHealthRegenRate

// Begin Class AAstralPlayerState Function GetMaxHealth
struct Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics
{
	struct AstralPlayerState_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState|Attributes" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics::AstralPlayerState_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics::AstralPlayerState_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetMaxHealth

// Begin Class AAstralPlayerState Function GetMaxSoulEnergy
struct Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics
{
	struct AstralPlayerState_eventGetMaxSoulEnergy_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState|Attributes" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetMaxSoulEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetMaxSoulEnergy", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics::AstralPlayerState_eventGetMaxSoulEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics::AstralPlayerState_eventGetMaxSoulEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetMaxSoulEnergy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxSoulEnergy();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetMaxSoulEnergy

// Begin Class AAstralPlayerState Function GetMaxStamina
struct Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics
{
	struct AstralPlayerState_eventGetMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState|Attributes" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics::AstralPlayerState_eventGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics::AstralPlayerState_eventGetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetMaxStamina

// Begin Class AAstralPlayerState Function GetMoveSpeed
struct Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics
{
	struct AstralPlayerState_eventGetMoveSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState|Attributes" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics::AstralPlayerState_eventGetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics::AstralPlayerState_eventGetMoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetMoveSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetMoveSpeed

// Begin Class AAstralPlayerState Function GetSoulEnergy
struct Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics
{
	struct AstralPlayerState_eventGetSoulEnergy_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState|Attributes" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetSoulEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetSoulEnergy", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics::AstralPlayerState_eventGetSoulEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics::AstralPlayerState_eventGetSoulEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetSoulEnergy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSoulEnergy();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetSoulEnergy

// Begin Class AAstralPlayerState Function GetStamina
struct Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics
{
	struct AstralPlayerState_eventGetStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState|Attributes" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetStamina", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics::AstralPlayerState_eventGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics::AstralPlayerState_eventGetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStamina();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetStamina

// Begin Class AAstralPlayerState Function GetStaminaRegenRate
struct Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics
{
	struct AstralPlayerState_eventGetStaminaRegenRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState|Attributes" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetStaminaRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetStaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics::AstralPlayerState_eventGetStaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics::AstralPlayerState_eventGetStaminaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetStaminaRegenRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStaminaRegenRate();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetStaminaRegenRate

// Begin Class AAstralPlayerState Function IsAlive
struct Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics
{
	struct AstralPlayerState_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumentation|GDPlayerState" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AstralPlayerState_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AstralPlayerState_eventIsAlive_Parms), &Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::AstralPlayerState_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::AstralPlayerState_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function IsAlive

// Begin Class AAstralPlayerState Function ShowAbilityConfirmCancelText
struct Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics
{
	struct AstralPlayerState_eventShowAbilityConfirmCancelText_Parms
	{
		bool ShowText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASDocumenation|GDPlayerState|UI" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ShowText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::NewProp_ShowText_SetBit(void* Obj)
{
	((AstralPlayerState_eventShowAbilityConfirmCancelText_Parms*)Obj)->ShowText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::NewProp_ShowText = { "ShowText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AstralPlayerState_eventShowAbilityConfirmCancelText_Parms), &Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::NewProp_ShowText_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::NewProp_ShowText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "ShowAbilityConfirmCancelText", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::AstralPlayerState_eventShowAbilityConfirmCancelText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::AstralPlayerState_eventShowAbilityConfirmCancelText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execShowAbilityConfirmCancelText)
{
	P_GET_UBOOL(Z_Param_ShowText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAbilityConfirmCancelText(Z_Param_ShowText);
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function ShowAbilityConfirmCancelText

// Begin Class AAstralPlayerState
void AAstralPlayerState::StaticRegisterNativesAAstralPlayerState()
{
	UClass* Class = AAstralPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAstralAbilitySystemComponent", &AAstralPlayerState::execGetAstralAbilitySystemComponent },
		{ "GetAstralPlayerController", &AAstralPlayerState::execGetAstralPlayerController },
		{ "GetCharacterLevel", &AAstralPlayerState::execGetCharacterLevel },
		{ "GetCharacterXP", &AAstralPlayerState::execGetCharacterXP },
		{ "GetGems", &AAstralPlayerState::execGetGems },
		{ "GetHealth", &AAstralPlayerState::execGetHealth },
		{ "GetHealthRegenRate", &AAstralPlayerState::execGetHealthRegenRate },
		{ "GetMaxHealth", &AAstralPlayerState::execGetMaxHealth },
		{ "GetMaxSoulEnergy", &AAstralPlayerState::execGetMaxSoulEnergy },
		{ "GetMaxStamina", &AAstralPlayerState::execGetMaxStamina },
		{ "GetMoveSpeed", &AAstralPlayerState::execGetMoveSpeed },
		{ "GetSoulEnergy", &AAstralPlayerState::execGetSoulEnergy },
		{ "GetStamina", &AAstralPlayerState::execGetStamina },
		{ "GetStaminaRegenRate", &AAstralPlayerState::execGetStaminaRegenRate },
		{ "IsAlive", &AAstralPlayerState::execIsAlive },
		{ "ShowAbilityConfirmCancelText", &AAstralPlayerState::execShowAbilityConfirmCancelText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstralPlayerState);
UClass* Z_Construct_UClass_AAstralPlayerState_NoRegister()
{
	return AAstralPlayerState::StaticClass();
}
struct Z_Construct_UClass_AAstralPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/AstralPlayerState.h" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Astral|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ability system component subobject for game-wide things (primarily gameplay cues)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system component subobject for game-wide things (primarily gameplay cues)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressionAttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/AstralPlayerState.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressionAttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent, "GetAstralAbilitySystemComponent" }, // 890931805
		{ &Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController, "GetAstralPlayerController" }, // 851001461
		{ &Z_Construct_UFunction_AAstralPlayerState_GetCharacterLevel, "GetCharacterLevel" }, // 2084013811
		{ &Z_Construct_UFunction_AAstralPlayerState_GetCharacterXP, "GetCharacterXP" }, // 3402755999
		{ &Z_Construct_UFunction_AAstralPlayerState_GetGems, "GetGems" }, // 2692563017
		{ &Z_Construct_UFunction_AAstralPlayerState_GetHealth, "GetHealth" }, // 69905375
		{ &Z_Construct_UFunction_AAstralPlayerState_GetHealthRegenRate, "GetHealthRegenRate" }, // 4201221763
		{ &Z_Construct_UFunction_AAstralPlayerState_GetMaxHealth, "GetMaxHealth" }, // 3958486621
		{ &Z_Construct_UFunction_AAstralPlayerState_GetMaxSoulEnergy, "GetMaxSoulEnergy" }, // 1089114078
		{ &Z_Construct_UFunction_AAstralPlayerState_GetMaxStamina, "GetMaxStamina" }, // 3559415208
		{ &Z_Construct_UFunction_AAstralPlayerState_GetMoveSpeed, "GetMoveSpeed" }, // 1118574241
		{ &Z_Construct_UFunction_AAstralPlayerState_GetSoulEnergy, "GetSoulEnergy" }, // 2311555217
		{ &Z_Construct_UFunction_AAstralPlayerState_GetStamina, "GetStamina" }, // 3907711493
		{ &Z_Construct_UFunction_AAstralPlayerState_GetStaminaRegenRate, "GetStaminaRegenRate" }, // 3012240423
		{ &Z_Construct_UFunction_AAstralPlayerState_IsAlive, "IsAlive" }, // 4029724822
		{ &Z_Construct_UFunction_AAstralPlayerState_ShowAbilityConfirmCancelText, "ShowAbilityConfirmCancelText" }, // 1341078553
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstralPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlayerState_Statics::NewProp_CharacterAttributeSet = { "CharacterAttributeSet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerState, CharacterAttributeSet), Z_Construct_UClass_UCharacterAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAttributeSet_MetaData), NewProp_CharacterAttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlayerState_Statics::NewProp_ProgressionAttributeSet = { "ProgressionAttributeSet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerState, ProgressionAttributeSet), Z_Construct_UClass_UProgressionAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressionAttributeSet_MetaData), NewProp_ProgressionAttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAstralPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerState_Statics::NewProp_CharacterAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerState_Statics::NewProp_ProgressionAttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAstralPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularPlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAstralPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAstralPlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstralPlayerState_Statics::ClassParams = {
	&AAstralPlayerState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAstralPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstralPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstralPlayerState()
{
	if (!Z_Registration_Info_UClass_AAstralPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstralPlayerState.OuterSingleton, Z_Construct_UClass_AAstralPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstralPlayerState.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<AAstralPlayerState>()
{
	return AAstralPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstralPlayerState);
AAstralPlayerState::~AAstralPlayerState() {}
// End Class AAstralPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstralPlayerState, AAstralPlayerState::StaticClass, TEXT("AAstralPlayerState"), &Z_Registration_Info_UClass_AAstralPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstralPlayerState), 3063091939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h_78222053(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
