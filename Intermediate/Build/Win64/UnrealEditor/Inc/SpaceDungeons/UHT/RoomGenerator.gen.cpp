// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceDungeons/RoomGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRoomGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoom_NoRegister();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoomGenerator();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoomGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceDungeons();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARoomGenerator ***********************************************************
void ARoomGenerator::StaticRegisterNativesARoomGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARoomGenerator;
UClass* ARoomGenerator::GetPrivateStaticClass()
{
	using TClass = ARoomGenerator;
	if (!Z_Registration_Info_UClass_ARoomGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RoomGenerator"),
			Z_Registration_Info_UClass_ARoomGenerator.InnerSingleton,
			StaticRegisterNativesARoomGenerator,
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
	return Z_Registration_Info_UClass_ARoomGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_ARoomGenerator_NoRegister()
{
	return ARoomGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARoomGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RoomGenerator.h" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitRotation_MetaData[] = {
		{ "Category", "This Rotation Bullshit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = \"This Rotation Bullshit\")\n//float PitchDelta;\n" },
#endif
		{ "ModuleRelativePath", "RoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"This Rotation Bullshit\")\nfloat PitchDelta;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntranceRotation_MetaData[] = {
		{ "Category", "This Rotation Bullshit" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnableClasses_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntranceRotation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnableClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnableClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoomGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_RoomClass = { "RoomClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, RoomClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomClass_MetaData), NewProp_RoomClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_ExitRotation = { "ExitRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, ExitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitRotation_MetaData), NewProp_ExitRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_EntranceRotation = { "EntranceRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, EntranceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntranceRotation_MetaData), NewProp_EntranceRotation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses_Inner = { "SpawnableClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ARoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses = { "SpawnableClasses", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, SpawnableClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnableClasses_MetaData), NewProp_SpawnableClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoomGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_RoomClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_ExitRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_EntranceRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARoomGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceDungeons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoomGenerator_Statics::ClassParams = {
	&ARoomGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARoomGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARoomGenerator_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoomGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoomGenerator()
{
	if (!Z_Registration_Info_UClass_ARoomGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoomGenerator.OuterSingleton, Z_Construct_UClass_ARoomGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoomGenerator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoomGenerator);
ARoomGenerator::~ARoomGenerator() {}
// ********** End Class ARoomGenerator *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h__Script_SpaceDungeons_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoomGenerator, ARoomGenerator::StaticClass, TEXT("ARoomGenerator"), &Z_Registration_Info_UClass_ARoomGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoomGenerator), 3768070588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h__Script_SpaceDungeons_3425656229(TEXT("/Script/SpaceDungeons"),
	Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h__Script_SpaceDungeons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h__Script_SpaceDungeons_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
