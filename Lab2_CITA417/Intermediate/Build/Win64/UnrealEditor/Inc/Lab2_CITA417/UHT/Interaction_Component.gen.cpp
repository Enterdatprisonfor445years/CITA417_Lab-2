// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction_Component.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteraction_Component() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LAB2_CITA417_API UClass* Z_Construct_UClass_AMyProjectile_NoRegister();
LAB2_CITA417_API UClass* Z_Construct_UClass_UInteraction_Component();
LAB2_CITA417_API UClass* Z_Construct_UClass_UInteraction_Component_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lab2_CITA417();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInteraction_Component Function Interact *********************************
struct Z_Construct_UFunction_UInteraction_Component_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main interaction function called by input\n" },
#endif
		{ "ModuleRelativePath", "Interaction_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main interaction function called by input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteraction_Component_Interact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteraction_Component, nullptr, "Interact", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteraction_Component_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteraction_Component_Interact_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteraction_Component_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteraction_Component_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteraction_Component::execInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact();
	P_NATIVE_END;
}
// ********** End Class UInteraction_Component Function Interact ***********************************

// ********** Begin Class UInteraction_Component ***************************************************
void UInteraction_Component::StaticRegisterNativesUInteraction_Component()
{
	UClass* Class = UInteraction_Component::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &UInteraction_Component::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteraction_Component;
UClass* UInteraction_Component::GetPrivateStaticClass()
{
	using TClass = UInteraction_Component;
	if (!Z_Registration_Info_UClass_UInteraction_Component.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Interaction_Component"),
			Z_Registration_Info_UClass_UInteraction_Component.InnerSingleton,
			StaticRegisterNativesUInteraction_Component,
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
	return Z_Registration_Info_UClass_UInteraction_Component.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteraction_Component_NoRegister()
{
	return UInteraction_Component::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteraction_Component_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Interaction_Component.h" },
		{ "ModuleRelativePath", "Interaction_Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 3. Object detection: Configurable distance\n" },
#endif
		{ "ModuleRelativePath", "Interaction_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "3. Object detection: Configurable distance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 5. Impulse: Configurable strength\n" },
#endif
		{ "ModuleRelativePath", "Interaction_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "5. Impulse: Configurable strength" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile Blueprint type to spawn\n" },
#endif
		{ "ModuleRelativePath", "Interaction_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile Blueprint type to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireCooldownTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cooldown duration in seconds\n" },
#endif
		{ "ModuleRelativePath", "Interaction_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cooldown duration in seconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireCooldownTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteraction_Component_Interact, "Interact" }, // 2217715412
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteraction_Component>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteraction_Component_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteraction_Component, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteraction_Component_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteraction_Component, ImpulseStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseStrength_MetaData), NewProp_ImpulseStrength_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInteraction_Component_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteraction_Component, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteraction_Component_Statics::NewProp_FireCooldownTime = { "FireCooldownTime", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteraction_Component, FireCooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireCooldownTime_MetaData), NewProp_FireCooldownTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteraction_Component_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteraction_Component_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteraction_Component_Statics::NewProp_ImpulseStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteraction_Component_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteraction_Component_Statics::NewProp_FireCooldownTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteraction_Component_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteraction_Component_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Lab2_CITA417,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteraction_Component_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteraction_Component_Statics::ClassParams = {
	&UInteraction_Component::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteraction_Component_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteraction_Component_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteraction_Component_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteraction_Component_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteraction_Component()
{
	if (!Z_Registration_Info_UClass_UInteraction_Component.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteraction_Component.OuterSingleton, Z_Construct_UClass_UInteraction_Component_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteraction_Component.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteraction_Component);
UInteraction_Component::~UInteraction_Component() {}
// ********** End Class UInteraction_Component *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ulysse637_OneDrive___SUNY_Morrisville_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Interaction_Component_h__Script_Lab2_CITA417_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteraction_Component, UInteraction_Component::StaticClass, TEXT("UInteraction_Component"), &Z_Registration_Info_UClass_UInteraction_Component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteraction_Component), 2986421013U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ulysse637_OneDrive___SUNY_Morrisville_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Interaction_Component_h__Script_Lab2_CITA417_1592134840(TEXT("/Script/Lab2_CITA417"),
	Z_CompiledInDeferFile_FID_Users_ulysse637_OneDrive___SUNY_Morrisville_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Interaction_Component_h__Script_Lab2_CITA417_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ulysse637_OneDrive___SUNY_Morrisville_Desktop_CITA417_CITA417_Lab_2_Lab2_CITA417_Source_Lab2_CITA417_Interaction_Component_h__Script_Lab2_CITA417_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
