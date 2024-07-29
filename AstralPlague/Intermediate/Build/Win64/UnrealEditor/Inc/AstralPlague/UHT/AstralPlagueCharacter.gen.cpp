// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Character/AstralPlagueCharacter.h"
#include "Runtime/Engine/Classes/Engine/ReplicatedState.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPlagueCharacter() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlagueCharacter();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlagueCharacter_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerState_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCameraComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameplayAbility_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralStatsComponent_NoRegister();
ASTRALPLAGUE_API UEnum* Z_Construct_UEnum_AstralPlague_EAstralAbilityInputID();
ASTRALPLAGUE_API UEnum* Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection();
ASTRALPLAGUE_API UFunction* Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature();
ASTRALPLAGUE_API UFunction* Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature();
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FAstralReplicatedAcceleration();
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FSharedRepMovement();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovement();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Delegate FCharacterBaseHitReactDelegate
struct Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics
{
	struct _Script_AstralPlague_eventCharacterBaseHitReactDelegate_Parms
	{
		EAstralHitReactDirection Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AstralPlague_eventCharacterBaseHitReactDelegate_Parms, Direction), Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection, METADATA_PARAMS(0, nullptr) }; // 267192895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AstralPlague, nullptr, "CharacterBaseHitReactDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::_Script_AstralPlague_eventCharacterBaseHitReactDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::_Script_AstralPlague_eventCharacterBaseHitReactDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCharacterBaseHitReactDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterBaseHitReactDelegate, EAstralHitReactDirection Direction)
{
	struct _Script_AstralPlague_eventCharacterBaseHitReactDelegate_Parms
	{
		EAstralHitReactDirection Direction;
	};
	_Script_AstralPlague_eventCharacterBaseHitReactDelegate_Parms Parms;
	Parms.Direction=Direction;
	CharacterBaseHitReactDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCharacterBaseHitReactDelegate

// Begin Delegate FCharacterDiedDelegate
struct Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics
{
	struct _Script_AstralPlague_eventCharacterDiedDelegate_Parms
	{
		AAstralPlagueCharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AstralPlague_eventCharacterDiedDelegate_Parms, Character), Z_Construct_UClass_AAstralPlagueCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AstralPlague, nullptr, "CharacterDiedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics::_Script_AstralPlague_eventCharacterDiedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics::_Script_AstralPlague_eventCharacterDiedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCharacterDiedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterDiedDelegate, AAstralPlagueCharacter* Character)
{
	struct _Script_AstralPlague_eventCharacterDiedDelegate_Parms
	{
		AAstralPlagueCharacter* Character;
	};
	_Script_AstralPlague_eventCharacterDiedDelegate_Parms Parms;
	Parms.Character=Character;
	CharacterDiedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCharacterDiedDelegate

// Begin ScriptStruct FAstralReplicatedAcceleration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AstralReplicatedAcceleration;
class UScriptStruct* FAstralReplicatedAcceleration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AstralReplicatedAcceleration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AstralReplicatedAcceleration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAstralReplicatedAcceleration, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("AstralReplicatedAcceleration"));
	}
	return Z_Registration_Info_UScriptStruct_AstralReplicatedAcceleration.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FAstralReplicatedAcceleration>()
{
	return FAstralReplicatedAcceleration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FAstralReplicatedAcceleration: Compressed representation of acceleration\n */" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FAstralReplicatedAcceleration: Compressed representation of acceleration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelXYRadians_MetaData[] = {
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelXYMagnitude_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direction of XY accel component, quantized to represent [0, 2*pi]\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction of XY accel component, quantized to represent [0, 2*pi]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelZ_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Accel rate of XY component, quantized to represent [0, MaxAcceleration]\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accel rate of XY component, quantized to represent [0, MaxAcceleration]" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccelXYRadians;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccelXYMagnitude;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_AccelZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAstralReplicatedAcceleration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::NewProp_AccelXYRadians = { "AccelXYRadians", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralReplicatedAcceleration, AccelXYRadians), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelXYRadians_MetaData), NewProp_AccelXYRadians_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude = { "AccelXYMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralReplicatedAcceleration, AccelXYMagnitude), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelXYMagnitude_MetaData), NewProp_AccelXYMagnitude_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::NewProp_AccelZ = { "AccelZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralReplicatedAcceleration, AccelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelZ_MetaData), NewProp_AccelZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::NewProp_AccelXYRadians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::NewProp_AccelZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	&NewStructOps,
	"AstralReplicatedAcceleration",
	Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::PropPointers),
	sizeof(FAstralReplicatedAcceleration),
	alignof(FAstralReplicatedAcceleration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAstralReplicatedAcceleration()
{
	if (!Z_Registration_Info_UScriptStruct_AstralReplicatedAcceleration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AstralReplicatedAcceleration.InnerSingleton, Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AstralReplicatedAcceleration.InnerSingleton;
}
// End ScriptStruct FAstralReplicatedAcceleration

// Begin ScriptStruct FSharedRepMovement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SharedRepMovement;
class UScriptStruct* FSharedRepMovement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SharedRepMovement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SharedRepMovement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedRepMovement, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("SharedRepMovement"));
	}
	return Z_Registration_Info_UScriptStruct_SharedRepMovement.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FSharedRepMovement>()
{
	return FSharedRepMovement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSharedRepMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type we use to send FastShared movement updates. */" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type we use to send FastShared movement updates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepMovement_MetaData[] = {
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepTimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepMovementMode_MetaData[] = {
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProxyIsJumpForceApplied_MetaData[] = {
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[] = {
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RepMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepTimeStamp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RepMovementMode;
	static void NewProp_bProxyIsJumpForceApplied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProxyIsJumpForceApplied;
	static void NewProp_bIsCrouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedRepMovement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovement = { "RepMovement", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedRepMovement, RepMovement), Z_Construct_UScriptStruct_FRepMovement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepMovement_MetaData), NewProp_RepMovement_MetaData) }; // 1102704118
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepTimeStamp = { "RepTimeStamp", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedRepMovement, RepTimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepTimeStamp_MetaData), NewProp_RepTimeStamp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovementMode = { "RepMovementMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedRepMovement, RepMovementMode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepMovementMode_MetaData), NewProp_RepMovementMode_MetaData) };
void Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied_SetBit(void* Obj)
{
	((FSharedRepMovement*)Obj)->bProxyIsJumpForceApplied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied = { "bProxyIsJumpForceApplied", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSharedRepMovement), &Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProxyIsJumpForceApplied_MetaData), NewProp_bProxyIsJumpForceApplied_MetaData) };
void Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
{
	((FSharedRepMovement*)Obj)->bIsCrouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched = { "bIsCrouched", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSharedRepMovement), &Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCrouched_MetaData), NewProp_bIsCrouched_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSharedRepMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepTimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	&NewStructOps,
	"SharedRepMovement",
	Z_Construct_UScriptStruct_FSharedRepMovement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::PropPointers),
	sizeof(FSharedRepMovement),
	alignof(FSharedRepMovement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSharedRepMovement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSharedRepMovement()
{
	if (!Z_Registration_Info_UScriptStruct_SharedRepMovement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SharedRepMovement.InnerSingleton, Z_Construct_UScriptStruct_FSharedRepMovement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SharedRepMovement.InnerSingleton;
}
// End ScriptStruct FSharedRepMovement

// Begin Class AAstralPlagueCharacter Function FinishDying
struct Z_Construct_UFunction_AAstralPlagueCharacter_FinishDying_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_FinishDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "FinishDying", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_FinishDying_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_FinishDying_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_FinishDying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_FinishDying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execFinishDying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishDying();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function FinishDying

// Begin Class AAstralPlagueCharacter Function GetAbilityLevel
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics
{
	struct AstralPlagueCharacter_eventGetAbilityLevel_Parms
	{
		EAstralAbilityInputID InputID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Switch on AbilityID to return individual ability levels. Hardcoded to 1 for every ability in this project.\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch on AbilityID to return individual ability levels. Hardcoded to 1 for every ability in this project." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::NewProp_InputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetAbilityLevel_Parms, InputID), Z_Construct_UEnum_AstralPlague_EAstralAbilityInputID, METADATA_PARAMS(0, nullptr) }; // 1629908191
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetAbilityLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::NewProp_InputID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::NewProp_InputID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetAbilityLevel", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::AstralPlagueCharacter_eventGetAbilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::AstralPlagueCharacter_eventGetAbilityLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetAbilityLevel)
{
	P_GET_ENUM(EAstralAbilityInputID,Z_Param_InputID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAbilityLevel(EAstralAbilityInputID(Z_Param_InputID));
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetAbilityLevel

// Begin Class AAstralPlagueCharacter Function GetAstralAbilitySystemComponent
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics
{
	struct AstralPlagueCharacter_eventGetAstralAbilitySystemComponent_Parms
	{
		UAstralAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetAstralAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetAstralAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics::AstralPlagueCharacter_eventGetAstralAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics::AstralPlagueCharacter_eventGetAstralAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetAstralAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAstralAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetAstralAbilitySystemComponent

// Begin Class AAstralPlagueCharacter Function GetAstralPlayerState
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics
{
	struct AstralPlagueCharacter_eventGetAstralPlayerState_Parms
	{
		AAstralPlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetAstralPlayerState_Parms, ReturnValue), Z_Construct_UClass_AAstralPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetAstralPlayerState", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics::AstralPlagueCharacter_eventGetAstralPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics::AstralPlagueCharacter_eventGetAstralPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetAstralPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AAstralPlayerState**)Z_Param__Result=P_THIS->GetAstralPlayerState();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetAstralPlayerState

// Begin Class AAstralPlagueCharacter Function GetCharacterLevel
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics
{
	struct AstralPlagueCharacter_eventGetCharacterLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Getters for attributes from DefaultAttributeSet\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters for attributes from DefaultAttributeSet" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetCharacterLevel", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics::AstralPlagueCharacter_eventGetCharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics::AstralPlagueCharacter_eventGetCharacterLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetCharacterLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCharacterLevel();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetCharacterLevel

// Begin Class AAstralPlagueCharacter Function GetHealth
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics
{
	struct AstralPlagueCharacter_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character|Attributes" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics::AstralPlagueCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics::AstralPlagueCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetHealth

// Begin Class AAstralPlagueCharacter Function GetHitReactDirection
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics
{
	struct AstralPlagueCharacter_eventGetHitReactDirection_Parms
	{
		FVector ImpactPoint;
		EAstralHitReactDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetHitReactDirection_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactPoint_MetaData), NewProp_ImpactPoint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetHitReactDirection_Parms, ReturnValue), Z_Construct_UEnum_AstralPlague_EAstralHitReactDirection, METADATA_PARAMS(0, nullptr) }; // 267192895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::NewProp_ImpactPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetHitReactDirection", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::AstralPlagueCharacter_eventGetHitReactDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::AstralPlagueCharacter_eventGetHitReactDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetHitReactDirection)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAstralHitReactDirection*)Z_Param__Result=P_THIS->GetHitReactDirection(Z_Param_Out_ImpactPoint);
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetHitReactDirection

// Begin Class AAstralPlagueCharacter Function GetMaxHealth
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics
{
	struct AstralPlagueCharacter_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character|Attributes" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics::AstralPlagueCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics::AstralPlagueCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetMaxHealth

// Begin Class AAstralPlagueCharacter Function GetMaxSoulEnergy
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics
{
	struct AstralPlagueCharacter_eventGetMaxSoulEnergy_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character|Attributes" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetMaxSoulEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetMaxSoulEnergy", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics::AstralPlagueCharacter_eventGetMaxSoulEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics::AstralPlagueCharacter_eventGetMaxSoulEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetMaxSoulEnergy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxSoulEnergy();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetMaxSoulEnergy

// Begin Class AAstralPlagueCharacter Function GetMaxStamina
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics
{
	struct AstralPlagueCharacter_eventGetMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character|Attributes" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics::AstralPlagueCharacter_eventGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics::AstralPlagueCharacter_eventGetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetMaxStamina

// Begin Class AAstralPlagueCharacter Function GetMoveSpeed
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics
{
	struct AstralPlagueCharacter_eventGetMoveSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the Current value of MoveSpeed\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Current value of MoveSpeed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics::AstralPlagueCharacter_eventGetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics::AstralPlagueCharacter_eventGetMoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetMoveSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetMoveSpeed

// Begin Class AAstralPlagueCharacter Function GetMoveSpeedBaseValue
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics
{
	struct AstralPlagueCharacter_eventGetMoveSpeedBaseValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the Base value of MoveSpeed\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Base value of MoveSpeed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetMoveSpeedBaseValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetMoveSpeedBaseValue", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics::AstralPlagueCharacter_eventGetMoveSpeedBaseValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics::AstralPlagueCharacter_eventGetMoveSpeedBaseValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetMoveSpeedBaseValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMoveSpeedBaseValue();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetMoveSpeedBaseValue

// Begin Class AAstralPlagueCharacter Function GetSoulEnergy
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics
{
	struct AstralPlagueCharacter_eventGetSoulEnergy_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character|Attributes" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetSoulEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetSoulEnergy", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics::AstralPlagueCharacter_eventGetSoulEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics::AstralPlagueCharacter_eventGetSoulEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetSoulEnergy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSoulEnergy();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetSoulEnergy

// Begin Class AAstralPlagueCharacter Function GetStamina
struct Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics
{
	struct AstralPlagueCharacter_eventGetStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character|Attributes" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "GetStamina", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics::AstralPlagueCharacter_eventGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics::AstralPlagueCharacter_eventGetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execGetStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStamina();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function GetStamina

// Begin Class AAstralPlagueCharacter Function IsAlive
struct Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics
{
	struct AstralPlagueCharacter_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Character" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AstralPlagueCharacter_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AstralPlagueCharacter_eventIsAlive_Parms), &Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::AstralPlagueCharacter_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::AstralPlagueCharacter_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function IsAlive

// Begin Class AAstralPlagueCharacter Function OnDeathFinished
struct Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics
{
	struct AstralPlagueCharacter_eventOnDeathFinished_Parms
	{
		AActor* OwningActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ends the death sequence for the character (detaches controller, destroys pawn, etc...)\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ends the death sequence for the character (detaches controller, destroys pawn, etc...)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventOnDeathFinished_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics::NewProp_OwningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "OnDeathFinished", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics::AstralPlagueCharacter_eventOnDeathFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics::AstralPlagueCharacter_eventOnDeathFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execOnDeathFinished)
{
	P_GET_OBJECT(AActor,Z_Param_OwningActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeathFinished(Z_Param_OwningActor);
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function OnDeathFinished

// Begin Class AAstralPlagueCharacter Function OnDeathStarted
struct Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics
{
	struct AstralPlagueCharacter_eventOnDeathStarted_Parms
	{
		AActor* OwningActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Begins the death sequence for the character (disables collision, disables movement, etc...)\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begins the death sequence for the character (disables collision, disables movement, etc...)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventOnDeathStarted_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics::NewProp_OwningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "OnDeathStarted", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics::AstralPlagueCharacter_eventOnDeathStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics::AstralPlagueCharacter_eventOnDeathStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execOnDeathStarted)
{
	P_GET_OBJECT(AActor,Z_Param_OwningActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeathStarted(Z_Param_OwningActor);
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function OnDeathStarted

// Begin Class AAstralPlagueCharacter Function PlayHitReact
struct AstralPlagueCharacter_eventPlayHitReact_Parms
{
	FGameplayTag HitDirection;
	AActor* DamageCauser;
};
static FName NAME_AAstralPlagueCharacter_PlayHitReact = FName(TEXT("PlayHitReact"));
void AAstralPlagueCharacter::PlayHitReact(FGameplayTag HitDirection, AActor* DamageCauser)
{
	AstralPlagueCharacter_eventPlayHitReact_Parms Parms;
	Parms.HitDirection=HitDirection;
	Parms.DamageCauser=DamageCauser;
	ProcessEvent(FindFunctionChecked(NAME_AAstralPlagueCharacter_PlayHitReact),&Parms);
}
struct Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics::NewProp_HitDirection = { "HitDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventPlayHitReact_Parms, HitDirection), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlagueCharacter_eventPlayHitReact_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics::NewProp_HitDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlagueCharacter, nullptr, "PlayHitReact", nullptr, nullptr, Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics::PropPointers), sizeof(AstralPlagueCharacter_eventPlayHitReact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralPlagueCharacter_eventPlayHitReact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlagueCharacter::execPlayHitReact)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_HitDirection);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->PlayHitReact_Validate(Z_Param_HitDirection,Z_Param_DamageCauser))
	{
		RPC_ValidateFailed(TEXT("PlayHitReact_Validate"));
		return;
	}
	P_THIS->PlayHitReact_Implementation(Z_Param_HitDirection,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class AAstralPlagueCharacter Function PlayHitReact

// Begin Class AAstralPlagueCharacter
void AAstralPlagueCharacter::StaticRegisterNativesAAstralPlagueCharacter()
{
	UClass* Class = AAstralPlagueCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishDying", &AAstralPlagueCharacter::execFinishDying },
		{ "GetAbilityLevel", &AAstralPlagueCharacter::execGetAbilityLevel },
		{ "GetAstralAbilitySystemComponent", &AAstralPlagueCharacter::execGetAstralAbilitySystemComponent },
		{ "GetAstralPlayerState", &AAstralPlagueCharacter::execGetAstralPlayerState },
		{ "GetCharacterLevel", &AAstralPlagueCharacter::execGetCharacterLevel },
		{ "GetHealth", &AAstralPlagueCharacter::execGetHealth },
		{ "GetHitReactDirection", &AAstralPlagueCharacter::execGetHitReactDirection },
		{ "GetMaxHealth", &AAstralPlagueCharacter::execGetMaxHealth },
		{ "GetMaxSoulEnergy", &AAstralPlagueCharacter::execGetMaxSoulEnergy },
		{ "GetMaxStamina", &AAstralPlagueCharacter::execGetMaxStamina },
		{ "GetMoveSpeed", &AAstralPlagueCharacter::execGetMoveSpeed },
		{ "GetMoveSpeedBaseValue", &AAstralPlagueCharacter::execGetMoveSpeedBaseValue },
		{ "GetSoulEnergy", &AAstralPlagueCharacter::execGetSoulEnergy },
		{ "GetStamina", &AAstralPlagueCharacter::execGetStamina },
		{ "IsAlive", &AAstralPlagueCharacter::execIsAlive },
		{ "OnDeathFinished", &AAstralPlagueCharacter::execOnDeathFinished },
		{ "OnDeathStarted", &AAstralPlagueCharacter::execOnDeathStarted },
		{ "PlayHitReact", &AAstralPlagueCharacter::execPlayHitReact },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstralPlagueCharacter);
UClass* Z_Construct_UClass_AAstralPlagueCharacter_NoRegister()
{
	return AAstralPlagueCharacter::StaticClass();
}
struct Z_Construct_UClass_AAstralPlagueCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AAstralPlagueCharacter\n *\n *\x09The base character pawn class used by this project.\n *\x09Responsible for sending events to pawn components.\n *\x09New behavior should be added via pawn components when possible.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AstralPlagueCharacter.h" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base character pawn class used by this project." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAstralPlagueCharacter\n\n    The base character pawn class used by this project.\n    Responsible for sending events to pawn components.\n    New behavior should be added via pawn components when possible." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowHitReact_MetaData[] = {
		{ "Category", "Astral|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the Hit React direction in the Animation Blueprint\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Hit React direction in the Animation Blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCharacterDied_MetaData[] = {
		{ "Category", "Astral|Character" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Astral|Character" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[] = {
		{ "Category", "Astral|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Death Animation\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Death Animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAbilities_MetaData[] = {
		{ "Category", "Astral|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default abilities for this Character. These will be removed on Character death and regiven if Character respawns.\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default abilities for this Character. These will be removed on Character death and regiven if Character respawns." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "Astral|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default attributes for a character for initializing on spawn/respawn.\n// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default attributes for a character for initializing on spawn/respawn.\nThis is an instant GE that overrides the values for attributes that get reset on spawn/respawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupEffects_MetaData[] = {
		{ "Category", "Astral|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// These effects are only applied one time on startup\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These effects are only applied one time on startup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsComponent_MetaData[] = {
		{ "Category", "Astral|Stats" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Astral|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Astral|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The main skeletal mesh associated with this Character (optional sub-object). */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/AstralPlagueCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The main skeletal mesh associated with this Character (optional sub-object)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowHitReact;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterDied;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartupEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_FinishDying, "FinishDying" }, // 704127830
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetAbilityLevel, "GetAbilityLevel" }, // 3148105676
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralAbilitySystemComponent, "GetAstralAbilitySystemComponent" }, // 3445130803
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetAstralPlayerState, "GetAstralPlayerState" }, // 1908172287
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetCharacterLevel, "GetCharacterLevel" }, // 4026977777
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetHealth, "GetHealth" }, // 850252760
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetHitReactDirection, "GetHitReactDirection" }, // 1028042039
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxHealth, "GetMaxHealth" }, // 2846281558
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxSoulEnergy, "GetMaxSoulEnergy" }, // 2107623658
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetMaxStamina, "GetMaxStamina" }, // 3854779879
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeed, "GetMoveSpeed" }, // 3814971365
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetMoveSpeedBaseValue, "GetMoveSpeedBaseValue" }, // 3998720262
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetSoulEnergy, "GetSoulEnergy" }, // 141027423
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_GetStamina, "GetStamina" }, // 1100160696
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_IsAlive, "IsAlive" }, // 1006290916
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathFinished, "OnDeathFinished" }, // 4177833137
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_OnDeathStarted, "OnDeathStarted" }, // 2777478871
		{ &Z_Construct_UFunction_AAstralPlagueCharacter_PlayHitReact, "PlayHitReact" }, // 613988453
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstralPlagueCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_ShowHitReact = { "ShowHitReact", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlagueCharacter, ShowHitReact), Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowHitReact_MetaData), NewProp_ShowHitReact_MetaData) }; // 3586340954
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_OnCharacterDied = { "OnCharacterDied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlagueCharacter, OnCharacterDied), Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCharacterDied_MetaData), NewProp_OnCharacterDied_MetaData) }; // 1092885060
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlagueCharacter, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlagueCharacter, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMontage_MetaData), NewProp_DeathMontage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_CharacterAbilities_Inner = { "CharacterAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAstralGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_CharacterAbilities = { "CharacterAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlagueCharacter, CharacterAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAbilities_MetaData), NewProp_CharacterAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlagueCharacter, DefaultAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributes_MetaData), NewProp_DefaultAttributes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_StartupEffects_Inner = { "StartupEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_StartupEffects = { "StartupEffects", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlagueCharacter, StartupEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupEffects_MetaData), NewProp_StartupEffects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_StatsComponent = { "StatsComponent", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlagueCharacter, StatsComponent), Z_Construct_UClass_UAstralStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsComponent_MetaData), NewProp_StatsComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlagueCharacter, CameraComponent), Z_Construct_UClass_UAstralCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlagueCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x01240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlagueCharacter, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAstralPlagueCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_ShowHitReact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_OnCharacterDied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_DeathMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_CharacterAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_CharacterAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_DefaultAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_StartupEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_StartupEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_StatsComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_SpringArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlagueCharacter_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlagueCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAstralPlagueCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlagueCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAstralPlagueCharacter, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UGameplayCueInterface_NoRegister, (int32)VTABLE_OFFSET(AAstralPlagueCharacter, IGameplayCueInterface), false },  // 881046121
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(AAstralPlagueCharacter, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstralPlagueCharacter_Statics::ClassParams = {
	&AAstralPlagueCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAstralPlagueCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlagueCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlagueCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstralPlagueCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstralPlagueCharacter()
{
	if (!Z_Registration_Info_UClass_AAstralPlagueCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstralPlagueCharacter.OuterSingleton, Z_Construct_UClass_AAstralPlagueCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstralPlagueCharacter.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<AAstralPlagueCharacter>()
{
	return AAstralPlagueCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstralPlagueCharacter);
AAstralPlagueCharacter::~AAstralPlagueCharacter() {}
// End Class AAstralPlagueCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAstralReplicatedAcceleration::StaticStruct, Z_Construct_UScriptStruct_FAstralReplicatedAcceleration_Statics::NewStructOps, TEXT("AstralReplicatedAcceleration"), &Z_Registration_Info_UScriptStruct_AstralReplicatedAcceleration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAstralReplicatedAcceleration), 1419555528U) },
		{ FSharedRepMovement::StaticStruct, Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewStructOps, TEXT("SharedRepMovement"), &Z_Registration_Info_UScriptStruct_SharedRepMovement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSharedRepMovement), 3118292124U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstralPlagueCharacter, AAstralPlagueCharacter::StaticClass, TEXT("AAstralPlagueCharacter"), &Z_Registration_Info_UClass_AAstralPlagueCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstralPlagueCharacter), 2131554373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_2284777822(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPlagueCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
