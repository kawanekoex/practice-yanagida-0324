// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARK_parkGameMode_generated_h
#error "parkGameMode.generated.h already included, missing '#pragma once' in parkGameMode.h"
#endif
#define PARK_parkGameMode_generated_h

#define park_Source_park_parkGameMode_h_12_SPARSE_DATA
#define park_Source_park_parkGameMode_h_12_RPC_WRAPPERS
#define park_Source_park_parkGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define park_Source_park_parkGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAparkGameMode(); \
	friend struct Z_Construct_UClass_AparkGameMode_Statics; \
public: \
	DECLARE_CLASS(AparkGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/park"), PARK_API) \
	DECLARE_SERIALIZER(AparkGameMode)


#define park_Source_park_parkGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAparkGameMode(); \
	friend struct Z_Construct_UClass_AparkGameMode_Statics; \
public: \
	DECLARE_CLASS(AparkGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/park"), PARK_API) \
	DECLARE_SERIALIZER(AparkGameMode)


#define park_Source_park_parkGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PARK_API AparkGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AparkGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARK_API, AparkGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AparkGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PARK_API AparkGameMode(AparkGameMode&&); \
	PARK_API AparkGameMode(const AparkGameMode&); \
public:


#define park_Source_park_parkGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PARK_API AparkGameMode(AparkGameMode&&); \
	PARK_API AparkGameMode(const AparkGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARK_API, AparkGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AparkGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AparkGameMode)


#define park_Source_park_parkGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define park_Source_park_parkGameMode_h_9_PROLOG
#define park_Source_park_parkGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	park_Source_park_parkGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	park_Source_park_parkGameMode_h_12_SPARSE_DATA \
	park_Source_park_parkGameMode_h_12_RPC_WRAPPERS \
	park_Source_park_parkGameMode_h_12_INCLASS \
	park_Source_park_parkGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define park_Source_park_parkGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	park_Source_park_parkGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	park_Source_park_parkGameMode_h_12_SPARSE_DATA \
	park_Source_park_parkGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	park_Source_park_parkGameMode_h_12_INCLASS_NO_PURE_DECLS \
	park_Source_park_parkGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARK_API UClass* StaticClass<class AparkGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID park_Source_park_parkGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
