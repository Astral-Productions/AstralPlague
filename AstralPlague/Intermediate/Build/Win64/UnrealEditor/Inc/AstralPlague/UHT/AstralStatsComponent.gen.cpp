// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Components/AstralStatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralStatsComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralStatsComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralStatsComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister();
ASTRALPLAGUE_API UEnum* Z_Construct_UEnum_AstralPlague_EAstralDeathState();
ASTRALPLAGUE_API UFunction* Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature();
ASTRALPLAGUE_API UFunction* Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Delegate FAstralHealth_DeathEvent
struct Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics
{
	struct _Script_AstralPlague_eventAstralHealth_DeathEvent_Parms
	{
		AActor* OwningActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AstralPlague_eventAstralHealth_DeathEvent_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics::NewProp_OwningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AstralPlague, nullptr, "AstralHealth_DeathEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics::_Script_AstralPlague_eventAstralHealth_DeathEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics::_Script_AstralPlague_eventAstralHealth_DeathEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAstralHealth_DeathEvent_DelegateWrapper(const FMulticastScriptDelegate& AstralHealth_DeathEvent, AActor* OwningActor)
{
	struct _Script_AstralPlague_eventAstralHealth_DeathEvent_Parms
	{
		AActor* OwningActor;
	};
	_Script_AstralPlague_eventAstralHealth_DeathEvent_Parms Parms;
	Parms.OwningActor=OwningActor;
	AstralHealth_DeathEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAstralHealth_DeathEvent

// Begin Delegate FAstralHealth_AttributeChanged
struct Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics
{
	struct _Script_AstralPlague_eventAstralHealth_AttributeChanged_Parms
	{
		UAstralStatsComponent* HealthComponent;
		float OldValue;
		float NewValue;
		AActor* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AstralPlague_eventAstralHealth_AttributeChanged_Parms, HealthComponent), Z_Construct_UClass_UAstralStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AstralPlague_eventAstralHealth_AttributeChanged_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AstralPlague_eventAstralHealth_AttributeChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AstralPlague_eventAstralHealth_AttributeChanged_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AstralPlague, nullptr, "AstralHealth_AttributeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::_Script_AstralPlague_eventAstralHealth_AttributeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::_Script_AstralPlague_eventAstralHealth_AttributeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAstralHealth_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& AstralHealth_AttributeChanged, UAstralStatsComponent* HealthComponent, float OldValue, float NewValue, AActor* Instigator)
{
	struct _Script_AstralPlague_eventAstralHealth_AttributeChanged_Parms
	{
		UAstralStatsComponent* HealthComponent;
		float OldValue;
		float NewValue;
		AActor* Instigator;
	};
	_Script_AstralPlague_eventAstralHealth_AttributeChanged_Parms Parms;
	Parms.HealthComponent=HealthComponent;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	Parms.Instigator=Instigator;
	AstralHealth_AttributeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAstralHealth_AttributeChanged

// Begin Enum EAstralDeathState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAstralDeathState;
static UEnum* EAstralDeathState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAstralDeathState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAstralDeathState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AstralPlague_EAstralDeathState, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("EAstralDeathState"));
	}
	return Z_Registration_Info_UEnum_EAstralDeathState.OuterSingleton;
}
template<> ASTRALPLAGUE_API UEnum* StaticEnum<EAstralDeathState>()
{
	return EAstralDeathState_StaticEnum();
}
struct Z_Construct_UEnum_AstralPlague_EAstralDeathState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EAstralDeathState\n *\n *\x09""Defines current state of death.\n */" },
#endif
		{ "DeathFinished.Name", "EAstralDeathState::DeathFinished" },
		{ "DeathStarted.Name", "EAstralDeathState::DeathStarted" },
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
		{ "NotDead.Name", "EAstralDeathState::NotDead" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EAstralDeathState\n\n    Defines current state of death." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAstralDeathState::NotDead", (int64)EAstralDeathState::NotDead },
		{ "EAstralDeathState::DeathStarted", (int64)EAstralDeathState::DeathStarted },
		{ "EAstralDeathState::DeathFinished", (int64)EAstralDeathState::DeathFinished },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AstralPlague_EAstralDeathState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	"EAstralDeathState",
	"EAstralDeathState",
	Z_Construct_UEnum_AstralPlague_EAstralDeathState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AstralPlague_EAstralDeathState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AstralPlague_EAstralDeathState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AstralPlague_EAstralDeathState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AstralPlague_EAstralDeathState()
{
	if (!Z_Registration_Info_UEnum_EAstralDeathState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAstralDeathState.InnerSingleton, Z_Construct_UEnum_AstralPlague_EAstralDeathState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAstralDeathState.InnerSingleton;
}
// End Enum EAstralDeathState

// Begin Class UAstralStatsComponent Function FindHealthComponent
struct Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics
{
	struct AstralStatsComponent_eventFindHealthComponent_Parms
	{
		const AActor* Actor;
		UAstralStatsComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the health component if one exists on the specified actor.\n" },
#endif
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the health component if one exists on the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralStatsComponent_eventFindHealthComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralStatsComponent_eventFindHealthComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralStatsComponent, nullptr, "FindHealthComponent", nullptr, nullptr, Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::AstralStatsComponent_eventFindHealthComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::AstralStatsComponent_eventFindHealthComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralStatsComponent::execFindHealthComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralStatsComponent**)Z_Param__Result=UAstralStatsComponent::FindHealthComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UAstralStatsComponent Function FindHealthComponent

// Begin Class UAstralStatsComponent Function GetDeathState
struct Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics
{
	struct AstralStatsComponent_eventGetDeathState_Parms
	{
		EAstralDeathState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Health" },
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralStatsComponent_eventGetDeathState_Parms, ReturnValue), Z_Construct_UEnum_AstralPlague_EAstralDeathState, METADATA_PARAMS(0, nullptr) }; // 3287210796
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralStatsComponent, nullptr, "GetDeathState", nullptr, nullptr, Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::AstralStatsComponent_eventGetDeathState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::AstralStatsComponent_eventGetDeathState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralStatsComponent_GetDeathState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralStatsComponent_GetDeathState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralStatsComponent::execGetDeathState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAstralDeathState*)Z_Param__Result=P_THIS->GetDeathState();
	P_NATIVE_END;
}
// End Class UAstralStatsComponent Function GetDeathState

// Begin Class UAstralStatsComponent Function GetHealth
struct Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics
{
	struct AstralStatsComponent_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current health value.\n" },
#endif
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current health value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralStatsComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralStatsComponent, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics::AstralStatsComponent_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics::AstralStatsComponent_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralStatsComponent_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralStatsComponent_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralStatsComponent::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class UAstralStatsComponent Function GetHealth

// Begin Class UAstralStatsComponent Function GetHealthNormalized
struct Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics
{
	struct AstralStatsComponent_eventGetHealthNormalized_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current health in the range [0.0, 1.0].\n" },
#endif
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current health in the range [0.0, 1.0]." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralStatsComponent_eventGetHealthNormalized_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralStatsComponent, nullptr, "GetHealthNormalized", nullptr, nullptr, Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics::AstralStatsComponent_eventGetHealthNormalized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics::AstralStatsComponent_eventGetHealthNormalized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralStatsComponent::execGetHealthNormalized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthNormalized();
	P_NATIVE_END;
}
// End Class UAstralStatsComponent Function GetHealthNormalized

// Begin Class UAstralStatsComponent Function GetMaxHealth
struct Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics
{
	struct AstralStatsComponent_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current maximum health value.\n" },
#endif
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current maximum health value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralStatsComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralStatsComponent, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics::AstralStatsComponent_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics::AstralStatsComponent_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralStatsComponent::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class UAstralStatsComponent Function GetMaxHealth

// Begin Class UAstralStatsComponent Function InitializeWithAbilitySystem
struct Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics
{
	struct AstralStatsComponent_eventInitializeWithAbilitySystem_Parms
	{
		UAstralAbilitySystemComponent* InASC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize the component using an ability system component.\n" },
#endif
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize the component using an ability system component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC = { "InASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralStatsComponent_eventInitializeWithAbilitySystem_Parms, InASC), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InASC_MetaData), NewProp_InASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralStatsComponent, nullptr, "InitializeWithAbilitySystem", nullptr, nullptr, Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::AstralStatsComponent_eventInitializeWithAbilitySystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::AstralStatsComponent_eventInitializeWithAbilitySystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralStatsComponent::execInitializeWithAbilitySystem)
{
	P_GET_OBJECT(UAstralAbilitySystemComponent,Z_Param_InASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeWithAbilitySystem(Z_Param_InASC);
	P_NATIVE_END;
}
// End Class UAstralStatsComponent Function InitializeWithAbilitySystem

// Begin Class UAstralStatsComponent Function IsDeadOrDying
struct Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics
{
	struct AstralStatsComponent_eventIsDeadOrDying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Health" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AstralStatsComponent_eventIsDeadOrDying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AstralStatsComponent_eventIsDeadOrDying_Parms), &Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralStatsComponent, nullptr, "IsDeadOrDying", nullptr, nullptr, Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::AstralStatsComponent_eventIsDeadOrDying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::AstralStatsComponent_eventIsDeadOrDying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralStatsComponent::execIsDeadOrDying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDeadOrDying();
	P_NATIVE_END;
}
// End Class UAstralStatsComponent Function IsDeadOrDying

// Begin Class UAstralStatsComponent Function OnRep_DeathState
struct Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics
{
	struct AstralStatsComponent_eventOnRep_DeathState_Parms
	{
		EAstralDeathState OldDeathState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldDeathState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldDeathState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::NewProp_OldDeathState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::NewProp_OldDeathState = { "OldDeathState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralStatsComponent_eventOnRep_DeathState_Parms, OldDeathState), Z_Construct_UEnum_AstralPlague_EAstralDeathState, METADATA_PARAMS(0, nullptr) }; // 3287210796
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::NewProp_OldDeathState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::NewProp_OldDeathState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralStatsComponent, nullptr, "OnRep_DeathState", nullptr, nullptr, Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::AstralStatsComponent_eventOnRep_DeathState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::AstralStatsComponent_eventOnRep_DeathState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralStatsComponent::execOnRep_DeathState)
{
	P_GET_ENUM(EAstralDeathState,Z_Param_OldDeathState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DeathState(EAstralDeathState(Z_Param_OldDeathState));
	P_NATIVE_END;
}
// End Class UAstralStatsComponent Function OnRep_DeathState

// Begin Class UAstralStatsComponent Function UninitializeFromAbilitySystem
struct Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uninitialize the component, clearing any references to the ability system.\n" },
#endif
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uninitialize the component, clearing any references to the ability system." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralStatsComponent, nullptr, "UninitializeFromAbilitySystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralStatsComponent::execUninitializeFromAbilitySystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UninitializeFromAbilitySystem();
	P_NATIVE_END;
}
// End Class UAstralStatsComponent Function UninitializeFromAbilitySystem

// Begin Class UAstralStatsComponent
void UAstralStatsComponent::StaticRegisterNativesUAstralStatsComponent()
{
	UClass* Class = UAstralStatsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindHealthComponent", &UAstralStatsComponent::execFindHealthComponent },
		{ "GetDeathState", &UAstralStatsComponent::execGetDeathState },
		{ "GetHealth", &UAstralStatsComponent::execGetHealth },
		{ "GetHealthNormalized", &UAstralStatsComponent::execGetHealthNormalized },
		{ "GetMaxHealth", &UAstralStatsComponent::execGetMaxHealth },
		{ "InitializeWithAbilitySystem", &UAstralStatsComponent::execInitializeWithAbilitySystem },
		{ "IsDeadOrDying", &UAstralStatsComponent::execIsDeadOrDying },
		{ "OnRep_DeathState", &UAstralStatsComponent::execOnRep_DeathState },
		{ "UninitializeFromAbilitySystem", &UAstralStatsComponent::execUninitializeFromAbilitySystem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralStatsComponent);
UClass* Z_Construct_UClass_UAstralStatsComponent_NoRegister()
{
	return UAstralStatsComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralStatsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAstralHealthComponent\n *\n *\x09""An actor component used to handle anything related to stats/health.\n */" },
#endif
		{ "IncludePath", "Components/AstralStatsComponent.h" },
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAstralHealthComponent\n\n    An actor component used to handle anything related to stats/health." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate fired when the health value has changed. This is called on the client but the instigator may not be valid\n" },
#endif
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when the health value has changed. This is called on the client but the instigator may not be valid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate fired when the max health value has changed. This is called on the client but the instigator may not be valid\n" },
#endif
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when the max health value has changed. This is called on the client but the instigator may not be valid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeathStarted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate fired when the death sequence has started.\n" },
#endif
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when the death sequence has started." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeathFinished_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate fired when the death sequence has finished.\n" },
#endif
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when the death sequence has finished." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability system used by this component.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability system used by this component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatSet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health set used by this component.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health set used by this component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated state used to handle dying.\n" },
#endif
		{ "ModuleRelativePath", "Components/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated state used to handle dying." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatSet;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeathState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeathState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent, "FindHealthComponent" }, // 76899615
		{ &Z_Construct_UFunction_UAstralStatsComponent_GetDeathState, "GetDeathState" }, // 3030022737
		{ &Z_Construct_UFunction_UAstralStatsComponent_GetHealth, "GetHealth" }, // 2324053573
		{ &Z_Construct_UFunction_UAstralStatsComponent_GetHealthNormalized, "GetHealthNormalized" }, // 680970363
		{ &Z_Construct_UFunction_UAstralStatsComponent_GetMaxHealth, "GetMaxHealth" }, // 2443512166
		{ &Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem, "InitializeWithAbilitySystem" }, // 1622629003
		{ &Z_Construct_UFunction_UAstralStatsComponent_IsDeadOrDying, "IsDeadOrDying" }, // 3175348520
		{ &Z_Construct_UFunction_UAstralStatsComponent_OnRep_DeathState, "OnRep_DeathState" }, // 2433254415
		{ &Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem, "UninitializeFromAbilitySystem" }, // 3965101428
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralStatsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralStatsComponent, OnHealthChanged), Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 3379475926
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralStatsComponent, OnMaxHealthChanged), Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxHealthChanged_MetaData), NewProp_OnMaxHealthChanged_MetaData) }; // 3379475926
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_OnDeathStarted = { "OnDeathStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralStatsComponent, OnDeathStarted), Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeathStarted_MetaData), NewProp_OnDeathStarted_MetaData) }; // 2577562279
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_OnDeathFinished = { "OnDeathFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralStatsComponent, OnDeathFinished), Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeathFinished_MetaData), NewProp_OnDeathFinished_MetaData) }; // 2577562279
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralStatsComponent, AbilitySystemComponent), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_StatSet = { "StatSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralStatsComponent, StatSet), Z_Construct_UClass_UCharacterAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatSet_MetaData), NewProp_StatSet_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_DeathState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_DeathState = { "DeathState", "OnRep_DeathState", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralStatsComponent, DeathState), Z_Construct_UEnum_AstralPlague_EAstralDeathState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathState_MetaData), NewProp_DeathState_MetaData) }; // 3287210796
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralStatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_OnMaxHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_OnDeathStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_OnDeathFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_StatSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_DeathState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_DeathState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralStatsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralStatsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralStatsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralStatsComponent_Statics::ClassParams = {
	&UAstralStatsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAstralStatsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralStatsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralStatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralStatsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralStatsComponent()
{
	if (!Z_Registration_Info_UClass_UAstralStatsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralStatsComponent.OuterSingleton, Z_Construct_UClass_UAstralStatsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralStatsComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralStatsComponent>()
{
	return UAstralStatsComponent::StaticClass();
}
void UAstralStatsComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_DeathState(TEXT("DeathState"));
	const bool bIsValid = true
		&& Name_DeathState == ClassReps[(int32)ENetFields_Private::DeathState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAstralStatsComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralStatsComponent);
UAstralStatsComponent::~UAstralStatsComponent() {}
// End Class UAstralStatsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAstralDeathState_StaticEnum, TEXT("EAstralDeathState"), &Z_Registration_Info_UEnum_EAstralDeathState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3287210796U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralStatsComponent, UAstralStatsComponent::StaticClass, TEXT("UAstralStatsComponent"), &Z_Registration_Info_UClass_UAstralStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralStatsComponent), 4011289601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_3315565537(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_Components_AstralStatsComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
