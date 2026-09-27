// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab2_CITA417GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLab2_CITA417GameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LAB2_CITA417_API UClass* Z_Construct_UClass_ALab2_CITA417GameMode();
LAB2_CITA417_API UClass* Z_Construct_UClass_ALab2_CITA417GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lab2_CITA417();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALab2_CITA417GameMode ****************************************************
void ALab2_CITA417GameMode::StaticRegisterNativesALab2_CITA417GameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALab2_CITA417GameMode;
UClass* ALab2_CITA417GameMode::GetPrivateStaticClass()
{
	using TClass = ALab2_CITA417GameMode;
	if (!Z_Registration_Info_UClass_ALab2_CITA417GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Lab2_CITA417GameMode"),
			Z_Registration_Info_UClass_ALab2_CITA417GameMode.InnerSingleton,
			StaticRegisterNativesALab2_CITA417GameMode,
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
	return Z_Registration_Info_UClass_ALab2_CITA417GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ALab2_CITA417GameMode_NoRegister()
{
	return ALab2_CITA417GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALab2_CITA417GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Lab2_CITA417GameMode.h" },
		{ "ModuleRelativePath", "Lab2_CITA417GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALab2_CITA417GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALab2_CITA417GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Lab2_CITA417,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALab2_CITA417GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALab2_CITA417GameMode_Statics::ClassParams = {
	&ALab2_CITA417GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALab2_CITA417GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALab2_CITA417GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALab2_CITA417GameMode()
{
	if (!Z_Registration_Info_UClass_ALab2_CITA417GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALab2_CITA417GameMode.OuterSingleton, Z_Construct_UClass_ALab2_CITA417GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALab2_CITA417GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALab2_CITA417GameMode);
ALab2_CITA417GameMode::~ALab2_CITA417GameMode() {}
// ********** End Class ALab2_CITA417GameMode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ulysse637_OneDrive___SUNY_Morrisville_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Lab2_CITA417GameMode_h__Script_Lab2_CITA417_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALab2_CITA417GameMode, ALab2_CITA417GameMode::StaticClass, TEXT("ALab2_CITA417GameMode"), &Z_Registration_Info_UClass_ALab2_CITA417GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALab2_CITA417GameMode), 3033667695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ulysse637_OneDrive___SUNY_Morrisville_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Lab2_CITA417GameMode_h__Script_Lab2_CITA417_332881925(TEXT("/Script/Lab2_CITA417"),
	Z_CompiledInDeferFile_FID_Users_ulysse637_OneDrive___SUNY_Morrisville_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Lab2_CITA417GameMode_h__Script_Lab2_CITA417_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ulysse637_OneDrive___SUNY_Morrisville_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Lab2_CITA417GameMode_h__Script_Lab2_CITA417_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
