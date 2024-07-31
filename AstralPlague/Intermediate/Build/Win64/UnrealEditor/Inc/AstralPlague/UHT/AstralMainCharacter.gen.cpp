// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Character/Playable/AstralMainCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralMainCharacter() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralMainCharacter();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralMainCharacter_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlagueCharacter();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCameraComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralFloatingStatusBarWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class AAstralMainCharacter
void AAstralMainCharacter::StaticRegisterNativesAAstralMainCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstralMainCharacter);
UClass* Z_Construct_UClass_AAstralMainCharacter_NoRegister()
{
	return AAstralMainCharacter::StaticClass();
}
struct Z_Construct_UClass_AAstralMainCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Playable/AstralMainCharacter.h" },
		{ "ModuleRelativePath", "Character/Playable/AstralMainCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIFloatingStatusBarClass_MetaData[] = {
		{ "Category", "Astral|UI" },
		{ "ModuleRelativePath", "Character/Playable/AstralMainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIFloatingStatusBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Playable/AstralMainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIFloatingStatusBarComponent_MetaData[] = {
		{ "Category", "Astral|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Playable/AstralMainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Astral|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Playable/AstralMainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Astral|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Playable/AstralMainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_UIFloatingStatusBarClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIFloatingStatusBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIFloatingStatusBarComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstralMainCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAstralMainCharacter_Statics::NewProp_UIFloatingStatusBarClass = { "UIFloatingStatusBarClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralMainCharacter, UIFloatingStatusBarClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAstralFloatingStatusBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIFloatingStatusBarClass_MetaData), NewProp_UIFloatingStatusBarClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralMainCharacter_Statics::NewProp_UIFloatingStatusBar = { "UIFloatingStatusBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralMainCharacter, UIFloatingStatusBar), Z_Construct_UClass_UAstralFloatingStatusBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIFloatingStatusBar_MetaData), NewProp_UIFloatingStatusBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralMainCharacter_Statics::NewProp_UIFloatingStatusBarComponent = { "UIFloatingStatusBarComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralMainCharacter, UIFloatingStatusBarComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIFloatingStatusBarComponent_MetaData), NewProp_UIFloatingStatusBarComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralMainCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralMainCharacter, CameraComponent), Z_Construct_UClass_UAstralCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralMainCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralMainCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAstralMainCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralMainCharacter_Statics::NewProp_UIFloatingStatusBarClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralMainCharacter_Statics::NewProp_UIFloatingStatusBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralMainCharacter_Statics::NewProp_UIFloatingStatusBarComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralMainCharacter_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralMainCharacter_Statics::NewProp_SpringArmComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralMainCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAstralMainCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAstralPlagueCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralMainCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstralMainCharacter_Statics::ClassParams = {
	&AAstralMainCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAstralMainCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAstralMainCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstralMainCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstralMainCharacter()
{
	if (!Z_Registration_Info_UClass_AAstralMainCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstralMainCharacter.OuterSingleton, Z_Construct_UClass_AAstralMainCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstralMainCharacter.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<AAstralMainCharacter>()
{
	return AAstralMainCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstralMainCharacter);
AAstralMainCharacter::~AAstralMainCharacter() {}
// End Class AAstralMainCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_Playable_AstralMainCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstralMainCharacter, AAstralMainCharacter::StaticClass, TEXT("AAstralMainCharacter"), &Z_Registration_Info_UClass_AAstralMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstralMainCharacter), 1379459156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_Playable_AstralMainCharacter_h_622355574(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_Playable_AstralMainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_Playable_AstralMainCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
