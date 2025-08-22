// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceDungeons/Room.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRoom() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoom();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoom_NoRegister();
SPACEDUNGEONS_API UEnum* Z_Construct_UEnum_SpaceDungeons_ERoomType();
SPACEDUNGEONS_API UScriptStruct* Z_Construct_UScriptStruct_FRoomExit();
UPackage* Z_Construct_UPackage__Script_SpaceDungeons();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRoomExit *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoomExit;
class UScriptStruct* FRoomExit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRoomExit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRoomExit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoomExit, (UObject*)Z_Construct_UPackage__Script_SpaceDungeons(), TEXT("RoomExit"));
	}
	return Z_Registration_Info_UScriptStruct_FRoomExit.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRoomExit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoomExit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRoomExit_Statics::NewProp_ExitComponent = { "ExitComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomExit, ExitComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitComponent_MetaData), NewProp_ExitComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoomExit_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomExit, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoomExit_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomExit, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoomExit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomExit_Statics::NewProp_ExitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomExit_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomExit_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomExit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoomExit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceDungeons,
	nullptr,
	&NewStructOps,
	"RoomExit",
	Z_Construct_UScriptStruct_FRoomExit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomExit_Statics::PropPointers),
	sizeof(FRoomExit),
	alignof(FRoomExit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomExit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoomExit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRoomExit()
{
	if (!Z_Registration_Info_UScriptStruct_FRoomExit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoomExit.InnerSingleton, Z_Construct_UScriptStruct_FRoomExit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRoomExit.InnerSingleton;
}
// ********** End ScriptStruct FRoomExit ***********************************************************

// ********** Begin Enum ERoomType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERoomType;
static UEnum* ERoomType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERoomType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERoomType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpaceDungeons_ERoomType, (UObject*)Z_Construct_UPackage__Script_SpaceDungeons(), TEXT("ERoomType"));
	}
	return Z_Registration_Info_UEnum_ERoomType.OuterSingleton;
}
template<> SPACEDUNGEONS_API UEnum* StaticEnum<ERoomType>()
{
	return ERoomType_StaticEnum();
}
struct Z_Construct_UEnum_SpaceDungeons_ERoomType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMS_Bridge.DisplayName", "Bridge" },
		{ "EMS_Bridge.Name", "ERoomType::EMS_Bridge" },
		{ "EMS_Engine.DisplayName", "Engine" },
		{ "EMS_Engine.Name", "ERoomType::EMS_Engine" },
		{ "EMS_Normal.DisplayName", "Normal" },
		{ "EMS_Normal.Name", "ERoomType::EMS_Normal" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoomType::EMS_Normal", (int64)ERoomType::EMS_Normal },
		{ "ERoomType::EMS_Bridge", (int64)ERoomType::EMS_Bridge },
		{ "ERoomType::EMS_Engine", (int64)ERoomType::EMS_Engine },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpaceDungeons_ERoomType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SpaceDungeons,
	nullptr,
	"ERoomType",
	"ERoomType",
	Z_Construct_UEnum_SpaceDungeons_ERoomType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SpaceDungeons_ERoomType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SpaceDungeons_ERoomType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SpaceDungeons_ERoomType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SpaceDungeons_ERoomType()
{
	if (!Z_Registration_Info_UEnum_ERoomType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERoomType.InnerSingleton, Z_Construct_UEnum_SpaceDungeons_ERoomType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERoomType.InnerSingleton;
}
// ********** End Enum ERoomType *******************************************************************

// ********** Begin Class ARoom Function OnOverlapBegin ********************************************
struct Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics
{
	struct Room_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Room_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "OnOverlapBegin", Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::Room_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::Room_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoom_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ARoom Function OnOverlapBegin **********************************************

// ********** Begin Class ARoom ********************************************************************
void ARoom::StaticRegisterNativesARoom()
{
	UClass* Class = ARoom::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &ARoom::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARoom;
UClass* ARoom::GetPrivateStaticClass()
{
	using TClass = ARoom;
	if (!Z_Registration_Info_UClass_ARoom.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Room"),
			Z_Registration_Info_UClass_ARoom.InnerSingleton,
			StaticRegisterNativesARoom,
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
	return Z_Registration_Info_UClass_ARoom.InnerSingleton;
}
UClass* Z_Construct_UClass_ARoom_NoRegister()
{
	return ARoom::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Room.h" },
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "Room" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Room" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exits_MetaData[] = {
		{ "Category", "Stats" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitData_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverlapped_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEngine_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoomType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Exits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Exits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExitData;
	static void NewProp_bOverlapped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverlapped;
	static void NewProp_bIsEngine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEngine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoom_OnOverlapBegin, "OnOverlapBegin" }, // 3070766713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARoom_Statics::NewProp_RoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoom, RoomType), Z_Construct_UEnum_SpaceDungeons_ERoomType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomType_MetaData), NewProp_RoomType_MetaData) }; // 986006208
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoom, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoom, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp_Exits_Inner = { "Exits", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp_Exits = { "Exits", nullptr, (EPropertyFlags)0x001000800002000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoom, Exits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exits_MetaData), NewProp_Exits_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp_ExitData_Inner = { "ExitData", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoomExit, METADATA_PARAMS(0, nullptr) }; // 827923701
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp_ExitData = { "ExitData", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoom, ExitData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitData_MetaData), NewProp_ExitData_MetaData) }; // 827923701
void Z_Construct_UClass_ARoom_Statics::NewProp_bOverlapped_SetBit(void* Obj)
{
	((ARoom*)Obj)->bOverlapped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp_bOverlapped = { "bOverlapped", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoom), &Z_Construct_UClass_ARoom_Statics::NewProp_bOverlapped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverlapped_MetaData), NewProp_bOverlapped_MetaData) };
void Z_Construct_UClass_ARoom_Statics::NewProp_bIsEngine_SetBit(void* Obj)
{
	((ARoom*)Obj)->bIsEngine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp_bIsEngine = { "bIsEngine", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoom), &Z_Construct_UClass_ARoom_Statics::NewProp_bIsEngine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEngine_MetaData), NewProp_bIsEngine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp_RoomType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp_RoomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp_BoxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp_Exits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp_Exits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp_ExitData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp_ExitData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp_bOverlapped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp_bIsEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceDungeons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoom_Statics::ClassParams = {
	&ARoom::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARoom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARoom_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoom_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoom()
{
	if (!Z_Registration_Info_UClass_ARoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoom.OuterSingleton, Z_Construct_UClass_ARoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoom.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoom);
ARoom::~ARoom() {}
// ********** End Class ARoom **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h__Script_SpaceDungeons_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERoomType_StaticEnum, TEXT("ERoomType"), &Z_Registration_Info_UEnum_ERoomType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 986006208U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRoomExit::StaticStruct, Z_Construct_UScriptStruct_FRoomExit_Statics::NewStructOps, TEXT("RoomExit"), &Z_Registration_Info_UScriptStruct_FRoomExit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoomExit), 827923701U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoom, ARoom::StaticClass, TEXT("ARoom"), &Z_Registration_Info_UClass_ARoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoom), 3756531010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h__Script_SpaceDungeons_2450815611(TEXT("/Script/SpaceDungeons"),
	Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h__Script_SpaceDungeons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h__Script_SpaceDungeons_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h__Script_SpaceDungeons_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h__Script_SpaceDungeons_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h__Script_SpaceDungeons_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h__Script_SpaceDungeons_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
