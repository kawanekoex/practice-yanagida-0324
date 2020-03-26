// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef PARK_Player_CPP_generated_h
#error "Player_CPP.generated.h already included, missing '#pragma once' in Player_CPP.h"
#endif
#define PARK_Player_CPP_generated_h

#define park_Source_park_Player_CPP_h_42_SPARSE_DATA
#define park_Source_park_Player_CPP_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMotionControllerPos) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_right); \
		P_GET_STRUCT(FVector,Z_Param_lest); \
		P_GET_STRUCT(FVector,Z_Param_head); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMotionControllerPos(Z_Param_right,Z_Param_lest,Z_Param_head); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStandby_anim) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStandby_anim(AnimType(Z_Param_in)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlay_anim) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlay_anim(AnimType(Z_Param_in)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWall_jump_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWall_jump_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRoll_end_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRoll_end_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInvisible_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInvisible_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGame_over_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGame_over_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAct_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAct_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetgame_over_wait_time) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setgame_over_wait_time(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWait_time) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWait_time(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetD_time) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetD_time(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoost) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoost(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpeed(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStandby_anim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<AnimType>*)Z_Param__Result=P_THIS->GetStandby_anim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlay_anim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<AnimType>*)Z_Param__Result=P_THIS->GetPlay_anim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReset_frag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetReset_frag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInvisible_frag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInvisible_frag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGame_over_frag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGame_over_frag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAct_frag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAct_frag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWait_time) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWait_time(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetD_time) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetD_time(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBoost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(); \
		P_NATIVE_END; \
	}


#define park_Source_park_Player_CPP_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMotionControllerPos) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_right); \
		P_GET_STRUCT(FVector,Z_Param_lest); \
		P_GET_STRUCT(FVector,Z_Param_head); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMotionControllerPos(Z_Param_right,Z_Param_lest,Z_Param_head); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStandby_anim) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStandby_anim(AnimType(Z_Param_in)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlay_anim) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlay_anim(AnimType(Z_Param_in)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWall_jump_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWall_jump_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRoll_end_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRoll_end_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInvisible_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInvisible_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGame_over_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGame_over_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAct_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAct_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetgame_over_wait_time) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setgame_over_wait_time(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWait_time) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWait_time(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetD_time) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetD_time(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoost) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoost(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpeed(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStandby_anim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<AnimType>*)Z_Param__Result=P_THIS->GetStandby_anim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlay_anim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<AnimType>*)Z_Param__Result=P_THIS->GetPlay_anim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReset_frag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetReset_frag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInvisible_frag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInvisible_frag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGame_over_frag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGame_over_frag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAct_frag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAct_frag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWait_time) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWait_time(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetD_time) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetD_time(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBoost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(); \
		P_NATIVE_END; \
	}


#define park_Source_park_Player_CPP_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_CPP(); \
	friend struct Z_Construct_UClass_APlayer_CPP_Statics; \
public: \
	DECLARE_CLASS(APlayer_CPP, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/park"), NO_API) \
	DECLARE_SERIALIZER(APlayer_CPP)


#define park_Source_park_Player_CPP_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_CPP(); \
	friend struct Z_Construct_UClass_APlayer_CPP_Statics; \
public: \
	DECLARE_CLASS(APlayer_CPP, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/park"), NO_API) \
	DECLARE_SERIALIZER(APlayer_CPP)


#define park_Source_park_Player_CPP_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_CPP(APlayer_CPP&&); \
	NO_API APlayer_CPP(const APlayer_CPP&); \
public:


#define park_Source_park_Player_CPP_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_CPP(APlayer_CPP&&); \
	NO_API APlayer_CPP(const APlayer_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_CPP)


#define park_Source_park_Player_CPP_h_42_PRIVATE_PROPERTY_OFFSET
#define park_Source_park_Player_CPP_h_39_PROLOG
#define park_Source_park_Player_CPP_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	park_Source_park_Player_CPP_h_42_PRIVATE_PROPERTY_OFFSET \
	park_Source_park_Player_CPP_h_42_SPARSE_DATA \
	park_Source_park_Player_CPP_h_42_RPC_WRAPPERS \
	park_Source_park_Player_CPP_h_42_INCLASS \
	park_Source_park_Player_CPP_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define park_Source_park_Player_CPP_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	park_Source_park_Player_CPP_h_42_PRIVATE_PROPERTY_OFFSET \
	park_Source_park_Player_CPP_h_42_SPARSE_DATA \
	park_Source_park_Player_CPP_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	park_Source_park_Player_CPP_h_42_INCLASS_NO_PURE_DECLS \
	park_Source_park_Player_CPP_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARK_API UClass* StaticClass<class APlayer_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID park_Source_park_Player_CPP_h


#define FOREACH_ENUM_ANIMTYPE(op) \
	op(None) \
	op(Spawn) \
	op(JumpNormal) \
	op(JumpSpin) \
	op(WallDashR) \
	op(WallDashL) \
	op(RollR) \
	op(RollL) \
	op(Sliding) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
