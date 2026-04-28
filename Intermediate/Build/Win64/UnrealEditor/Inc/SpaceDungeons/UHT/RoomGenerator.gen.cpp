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
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoom_NoRegister();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoomGenerator();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoomGenerator_NoRegister();
SPACEDUNGEONS_API UEnum* Z_Construct_UEnum_SpaceDungeons_EGenType();
UPackage* Z_Construct_UPackage__Script_SpaceDungeons();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGenType ******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenType;
static UEnum* EGenType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpaceDungeons_EGenType, (UObject*)Z_Construct_UPackage__Script_SpaceDungeons(), TEXT("EGenType"));
	}
	return Z_Registration_Info_UEnum_EGenType.OuterSingleton;
}
template<> SPACEDUNGEONS_API UEnum* StaticEnum<EGenType>()
{
	return EGenType_StaticEnum();
}
struct Z_Construct_UEnum_SpaceDungeons_EGenType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EGT_Branches.DisplayName", "Branches" },
		{ "EGT_Branches.Name", "EGenType::EGT_Branches" },
		{ "EGT_CA.DisplayName", "Cellular_Automata" },
		{ "EGT_CA.Name", "EGenType::EGT_CA" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenType::EGT_Branches", (int64)EGenType::EGT_Branches },
		{ "EGenType::EGT_CA", (int64)EGenType::EGT_CA },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpaceDungeons_EGenType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SpaceDungeons,
	nullptr,
	"EGenType",
	"EGenType",
	Z_Construct_UEnum_SpaceDungeons_EGenType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SpaceDungeons_EGenType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SpaceDungeons_EGenType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SpaceDungeons_EGenType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SpaceDungeons_EGenType()
{
	if (!Z_Registration_Info_UEnum_EGenType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenType.InnerSingleton, Z_Construct_UEnum_SpaceDungeons_EGenType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenType.InnerSingleton;
}
// ********** End Enum EGenType ********************************************************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TunnelMesh_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenType_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfBranches_MetaData[] = {
		{ "Category", "BranchesSettings" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchLength_MetaData[] = {
		{ "Category", "BranchesSettings" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeX_MetaData[] = {
		{ "Category", "CASettings" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeY_MetaData[] = {
		{ "Category", "CASettings" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSteps_MetaData[] = {
		{ "Category", "CASettings" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedRooms_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TunnelMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfBranches;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BranchLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSteps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntranceRotation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnableClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnableClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedRooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedRooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoomGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_RoomClass = { "RoomClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, RoomClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomClass_MetaData), NewProp_RoomClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_TunnelMesh = { "TunnelMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, TunnelMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TunnelMesh_MetaData), NewProp_TunnelMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_GenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_GenType = { "GenType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, GenType), Z_Construct_UEnum_SpaceDungeons_EGenType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenType_MetaData), NewProp_GenType_MetaData) }; // 3927324402
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_NumberOfBranches = { "NumberOfBranches", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, NumberOfBranches), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfBranches_MetaData), NewProp_NumberOfBranches_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_BranchLength = { "BranchLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, BranchLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchLength_MetaData), NewProp_BranchLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_GridSizeX = { "GridSizeX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, GridSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSizeX_MetaData), NewProp_GridSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_GridSizeY = { "GridSizeY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, GridSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSizeY_MetaData), NewProp_GridSizeY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_NumberOfSteps = { "NumberOfSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, NumberOfSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfSteps_MetaData), NewProp_NumberOfSteps_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_ExitRotation = { "ExitRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, ExitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitRotation_MetaData), NewProp_ExitRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_EntranceRotation = { "EntranceRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, EntranceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntranceRotation_MetaData), NewProp_EntranceRotation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses_Inner = { "SpawnableClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ARoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses = { "SpawnableClasses", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, SpawnableClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnableClasses_MetaData), NewProp_SpawnableClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnedRooms_Inner = { "SpawnedRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ARoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnedRooms = { "SpawnedRooms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomGenerator, SpawnedRooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedRooms_MetaData), NewProp_SpawnedRooms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoomGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_RoomClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_TunnelMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_GenType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_GenType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_NumberOfBranches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_BranchLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_GridSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_GridSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_NumberOfSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_ExitRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_EntranceRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnedRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnedRooms,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGenType_StaticEnum, TEXT("EGenType"), &Z_Registration_Info_UEnum_EGenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3927324402U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoomGenerator, ARoomGenerator::StaticClass, TEXT("ARoomGenerator"), &Z_Registration_Info_UClass_ARoomGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoomGenerator), 1863133752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h__Script_SpaceDungeons_1878085966(TEXT("/Script/SpaceDungeons"),
	Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h__Script_SpaceDungeons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h__Script_SpaceDungeons_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h__Script_SpaceDungeons_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h__Script_SpaceDungeons_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
