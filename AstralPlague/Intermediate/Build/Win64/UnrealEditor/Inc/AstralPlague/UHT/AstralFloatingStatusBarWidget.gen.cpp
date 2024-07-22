// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/UI/AstralFloatingStatusBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralFloatingStatusBarWidget() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralFloatingStatusBarWidget();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralFloatingStatusBarWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralFloatingStatusBarWidget Function SetCharacterName
struct AstralFloatingStatusBarWidget_eventSetCharacterName_Parms
{
	FText NewName;
};
static FName NAME_UAstralFloatingStatusBarWidget_SetCharacterName = FName(TEXT("SetCharacterName"));
void UAstralFloatingStatusBarWidget::SetCharacterName(FText const& NewName)
{
	AstralFloatingStatusBarWidget_eventSetCharacterName_Parms Parms;
	Parms.NewName=NewName;
	ProcessEvent(FindFunctionChecked(NAME_UAstralFloatingStatusBarWidget_SetCharacterName),&Parms);
}
struct Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralFloatingStatusBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralFloatingStatusBarWidget_eventSetCharacterName_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewName_MetaData), NewProp_NewName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName_Statics::NewProp_NewName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralFloatingStatusBarWidget, nullptr, "SetCharacterName", nullptr, nullptr, Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName_Statics::PropPointers), sizeof(AstralFloatingStatusBarWidget_eventSetCharacterName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralFloatingStatusBarWidget_eventSetCharacterName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralFloatingStatusBarWidget Function SetCharacterName

// Begin Class UAstralFloatingStatusBarWidget Function SetHealthPercentage
struct AstralFloatingStatusBarWidget_eventSetHealthPercentage_Parms
{
	float HealthPercentage;
};
static FName NAME_UAstralFloatingStatusBarWidget_SetHealthPercentage = FName(TEXT("SetHealthPercentage"));
void UAstralFloatingStatusBarWidget::SetHealthPercentage(float HealthPercentage)
{
	AstralFloatingStatusBarWidget_eventSetHealthPercentage_Parms Parms;
	Parms.HealthPercentage=HealthPercentage;
	ProcessEvent(FindFunctionChecked(NAME_UAstralFloatingStatusBarWidget_SetHealthPercentage),&Parms);
}
struct Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralFloatingStatusBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralFloatingStatusBarWidget_eventSetHealthPercentage_Parms, HealthPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage_Statics::NewProp_HealthPercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralFloatingStatusBarWidget, nullptr, "SetHealthPercentage", nullptr, nullptr, Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage_Statics::PropPointers), sizeof(AstralFloatingStatusBarWidget_eventSetHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralFloatingStatusBarWidget_eventSetHealthPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralFloatingStatusBarWidget Function SetHealthPercentage

// Begin Class UAstralFloatingStatusBarWidget Function SetSoulEnergyPercentage
struct AstralFloatingStatusBarWidget_eventSetSoulEnergyPercentage_Parms
{
	float SoulEnergy;
};
static FName NAME_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage = FName(TEXT("SetSoulEnergyPercentage"));
void UAstralFloatingStatusBarWidget::SetSoulEnergyPercentage(float SoulEnergy)
{
	AstralFloatingStatusBarWidget_eventSetSoulEnergyPercentage_Parms Parms;
	Parms.SoulEnergy=SoulEnergy;
	ProcessEvent(FindFunctionChecked(NAME_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage),&Parms);
}
struct Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralFloatingStatusBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoulEnergy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage_Statics::NewProp_SoulEnergy = { "SoulEnergy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralFloatingStatusBarWidget_eventSetSoulEnergyPercentage_Parms, SoulEnergy), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage_Statics::NewProp_SoulEnergy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralFloatingStatusBarWidget, nullptr, "SetSoulEnergyPercentage", nullptr, nullptr, Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage_Statics::PropPointers), sizeof(AstralFloatingStatusBarWidget_eventSetSoulEnergyPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralFloatingStatusBarWidget_eventSetSoulEnergyPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralFloatingStatusBarWidget Function SetSoulEnergyPercentage

// Begin Class UAstralFloatingStatusBarWidget
void UAstralFloatingStatusBarWidget::StaticRegisterNativesUAstralFloatingStatusBarWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralFloatingStatusBarWidget);
UClass* Z_Construct_UClass_UAstralFloatingStatusBarWidget_NoRegister()
{
	return UAstralFloatingStatusBarWidget::StaticClass();
}
struct Z_Construct_UClass_UAstralFloatingStatusBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/AstralFloatingStatusBarWidget.h" },
		{ "ModuleRelativePath", "UI/AstralFloatingStatusBarWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetCharacterName, "SetCharacterName" }, // 2925712525
		{ &Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetHealthPercentage, "SetHealthPercentage" }, // 3205527886
		{ &Z_Construct_UFunction_UAstralFloatingStatusBarWidget_SetSoulEnergyPercentage, "SetSoulEnergyPercentage" }, // 1152413058
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralFloatingStatusBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralFloatingStatusBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralFloatingStatusBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralFloatingStatusBarWidget_Statics::ClassParams = {
	&UAstralFloatingStatusBarWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralFloatingStatusBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralFloatingStatusBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralFloatingStatusBarWidget()
{
	if (!Z_Registration_Info_UClass_UAstralFloatingStatusBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralFloatingStatusBarWidget.OuterSingleton, Z_Construct_UClass_UAstralFloatingStatusBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralFloatingStatusBarWidget.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralFloatingStatusBarWidget>()
{
	return UAstralFloatingStatusBarWidget::StaticClass();
}
UAstralFloatingStatusBarWidget::UAstralFloatingStatusBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralFloatingStatusBarWidget);
UAstralFloatingStatusBarWidget::~UAstralFloatingStatusBarWidget() {}
// End Class UAstralFloatingStatusBarWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_UI_AstralFloatingStatusBarWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralFloatingStatusBarWidget, UAstralFloatingStatusBarWidget::StaticClass, TEXT("UAstralFloatingStatusBarWidget"), &Z_Registration_Info_UClass_UAstralFloatingStatusBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralFloatingStatusBarWidget), 3339438730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_UI_AstralFloatingStatusBarWidget_h_921651519(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_UI_AstralFloatingStatusBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_UI_AstralFloatingStatusBarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
