// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SPACEDUNGEONS_Room_generated_h
#error "Room.generated.h already included, missing '#pragma once' in Room.h"
#endif
#define SPACEDUNGEONS_Room_generated_h

#define SpaceDungeons_Source_SpaceDungeons_Room_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoomExit_Statics; \
	SPACEDUNGEONS_API static class UScriptStruct* StaticStruct();


template<> SPACEDUNGEONS_API UScriptStruct* StaticStruct<struct FRoomExit>();

#define SpaceDungeons_Source_SpaceDungeons_Room_h_29_SPARSE_DATA
#define SpaceDungeons_Source_SpaceDungeons_Room_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define SpaceDungeons_Source_SpaceDungeons_Room_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define SpaceDungeons_Source_SpaceDungeons_Room_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoom(); \
	friend struct Z_Construct_UClass_ARoom_Statics; \
public: \
	DECLARE_CLASS(ARoom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceDungeons"), NO_API) \
	DECLARE_SERIALIZER(ARoom)


#define SpaceDungeons_Source_SpaceDungeons_Room_h_29_INCLASS \
private: \
	static void StaticRegisterNativesARoom(); \
	friend struct Z_Construct_UClass_ARoom_Statics; \
public: \
	DECLARE_CLASS(ARoom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceDungeons"), NO_API) \
	DECLARE_SERIALIZER(ARoom)


#define SpaceDungeons_Source_SpaceDungeons_Room_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARoom(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoom(ARoom&&); \
	NO_API ARoom(const ARoom&); \
public:


#define SpaceDungeons_Source_SpaceDungeons_Room_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoom(ARoom&&); \
	NO_API ARoom(const ARoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoom)


#define SpaceDungeons_Source_SpaceDungeons_Room_h_29_PRIVATE_PROPERTY_OFFSET
#define SpaceDungeons_Source_SpaceDungeons_Room_h_26_PROLOG
#define SpaceDungeons_Source_SpaceDungeons_Room_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceDungeons_Source_SpaceDungeons_Room_h_29_PRIVATE_PROPERTY_OFFSET \
	SpaceDungeons_Source_SpaceDungeons_Room_h_29_SPARSE_DATA \
	SpaceDungeons_Source_SpaceDungeons_Room_h_29_RPC_WRAPPERS \
	SpaceDungeons_Source_SpaceDungeons_Room_h_29_INCLASS \
	SpaceDungeons_Source_SpaceDungeons_Room_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceDungeons_Source_SpaceDungeons_Room_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceDungeons_Source_SpaceDungeons_Room_h_29_PRIVATE_PROPERTY_OFFSET \
	SpaceDungeons_Source_SpaceDungeons_Room_h_29_SPARSE_DATA \
	SpaceDungeons_Source_SpaceDungeons_Room_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceDungeons_Source_SpaceDungeons_Room_h_29_INCLASS_NO_PURE_DECLS \
	SpaceDungeons_Source_SpaceDungeons_Room_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEDUNGEONS_API UClass* StaticClass<class ARoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceDungeons_Source_SpaceDungeons_Room_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
