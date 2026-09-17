// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab2_CITA417CameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLab2_CITA417CameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
LAB2_CITA417_API UClass* Z_Construct_UClass_ALab2_CITA417CameraManager();
LAB2_CITA417_API UClass* Z_Construct_UClass_ALab2_CITA417CameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lab2_CITA417();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALab2_CITA417CameraManager ***********************************************
void ALab2_CITA417CameraManager::StaticRegisterNativesALab2_CITA417CameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALab2_CITA417CameraManager;
UClass* ALab2_CITA417CameraManager::GetPrivateStaticClass()
{
	using TClass = ALab2_CITA417CameraManager;
	if (!Z_Registration_Info_UClass_ALab2_CITA417CameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Lab2_CITA417CameraManager"),
			Z_Registration_Info_UClass_ALab2_CITA417CameraManager.InnerSingleton,
			StaticRegisterNativesALab2_CITA417CameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ALab2_CITA417CameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ALab2_CITA417CameraManager_NoRegister()
{
	return ALab2_CITA417CameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALab2_CITA417CameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "Lab2_CITA417CameraManager.h" },
		{ "ModuleRelativePath", "Lab2_CITA417CameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALab2_CITA417CameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALab2_CITA417CameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Lab2_CITA417,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALab2_CITA417CameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALab2_CITA417CameraManager_Statics::ClassParams = {
	&ALab2_CITA417CameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALab2_CITA417CameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ALab2_CITA417CameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALab2_CITA417CameraManager()
{
	if (!Z_Registration_Info_UClass_ALab2_CITA417CameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALab2_CITA417CameraManager.OuterSingleton, Z_Construct_UClass_ALab2_CITA417CameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALab2_CITA417CameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALab2_CITA417CameraManager);
ALab2_CITA417CameraManager::~ALab2_CITA417CameraManager() {}
// ********** End Class ALab2_CITA417CameraManager *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ulysse637_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Lab2_CITA417CameraManager_h__Script_Lab2_CITA417_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALab2_CITA417CameraManager, ALab2_CITA417CameraManager::StaticClass, TEXT("ALab2_CITA417CameraManager"), &Z_Registration_Info_UClass_ALab2_CITA417CameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALab2_CITA417CameraManager), 793355926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ulysse637_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Lab2_CITA417CameraManager_h__Script_Lab2_CITA417_899507920(TEXT("/Script/Lab2_CITA417"),
	Z_CompiledInDeferFile_FID_Users_ulysse637_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Lab2_CITA417CameraManager_h__Script_Lab2_CITA417_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ulysse637_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Lab2_CITA417CameraManager_h__Script_Lab2_CITA417_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
