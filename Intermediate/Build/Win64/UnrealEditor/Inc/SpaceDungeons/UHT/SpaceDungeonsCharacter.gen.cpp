// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceDungeons/SpaceDungeonsCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpaceDungeonsCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ASpaceDungeonsCharacter();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ASpaceDungeonsCharacter_NoRegister();
SPACEDUNGEONS_API UEnum* Z_Construct_UEnum_SpaceDungeons_EMovementStatus();
UPackage* Z_Construct_UPackage__Script_SpaceDungeons();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMovementStatus ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementStatus;
static UEnum* EMovementStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpaceDungeons_EMovementStatus, (UObject*)Z_Construct_UPackage__Script_SpaceDungeons(), TEXT("EMovementStatus"));
	}
	return Z_Registration_Info_UEnum_EMovementStatus.OuterSingleton;
}
template<> SPACEDUNGEONS_API UEnum* StaticEnum<EMovementStatus>()
{
	return EMovementStatus_StaticEnum();
}
struct Z_Construct_UEnum_SpaceDungeons_EMovementStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMS_Floating.DisplayName", "Floating" },
		{ "EMS_Floating.Name", "EMovementStatus::EMS_Floating" },
		{ "EMS_MAX.DisplayName", "DefaultMAX" },
		{ "EMS_MAX.Name", "EMovementStatus::EMS_MAX" },
		{ "EMS_OnWall.DisplayName", "OnWall" },
		{ "EMS_OnWall.Name", "EMovementStatus::EMS_OnWall" },
		{ "ModuleRelativePath", "SpaceDungeonsCharacter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementStatus::EMS_Floating", (int64)EMovementStatus::EMS_Floating },
		{ "EMovementStatus::EMS_OnWall", (int64)EMovementStatus::EMS_OnWall },
		{ "EMovementStatus::EMS_MAX", (int64)EMovementStatus::EMS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpaceDungeons_EMovementStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SpaceDungeons,
	nullptr,
	"EMovementStatus",
	"EMovementStatus",
	Z_Construct_UEnum_SpaceDungeons_EMovementStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SpaceDungeons_EMovementStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SpaceDungeons_EMovementStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SpaceDungeons_EMovementStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SpaceDungeons_EMovementStatus()
{
	if (!Z_Registration_Info_UEnum_EMovementStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementStatus.InnerSingleton, Z_Construct_UEnum_SpaceDungeons_EMovementStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementStatus.InnerSingleton;
}
// ********** End Enum EMovementStatus *************************************************************

// ********** Begin Class ASpaceDungeonsCharacter **************************************************
void ASpaceDungeonsCharacter::StaticRegisterNativesASpaceDungeonsCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpaceDungeonsCharacter;
UClass* ASpaceDungeonsCharacter::GetPrivateStaticClass()
{
	using TClass = ASpaceDungeonsCharacter;
	if (!Z_Registration_Info_UClass_ASpaceDungeonsCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpaceDungeonsCharacter"),
			Z_Registration_Info_UClass_ASpaceDungeonsCharacter.InnerSingleton,
			StaticRegisterNativesASpaceDungeonsCharacter,
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
	return Z_Registration_Info_UClass_ASpaceDungeonsCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpaceDungeonsCharacter_NoRegister()
{
	return ASpaceDungeonsCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpaceDungeonsCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpaceDungeonsCharacter.h" },
		{ "ModuleRelativePath", "SpaceDungeonsCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpaceDungeonsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpaceDungeonsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementStatus_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "SpaceDungeonsCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
#endif
		{ "ModuleRelativePath", "SpaceDungeonsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
#endif
		{ "ModuleRelativePath", "SpaceDungeonsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStuck_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "SpaceDungeonsCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMidJump_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "SpaceDungeonsCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallDistance_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "SpaceDungeonsCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredYaw_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "SpaceDungeonsCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementStatus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
	static void NewProp_bStuck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStuck;
	static void NewProp_bMidJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMidJump;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredYaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceDungeonsCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceDungeonsCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceDungeonsCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_MovementStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_MovementStatus = { "MovementStatus", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceDungeonsCharacter, MovementStatus), Z_Construct_UEnum_SpaceDungeons_EMovementStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementStatus_MetaData), NewProp_MovementStatus_MetaData) }; // 4145910719
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceDungeonsCharacter, BaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTurnRate_MetaData), NewProp_BaseTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceDungeonsCharacter, BaseLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData), NewProp_BaseLookUpRate_MetaData) };
void Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_bStuck_SetBit(void* Obj)
{
	((ASpaceDungeonsCharacter*)Obj)->bStuck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_bStuck = { "bStuck", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpaceDungeonsCharacter), &Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_bStuck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStuck_MetaData), NewProp_bStuck_MetaData) };
void Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_bMidJump_SetBit(void* Obj)
{
	((ASpaceDungeonsCharacter*)Obj)->bMidJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_bMidJump = { "bMidJump", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpaceDungeonsCharacter), &Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_bMidJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMidJump_MetaData), NewProp_bMidJump_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_WallDistance = { "WallDistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceDungeonsCharacter, WallDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallDistance_MetaData), NewProp_WallDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_DesiredYaw = { "DesiredYaw", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceDungeonsCharacter, DesiredYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredYaw_MetaData), NewProp_DesiredYaw_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_MovementStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_MovementStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_BaseTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_BaseLookUpRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_bStuck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_bMidJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_WallDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::NewProp_DesiredYaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceDungeons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::ClassParams = {
	&ASpaceDungeonsCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpaceDungeonsCharacter()
{
	if (!Z_Registration_Info_UClass_ASpaceDungeonsCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpaceDungeonsCharacter.OuterSingleton, Z_Construct_UClass_ASpaceDungeonsCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpaceDungeonsCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceDungeonsCharacter);
ASpaceDungeonsCharacter::~ASpaceDungeonsCharacter() {}
// ********** End Class ASpaceDungeonsCharacter ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h__Script_SpaceDungeons_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovementStatus_StaticEnum, TEXT("EMovementStatus"), &Z_Registration_Info_UEnum_EMovementStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4145910719U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceDungeonsCharacter, ASpaceDungeonsCharacter::StaticClass, TEXT("ASpaceDungeonsCharacter"), &Z_Registration_Info_UClass_ASpaceDungeonsCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceDungeonsCharacter), 2685054583U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h__Script_SpaceDungeons_3749026427(TEXT("/Script/SpaceDungeons"),
	Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h__Script_SpaceDungeons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h__Script_SpaceDungeons_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h__Script_SpaceDungeons_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h__Script_SpaceDungeons_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
