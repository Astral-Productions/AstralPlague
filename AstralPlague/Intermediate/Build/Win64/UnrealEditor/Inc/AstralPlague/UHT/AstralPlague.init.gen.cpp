// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPlague_init() {}
	ASTRALPLAGUE_API UFunction* Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature();
	ASTRALPLAGUE_API UFunction* Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature();
	ASTRALPLAGUE_API UFunction* Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature();
	ASTRALPLAGUE_API UFunction* Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AstralPlague;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AstralPlague()
	{
		if (!Z_Registration_Info_UPackage__Script_AstralPlague.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_AttributeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AstralPlague_AstralHealth_DeathEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AstralPlague_CharacterBaseHitReactDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AstralPlague_CharacterDiedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AstralPlague",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2FDDF768,
				0x6D478B8E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AstralPlague.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AstralPlague.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AstralPlague(Z_Construct_UPackage__Script_AstralPlague, TEXT("/Script/AstralPlague"), Z_Registration_Info_UPackage__Script_AstralPlague, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2FDDF768, 0x6D478B8E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
