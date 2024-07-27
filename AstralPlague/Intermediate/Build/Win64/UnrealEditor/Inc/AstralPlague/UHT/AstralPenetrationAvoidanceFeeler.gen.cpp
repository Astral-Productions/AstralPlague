// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Camera/AstralPenetrationAvoidanceFeeler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPenetrationAvoidanceFeeler() {}

// Begin Cross Module References
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin ScriptStruct FAstralPenetrationAvoidanceFeeler
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AstralPenetrationAvoidanceFeeler;
class UScriptStruct* FAstralPenetrationAvoidanceFeeler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AstralPenetrationAvoidanceFeeler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AstralPenetrationAvoidanceFeeler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("AstralPenetrationAvoidanceFeeler"));
	}
	return Z_Registration_Info_UScriptStruct_AstralPenetrationAvoidanceFeeler.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FAstralPenetrationAvoidanceFeeler>()
{
	return FAstralPenetrationAvoidanceFeeler::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct defining a feeler ray used for camera penetration avoidance.\n */" },
#endif
		{ "ModuleRelativePath", "Camera/AstralPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct defining a feeler ray used for camera penetration avoidance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustmentRot_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FRotator describing deviance from main ray */" },
#endif
		{ "ModuleRelativePath", "Camera/AstralPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FRotator describing deviance from main ray" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldWeight_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** how much this feeler affects the final position if it hits the world */" },
#endif
		{ "ModuleRelativePath", "Camera/AstralPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how much this feeler affects the final position if it hits the world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnWeight_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** how much this feeler affects the final position if it hits a APawn (setting to 0 will not attempt to collide with pawns at all) */" },
#endif
		{ "ModuleRelativePath", "Camera/AstralPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how much this feeler affects the final position if it hits a APawn (setting to 0 will not attempt to collide with pawns at all)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** extent to use for collision when tracing this feeler */" },
#endif
		{ "ModuleRelativePath", "Camera/AstralPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "extent to use for collision when tracing this feeler" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceInterval_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** minimum frame interval between traces with this feeler if nothing was hit last frame */" },
#endif
		{ "ModuleRelativePath", "Camera/AstralPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "minimum frame interval between traces with this feeler if nothing was hit last frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesUntilNextTrace_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** number of frames since this feeler was used */" },
#endif
		{ "ModuleRelativePath", "Camera/AstralPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "number of frames since this feeler was used" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdjustmentRot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PawnWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TraceInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FramesUntilNextTrace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAstralPenetrationAvoidanceFeeler>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewProp_AdjustmentRot = { "AdjustmentRot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralPenetrationAvoidanceFeeler, AdjustmentRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustmentRot_MetaData), NewProp_AdjustmentRot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewProp_WorldWeight = { "WorldWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralPenetrationAvoidanceFeeler, WorldWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldWeight_MetaData), NewProp_WorldWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewProp_PawnWeight = { "PawnWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralPenetrationAvoidanceFeeler, PawnWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnWeight_MetaData), NewProp_PawnWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralPenetrationAvoidanceFeeler, Extent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewProp_TraceInterval = { "TraceInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralPenetrationAvoidanceFeeler, TraceInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceInterval_MetaData), NewProp_TraceInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewProp_FramesUntilNextTrace = { "FramesUntilNextTrace", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralPenetrationAvoidanceFeeler, FramesUntilNextTrace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesUntilNextTrace_MetaData), NewProp_FramesUntilNextTrace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewProp_AdjustmentRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewProp_WorldWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewProp_PawnWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewProp_TraceInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewProp_FramesUntilNextTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	&NewStructOps,
	"AstralPenetrationAvoidanceFeeler",
	Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::PropPointers),
	sizeof(FAstralPenetrationAvoidanceFeeler),
	alignof(FAstralPenetrationAvoidanceFeeler),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler()
{
	if (!Z_Registration_Info_UScriptStruct_AstralPenetrationAvoidanceFeeler.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AstralPenetrationAvoidanceFeeler.InnerSingleton, Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AstralPenetrationAvoidanceFeeler.InnerSingleton;
}
// End ScriptStruct FAstralPenetrationAvoidanceFeeler

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralPenetrationAvoidanceFeeler_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAstralPenetrationAvoidanceFeeler::StaticStruct, Z_Construct_UScriptStruct_FAstralPenetrationAvoidanceFeeler_Statics::NewStructOps, TEXT("AstralPenetrationAvoidanceFeeler"), &Z_Registration_Info_UScriptStruct_AstralPenetrationAvoidanceFeeler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAstralPenetrationAvoidanceFeeler), 380146036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralPenetrationAvoidanceFeeler_h_1677748950(TEXT("/Script/AstralPlague"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralPenetrationAvoidanceFeeler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralPenetrationAvoidanceFeeler_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
