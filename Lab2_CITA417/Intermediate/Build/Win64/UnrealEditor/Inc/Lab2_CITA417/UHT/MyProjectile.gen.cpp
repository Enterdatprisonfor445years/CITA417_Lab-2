// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyProjectile() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LAB2_CITA417_API UClass* Z_Construct_UClass_AMyProjectile();
LAB2_CITA417_API UClass* Z_Construct_UClass_AMyProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lab2_CITA417();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyProjectile ************************************************************
void AMyProjectile::StaticRegisterNativesAMyProjectile()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyProjectile;
UClass* AMyProjectile::GetPrivateStaticClass()
{
	using TClass = AMyProjectile;
	if (!Z_Registration_Info_UClass_AMyProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyProjectile"),
			Z_Registration_Info_UClass_AMyProjectile.InnerSingleton,
			StaticRegisterNativesAMyProjectile,
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
	return Z_Registration_Info_UClass_AMyProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyProjectile_NoRegister()
{
	return AMyProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyProjectile.h" },
		{ "ModuleRelativePath", "Public/MyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The visual mesh and physics body of the projectile\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The visual mesh and physics body of the projectile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchStrength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fulfills Requirement 5: Customizable initial launch strength\n" },
#endif
		{ "ModuleRelativePath", "Public/MyProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fulfills Requirement 5: Customizable initial launch strength" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLifetime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fulfills Requirement 7: Lifetime variable for automatic destruction\n" },
#endif
		{ "ModuleRelativePath", "Public/MyProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fulfills Requirement 7: Lifetime variable for automatic destruction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileLifetime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectile_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyProjectile, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMesh_MetaData), NewProp_ProjectileMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectile_Statics::NewProp_LaunchStrength = { "LaunchStrength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyProjectile, LaunchStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchStrength_MetaData), NewProp_LaunchStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectile_Statics::NewProp_ProjectileLifetime = { "ProjectileLifetime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyProjectile, ProjectileLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileLifetime_MetaData), NewProp_ProjectileLifetime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectile_Statics::NewProp_ProjectileMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectile_Statics::NewProp_LaunchStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectile_Statics::NewProp_ProjectileLifetime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Lab2_CITA417,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectile_Statics::ClassParams = {
	&AMyProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectile_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyProjectile()
{
	if (!Z_Registration_Info_UClass_AMyProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyProjectile.OuterSingleton, Z_Construct_UClass_AMyProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectile);
AMyProjectile::~AMyProjectile() {}
// ********** End Class AMyProjectile **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ulysse637_OneDrive___SUNY_Morrisville_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Public_MyProjectile_h__Script_Lab2_CITA417_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyProjectile, AMyProjectile::StaticClass, TEXT("AMyProjectile"), &Z_Registration_Info_UClass_AMyProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyProjectile), 3900627981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ulysse637_OneDrive___SUNY_Morrisville_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Public_MyProjectile_h__Script_Lab2_CITA417_182193949(TEXT("/Script/Lab2_CITA417"),
	Z_CompiledInDeferFile_FID_Users_ulysse637_OneDrive___SUNY_Morrisville_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Public_MyProjectile_h__Script_Lab2_CITA417_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ulysse637_OneDrive___SUNY_Morrisville_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Public_MyProjectile_h__Script_Lab2_CITA417_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
