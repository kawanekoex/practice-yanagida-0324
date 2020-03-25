// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARK_Player_CPP_generated_h
#error "Player_CPP.generated.h already included, missing '#pragma once' in Player_CPP.h"
#endif
#define PARK_Player_CPP_generated_h

#define park_Source_park_Player_CPP_h_37_SPARSE_DATA
#define park_Source_park_Player_CPP_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetplay_anim) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setplay_anim(AnimType(Z_Param_in)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetgame_over_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setgame_over_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetact_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setact_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetd_time) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setd_time(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetboost) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setboost(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetspeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setspeed(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetplay_anim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<AnimType>*)Z_Param__Result=P_THIS->Getplay_anim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetgame_over_frag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Getgame_over_frag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetact_frag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Getact_frag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetd_time) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Getd_time(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetboost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Getboost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetspeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Getspeed(); \
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


#define park_Source_park_Player_CPP_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetplay_anim) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setplay_anim(AnimType(Z_Param_in)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetgame_over_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setgame_over_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetact_frag) \
	{ \
		P_GET_UBOOL(Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setact_frag(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetd_time) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setd_time(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetboost) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setboost(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetspeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_in); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Setspeed(Z_Param_in); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetplay_anim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<AnimType>*)Z_Param__Result=P_THIS->Getplay_anim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetgame_over_frag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Getgame_over_frag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetact_frag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Getact_frag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetd_time) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Getd_time(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetboost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Getboost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetspeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Getspeed(); \
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


#define park_Source_park_Player_CPP_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_CPP(); \
	friend struct Z_Construct_UClass_APlayer_CPP_Statics; \
public: \
	DECLARE_CLASS(APlayer_CPP, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/park"), NO_API) \
	DECLARE_SERIALIZER(APlayer_CPP)


#define park_Source_park_Player_CPP_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_CPP(); \
	friend struct Z_Construct_UClass_APlayer_CPP_Statics; \
public: \
	DECLARE_CLASS(APlayer_CPP, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/park"), NO_API) \
	DECLARE_SERIALIZER(APlayer_CPP)


#define park_Source_park_Player_CPP_h_37_STANDARD_CONSTRUCTORS \
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


#define park_Source_park_Player_CPP_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_CPP(APlayer_CPP&&); \
	NO_API APlayer_CPP(const APlayer_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_CPP)


#define park_Source_park_Player_CPP_h_37_PRIVATE_PROPERTY_OFFSET
#define park_Source_park_Player_CPP_h_34_PROLOG
#define park_Source_park_Player_CPP_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	park_Source_park_Player_CPP_h_37_PRIVATE_PROPERTY_OFFSET \
	park_Source_park_Player_CPP_h_37_SPARSE_DATA \
	park_Source_park_Player_CPP_h_37_RPC_WRAPPERS \
	park_Source_park_Player_CPP_h_37_INCLASS \
	park_Source_park_Player_CPP_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define park_Source_park_Player_CPP_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	park_Source_park_Player_CPP_h_37_PRIVATE_PROPERTY_OFFSET \
	park_Source_park_Player_CPP_h_37_SPARSE_DATA \
	park_Source_park_Player_CPP_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	park_Source_park_Player_CPP_h_37_INCLASS_NO_PURE_DECLS \
	park_Source_park_Player_CPP_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARK_API UClass* StaticClass<class APlayer_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID park_Source_park_Player_CPP_h


#define FOREACH_ENUM_ANIMTYPE(op) \
	op(None) \
	op(JumpNormal) \
	op(JumpSpin) \
	op(WallDashR) \
	op(WallDashL) \
	op(Sliding) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
