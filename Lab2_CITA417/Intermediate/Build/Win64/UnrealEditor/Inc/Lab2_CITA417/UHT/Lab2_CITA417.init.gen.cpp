// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLab2_CITA417_init() {}
	LAB2_CITA417_API UFunction* Z_Construct_UDelegateFunction_Lab2_CITA417_BulletCountUpdatedDelegate__DelegateSignature();
	LAB2_CITA417_API UFunction* Z_Construct_UDelegateFunction_Lab2_CITA417_DamagedDelegate__DelegateSignature();
	LAB2_CITA417_API UFunction* Z_Construct_UDelegateFunction_Lab2_CITA417_PawnDeathDelegate__DelegateSignature();
	LAB2_CITA417_API UFunction* Z_Construct_UDelegateFunction_Lab2_CITA417_SprintStateChangedDelegate__DelegateSignature();
	LAB2_CITA417_API UFunction* Z_Construct_UDelegateFunction_Lab2_CITA417_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Lab2_CITA417;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Lab2_CITA417()
	{
		if (!Z_Registration_Info_UPackage__Script_Lab2_CITA417.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Lab2_CITA417_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Lab2_CITA417_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Lab2_CITA417_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Lab2_CITA417_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Lab2_CITA417_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Lab2_CITA417",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCA184505,
				0x493A5780,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Lab2_CITA417.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Lab2_CITA417.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Lab2_CITA417(Z_Construct_UPackage__Script_Lab2_CITA417, TEXT("/Script/Lab2_CITA417"), Z_Registration_Info_UPackage__Script_Lab2_CITA417, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCA184505, 0x493A5780));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
