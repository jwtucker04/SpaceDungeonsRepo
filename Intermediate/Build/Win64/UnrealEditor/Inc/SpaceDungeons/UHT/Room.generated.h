// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Room.h"

#ifdef SPACEDUNGEONS_Room_generated_h
#error "Room.generated.h already included, missing '#pragma once' in Room.h"
#endif
#define SPACEDUNGEONS_Room_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin ScriptStruct FRoomExit *********************************************************
#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoomExit_Statics; \
	SPACEDUNGEONS_API static class UScriptStruct* StaticStruct();


struct FRoomExit;
// ********** End ScriptStruct FRoomExit ***********************************************************

// ********** Begin Class ARoom ********************************************************************
#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoom_NoRegister();

#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoom(); \
	friend struct Z_Construct_UClass_ARoom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPACEDUNGEONS_API UClass* Z_Construct_UClass_ARoom_NoRegister(); \
public: \
	DECLARE_CLASS2(ARoom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceDungeons"), Z_Construct_UClass_ARoom_NoRegister) \
	DECLARE_SERIALIZER(ARoom)


#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARoom(ARoom&&) = delete; \
	ARoom(const ARoom&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoom) \
	NO_API virtual ~ARoom();


#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h_26_PROLOG
#define FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARoom;

// ********** End Class ARoom **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jwtuc_Documents_Unreal_Projects_SpaceDungeons_5_6_Source_SpaceDungeons_Room_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
