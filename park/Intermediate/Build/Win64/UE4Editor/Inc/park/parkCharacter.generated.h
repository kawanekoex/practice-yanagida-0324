// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARK_parkCharacter_generated_h
#error "parkCharacter.generated.h already included, missing '#pragma once' in parkCharacter.h"
#endif
#define PARK_parkCharacter_generated_h

#define park_Source_park_parkCharacter_h_12_SPARSE_DATA
#define park_Source_park_parkCharacter_h_12_RPC_WRAPPERS
#define park_Source_park_parkCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define park_Source_park_parkCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAparkCharacter(); \
	friend struct Z_Construct_UClass_AparkCharacter_Statics; \
public: \
	DECLARE_CLASS(AparkCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/park"), NO_API) \
	DECLARE_SERIALIZER(AparkCharacter)


#define park_Source_park_parkCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAparkCharacter(); \
	friend struct Z_Construct_UClass_AparkCharacter_Statics; \
public: \
	DECLARE_CLASS(AparkCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/park"), NO_API) \
	DECLARE_SERIALIZER(AparkCharacter)


#define park_Source_park_parkCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AparkCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AparkCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AparkCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AparkCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AparkCharacter(AparkCharacter&&); \
	NO_API AparkCharacter(const AparkCharacter&); \
public:


#define park_Source_park_parkCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AparkCharacter(AparkCharacter&&); \
	NO_API AparkCharacter(const AparkCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AparkCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AparkCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AparkCharacter)


#define park_Source_park_parkCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AparkCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AparkCharacter, FollowCamera); }


#define park_Source_park_parkCharacter_h_9_PROLOG
#define park_Source_park_parkCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	park_Source_park_parkCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	park_Source_park_parkCharacter_h_12_SPARSE_DATA \
	park_Source_park_parkCharacter_h_12_RPC_WRAPPERS \
	park_Source_park_parkCharacter_h_12_INCLASS \
	park_Source_park_parkCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define park_Source_park_parkCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	park_Source_park_parkCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	park_Source_park_parkCharacter_h_12_SPARSE_DATA \
	park_Source_park_parkCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	park_Source_park_parkCharacter_h_12_INCLASS_NO_PURE_DECLS \
	park_Source_park_parkCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARK_API UClass* StaticClass<class AparkCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID park_Source_park_parkCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
