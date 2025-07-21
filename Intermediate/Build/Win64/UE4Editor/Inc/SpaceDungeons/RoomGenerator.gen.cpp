// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceDungeons/RoomGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomGenerator() {}
// Cross Module References
	SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoomGenerator_NoRegister();
	SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoomGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpaceDungeons();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoom_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void ARoomGenerator::StaticRegisterNativesARoomGenerator()
	{
	}
	UClass* Z_Construct_UClass_ARoomGenerator_NoRegister()
	{
		return ARoomGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ARoomGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoomClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExitRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntranceRotation;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnableClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnableClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnableClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoomGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceDungeons,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoomGenerator.h" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomGenerator_Statics::NewProp_RoomClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_RoomClass = { "RoomClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomGenerator, RoomClass), Z_Construct_UClass_ARoom_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARoomGenerator_Statics::NewProp_RoomClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomGenerator_Statics::NewProp_RoomClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomGenerator_Statics::NewProp_PitchDelta_MetaData[] = {
		{ "Category", "This Rotation Bullshit" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_PitchDelta = { "PitchDelta", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomGenerator, PitchDelta), METADATA_PARAMS(Z_Construct_UClass_ARoomGenerator_Statics::NewProp_PitchDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomGenerator_Statics::NewProp_PitchDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomGenerator_Statics::NewProp_ExitRotation_MetaData[] = {
		{ "Category", "This Rotation Bullshit" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_ExitRotation = { "ExitRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomGenerator, ExitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ARoomGenerator_Statics::NewProp_ExitRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomGenerator_Statics::NewProp_ExitRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomGenerator_Statics::NewProp_EntranceRotation_MetaData[] = {
		{ "Category", "This Rotation Bullshit" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_EntranceRotation = { "EntranceRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomGenerator, EntranceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ARoomGenerator_Statics::NewProp_EntranceRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomGenerator_Statics::NewProp_EntranceRotation_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses_Inner = { "SpawnableClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARoom_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses = { "SpawnableClasses", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomGenerator, SpawnableClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoomGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_RoomClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_PitchDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_ExitRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_EntranceRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomGenerator_Statics::NewProp_SpawnableClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoomGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoomGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoomGenerator_Statics::ClassParams = {
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoomGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoomGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoomGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoomGenerator, 1088079877);
	template<> SPACEDUNGEONS_API UClass* StaticClass<ARoomGenerator>()
	{
		return ARoomGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoomGenerator(Z_Construct_UClass_ARoomGenerator, &ARoomGenerator::StaticClass, TEXT("/Script/SpaceDungeons"), TEXT("ARoomGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoomGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
