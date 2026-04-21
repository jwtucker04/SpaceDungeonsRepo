// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceDungeons/ShipConvexHull.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShipConvexHull() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_AShipConvexHull();
SPACEDUNGEONS_API UClass* Z_Construct_UClass_AShipConvexHull_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceDungeons();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShipConvexHull **********************************************************
void AShipConvexHull::StaticRegisterNativesAShipConvexHull()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShipConvexHull;
UClass* AShipConvexHull::GetPrivateStaticClass()
{
	using TClass = AShipConvexHull;
	if (!Z_Registration_Info_UClass_AShipConvexHull.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShipConvexHull"),
			Z_Registration_Info_UClass_AShipConvexHull.InnerSingleton,
			StaticRegisterNativesAShipConvexHull,
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
	return Z_Registration_Info_UClass_AShipConvexHull.InnerSingleton;
}
UClass* Z_Construct_UClass_AShipConvexHull_NoRegister()
{
	return AShipConvexHull::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShipConvexHull_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ShipConvexHull.h" },
		{ "ModuleRelativePath", "ShipConvexHull.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoleVertexList_MetaData[] = {
		{ "Category", "Geometry" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "ShipConvexHull.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Category", "Geometry" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "ShipConvexHull.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
		{ "Category", "ShipConvexHull" },
		{ "ModuleRelativePath", "ShipConvexHull.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoleVertexList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoleVertexList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShipConvexHull>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShipConvexHull_Statics::NewProp_HoleVertexList_Inner = { "HoleVertexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShipConvexHull_Statics::NewProp_HoleVertexList = { "HoleVertexList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShipConvexHull, HoleVertexList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoleVertexList_MetaData), NewProp_HoleVertexList_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShipConvexHull_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShipConvexHull_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShipConvexHull, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShipConvexHull_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShipConvexHull_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShipConvexHull, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triangles_MetaData), NewProp_Triangles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShipConvexHull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipConvexHull_Statics::NewProp_HoleVertexList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipConvexHull_Statics::NewProp_HoleVertexList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipConvexHull_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipConvexHull_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipConvexHull_Statics::NewProp_Triangles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipConvexHull_Statics::NewProp_Triangles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShipConvexHull_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShipConvexHull_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceDungeons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShipConvexHull_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShipConvexHull_Statics::ClassParams = {
	&AShipConvexHull::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShipConvexHull_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShipConvexHull_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShipConvexHull_Statics::Class_MetaDataParams), Z_Construct_UClass_AShipConvexHull_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShipConvexHull()
{
	if (!Z_Registration_Info_UClass_AShipConvexHull.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShipConvexHull.OuterSingleton, Z_Construct_UClass_AShipConvexHull_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShipConvexHull.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShipConvexHull);
AShipConvexHull::~AShipConvexHull() {}
// ********** End Class AShipConvexHull ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_ShipConvexHull_h__Script_SpaceDungeons_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShipConvexHull, AShipConvexHull::StaticClass, TEXT("AShipConvexHull"), &Z_Registration_Info_UClass_AShipConvexHull, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShipConvexHull), 1060797466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_ShipConvexHull_h__Script_SpaceDungeons_4278792523(TEXT("/Script/SpaceDungeons"),
	Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_ShipConvexHull_h__Script_SpaceDungeons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_ShipConvexHull_h__Script_SpaceDungeons_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
