// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceDungeons/SpaceDungeonsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceDungeonsGameMode() {}
// Cross Module References
	SPACEDUNGEONS_API UClass* Z_Construct_UClass_ASpaceDungeonsGameMode_NoRegister();
	SPACEDUNGEONS_API UClass* Z_Construct_UClass_ASpaceDungeonsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpaceDungeons();
// End Cross Module References
	void ASpaceDungeonsGameMode::StaticRegisterNativesASpaceDungeonsGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASpaceDungeonsGameMode_NoRegister()
	{
		return ASpaceDungeonsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceDungeonsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceDungeons,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpaceDungeonsGameMode.h" },
		{ "ModuleRelativePath", "SpaceDungeonsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceDungeonsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::ClassParams = {
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceDungeonsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceDungeonsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceDungeonsGameMode, 2558947029);
	template<> SPACEDUNGEONS_API UClass* StaticClass<ASpaceDungeonsGameMode>()
	{
		return ASpaceDungeonsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceDungeonsGameMode(Z_Construct_UClass_ASpaceDungeonsGameMode, &ASpaceDungeonsGameMode::StaticClass, TEXT("/Script/SpaceDungeons"), TEXT("ASpaceDungeonsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceDungeonsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
