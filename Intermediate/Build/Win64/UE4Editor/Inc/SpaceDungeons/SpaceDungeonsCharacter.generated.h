// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEDUNGEONS_SpaceDungeonsCharacter_generated_h
#error "SpaceDungeonsCharacter.generated.h already included, missing '#pragma once' in SpaceDungeonsCharacter.h"
#endif
#define SPACEDUNGEONS_SpaceDungeonsCharacter_generated_h

#define SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_SPARSE_DATA
#define SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_RPC_WRAPPERS
#define SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceDungeonsCharacter(); \
	friend struct Z_Construct_UClass_ASpaceDungeonsCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpaceDungeonsCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceDungeons"), NO_API) \
	DECLARE_SERIALIZER(ASpaceDungeonsCharacter)


#define SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASpaceDungeonsCharacter(); \
	friend struct Z_Construct_UClass_ASpaceDungeonsCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpaceDungeonsCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceDungeons"), NO_API) \
	DECLARE_SERIALIZER(ASpaceDungeonsCharacter)


#define SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceDungeonsCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceDungeonsCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceDungeonsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceDungeonsCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceDungeonsCharacter(ASpaceDungeonsCharacter&&); \
	NO_API ASpaceDungeonsCharacter(const ASpaceDungeonsCharacter&); \
public:


#define SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceDungeonsCharacter(ASpaceDungeonsCharacter&&); \
	NO_API ASpaceDungeonsCharacter(const ASpaceDungeonsCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceDungeonsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceDungeonsCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpaceDungeonsCharacter)


#define SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASpaceDungeonsCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASpaceDungeonsCharacter, FollowCamera); }


#define SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_20_PROLOG
#define SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_SPARSE_DATA \
	SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_RPC_WRAPPERS \
	SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_INCLASS \
	SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_SPARSE_DATA \
	SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_INCLASS_NO_PURE_DECLS \
	SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEDUNGEONS_API UClass* StaticClass<class ASpaceDungeonsCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceDungeons_Source_SpaceDungeons_SpaceDungeonsCharacter_h


#define FOREACH_ENUM_EMOVEMENTSTATUS(op) \
	op(EMovementStatus::EMS_Floating) \
	op(EMovementStatus::EMS_OnWall) 

enum class EMovementStatus : uint8;
template<> SPACEDUNGEONS_API UEnum* StaticEnum<EMovementStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
