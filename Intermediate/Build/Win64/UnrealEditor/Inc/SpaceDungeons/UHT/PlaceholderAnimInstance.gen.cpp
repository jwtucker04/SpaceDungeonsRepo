// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceDungeons/PlaceholderAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlaceholderAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ASpaceDungeonsCharacter_NoRegister();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_UPlaceholderAnimInstance();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_UPlaceholderAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceDungeons();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlaceholderAnimInstance Function UpdateAnimationProperties **************
struct Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlaceholderAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlaceholderAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlaceholderAnimInstance::execUpdateAnimationProperties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAnimationProperties();
	P_NATIVE_END;
}
// ********** End Class UPlaceholderAnimInstance Function UpdateAnimationProperties ****************

// ********** Begin Class UPlaceholderAnimInstance *************************************************
void UPlaceholderAnimInstance::StaticRegisterNativesUPlaceholderAnimInstance()
{
	UClass* Class = UPlaceholderAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateAnimationProperties", &UPlaceholderAnimInstance::execUpdateAnimationProperties },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlaceholderAnimInstance;
UClass* UPlaceholderAnimInstance::GetPrivateStaticClass()
{
	using TClass = UPlaceholderAnimInstance;
	if (!Z_Registration_Info_UClass_UPlaceholderAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlaceholderAnimInstance"),
			Z_Registration_Info_UClass_UPlaceholderAnimInstance.InnerSingleton,
			StaticRegisterNativesUPlaceholderAnimInstance,
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
	return Z_Registration_Info_UClass_UPlaceholderAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlaceholderAnimInstance_NoRegister()
{
	return UPlaceholderAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlaceholderAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlaceholderAnimInstance.h" },
		{ "ModuleRelativePath", "PlaceholderAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "PlaceholderAnimInstance" },
		{ "ModuleRelativePath", "PlaceholderAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[] = {
		{ "Category", "PlaceholderAnimInstance" },
		{ "ModuleRelativePath", "PlaceholderAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Main_MetaData[] = {
		{ "Category", "PlaceholderAnimInstance" },
		{ "ModuleRelativePath", "PlaceholderAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFloating_MetaData[] = {
		{ "Category", "PlaceholderAnimInstance" },
		{ "ModuleRelativePath", "PlaceholderAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Main;
	static void NewProp_bFloating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFloating;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlaceholderAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 3790112477
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaceholderAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaceholderAnimInstance, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaceholderAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pawn_MetaData), NewProp_Pawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Main = { "Main", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaceholderAnimInstance, Main), Z_Construct_UClass_ASpaceDungeonsCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Main_MetaData), NewProp_Main_MetaData) };
void Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_bFloating_SetBit(void* Obj)
{
	((UPlaceholderAnimInstance*)Obj)->bFloating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_bFloating = { "bFloating", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlaceholderAnimInstance), &Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_bFloating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFloating_MetaData), NewProp_bFloating_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaceholderAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_Main,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceholderAnimInstance_Statics::NewProp_bFloating,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlaceholderAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceDungeons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaceholderAnimInstance_Statics::ClassParams = {
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceholderAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlaceholderAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlaceholderAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPlaceholderAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaceholderAnimInstance.OuterSingleton, Z_Construct_UClass_UPlaceholderAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlaceholderAnimInstance.OuterSingleton;
}
UPlaceholderAnimInstance::UPlaceholderAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaceholderAnimInstance);
UPlaceholderAnimInstance::~UPlaceholderAnimInstance() {}
// ********** End Class UPlaceholderAnimInstance ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_PlaceholderAnimInstance_h__Script_SpaceDungeons_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlaceholderAnimInstance, UPlaceholderAnimInstance::StaticClass, TEXT("UPlaceholderAnimInstance"), &Z_Registration_Info_UClass_UPlaceholderAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaceholderAnimInstance), 3308646786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_PlaceholderAnimInstance_h__Script_SpaceDungeons_2134196254(TEXT("/Script/SpaceDungeons"),
	Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_PlaceholderAnimInstance_h__Script_SpaceDungeons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_PlaceholderAnimInstance_h__Script_SpaceDungeons_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
