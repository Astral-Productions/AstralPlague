// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/UI/AstralHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralHUDWidget() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralHUDWidget();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralHUDWidget Function SetCharacterLevel
struct AstralHUDWidget_eventSetCharacterLevel_Parms
{
	int32 HeroLevel;
};
static FName NAME_UAstralHUDWidget_SetCharacterLevel = FName(TEXT("SetCharacterLevel"));
void UAstralHUDWidget::SetCharacterLevel(int32 HeroLevel)
{
	AstralHUDWidget_eventSetCharacterLevel_Parms Parms;
	Parms.HeroLevel=HeroLevel;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetCharacterLevel),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeroLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel_Statics::NewProp_HeroLevel = { "HeroLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetCharacterLevel_Parms, HeroLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel_Statics::NewProp_HeroLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetCharacterLevel", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetCharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetCharacterLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetCharacterLevel

// Begin Class UAstralHUDWidget Function SetCurrentHealth
struct AstralHUDWidget_eventSetCurrentHealth_Parms
{
	float CurrentHealth;
};
static FName NAME_UAstralHUDWidget_SetCurrentHealth = FName(TEXT("SetCurrentHealth"));
void UAstralHUDWidget::SetCurrentHealth(float CurrentHealth)
{
	AstralHUDWidget_eventSetCurrentHealth_Parms Parms;
	Parms.CurrentHealth=CurrentHealth;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetCurrentHealth),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetCurrentHealth_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth_Statics::NewProp_CurrentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetCurrentHealth

// Begin Class UAstralHUDWidget Function SetCurrentStamina
struct AstralHUDWidget_eventSetCurrentStamina_Parms
{
	float CurrentStamina;
};
static FName NAME_UAstralHUDWidget_SetCurrentStamina = FName(TEXT("SetCurrentStamina"));
void UAstralHUDWidget::SetCurrentStamina(float CurrentStamina)
{
	AstralHUDWidget_eventSetCurrentStamina_Parms Parms;
	Parms.CurrentStamina=CurrentStamina;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetCurrentStamina),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetCurrentStamina_Parms, CurrentStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina_Statics::NewProp_CurrentStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetCurrentStamina", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetCurrentStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetCurrentStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetCurrentStamina

// Begin Class UAstralHUDWidget Function SetExperience
struct AstralHUDWidget_eventSetExperience_Parms
{
	int32 Experience;
};
static FName NAME_UAstralHUDWidget_SetExperience = FName(TEXT("SetExperience"));
void UAstralHUDWidget::SetExperience(int32 Experience)
{
	AstralHUDWidget_eventSetExperience_Parms Parms;
	Parms.Experience=Experience;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetExperience),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetExperience_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Experience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetExperience_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetExperience_Parms, Experience), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetExperience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetExperience_Statics::NewProp_Experience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetExperience_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetExperience", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetExperience_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetExperience_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetExperience_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetExperience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetExperience

// Begin Class UAstralHUDWidget Function SetGems
struct AstralHUDWidget_eventSetGems_Parms
{
	int32 Gold;
};
static FName NAME_UAstralHUDWidget_SetGems = FName(TEXT("SetGems"));
void UAstralHUDWidget::SetGems(int32 Gold)
{
	AstralHUDWidget_eventSetGems_Parms Parms;
	Parms.Gold=Gold;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetGems),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetGems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetGems_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetGems_Parms, Gold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetGems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetGems_Statics::NewProp_Gold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetGems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetGems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetGems", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetGems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetGems_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetGems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetGems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetGems_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetGems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetGems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetGems_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetGems

// Begin Class UAstralHUDWidget Function SetHealthPercentage
struct AstralHUDWidget_eventSetHealthPercentage_Parms
{
	float HealthPercentage;
};
static FName NAME_UAstralHUDWidget_SetHealthPercentage = FName(TEXT("SetHealthPercentage"));
void UAstralHUDWidget::SetHealthPercentage(float HealthPercentage)
{
	AstralHUDWidget_eventSetHealthPercentage_Parms Parms;
	Parms.HealthPercentage=HealthPercentage;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetHealthPercentage),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetHealthPercentage_Parms, HealthPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage_Statics::NewProp_HealthPercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetHealthPercentage", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetHealthPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetHealthPercentage

// Begin Class UAstralHUDWidget Function SetHealthRegenRate
struct AstralHUDWidget_eventSetHealthRegenRate_Parms
{
	float HealthRegenRate;
};
static FName NAME_UAstralHUDWidget_SetHealthRegenRate = FName(TEXT("SetHealthRegenRate"));
void UAstralHUDWidget::SetHealthRegenRate(float HealthRegenRate)
{
	AstralHUDWidget_eventSetHealthRegenRate_Parms Parms;
	Parms.HealthRegenRate=HealthRegenRate;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetHealthRegenRate),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetHealthRegenRate_Parms, HealthRegenRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate_Statics::NewProp_HealthRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetHealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetHealthRegenRate

// Begin Class UAstralHUDWidget Function SetMaxHealth
struct AstralHUDWidget_eventSetMaxHealth_Parms
{
	float MaxHealth;
};
static FName NAME_UAstralHUDWidget_SetMaxHealth = FName(TEXT("SetMaxHealth"));
void UAstralHUDWidget::SetMaxHealth(float MaxHealth)
{
	AstralHUDWidget_eventSetMaxHealth_Parms Parms;
	Parms.MaxHealth=MaxHealth;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetMaxHealth),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Attribute setters\n\x09*/" },
#endif
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute setters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetMaxHealth_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetMaxHealth

// Begin Class UAstralHUDWidget Function SetMaxSoulEnergy
struct AstralHUDWidget_eventSetMaxSoulEnergy_Parms
{
	float MaxMana;
};
static FName NAME_UAstralHUDWidget_SetMaxSoulEnergy = FName(TEXT("SetMaxSoulEnergy"));
void UAstralHUDWidget::SetMaxSoulEnergy(float MaxMana)
{
	AstralHUDWidget_eventSetMaxSoulEnergy_Parms Parms;
	Parms.MaxMana=MaxMana;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetMaxSoulEnergy),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetMaxSoulEnergy_Parms, MaxMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy_Statics::NewProp_MaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetMaxSoulEnergy", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetMaxSoulEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetMaxSoulEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetMaxSoulEnergy

// Begin Class UAstralHUDWidget Function SetMaxStamina
struct AstralHUDWidget_eventSetMaxStamina_Parms
{
	float MaxStamina;
};
static FName NAME_UAstralHUDWidget_SetMaxStamina = FName(TEXT("SetMaxStamina"));
void UAstralHUDWidget::SetMaxStamina(float MaxStamina)
{
	AstralHUDWidget_eventSetMaxStamina_Parms Parms;
	Parms.MaxStamina=MaxStamina;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetMaxStamina),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetMaxStamina_Parms, MaxStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina_Statics::NewProp_MaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetMaxStamina

// Begin Class UAstralHUDWidget Function SetRespawnCountdown
struct AstralHUDWidget_eventSetRespawnCountdown_Parms
{
	float RespawnTimeRemaining;
};
static FName NAME_UAstralHUDWidget_SetRespawnCountdown = FName(TEXT("SetRespawnCountdown"));
void UAstralHUDWidget::SetRespawnCountdown(float RespawnTimeRemaining)
{
	AstralHUDWidget_eventSetRespawnCountdown_Parms Parms;
	Parms.RespawnTimeRemaining=RespawnTimeRemaining;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetRespawnCountdown),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTimeRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown_Statics::NewProp_RespawnTimeRemaining = { "RespawnTimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetRespawnCountdown_Parms, RespawnTimeRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown_Statics::NewProp_RespawnTimeRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetRespawnCountdown", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetRespawnCountdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetRespawnCountdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetRespawnCountdown

// Begin Class UAstralHUDWidget Function SetSoulEnergy
struct AstralHUDWidget_eventSetSoulEnergy_Parms
{
	float CurrentMana;
};
static FName NAME_UAstralHUDWidget_SetSoulEnergy = FName(TEXT("SetSoulEnergy"));
void UAstralHUDWidget::SetSoulEnergy(float CurrentMana)
{
	AstralHUDWidget_eventSetSoulEnergy_Parms Parms;
	Parms.CurrentMana=CurrentMana;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetSoulEnergy),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetSoulEnergy_Parms, CurrentMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy_Statics::NewProp_CurrentMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetSoulEnergy", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetSoulEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetSoulEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetSoulEnergy

// Begin Class UAstralHUDWidget Function SetSoulEnergyPercentage
struct AstralHUDWidget_eventSetSoulEnergyPercentage_Parms
{
	float ManaPercentage;
};
static FName NAME_UAstralHUDWidget_SetSoulEnergyPercentage = FName(TEXT("SetSoulEnergyPercentage"));
void UAstralHUDWidget::SetSoulEnergyPercentage(float ManaPercentage)
{
	AstralHUDWidget_eventSetSoulEnergyPercentage_Parms Parms;
	Parms.ManaPercentage=ManaPercentage;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetSoulEnergyPercentage),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage_Statics::NewProp_ManaPercentage = { "ManaPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetSoulEnergyPercentage_Parms, ManaPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage_Statics::NewProp_ManaPercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetSoulEnergyPercentage", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetSoulEnergyPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetSoulEnergyPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetSoulEnergyPercentage

// Begin Class UAstralHUDWidget Function SetStaminaPercentage
struct AstralHUDWidget_eventSetStaminaPercentage_Parms
{
	float StaminaPercentage;
};
static FName NAME_UAstralHUDWidget_SetStaminaPercentage = FName(TEXT("SetStaminaPercentage"));
void UAstralHUDWidget::SetStaminaPercentage(float StaminaPercentage)
{
	AstralHUDWidget_eventSetStaminaPercentage_Parms Parms;
	Parms.StaminaPercentage=StaminaPercentage;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetStaminaPercentage),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage_Statics::NewProp_StaminaPercentage = { "StaminaPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetStaminaPercentage_Parms, StaminaPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage_Statics::NewProp_StaminaPercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetStaminaPercentage", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetStaminaPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetStaminaPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetStaminaPercentage

// Begin Class UAstralHUDWidget Function SetStaminaRegenRate
struct AstralHUDWidget_eventSetStaminaRegenRate_Parms
{
	float StaminaRegenRate;
};
static FName NAME_UAstralHUDWidget_SetStaminaRegenRate = FName(TEXT("SetStaminaRegenRate"));
void UAstralHUDWidget::SetStaminaRegenRate(float StaminaRegenRate)
{
	AstralHUDWidget_eventSetStaminaRegenRate_Parms Parms;
	Parms.StaminaRegenRate=StaminaRegenRate;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_SetStaminaRegenRate),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralHUDWidget_eventSetStaminaRegenRate_Parms, StaminaRegenRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate_Statics::NewProp_StaminaRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "SetStaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate_Statics::PropPointers), sizeof(AstralHUDWidget_eventSetStaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventSetStaminaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function SetStaminaRegenRate

// Begin Class UAstralHUDWidget Function ShowAbilityConfirmCancelText
struct AstralHUDWidget_eventShowAbilityConfirmCancelText_Parms
{
	bool ShowText;
};
static FName NAME_UAstralHUDWidget_ShowAbilityConfirmCancelText = FName(TEXT("ShowAbilityConfirmCancelText"));
void UAstralHUDWidget::ShowAbilityConfirmCancelText(bool ShowText)
{
	AstralHUDWidget_eventShowAbilityConfirmCancelText_Parms Parms;
	Parms.ShowText=ShowText ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UAstralHUDWidget_ShowAbilityConfirmCancelText),&Parms);
}
struct Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ShowText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics::NewProp_ShowText_SetBit(void* Obj)
{
	((AstralHUDWidget_eventShowAbilityConfirmCancelText_Parms*)Obj)->ShowText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics::NewProp_ShowText = { "ShowText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AstralHUDWidget_eventShowAbilityConfirmCancelText_Parms), &Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics::NewProp_ShowText_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics::NewProp_ShowText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralHUDWidget, nullptr, "ShowAbilityConfirmCancelText", nullptr, nullptr, Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics::PropPointers), sizeof(AstralHUDWidget_eventShowAbilityConfirmCancelText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralHUDWidget_eventShowAbilityConfirmCancelText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralHUDWidget Function ShowAbilityConfirmCancelText

// Begin Class UAstralHUDWidget
void UAstralHUDWidget::StaticRegisterNativesUAstralHUDWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralHUDWidget);
UClass* Z_Construct_UClass_UAstralHUDWidget_NoRegister()
{
	return UAstralHUDWidget::StaticClass();
}
struct Z_Construct_UClass_UAstralHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/AstralHUDWidget.h" },
		{ "ModuleRelativePath", "UI/AstralHUDWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetCharacterLevel, "SetCharacterLevel" }, // 2326724425
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetCurrentHealth, "SetCurrentHealth" }, // 1335138129
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetCurrentStamina, "SetCurrentStamina" }, // 1906561469
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetExperience, "SetExperience" }, // 2120991496
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetGems, "SetGems" }, // 2355164422
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetHealthPercentage, "SetHealthPercentage" }, // 239440699
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetHealthRegenRate, "SetHealthRegenRate" }, // 695450588
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetMaxHealth, "SetMaxHealth" }, // 1881033438
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetMaxSoulEnergy, "SetMaxSoulEnergy" }, // 1732662280
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetMaxStamina, "SetMaxStamina" }, // 929692599
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetRespawnCountdown, "SetRespawnCountdown" }, // 2899171659
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergy, "SetSoulEnergy" }, // 3782086511
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetSoulEnergyPercentage, "SetSoulEnergyPercentage" }, // 545692279
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetStaminaPercentage, "SetStaminaPercentage" }, // 3053517543
		{ &Z_Construct_UFunction_UAstralHUDWidget_SetStaminaRegenRate, "SetStaminaRegenRate" }, // 219259502
		{ &Z_Construct_UFunction_UAstralHUDWidget_ShowAbilityConfirmCancelText, "ShowAbilityConfirmCancelText" }, // 3173506684
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralHUDWidget_Statics::ClassParams = {
	&UAstralHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralHUDWidget()
{
	if (!Z_Registration_Info_UClass_UAstralHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralHUDWidget.OuterSingleton, Z_Construct_UClass_UAstralHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralHUDWidget.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralHUDWidget>()
{
	return UAstralHUDWidget::StaticClass();
}
UAstralHUDWidget::UAstralHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralHUDWidget);
UAstralHUDWidget::~UAstralHUDWidget() {}
// End Class UAstralHUDWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_UI_AstralHUDWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralHUDWidget, UAstralHUDWidget::StaticClass, TEXT("UAstralHUDWidget"), &Z_Registration_Info_UClass_UAstralHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralHUDWidget), 3225062645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_UI_AstralHUDWidget_h_3373264925(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_UI_AstralHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_UI_AstralHUDWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
