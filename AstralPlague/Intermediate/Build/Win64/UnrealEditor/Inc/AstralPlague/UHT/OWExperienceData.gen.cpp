// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/OpenWorld/Data/OWExperienceData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWExperienceData() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UOWExperienceData();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UOWExperienceData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UOWExperienceData Function GetCurrentProductionRate
struct Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics
{
	struct OWExperienceData_eventGetCurrentProductionRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the expected drop the production amount once the experience enters the degraded state.\n//Please note this value will *NOT* account for additional modifiers it is only the default Rate*DegradationAmount\n" },
#endif
		{ "ModuleRelativePath", "OpenWorld/Data/OWExperienceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the expected drop the production amount once the experience enters the degraded state.\nPlease note this value will *NOT* account for additional modifiers it is only the default Rate*DegradationAmount" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWExperienceData_eventGetCurrentProductionRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWExperienceData, nullptr, "GetCurrentProductionRate", nullptr, nullptr, Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics::OWExperienceData_eventGetCurrentProductionRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics::OWExperienceData_eventGetCurrentProductionRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWExperienceData::execGetCurrentProductionRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentProductionRate();
	P_NATIVE_END;
}
// End Class UOWExperienceData Function GetCurrentProductionRate

// Begin Class UOWExperienceData Function GetDegradationThreshold
struct Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics
{
	struct OWExperienceData_eventGetDegradationThreshold_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the health value at which the experience will enter the destroyed state.\n" },
#endif
		{ "ModuleRelativePath", "OpenWorld/Data/OWExperienceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the health value at which the experience will enter the destroyed state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWExperienceData_eventGetDegradationThreshold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWExperienceData, nullptr, "GetDegradationThreshold", nullptr, nullptr, Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics::OWExperienceData_eventGetDegradationThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics::OWExperienceData_eventGetDegradationThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWExperienceData::execGetDegradationThreshold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDegradationThreshold();
	P_NATIVE_END;
}
// End Class UOWExperienceData Function GetDegradationThreshold

// Begin Class UOWExperienceData Function GetDestructionThreshold
struct Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics
{
	struct OWExperienceData_eventGetDestructionThreshold_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the health value at which the experience will enter the degraded state.\n" },
#endif
		{ "ModuleRelativePath", "OpenWorld/Data/OWExperienceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the health value at which the experience will enter the degraded state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWExperienceData_eventGetDestructionThreshold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWExperienceData, nullptr, "GetDestructionThreshold", nullptr, nullptr, Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics::OWExperienceData_eventGetDestructionThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics::OWExperienceData_eventGetDestructionThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWExperienceData::execGetDestructionThreshold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDestructionThreshold();
	P_NATIVE_END;
}
// End Class UOWExperienceData Function GetDestructionThreshold

// Begin Class UOWExperienceData
void UOWExperienceData::StaticRegisterNativesUOWExperienceData()
{
	UClass* Class = UOWExperienceData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentProductionRate", &UOWExperienceData::execGetCurrentProductionRate },
		{ "GetDegradationThreshold", &UOWExperienceData::execGetDegradationThreshold },
		{ "GetDestructionThreshold", &UOWExperienceData::execGetDestructionThreshold },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWExperienceData);
UClass* Z_Construct_UClass_UOWExperienceData_NoRegister()
{
	return UOWExperienceData::StaticClass();
}
struct Z_Construct_UClass_UOWExperienceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class used for Open World experiences.\n * This class should really not be used but instead subclassed for specific use cases, though it does have the essential information for most experiences. \n */" },
#endif
		{ "IncludePath", "OpenWorld/Data/OWExperienceData.h" },
		{ "ModuleRelativePath", "OpenWorld/Data/OWExperienceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class used for Open World experiences.\nThis class should really not be used but instead subclassed for specific use cases, though it does have the essential information for most experiences." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultExperienceState_MetaData[] = {
		{ "Category", "Astral|Open World Experience|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The experience's default state to be used for initial spawning or modifications.\n" },
#endif
		{ "ModuleRelativePath", "OpenWorld/Data/OWExperienceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The experience's default state to be used for initial spawning or modifications." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultExperienceHeath_MetaData[] = {
		{ "Category", "Astral|Open World Experience|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The experience's health is a global value that is influenced by the NPCs or locations tied to the experience. Losing health will result in slower production speeds or complete destruction of the experience. \n" },
#endif
		{ "ModuleRelativePath", "OpenWorld/Data/OWExperienceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The experience's health is a global value that is influenced by the NPCs or locations tied to the experience. Losing health will result in slower production speeds or complete destruction of the experience." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceDegradationThreshold_MetaData[] = {
		{ "Category", "Astral|Open World Experience|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The percent at which the experience begins to degrade in production speed. Only applicable to some experience types. \n" },
#endif
		{ "ModuleRelativePath", "OpenWorld/Data/OWExperienceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The percent at which the experience begins to degrade in production speed. Only applicable to some experience types." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceDegradationAmount_MetaData[] = {
		{ "Category", "Astral|Open World Experience|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The amount production drops after the degradation threshold is met. Usually a percent <.99 of the production rate. \n" },
#endif
		{ "ModuleRelativePath", "OpenWorld/Data/OWExperienceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount production drops after the degradation threshold is met. Usually a percent <.99 of the production rate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceDestructionThreshold_MetaData[] = {
		{ "Category", "Astral|Open World Experience|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The percent at which the experience totally fails and results in a death/destroyed state. This would result in additional behaviors designated by the experience. \n" },
#endif
		{ "ModuleRelativePath", "OpenWorld/Data/OWExperienceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The percent at which the experience totally fails and results in a death/destroyed state. This would result in additional behaviors designated by the experience." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceProductionRate_MetaData[] = {
		{ "Category", "Astral|Open World Experience|Production" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The rate at which materials are generated by this experience, only applicable to some. Default rate is 100% unless changed.\n" },
#endif
		{ "ModuleRelativePath", "OpenWorld/Data/OWExperienceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rate at which materials are generated by this experience, only applicable to some. Default rate is 100% unless changed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultExperienceState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultExperienceHeath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExperienceDegradationThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExperienceDegradationAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExperienceDestructionThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExperienceProductionRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWExperienceData_GetCurrentProductionRate, "GetCurrentProductionRate" }, // 3351928397
		{ &Z_Construct_UFunction_UOWExperienceData_GetDegradationThreshold, "GetDegradationThreshold" }, // 1452065241
		{ &Z_Construct_UFunction_UOWExperienceData_GetDestructionThreshold, "GetDestructionThreshold" }, // 3350734468
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWExperienceData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWExperienceData_Statics::NewProp_DefaultExperienceState = { "DefaultExperienceState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWExperienceData, DefaultExperienceState), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultExperienceState_MetaData), NewProp_DefaultExperienceState_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWExperienceData_Statics::NewProp_DefaultExperienceHeath = { "DefaultExperienceHeath", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWExperienceData, DefaultExperienceHeath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultExperienceHeath_MetaData), NewProp_DefaultExperienceHeath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWExperienceData_Statics::NewProp_ExperienceDegradationThreshold = { "ExperienceDegradationThreshold", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWExperienceData, ExperienceDegradationThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceDegradationThreshold_MetaData), NewProp_ExperienceDegradationThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWExperienceData_Statics::NewProp_ExperienceDegradationAmount = { "ExperienceDegradationAmount", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWExperienceData, ExperienceDegradationAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceDegradationAmount_MetaData), NewProp_ExperienceDegradationAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWExperienceData_Statics::NewProp_ExperienceDestructionThreshold = { "ExperienceDestructionThreshold", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWExperienceData, ExperienceDestructionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceDestructionThreshold_MetaData), NewProp_ExperienceDestructionThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWExperienceData_Statics::NewProp_ExperienceProductionRate = { "ExperienceProductionRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWExperienceData, ExperienceProductionRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceProductionRate_MetaData), NewProp_ExperienceProductionRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWExperienceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWExperienceData_Statics::NewProp_DefaultExperienceState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWExperienceData_Statics::NewProp_DefaultExperienceHeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWExperienceData_Statics::NewProp_ExperienceDegradationThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWExperienceData_Statics::NewProp_ExperienceDegradationAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWExperienceData_Statics::NewProp_ExperienceDestructionThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWExperienceData_Statics::NewProp_ExperienceProductionRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWExperienceData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWExperienceData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWExperienceData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWExperienceData_Statics::ClassParams = {
	&UOWExperienceData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWExperienceData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWExperienceData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWExperienceData_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWExperienceData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWExperienceData()
{
	if (!Z_Registration_Info_UClass_UOWExperienceData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWExperienceData.OuterSingleton, Z_Construct_UClass_UOWExperienceData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWExperienceData.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UOWExperienceData>()
{
	return UOWExperienceData::StaticClass();
}
UOWExperienceData::UOWExperienceData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWExperienceData);
UOWExperienceData::~UOWExperienceData() {}
// End Class UOWExperienceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWExperienceData, UOWExperienceData::StaticClass, TEXT("UOWExperienceData"), &Z_Registration_Info_UClass_UOWExperienceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWExperienceData), 3219041792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h_3884830902(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_OpenWorld_Data_OWExperienceData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
