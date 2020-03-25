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
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Getact_frag();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Getboost();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Getd_time();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Getplay_anim();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Getspeed();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Reset();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Setact_frag();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Setboost();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Setd_time();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Setplay_anim();
	PARK_API UFunction* Z_Construct_UFunction_APlayer_CPP_Setspeed();
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
	uint32 Get_Z_Construct_UEnum_park_AnimType_Hash() { return 3778041460U; }
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
				{ "JumpNormal", (int64)JumpNormal },
				{ "JumpSpin", (int64)JumpSpin },
				{ "WallDashR", (int64)WallDashR },
				{ "WallDashL", (int64)WallDashL },
				{ "Sliding", (int64)Sliding },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "JumpNormal.Name", "JumpNormal" },
				{ "JumpSpin.Name", "JumpSpin" },
				{ "ModuleRelativePath", "Player_CPP.h" },
				{ "None.Name", "None" },
				{ "Sliding.Name", "Sliding" },
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
			{ "Getact_frag", &APlayer_CPP::execGetact_frag },
			{ "Getboost", &APlayer_CPP::execGetboost },
			{ "Getd_time", &APlayer_CPP::execGetd_time },
			{ "Getgame_over_frag", &APlayer_CPP::execGetgame_over_frag },
			{ "Getplay_anim", &APlayer_CPP::execGetplay_anim },
			{ "Getspeed", &APlayer_CPP::execGetspeed },
			{ "Reset", &APlayer_CPP::execReset },
			{ "Setact_frag", &APlayer_CPP::execSetact_frag },
			{ "Setboost", &APlayer_CPP::execSetboost },
			{ "Setd_time", &APlayer_CPP::execSetd_time },
			{ "Setgame_over_frag", &APlayer_CPP::execSetgame_over_frag },
			{ "Setplay_anim", &APlayer_CPP::execSetplay_anim },
			{ "Setspeed", &APlayer_CPP::execSetspeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics
	{
		struct Player_CPP_eventGetact_frag_Parms
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
	void Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Player_CPP_eventGetact_frag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventGetact_frag_Parms), &Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Getact_frag", nullptr, nullptr, sizeof(Player_CPP_eventGetact_frag_Parms), Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Getact_frag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Getact_frag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Getboost_Statics
	{
		struct Player_CPP_eventGetboost_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_Getboost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGetboost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Getboost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Getboost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Getboost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Getboost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Getboost", nullptr, nullptr, sizeof(Player_CPP_eventGetboost_Parms), Z_Construct_UFunction_APlayer_CPP_Getboost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Getboost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Getboost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Getboost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Getboost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Getboost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Getd_time_Statics
	{
		struct Player_CPP_eventGetd_time_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_Getd_time_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGetd_time_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Getd_time_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Getd_time_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Getd_time_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Getd_time_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Getd_time", nullptr, nullptr, sizeof(Player_CPP_eventGetd_time_Parms), Z_Construct_UFunction_APlayer_CPP_Getd_time_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Getd_time_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Getd_time_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Getd_time_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Getd_time()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Getd_time_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics
	{
		struct Player_CPP_eventGetgame_over_frag_Parms
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
	void Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Player_CPP_eventGetgame_over_frag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventGetgame_over_frag_Parms), &Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Getgame_over_frag", nullptr, nullptr, sizeof(Player_CPP_eventGetgame_over_frag_Parms), Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Getplay_anim_Statics
	{
		struct Player_CPP_eventGetplay_anim_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayer_CPP_Getplay_anim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGetplay_anim_Parms, ReturnValue), Z_Construct_UEnum_park_AnimType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Getplay_anim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Getplay_anim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Getplay_anim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Getplay_anim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Getplay_anim", nullptr, nullptr, sizeof(Player_CPP_eventGetplay_anim_Parms), Z_Construct_UFunction_APlayer_CPP_Getplay_anim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Getplay_anim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Getplay_anim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Getplay_anim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Getplay_anim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Getplay_anim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Getspeed_Statics
	{
		struct Player_CPP_eventGetspeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_Getspeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGetspeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Getspeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Getspeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Getspeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "//?Q?b?^?[\n" },
		{ "ModuleRelativePath", "Player_CPP.h" },
		{ "ToolTip", "?Q?b?^?[" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Getspeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Getspeed", nullptr, nullptr, sizeof(Player_CPP_eventGetspeed_Parms), Z_Construct_UFunction_APlayer_CPP_Getspeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Getspeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Getspeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Getspeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Getspeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Getspeed_Statics::FuncParams);
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
	struct Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics
	{
		struct Player_CPP_eventSetact_frag_Parms
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
	void Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics::NewProp_in_SetBit(void* Obj)
	{
		((Player_CPP_eventSetact_frag_Parms*)Obj)->in = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventSetact_frag_Parms), &Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics::NewProp_in_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Setact_frag", nullptr, nullptr, sizeof(Player_CPP_eventSetact_frag_Parms), Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Setact_frag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Setact_frag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Setboost_Statics
	{
		struct Player_CPP_eventSetboost_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_Setboost_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetboost_Parms, in), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Setboost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Setboost_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Setboost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Setboost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Setboost", nullptr, nullptr, sizeof(Player_CPP_eventSetboost_Parms), Z_Construct_UFunction_APlayer_CPP_Setboost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Setboost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Setboost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Setboost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Setboost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Setboost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Setd_time_Statics
	{
		struct Player_CPP_eventSetd_time_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_Setd_time_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetd_time_Parms, in), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Setd_time_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Setd_time_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Setd_time_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Setd_time_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Setd_time", nullptr, nullptr, sizeof(Player_CPP_eventSetd_time_Parms), Z_Construct_UFunction_APlayer_CPP_Setd_time_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Setd_time_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Setd_time_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Setd_time_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Setd_time()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Setd_time_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics
	{
		struct Player_CPP_eventSetgame_over_frag_Parms
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
	void Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics::NewProp_in_SetBit(void* Obj)
	{
		((Player_CPP_eventSetgame_over_frag_Parms*)Obj)->in = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventSetgame_over_frag_Parms), &Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics::NewProp_in_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Setgame_over_frag", nullptr, nullptr, sizeof(Player_CPP_eventSetgame_over_frag_Parms), Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Setplay_anim_Statics
	{
		struct Player_CPP_eventSetplay_anim_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayer_CPP_Setplay_anim_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetplay_anim_Parms, in), Z_Construct_UEnum_park_AnimType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Setplay_anim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Setplay_anim_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Setplay_anim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Setplay_anim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Setplay_anim", nullptr, nullptr, sizeof(Player_CPP_eventSetplay_anim_Parms), Z_Construct_UFunction_APlayer_CPP_Setplay_anim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Setplay_anim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Setplay_anim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Setplay_anim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Setplay_anim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Setplay_anim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Setspeed_Statics
	{
		struct Player_CPP_eventSetspeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_Setspeed_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventSetspeed_Parms, in), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Setspeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Setspeed_Statics::NewProp_in,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Setspeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "//?Z?b?^?[\n" },
		{ "ModuleRelativePath", "Player_CPP.h" },
		{ "ToolTip", "?Z?b?^?[" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Setspeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Setspeed", nullptr, nullptr, sizeof(Player_CPP_eventSetspeed_Parms), Z_Construct_UFunction_APlayer_CPP_Setspeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Setspeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Setspeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Setspeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Setspeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Setspeed_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_APlayer_CPP_Getact_frag, "Getact_frag" }, // 736183763
		{ &Z_Construct_UFunction_APlayer_CPP_Getboost, "Getboost" }, // 825771144
		{ &Z_Construct_UFunction_APlayer_CPP_Getd_time, "Getd_time" }, // 1883257506
		{ &Z_Construct_UFunction_APlayer_CPP_Getgame_over_frag, "Getgame_over_frag" }, // 2412899360
		{ &Z_Construct_UFunction_APlayer_CPP_Getplay_anim, "Getplay_anim" }, // 1994318855
		{ &Z_Construct_UFunction_APlayer_CPP_Getspeed, "Getspeed" }, // 3431564204
		{ &Z_Construct_UFunction_APlayer_CPP_Reset, "Reset" }, // 3644620985
		{ &Z_Construct_UFunction_APlayer_CPP_Setact_frag, "Setact_frag" }, // 2296634546
		{ &Z_Construct_UFunction_APlayer_CPP_Setboost, "Setboost" }, // 4010157162
		{ &Z_Construct_UFunction_APlayer_CPP_Setd_time, "Setd_time" }, // 1840294548
		{ &Z_Construct_UFunction_APlayer_CPP_Setgame_over_frag, "Setgame_over_frag" }, // 220798745
		{ &Z_Construct_UFunction_APlayer_CPP_Setplay_anim, "Setplay_anim" }, // 2288872690
		{ &Z_Construct_UFunction_APlayer_CPP_Setspeed, "Setspeed" }, // 2378479200
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
	IMPLEMENT_CLASS(APlayer_CPP, 3980064558);
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
