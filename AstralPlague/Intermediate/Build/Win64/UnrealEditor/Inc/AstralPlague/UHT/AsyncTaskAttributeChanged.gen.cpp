// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/AsyncTaskAttributeChanged.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncTaskAttributeChanged() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAsyncTaskAttributeChanged();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAsyncTaskAttributeChanged_NoRegister();
ASTRALPLAGUE_API UFunction* Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Delegate FOnAttributeChanged
struct Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics
{
	struct _Script_AstralPlague_eventOnAttributeChanged_Parms
	{
		FGameplayAttribute Attribute;
		float NewValue;
		float OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AsyncTaskAttributeChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AstralPlague_eventOnAttributeChanged_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AstralPlague_eventOnAttributeChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AstralPlague_eventOnAttributeChanged_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AstralPlague, nullptr, "OnAttributeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::_Script_AstralPlague_eventOnAttributeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::_Script_AstralPlague_eventOnAttributeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, FGameplayAttribute Attribute, float NewValue, float OldValue)
{
	struct _Script_AstralPlague_eventOnAttributeChanged_Parms
	{
		FGameplayAttribute Attribute;
		float NewValue;
		float OldValue;
	};
	_Script_AstralPlague_eventOnAttributeChanged_Parms Parms;
	Parms.Attribute=Attribute;
	Parms.NewValue=NewValue;
	Parms.OldValue=OldValue;
	OnAttributeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAttributeChanged

// Begin Class UAsyncTaskAttributeChanged Function EndTask
struct Z_Construct_UFunction_UAsyncTaskAttributeChanged_EndTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// You must call this function manually when you want the AsyncTask to end.\n// For UMG Widgets, you would call it in the Widget's Destruct event.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AsyncTaskAttributeChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You must call this function manually when you want the AsyncTask to end.\nFor UMG Widgets, you would call it in the Widget's Destruct event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskAttributeChanged_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskAttributeChanged, nullptr, "EndTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskAttributeChanged_EndTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskAttributeChanged_EndTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAsyncTaskAttributeChanged_EndTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskAttributeChanged_EndTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskAttributeChanged::execEndTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTask();
	P_NATIVE_END;
}
// End Class UAsyncTaskAttributeChanged Function EndTask

// Begin Class UAsyncTaskAttributeChanged Function ListenForAttributeChange
struct Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics
{
	struct AsyncTaskAttributeChanged_eventListenForAttributeChange_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		FGameplayAttribute Attribute;
		UAsyncTaskAttributeChanged* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Listens for an attribute changing.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AsyncTaskAttributeChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listens for an attribute changing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskAttributeChanged_eventListenForAttributeChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskAttributeChanged_eventListenForAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskAttributeChanged_eventListenForAttributeChange_Parms, ReturnValue), Z_Construct_UClass_UAsyncTaskAttributeChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskAttributeChanged, nullptr, "ListenForAttributeChange", nullptr, nullptr, Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::AsyncTaskAttributeChanged_eventListenForAttributeChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::AsyncTaskAttributeChanged_eventListenForAttributeChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskAttributeChanged::execListenForAttributeChange)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncTaskAttributeChanged**)Z_Param__Result=UAsyncTaskAttributeChanged::ListenForAttributeChange(Z_Param_AbilitySystemComponent,Z_Param_Attribute);
	P_NATIVE_END;
}
// End Class UAsyncTaskAttributeChanged Function ListenForAttributeChange

// Begin Class UAsyncTaskAttributeChanged Function ListenForAttributesChange
struct Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics
{
	struct AsyncTaskAttributeChanged_eventListenForAttributesChange_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		TArray<FGameplayAttribute> Attributes;
		UAsyncTaskAttributeChanged* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Listens for an attribute changing.\n// Version that takes in an array of Attributes. Check the Attribute output for which Attribute changed.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AsyncTaskAttributeChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listens for an attribute changing.\nVersion that takes in an array of Attributes. Check the Attribute output for which Attribute changed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskAttributeChanged_eventListenForAttributesChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskAttributeChanged_eventListenForAttributesChange_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskAttributeChanged_eventListenForAttributesChange_Parms, ReturnValue), Z_Construct_UClass_UAsyncTaskAttributeChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskAttributeChanged, nullptr, "ListenForAttributesChange", nullptr, nullptr, Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::AsyncTaskAttributeChanged_eventListenForAttributesChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::AsyncTaskAttributeChanged_eventListenForAttributesChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskAttributeChanged::execListenForAttributesChange)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
	P_GET_TARRAY(FGameplayAttribute,Z_Param_Attributes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncTaskAttributeChanged**)Z_Param__Result=UAsyncTaskAttributeChanged::ListenForAttributesChange(Z_Param_AbilitySystemComponent,Z_Param_Attributes);
	P_NATIVE_END;
}
// End Class UAsyncTaskAttributeChanged Function ListenForAttributesChange

// Begin Class UAsyncTaskAttributeChanged
void UAsyncTaskAttributeChanged::StaticRegisterNativesUAsyncTaskAttributeChanged()
{
	UClass* Class = UAsyncTaskAttributeChanged::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndTask", &UAsyncTaskAttributeChanged::execEndTask },
		{ "ListenForAttributeChange", &UAsyncTaskAttributeChanged::execListenForAttributeChange },
		{ "ListenForAttributesChange", &UAsyncTaskAttributeChanged::execListenForAttributesChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncTaskAttributeChanged);
UClass* Z_Construct_UClass_UAsyncTaskAttributeChanged_NoRegister()
{
	return UAsyncTaskAttributeChanged::StaticClass();
}
struct Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint node to automatically register a listener for all attribute changes in an AbilitySystemComponent.\n * Useful to use in UI.\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AbilitySystem/AsyncTaskAttributeChanged.h" },
		{ "ModuleRelativePath", "AbilitySystem/AsyncTaskAttributeChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint node to automatically register a listener for all attribute changes in an AbilitySystemComponent.\nUseful to use in UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttributeChanged_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AsyncTaskAttributeChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AsyncTaskAttributeChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttributeChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncTaskAttributeChanged_EndTask, "EndTask" }, // 3358676481
		{ &Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributeChange, "ListenForAttributeChange" }, // 3572276868
		{ &Z_Construct_UFunction_UAsyncTaskAttributeChanged_ListenForAttributesChange, "ListenForAttributesChange" }, // 2518719405
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTaskAttributeChanged>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::NewProp_OnAttributeChanged = { "OnAttributeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskAttributeChanged, OnAttributeChanged), Z_Construct_UDelegateFunction_AstralPlague_OnAttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttributeChanged_MetaData), NewProp_OnAttributeChanged_MetaData) }; // 2525825006
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskAttributeChanged, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::NewProp_OnAttributeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::ClassParams = {
	&UAsyncTaskAttributeChanged::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncTaskAttributeChanged()
{
	if (!Z_Registration_Info_UClass_UAsyncTaskAttributeChanged.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTaskAttributeChanged.OuterSingleton, Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncTaskAttributeChanged.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAsyncTaskAttributeChanged>()
{
	return UAsyncTaskAttributeChanged::StaticClass();
}
UAsyncTaskAttributeChanged::UAsyncTaskAttributeChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTaskAttributeChanged);
UAsyncTaskAttributeChanged::~UAsyncTaskAttributeChanged() {}
// End Class UAsyncTaskAttributeChanged

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncTaskAttributeChanged, UAsyncTaskAttributeChanged::StaticClass, TEXT("UAsyncTaskAttributeChanged"), &Z_Registration_Info_UClass_UAsyncTaskAttributeChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTaskAttributeChanged), 3562824000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_1853199210(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AsyncTaskAttributeChanged_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
