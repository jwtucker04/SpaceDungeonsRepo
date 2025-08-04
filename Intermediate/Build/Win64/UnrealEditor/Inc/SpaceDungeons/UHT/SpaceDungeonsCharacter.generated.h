// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpaceDungeonsCharacter.h"

#ifdef SPACEDUNGEONS_SpaceDungeonsCharacter_generated_h
#error "SpaceDungeonsCharacter.generated.h already included, missing '#pragma once' in SpaceDungeonsCharacter.h"
#endif
#define SPACEDUNGEONS_SpaceDungeonsCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASpaceDungeonsCharacter **************************************************
SPACEDUNGEONS_API UClass* Z_Construct_UClass_ASpaceDungeonsCharacter_NoRegister();

#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceDungeonsCharacter(); \
	friend struct Z_Construct_UClass_ASpaceDungeonsCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPACEDUNGEONS_API UClass* Z_Construct_UClass_ASpaceDungeonsCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpaceDungeonsCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceDungeons"), Z_Construct_UClass_ASpaceDungeonsCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASpaceDungeonsCharacter)


#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpaceDungeonsCharacter(ASpaceDungeonsCharacter&&) = delete; \
	ASpaceDungeonsCharacter(const ASpaceDungeonsCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceDungeonsCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceDungeonsCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpaceDungeonsCharacter) \
	NO_API virtual ~ASpaceDungeonsCharacter();


#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h_20_PROLOG
#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpaceDungeonsCharacter;

// ********** End Class ASpaceDungeonsCharacter ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_SpaceDungeonsCharacter_h

// ********** Begin Enum EMovementStatus ***********************************************************
#define FOREACH_ENUM_EMOVEMENTSTATUS(op) \
	op(EMovementStatus::EMS_Floating) \
	op(EMovementStatus::EMS_OnWall) 

enum class EMovementStatus : uint8;
template<> struct TIsUEnumClass<EMovementStatus> { enum { Value = true }; };
template<> SPACEDUNGEONS_API UEnum* StaticEnum<EMovementStatus>();
// ********** End Enum EMovementStatus *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
