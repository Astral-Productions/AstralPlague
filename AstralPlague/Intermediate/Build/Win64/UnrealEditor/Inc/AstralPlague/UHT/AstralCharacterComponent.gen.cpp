// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Components/AstralCharacterComponent.h"
#include "AstralPlague/GameFeatures/GameFeatureAction_AddInputContextMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralCharacterComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCameraMode_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCharacterComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCharacterComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralPawnData_NoRegister();
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingContextAndPriority();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralCharacterComponent Function FindCharacterComponent
struct Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics
{
	struct AstralCharacterComponent_eventFindCharacterComponent_Parms
	{
		const AActor* Actor;
		UAstralCharacterComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Hero" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the hero component if one exists on the specified actor. */" },
#endif
		{ "ModuleRelativePath", "Components/AstralCharacterComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the hero component if one exists on the specified actor." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralCharacterComponent_eventFindCharacterComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralCharacterComponent_eventFindCharacterComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralCharacterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralCharacterComponent, nullptr, "FindCharacterComponent", nullptr, nullptr, Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::AstralCharacterComponent_eventFindCharacterComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::AstralCharacterComponent_eventFindCharacterComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralCharacterComponent::execFindCharacterComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralCharacterComponent**)Z_Param__Result=UAstralCharacterComponent::FindCharacterComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UAstralCharacterComponent Function FindCharacterComponent

// Begin Class UAstralCharacterComponent
void UAstralCharacterComponent::StaticRegisterNativesUAstralCharacterComponent()
{
	UClass* Class = UAstralCharacterComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindCharacterComponent", &UAstralCharacterComponent::execFindCharacterComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralCharacterComponent);
UClass* Z_Construct_UClass_UAstralCharacterComponent_NoRegister()
{
	return UAstralCharacterComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralCharacterComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component that sets up input and camera handling for player controlled pawns (or bots that simulate players).\n * This depends on a PawnExtensionComponent to coordinate initialization.\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/AstralCharacterComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/AstralCharacterComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that sets up input and camera handling for player controlled pawns (or bots that simulate players).\nThis depends on a PawnExtensionComponent to coordinate initialization." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputMappings_MetaData[] = {
		{ "Category", "AstralCharacterComponent" },
		{ "ModuleRelativePath", "Components/AstralCharacterComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCameraMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera mode set by an ability. */" },
#endif
		{ "ModuleRelativePath", "Components/AstralCharacterComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera mode set by an ability." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[] = {
		{ "Category", "Astral|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn data used to create the pawn. Specified from a spawn function or on a placed instance. */" },
#endif
		{ "ModuleRelativePath", "Components/AstralCharacterComponent.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn data used to create the pawn. Specified from a spawn function or on a placed instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultInputMappings;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityCameraMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralCharacterComponent_FindCharacterComponent, "FindCharacterComponent" }, // 2344634482
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralCharacterComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAstralCharacterComponent_Statics::NewProp_DefaultInputMappings_Inner = { "DefaultInputMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputMappingContextAndPriority, METADATA_PARAMS(0, nullptr) }; // 3234570853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAstralCharacterComponent_Statics::NewProp_DefaultInputMappings = { "DefaultInputMappings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralCharacterComponent, DefaultInputMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputMappings_MetaData), NewProp_DefaultInputMappings_MetaData) }; // 3234570853
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAstralCharacterComponent_Statics::NewProp_AbilityCameraMode = { "AbilityCameraMode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralCharacterComponent, AbilityCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UAstralCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCameraMode_MetaData), NewProp_AbilityCameraMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralCharacterComponent_Statics::NewProp_PawnData = { "PawnData", nullptr, (EPropertyFlags)0x0124080000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralCharacterComponent, PawnData), Z_Construct_UClass_UAstralPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnData_MetaData), NewProp_PawnData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralCharacterComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralCharacterComponent_Statics::NewProp_DefaultInputMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralCharacterComponent_Statics::NewProp_DefaultInputMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralCharacterComponent_Statics::NewProp_AbilityCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralCharacterComponent_Statics::NewProp_PawnData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralCharacterComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAstralCharacterComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UAstralCharacterComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralCharacterComponent_Statics::ClassParams = {
	&UAstralCharacterComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAstralCharacterComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralCharacterComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralCharacterComponent()
{
	if (!Z_Registration_Info_UClass_UAstralCharacterComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralCharacterComponent.OuterSingleton, Z_Construct_UClass_UAstralCharacterComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralCharacterComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralCharacterComponent>()
{
	return UAstralCharacterComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralCharacterComponent);
UAstralCharacterComponent::~UAstralCharacterComponent() {}
// End Class UAstralCharacterComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralCharacterComponent, UAstralCharacterComponent::StaticClass, TEXT("UAstralCharacterComponent"), &Z_Registration_Info_UClass_UAstralCharacterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralCharacterComponent), 2367971109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h_1814486003(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
