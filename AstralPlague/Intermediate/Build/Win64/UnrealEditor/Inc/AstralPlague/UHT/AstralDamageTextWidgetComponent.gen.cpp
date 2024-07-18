// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/UI/AstralDamageTextWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralDamageTextWidgetComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralDamageTextWidgetComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralDamageTextWidgetComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralDamageTextWidgetComponent Function SetDamageText
struct AstralDamageTextWidgetComponent_eventSetDamageText_Parms
{
	float Damage;
};
static FName NAME_UAstralDamageTextWidgetComponent_SetDamageText = FName(TEXT("SetDamageText"));
void UAstralDamageTextWidgetComponent::SetDamageText(float Damage)
{
	AstralDamageTextWidgetComponent_eventSetDamageText_Parms Parms;
	Parms.Damage=Damage;
	ProcessEvent(FindFunctionChecked(NAME_UAstralDamageTextWidgetComponent_SetDamageText),&Parms);
}
struct Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AstralDamageTextWidgetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralDamageTextWidgetComponent_eventSetDamageText_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralDamageTextWidgetComponent, nullptr, "SetDamageText", nullptr, nullptr, Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText_Statics::PropPointers), sizeof(AstralDamageTextWidgetComponent_eventSetDamageText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralDamageTextWidgetComponent_eventSetDamageText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralDamageTextWidgetComponent Function SetDamageText

// Begin Class UAstralDamageTextWidgetComponent
void UAstralDamageTextWidgetComponent::StaticRegisterNativesUAstralDamageTextWidgetComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralDamageTextWidgetComponent);
UClass* Z_Construct_UClass_UAstralDamageTextWidgetComponent_NoRegister()
{
	return UAstralDamageTextWidgetComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralDamageTextWidgetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * For the floating Damage Numbers when a Character receives damage.\n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UI/AstralDamageTextWidgetComponent.h" },
		{ "ModuleRelativePath", "UI/AstralDamageTextWidgetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For the floating Damage Numbers when a Character receives damage." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralDamageTextWidgetComponent_SetDamageText, "SetDamageText" }, // 952983247
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralDamageTextWidgetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralDamageTextWidgetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralDamageTextWidgetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralDamageTextWidgetComponent_Statics::ClassParams = {
	&UAstralDamageTextWidgetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralDamageTextWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralDamageTextWidgetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralDamageTextWidgetComponent()
{
	if (!Z_Registration_Info_UClass_UAstralDamageTextWidgetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralDamageTextWidgetComponent.OuterSingleton, Z_Construct_UClass_UAstralDamageTextWidgetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralDamageTextWidgetComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralDamageTextWidgetComponent>()
{
	return UAstralDamageTextWidgetComponent::StaticClass();
}
UAstralDamageTextWidgetComponent::UAstralDamageTextWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralDamageTextWidgetComponent);
UAstralDamageTextWidgetComponent::~UAstralDamageTextWidgetComponent() {}
// End Class UAstralDamageTextWidgetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_UI_AstralDamageTextWidgetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralDamageTextWidgetComponent, UAstralDamageTextWidgetComponent::StaticClass, TEXT("UAstralDamageTextWidgetComponent"), &Z_Registration_Info_UClass_UAstralDamageTextWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralDamageTextWidgetComponent), 458327021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_UI_AstralDamageTextWidgetComponent_h_4004913890(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_UI_AstralDamageTextWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NovaB_Desktop_AstralPlague_AstralPlague_Source_AstralPlague_UI_AstralDamageTextWidgetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
