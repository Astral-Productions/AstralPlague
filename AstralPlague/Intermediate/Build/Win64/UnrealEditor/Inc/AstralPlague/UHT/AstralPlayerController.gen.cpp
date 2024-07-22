// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Player/AstralPlayerController.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPlayerController() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlagueCharacter_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerController();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerController_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerState_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralDamageTextWidgetComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralHUDWidget_NoRegister();
COMMONGAME_API UClass* Z_Construct_UClass_ACommonPlayerController();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class AAstralPlayerController Function GetAstralAbilitySystemComponent
struct Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics
{
	struct AstralPlayerController_eventGetAstralAbilitySystemComponent_Parms
	{
		UAstralAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|PlayerController" },
		{ "ModuleRelativePath", "Player/AstralPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerController_eventGetAstralAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerController, nullptr, "GetAstralAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics::AstralPlayerController_eventGetAstralAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics::AstralPlayerController_eventGetAstralAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerController::execGetAstralAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAstralAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class AAstralPlayerController Function GetAstralAbilitySystemComponent

// Begin Class AAstralPlayerController Function GetAstralPlayerState
struct Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics
{
	struct AstralPlayerController_eventGetAstralPlayerState_Parms
	{
		AAstralPlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|PlayerController" },
		{ "ModuleRelativePath", "Player/AstralPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerController_eventGetAstralPlayerState_Parms, ReturnValue), Z_Construct_UClass_AAstralPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerController, nullptr, "GetAstralPlayerState", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics::AstralPlayerController_eventGetAstralPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics::AstralPlayerController_eventGetAstralPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerController::execGetAstralPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AAstralPlayerState**)Z_Param__Result=P_THIS->GetAstralPlayerState();
	P_NATIVE_END;
}
// End Class AAstralPlayerController Function GetAstralPlayerState

// Begin Class AAstralPlayerController Function GetIsAutoRunning
struct Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics
{
	struct AstralPlayerController_eventGetIsAutoRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character" },
		{ "ModuleRelativePath", "Player/AstralPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AstralPlayerController_eventGetIsAutoRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AstralPlayerController_eventGetIsAutoRunning_Parms), &Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerController, nullptr, "GetIsAutoRunning", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::AstralPlayerController_eventGetIsAutoRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::AstralPlayerController_eventGetIsAutoRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerController::execGetIsAutoRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsAutoRunning();
	P_NATIVE_END;
}
// End Class AAstralPlayerController Function GetIsAutoRunning

// Begin Class AAstralPlayerController Function SetIsAutoRunning
struct Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics
{
	struct AstralPlayerController_eventSetIsAutoRunning_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~End of APlayerController interface\n" },
#endif
		{ "ModuleRelativePath", "Player/AstralPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((AstralPlayerController_eventSetIsAutoRunning_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AstralPlayerController_eventSetIsAutoRunning_Parms), &Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerController, nullptr, "SetIsAutoRunning", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::AstralPlayerController_eventSetIsAutoRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::AstralPlayerController_eventSetIsAutoRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerController::execSetIsAutoRunning)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsAutoRunning(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class AAstralPlayerController Function SetIsAutoRunning

// Begin Class AAstralPlayerController Function SetRespawnCountdown
struct AstralPlayerController_eventSetRespawnCountdown_Parms
{
	float RespawnTimeRemaining;
};
static FName NAME_AAstralPlayerController_SetRespawnCountdown = FName(TEXT("SetRespawnCountdown"));
void AAstralPlayerController::SetRespawnCountdown(float RespawnTimeRemaining)
{
	AstralPlayerController_eventSetRespawnCountdown_Parms Parms;
	Parms.RespawnTimeRemaining=RespawnTimeRemaining;
	ProcessEvent(FindFunctionChecked(NAME_AAstralPlayerController_SetRespawnCountdown),&Parms);
}
struct Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simple way to RPC to the client the countdown until they respawn from the GameMode. Will be latency amount of out sync with the Server.\n" },
#endif
		{ "ModuleRelativePath", "Player/AstralPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple way to RPC to the client the countdown until they respawn from the GameMode. Will be latency amount of out sync with the Server." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTimeRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown_Statics::NewProp_RespawnTimeRemaining = { "RespawnTimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerController_eventSetRespawnCountdown_Parms, RespawnTimeRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown_Statics::NewProp_RespawnTimeRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerController, nullptr, "SetRespawnCountdown", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown_Statics::PropPointers), sizeof(AstralPlayerController_eventSetRespawnCountdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralPlayerController_eventSetRespawnCountdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerController::execSetRespawnCountdown)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RespawnTimeRemaining);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->SetRespawnCountdown_Validate(Z_Param_RespawnTimeRemaining))
	{
		RPC_ValidateFailed(TEXT("SetRespawnCountdown_Validate"));
		return;
	}
	P_THIS->SetRespawnCountdown_Implementation(Z_Param_RespawnTimeRemaining);
	P_NATIVE_END;
}
// End Class AAstralPlayerController Function SetRespawnCountdown

// Begin Class AAstralPlayerController Function ShowDamageNumber
struct AstralPlayerController_eventShowDamageNumber_Parms
{
	float DamageAmount;
	AAstralPlagueCharacter* TargetCharacter;
};
static FName NAME_AAstralPlayerController_ShowDamageNumber = FName(TEXT("ShowDamageNumber"));
void AAstralPlayerController::ShowDamageNumber(float DamageAmount, AAstralPlagueCharacter* TargetCharacter)
{
	AstralPlayerController_eventShowDamageNumber_Parms Parms;
	Parms.DamageAmount=DamageAmount;
	Parms.TargetCharacter=TargetCharacter;
	ProcessEvent(FindFunctionChecked(NAME_AAstralPlayerController_ShowDamageNumber),&Parms);
}
struct Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/AstralPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerController_eventShowDamageNumber_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerController_eventShowDamageNumber_Parms, TargetCharacter), Z_Construct_UClass_AAstralPlagueCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics::NewProp_TargetCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerController, nullptr, "ShowDamageNumber", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics::PropPointers), sizeof(AstralPlayerController_eventShowDamageNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralPlayerController_eventShowDamageNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerController::execShowDamageNumber)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_GET_OBJECT(AAstralPlagueCharacter,Z_Param_TargetCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ShowDamageNumber_Validate(Z_Param_DamageAmount,Z_Param_TargetCharacter))
	{
		RPC_ValidateFailed(TEXT("ShowDamageNumber_Validate"));
		return;
	}
	P_THIS->ShowDamageNumber_Implementation(Z_Param_DamageAmount,Z_Param_TargetCharacter);
	P_NATIVE_END;
}
// End Class AAstralPlayerController Function ShowDamageNumber

// Begin Class AAstralPlayerController
void AAstralPlayerController::StaticRegisterNativesAAstralPlayerController()
{
	UClass* Class = AAstralPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAstralAbilitySystemComponent", &AAstralPlayerController::execGetAstralAbilitySystemComponent },
		{ "GetAstralPlayerState", &AAstralPlayerController::execGetAstralPlayerState },
		{ "GetIsAutoRunning", &AAstralPlayerController::execGetIsAutoRunning },
		{ "SetIsAutoRunning", &AAstralPlayerController::execSetIsAutoRunning },
		{ "SetRespawnCountdown", &AAstralPlayerController::execSetRespawnCountdown },
		{ "ShowDamageNumber", &AAstralPlayerController::execShowDamageNumber },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstralPlayerController);
UClass* Z_Construct_UClass_AAstralPlayerController_NoRegister()
{
	return AAstralPlayerController::StaticClass();
}
struct Z_Construct_UClass_AAstralPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/AstralPlayerController.h" },
		{ "ModuleRelativePath", "Player/AstralPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageNumberClass_MetaData[] = {
		{ "Category", "GASDocumentation|UI" },
		{ "ModuleRelativePath", "Player/AstralPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIHUDWidgetClass_MetaData[] = {
		{ "Category", "GASDocumentation|UI" },
		{ "ModuleRelativePath", "Player/AstralPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIHUDWidget_MetaData[] = {
		{ "Category", "GASDocumentation|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/AstralPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSeenPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Player/AstralPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageNumberClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UIHUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIHUDWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastSeenPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAstralPlayerController_GetAstralAbilitySystemComponent, "GetAstralAbilitySystemComponent" }, // 3170647323
		{ &Z_Construct_UFunction_AAstralPlayerController_GetAstralPlayerState, "GetAstralPlayerState" }, // 1101114439
		{ &Z_Construct_UFunction_AAstralPlayerController_GetIsAutoRunning, "GetIsAutoRunning" }, // 188516689
		{ &Z_Construct_UFunction_AAstralPlayerController_SetIsAutoRunning, "SetIsAutoRunning" }, // 2638441058
		{ &Z_Construct_UFunction_AAstralPlayerController_SetRespawnCountdown, "SetRespawnCountdown" }, // 375433145
		{ &Z_Construct_UFunction_AAstralPlayerController_ShowDamageNumber, "ShowDamageNumber" }, // 4235904982
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstralPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAstralPlayerController_Statics::NewProp_DamageNumberClass = { "DamageNumberClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerController, DamageNumberClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAstralDamageTextWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageNumberClass_MetaData), NewProp_DamageNumberClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAstralPlayerController_Statics::NewProp_UIHUDWidgetClass = { "UIHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerController, UIHUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAstralHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIHUDWidgetClass_MetaData), NewProp_UIHUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlayerController_Statics::NewProp_UIHUDWidget = { "UIHUDWidget", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerController, UIHUDWidget), Z_Construct_UClass_UAstralHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIHUDWidget_MetaData), NewProp_UIHUDWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlayerController_Statics::NewProp_LastSeenPlayerState = { "LastSeenPlayerState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerController, LastSeenPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSeenPlayerState_MetaData), NewProp_LastSeenPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAstralPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerController_Statics::NewProp_DamageNumberClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerController_Statics::NewProp_UIHUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerController_Statics::NewProp_UIHUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerController_Statics::NewProp_LastSeenPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAstralPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACommonPlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstralPlayerController_Statics::ClassParams = {
	&AAstralPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAstralPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstralPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstralPlayerController()
{
	if (!Z_Registration_Info_UClass_AAstralPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstralPlayerController.OuterSingleton, Z_Construct_UClass_AAstralPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstralPlayerController.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<AAstralPlayerController>()
{
	return AAstralPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstralPlayerController);
AAstralPlayerController::~AAstralPlayerController() {}
// End Class AAstralPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstralPlayerController, AAstralPlayerController::StaticClass, TEXT("AAstralPlayerController"), &Z_Registration_Info_UClass_AAstralPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstralPlayerController), 4031264227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h_2037541761(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
