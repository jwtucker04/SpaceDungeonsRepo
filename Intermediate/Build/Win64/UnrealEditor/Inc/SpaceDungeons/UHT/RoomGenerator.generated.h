// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoomGenerator.h"

#ifdef SPACEDUNGEONS_RoomGenerator_generated_h
#error "RoomGenerator.generated.h already included, missing '#pragma once' in RoomGenerator.h"
#endif
#define SPACEDUNGEONS_RoomGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARoomGenerator ***********************************************************
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoomGenerator_NoRegister();

#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoomGenerator(); \
	friend struct Z_Construct_UClass_ARoomGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoomGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(ARoomGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceDungeons"), Z_Construct_UClass_ARoomGenerator_NoRegister) \
	DECLARE_SERIALIZER(ARoomGenerator)


#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARoomGenerator(ARoomGenerator&&) = delete; \
	ARoomGenerator(const ARoomGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoomGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoomGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoomGenerator) \
	NO_API virtual ~ARoomGenerator();


#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h_23_PROLOG
#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARoomGenerator;

// ********** End Class ARoomGenerator *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_RoomGenerator_h

// ********** Begin Enum EGenType ******************************************************************
#define FOREACH_ENUM_EGENTYPE(op) \
	op(EGenType::EGT_Branches) \
	op(EGenType::EGT_CA) 

enum class EGenType : uint8;
template<> struct TIsUEnumClass<EGenType> { enum { Value = true }; };
template<> SPACEDUNGEONS_API UEnum* StaticEnum<EGenType>();
// ********** End Enum EGenType ********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
