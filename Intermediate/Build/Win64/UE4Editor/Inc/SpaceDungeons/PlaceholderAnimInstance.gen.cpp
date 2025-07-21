// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceDungeons/PlaceholderAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaceholderAnimInstance() {}
// Cross Module References
	SPACEDUNGEONS_API UClass* Z_Construct_UClass_UPlaceholderAnimInstance_NoRegister();
	SPACEDUNGEONS_API UClass* Z_Construct_UClass_UPlaceholderAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_SpaceDungeons();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	SPACEDUNGEONS_API UClass* Z_Construct_UClass_ASpaceDungeonsCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlaceholderAnimInstance::execUpdateAnimationProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties();
		P_NATIVE_END;
	}
	void UPlaceholderAnimInstance::StaticRegisterNativesUPlaceholderAnimInstance()
	{
		UClass* Class = UPlaceholderAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UPlaceholderAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlaceholderAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlaceholderAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlaceholderAnimInstance_NoRegister()
	{
		return UPlaceholderAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPlaceholderAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Main_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Main;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFloating_MetaData[];
#endif
		static void NewProp_bFloating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFloating;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaceholderAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceDungeons,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlaceholderAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 2036462830
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceholderAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlaceholderAnimInstance.h" },
		{ "ModuleRelativePath", "PlaceholderAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "PlaceholderAnimInstance" },
		{ "ModuleRelativePath", "PlaceholderAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaceholderAnimInstance, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "PlaceholderAnimInstance" },
		{ "ModuleRelativePath", "PlaceholderAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaceholderAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Main_MetaData[] = {
		{ "Category", "PlaceholderAnimInstance" },
		{ "ModuleRelativePath", "PlaceholderAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Main = { "Main", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaceholderAnimInstance, Main), Z_Construct_UClass_ASpaceDungeonsCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Main_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Main_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_bFloating_MetaData[] = {
		{ "Category", "PlaceholderAnimInstance" },
		{ "ModuleRelativePath", "PlaceholderAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_bFloating_SetBit(void* Obj)
	{
		((UPlaceholderAnimInstance*)Obj)->bFloating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_bFloating = { "bFloating", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlaceholderAnimInstance), &Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_bFloating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_bFloating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_bFloating_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaceholderAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Main,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_bFloating,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaceholderAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaceholderAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlaceholderAnimInstance_Statics::ClassParams = {
		&UPlaceholderAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlaceholderAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaceholderAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlaceholderAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlaceholderAnimInstance, 822900725);
	template<> SPACEDUNGEONS_API UClass* StaticClass<UPlaceholderAnimInstance>()
	{
		return UPlaceholderAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlaceholderAnimInstance(Z_Construct_UClass_UPlaceholderAnimInstance, &UPlaceholderAnimInstance::StaticClass, TEXT("/Script/SpaceDungeons"), TEXT("UPlaceholderAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaceholderAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
