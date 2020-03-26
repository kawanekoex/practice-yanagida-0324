// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "park/Player_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_CPP() {}
// Cross Module References
	PARK_API UEnum* Z_Construct_UEnum_park_AnimType();
	UPackage* Z_Construct_UPackage__Script_park();
	PARK_API UClass* Z_Construct_UClass_APlayer_CPP_NoRegister();
	PARK_API UClass* Z_Construct_UClass_APlayer_CPP();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_GetAct_frag();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_GetBoost();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_GetD_time();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_GetPlay_anim();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_GetSpeed();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_GetStandby_anim();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_GetWait_time();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Reset();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_SetAct_frag();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_SetBoost();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_SetD_time();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_SetPlay_anim();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_SetSpeed();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_SetStandby_anim();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_SetWait_time();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag();
// End Cross Module References
	static UEnum* AnimType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_park_AnimType, Z_Construct_UPackage__Script_park(), TEXT("AnimType"));
		}
		return Singleton;
	}
	template<> PARK_API UEnum* StaticEnum<AnimType>()
	{
		return AnimType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AnimType(AnimType_StaticEnum, TEXT("/Script/park"), TEXT("AnimType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_park_AnimType_Hash() { return 3028466286U; }
	UEnum* Z_Construct_UEnum_park_AnimType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_park();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AnimType"), 0, Get_Z_Construct_UEnum_park_AnimType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "Spawn", (int64)Spawn },
				{ "JumpNormal", (int64)JumpNormal },
				{ "JumpSpin", (int64)JumpSpin },
				{ "WallDashR", (int64)WallDashR },
				{ "WallDashL", (int64)WallDashL },
				{ "RollR", (int64)RollR },
				{ "RollL", (int64)RollL },
				{ "Sliding", (int64)Sliding },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "JumpNormal.Name", "JumpNormal" },
				{ "JumpSpin.Name", "JumpSpin" },
				{ "ModuleRelativePath", "Player_CPP.h" },
				{ "None.Name", "None" },
				{ "RollL.Name", "RollL" },
				{ "RollR.Name", "RollR" },
				{ "Sliding.Name", "Sliding" },
				{ "Spawn.Name", "Spawn" },
				{ "WallDashL.Name", "WallDashL" },
				{ "WallDashR.Name", "WallDashR" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_park,
				nullptr,
				"AnimType",
				"AnimType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void APlayer_CPP::StaticRegisterNativesAPlayer_CPP()
	{
		UClass* Class = APlayer_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAct_frag", &APlayer_CPP::execGetAct_frag },
			{ "GetBoost", &APlayer_CPP::execGetBoost },
			{ "GetD_time", &APlayer_CPP::execGetD_time },
			{ "GetGame_over_frag", &APlayer_CPP::execGetGame_over_frag },
			{ "GetInvisible_frag", &APlayer_CPP::execGetInvisible_frag },
			{ "GetPlay_anim", &APlayer_CPP::execGetPlay_anim },
			{ "GetSpeed", &APlayer_CPP::execGetSpeed },
			{ "GetStandby_anim", &APlayer_CPP::execGetStandby_anim },
			{ "GetWait_time", &APlayer_CPP::execGetWait_time },
			{ "Reset", &APlayer_CPP::execReset },
			{ "SetAct_frag", &APlayer_CPP::execSetAct_frag },
			{ "SetBoost", &APlayer_CPP::execSetBoost },
			{ "SetD_time", &APlayer_CPP::execSetD_time },
			{ "SetGame_over_frag", &APlayer_CPP::execSetGame_over_frag },
			{ "SetInvisible_frag", &APlayer_CPP::execSetInvisible_frag },
			{ "SetMotionControllerPos", &APlayer_CPP::execSetMotionControllerPos },
			{ "SetPlay_anim", &APlayer_CPP::execSetPlay_anim },
			{ "SetRoll_end_frag", &APlayer_CPP::execSetRoll_end_frag },
			{ "SetSpeed", &APlayer_CPP::execSetSpeed },
			{ "SetStandby_anim", &APlayer_CPP::execSetStandby_anim },
			{ "SetWait_time", &APlayer_CPP::execSetWait_time },
			{ "SetWall_jump_frag", &APlayer_CPP::execSetWall_jump_frag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics
	{
		struct Player_CPP_eventGetAct_frag_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Player_CPP_eventGetAct_frag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventGetAct_frag_Parms), &Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "GetAct_frag", nullptr, nullptr, sizeof(Player_CPP_eventGetAct_frag_Parms), Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_GetAct_frag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_GetAct_frag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_GetBoost_Statics
	{
		struct Player_CPP_eventGetBoost_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_GetBoost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGetBoost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_GetBoost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_GetBoost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_GetBoost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_GetBoost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "GetBoost", nullptr, nullptr, sizeof(Player_CPP_eventGetBoost_Parms), Z_Construct_UFunction_APlayer_CPP_GetBoost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetBoost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_GetBoost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetBoost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_GetBoost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_GetBoost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_GetD_time_Statics
	{
		struct Player_CPP_eventGetD_time_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_GetD_time_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGetD_time_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_GetD_time_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_GetD_time_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_GetD_time_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_GetD_time_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "GetD_time", nullptr, nullptr, sizeof(Player_CPP_eventGetD_time_Parms), Z_Construct_UFunction_APlayer_CPP_GetD_time_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetD_time_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_GetD_time_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetD_time_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_GetD_time()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_GetD_time_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics
	{
		struct Player_CPP_eventGetGame_over_frag_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Player_CPP_eventGetGame_over_frag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventGetGame_over_frag_Parms), &Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "GetGame_over_frag", nullptr, nullptr, sizeof(Player_CPP_eventGetGame_over_frag_Parms), Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics
	{
		struct Player_CPP_eventGetInvisible_frag_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Player_CPP_eventGetInvisible_frag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventGetInvisible_frag_Parms), &Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "GetInvisible_frag", nullptr, nullptr, sizeof(Player_CPP_eventGetInvisible_frag_Parms), Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_GetPlay_anim_Statics
	{
		struct Player_CPP_eventGetPlay_anim_Parms
		{
			TEnumAsByte<AnimType> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayer_CPP_GetPlay_anim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGetPlay_anim_Parms, ReturnValue), Z_Construct_UEnum_park_AnimType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_GetPlay_anim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_GetPlay_anim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_GetPlay_anim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_GetPlay_anim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "GetPlay_anim", nullptr, nullptr, sizeof(Player_CPP_eventGetPlay_anim_Parms), Z_Construct_UFunction_APlayer_CPP_GetPlay_anim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetPlay_anim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_GetPlay_anim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetPlay_anim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_GetPlay_anim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_GetPlay_anim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_GetSpeed_Statics
	{
		struct Player_CPP_eventGetSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_GetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "//?Q?b?^?[\n" },
		{ "ModuleRelativePath", "Player_CPP.h" },
		{ "ToolTip", "?Q?b?^?[" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "GetSpeed", nullptr, nullptr, sizeof(Player_CPP_eventGetSpeed_Parms), Z_Construct_UFunction_APlayer_CPP_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_GetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_GetStandby_anim_Statics
	{
		struct Player_CPP_eventGetStandby_anim_Parms
		{
			TEnumAsByte<AnimType> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayer_CPP_GetStandby_anim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGetStandby_anim_Parms, ReturnValue), Z_Construct_UEnum_park_AnimType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_GetStandby_anim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_GetStandby_anim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_GetStandby_anim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_GetStandby_anim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "GetStandby_anim", nullptr, nullptr, sizeof(Player_CPP_eventGetStandby_anim_Parms), Z_Construct_UFunction_APlayer_CPP_GetStandby_anim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetStandby_anim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_GetStandby_anim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetStandby_anim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_GetStandby_anim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_GetStandby_anim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_GetWait_time_Statics
	{
		struct Player_CPP_eventGetWait_time_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_GetWait_time_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGetWait_time_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_GetWait_time_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_GetWait_time_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_GetWait_time_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_GetWait_time_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "GetWait_time", nullptr, nullptr, sizeof(Player_CPP_eventGetWait_time_Parms), Z_Construct_UFunction_APlayer_CPP_GetWait_time_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetWait_time_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_GetWait_time_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_GetWait_time_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_GetWait_time()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_GetWait_time_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics
	{
		struct Player_CPP_eventSetAct_frag_Parms
		{
			bool in;
		};
		static void NewProp_in_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics::NewProp_in_SetBit(void* Obj)
	{
		((Player_CPP_eventSetAct_frag_Parms*)Obj)->in = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventSetAct_frag_Parms), &Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics::NewProp_in_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "SetAct_frag", nullptr, nullptr, sizeof(Player_CPP_eventSetAct_frag_Parms), Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_SetAct_frag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_SetAct_frag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_SetBoost_Statics
	{
		struct Player_CPP_eventSetBoost_Parms
		{
			float in;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_in;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_SetBoost_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetBoost_Parms, in), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_SetBoost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetBoost_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_SetBoost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_SetBoost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "SetBoost", nullptr, nullptr, sizeof(Player_CPP_eventSetBoost_Parms), Z_Construct_UFunction_APlayer_CPP_SetBoost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetBoost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_SetBoost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetBoost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_SetBoost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_SetBoost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_SetD_time_Statics
	{
		struct Player_CPP_eventSetD_time_Parms
		{
			float in;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_in;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_SetD_time_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetD_time_Parms, in), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_SetD_time_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetD_time_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_SetD_time_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_SetD_time_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "SetD_time", nullptr, nullptr, sizeof(Player_CPP_eventSetD_time_Parms), Z_Construct_UFunction_APlayer_CPP_SetD_time_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetD_time_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_SetD_time_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetD_time_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_SetD_time()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_SetD_time_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics
	{
		struct Player_CPP_eventSetGame_over_frag_Parms
		{
			bool in;
		};
		static void NewProp_in_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics::NewProp_in_SetBit(void* Obj)
	{
		((Player_CPP_eventSetGame_over_frag_Parms*)Obj)->in = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventSetGame_over_frag_Parms), &Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics::NewProp_in_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "SetGame_over_frag", nullptr, nullptr, sizeof(Player_CPP_eventSetGame_over_frag_Parms), Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics
	{
		struct Player_CPP_eventSetInvisible_frag_Parms
		{
			bool in;
		};
		static void NewProp_in_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics::NewProp_in_SetBit(void* Obj)
	{
		((Player_CPP_eventSetInvisible_frag_Parms*)Obj)->in = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventSetInvisible_frag_Parms), &Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics::NewProp_in_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "SetInvisible_frag", nullptr, nullptr, sizeof(Player_CPP_eventSetInvisible_frag_Parms), Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics
	{
		struct Player_CPP_eventSetMotionControllerPos_Parms
		{
			FVector right;
			FVector lest;
			FVector head;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_head;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lest;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_right;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::NewProp_head = { "head", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetMotionControllerPos_Parms, head), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::NewProp_lest = { "lest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetMotionControllerPos_Parms, lest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetMotionControllerPos_Parms, right), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::NewProp_head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::NewProp_lest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::NewProp_right,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "SetMotionControllerPos", nullptr, nullptr, sizeof(Player_CPP_eventSetMotionControllerPos_Parms), Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_SetPlay_anim_Statics
	{
		struct Player_CPP_eventSetPlay_anim_Parms
		{
			TEnumAsByte<AnimType> in;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_in;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayer_CPP_SetPlay_anim_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetPlay_anim_Parms, in), Z_Construct_UEnum_park_AnimType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_SetPlay_anim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetPlay_anim_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_SetPlay_anim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_SetPlay_anim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "SetPlay_anim", nullptr, nullptr, sizeof(Player_CPP_eventSetPlay_anim_Parms), Z_Construct_UFunction_APlayer_CPP_SetPlay_anim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetPlay_anim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_SetPlay_anim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetPlay_anim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_SetPlay_anim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_SetPlay_anim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics
	{
		struct Player_CPP_eventSetRoll_end_frag_Parms
		{
			bool in;
		};
		static void NewProp_in_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics::NewProp_in_SetBit(void* Obj)
	{
		((Player_CPP_eventSetRoll_end_frag_Parms*)Obj)->in = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventSetRoll_end_frag_Parms), &Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics::NewProp_in_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "SetRoll_end_frag", nullptr, nullptr, sizeof(Player_CPP_eventSetRoll_end_frag_Parms), Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_SetSpeed_Statics
	{
		struct Player_CPP_eventSetSpeed_Parms
		{
			float in;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_in;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_SetSpeed_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetSpeed_Parms, in), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_SetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetSpeed_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_SetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "//?Z?b?^?[\n" },
		{ "ModuleRelativePath", "Player_CPP.h" },
		{ "ToolTip", "?Z?b?^?[" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_SetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "SetSpeed", nullptr, nullptr, sizeof(Player_CPP_eventSetSpeed_Parms), Z_Construct_UFunction_APlayer_CPP_SetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_SetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_SetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_SetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_SetStandby_anim_Statics
	{
		struct Player_CPP_eventSetStandby_anim_Parms
		{
			TEnumAsByte<AnimType> in;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_in;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayer_CPP_SetStandby_anim_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetStandby_anim_Parms, in), Z_Construct_UEnum_park_AnimType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_SetStandby_anim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetStandby_anim_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_SetStandby_anim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_SetStandby_anim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "SetStandby_anim", nullptr, nullptr, sizeof(Player_CPP_eventSetStandby_anim_Parms), Z_Construct_UFunction_APlayer_CPP_SetStandby_anim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetStandby_anim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_SetStandby_anim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetStandby_anim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_SetStandby_anim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_SetStandby_anim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_SetWait_time_Statics
	{
		struct Player_CPP_eventSetWait_time_Parms
		{
			float in;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_in;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_SetWait_time_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetWait_time_Parms, in), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_SetWait_time_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetWait_time_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_SetWait_time_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_SetWait_time_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "SetWait_time", nullptr, nullptr, sizeof(Player_CPP_eventSetWait_time_Parms), Z_Construct_UFunction_APlayer_CPP_SetWait_time_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetWait_time_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_SetWait_time_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetWait_time_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_SetWait_time()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_SetWait_time_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics
	{
		struct Player_CPP_eventSetWall_jump_frag_Parms
		{
			bool in;
		};
		static void NewProp_in_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_in;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics::NewProp_in_SetBit(void* Obj)
	{
		((Player_CPP_eventSetWall_jump_frag_Parms*)Obj)->in = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventSetWall_jump_frag_Parms), &Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics::NewProp_in_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "SetWall_jump_frag", nullptr, nullptr, sizeof(Player_CPP_eventSetWall_jump_frag_Parms), Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayer_CPP_NoRegister()
	{
		return APlayer_CPP::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_park,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayer_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayer_CPP_GetAct_frag, "GetAct_frag" }, // 1380038560
		{ &Z_Construct_UFunction_APlayer_CPP_GetBoost, "GetBoost" }, // 1728132605
		{ &Z_Construct_UFunction_APlayer_CPP_GetD_time, "GetD_time" }, // 1238542418
		{ &Z_Construct_UFunction_APlayer_CPP_GetGame_over_frag, "GetGame_over_frag" }, // 732107895
		{ &Z_Construct_UFunction_APlayer_CPP_GetInvisible_frag, "GetInvisible_frag" }, // 3165226577
		{ &Z_Construct_UFunction_APlayer_CPP_GetPlay_anim, "GetPlay_anim" }, // 3110731536
		{ &Z_Construct_UFunction_APlayer_CPP_GetSpeed, "GetSpeed" }, // 272739601
		{ &Z_Construct_UFunction_APlayer_CPP_GetStandby_anim, "GetStandby_anim" }, // 2735423049
		{ &Z_Construct_UFunction_APlayer_CPP_GetWait_time, "GetWait_time" }, // 1707633958
		{ &Z_Construct_UFunction_APlayer_CPP_Reset, "Reset" }, // 3644620985
		{ &Z_Construct_UFunction_APlayer_CPP_SetAct_frag, "SetAct_frag" }, // 2304860567
		{ &Z_Construct_UFunction_APlayer_CPP_SetBoost, "SetBoost" }, // 12915165
		{ &Z_Construct_UFunction_APlayer_CPP_SetD_time, "SetD_time" }, // 3442603591
		{ &Z_Construct_UFunction_APlayer_CPP_SetGame_over_frag, "SetGame_over_frag" }, // 3838922434
		{ &Z_Construct_UFunction_APlayer_CPP_SetInvisible_frag, "SetInvisible_frag" }, // 498222428
		{ &Z_Construct_UFunction_APlayer_CPP_SetMotionControllerPos, "SetMotionControllerPos" }, // 3607222899
		{ &Z_Construct_UFunction_APlayer_CPP_SetPlay_anim, "SetPlay_anim" }, // 814542213
		{ &Z_Construct_UFunction_APlayer_CPP_SetRoll_end_frag, "SetRoll_end_frag" }, // 1119496159
		{ &Z_Construct_UFunction_APlayer_CPP_SetSpeed, "SetSpeed" }, // 3036895543
		{ &Z_Construct_UFunction_APlayer_CPP_SetStandby_anim, "SetStandby_anim" }, // 3241212362
		{ &Z_Construct_UFunction_APlayer_CPP_SetWait_time, "SetWait_time" }, // 3002833802
		{ &Z_Construct_UFunction_APlayer_CPP_SetWall_jump_frag, "SetWall_jump_frag" }, // 2642817568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player_CPP.h" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_CPP_Statics::ClassParams = {
		&APlayer_CPP::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_CPP, 2621919875);
	template<> PARK_API UClass* StaticClass<APlayer_CPP>()
	{
		return APlayer_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_CPP(Z_Construct_UClass_APlayer_CPP, &APlayer_CPP::StaticClass, TEXT("/Script/park"), TEXT("APlayer_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
