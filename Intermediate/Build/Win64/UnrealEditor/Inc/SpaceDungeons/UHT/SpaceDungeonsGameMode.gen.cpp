// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceDungeons/SpaceDungeonsGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpaceDungeonsGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ASpaceDungeonsGameMode();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ASpaceDungeonsGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceDungeons();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpaceDungeonsGameMode ***************************************************
void ASpaceDungeonsGameMode::StaticRegisterNativesASpaceDungeonsGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpaceDungeonsGameMode;
UClass* ASpaceDungeonsGameMode::GetPrivateStaticClass()
{
	using TClass = ASpaceDungeonsGameMode;
	if (!Z_Registration_Info_UClass_ASpaceDungeonsGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpaceDungeonsGameMode"),
			Z_Registration_Info_UClass_ASpaceDungeonsGameMode.InnerSingleton,
			StaticRegisterNativesASpaceDungeonsGameMode,
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
	return Z_Registration_Info_UClass_ASpaceDungeonsGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpaceDungeonsGameMode_NoRegister()
{
	return ASpaceDungeonsGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpaceDungeonsGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpaceDungeonsGameMode.h" },
		{ "ModuleRelativePath", "SpaceDungeonsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceDungeonsGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceDungeons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::ClassParams = {
	&ASpaceDungeonsGameMode::StaticClass,
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
	0x008803ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpaceDungeonsGameMode()
{
	if (!Z_Registration_Info_UClass_ASpaceDungeonsGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpaceDungeonsGameMode.OuterSingleton, Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpaceDungeonsGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceDungeonsGameMode);
ASpaceDungeonsGameMode::~ASpaceDungeonsGameMode() {}
// ********** End Class ASpaceDungeonsGameMode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsGameMode_h__Script_SpaceDungeons_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceDungeonsGameMode, ASpaceDungeonsGameMode::StaticClass, TEXT("ASpaceDungeonsGameMode"), &Z_Registration_Info_UClass_ASpaceDungeonsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceDungeonsGameMode), 357141224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsGameMode_h__Script_SpaceDungeons_460508579(TEXT("/Script/SpaceDungeons"),
	Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsGameMode_h__Script_SpaceDungeons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsGameMode_h__Script_SpaceDungeons_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
