// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/AIEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIEnemy() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AAIEnemy_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AAIEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UFunction* Z_Construct_UFunction_AAIEnemy_HearNoise();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FPSGAME_API UFunction* Z_Construct_UFunction_AAIEnemy_PawnSeen();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	void AAIEnemy::StaticRegisterNativesAAIEnemy()
	{
		UClass* Class = AAIEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HearNoise", &AAIEnemy::execHearNoise },
			{ "PawnSeen", &AAIEnemy::execPawnSeen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIEnemy_HearNoise_Statics
	{
		struct AIEnemy_eventHearNoise_Parms
		{
			APawn* NoiseInstigator;
			FVector Location;
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIEnemy_eventHearNoise_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIEnemy_eventHearNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIEnemy_eventHearNoise_Parms, NoiseInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::NewProp_NoiseInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIEnemy, nullptr, "HearNoise", nullptr, nullptr, sizeof(AIEnemy_eventHearNoise_Parms), Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIEnemy_HearNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIEnemy_HearNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIEnemy_PawnSeen_Statics
	{
		struct AIEnemy_eventPawnSeen_Parms
		{
			APawn* SeenPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIEnemy_PawnSeen_Statics::NewProp_SeenPawn = { "SeenPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIEnemy_eventPawnSeen_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIEnemy_PawnSeen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIEnemy_PawnSeen_Statics::NewProp_SeenPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIEnemy_PawnSeen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIEnemy_PawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIEnemy, nullptr, "PawnSeen", nullptr, nullptr, sizeof(AIEnemy_eventPawnSeen_Parms), Z_Construct_UFunction_AAIEnemy_PawnSeen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_PawnSeen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIEnemy_PawnSeen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_PawnSeen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIEnemy_PawnSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIEnemy_PawnSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAIEnemy_NoRegister()
	{
		return AAIEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AAIEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIEnemy_HearNoise, "HearNoise" }, // 3993607384
		{ &Z_Construct_UFunction_AAIEnemy_PawnSeen, "PawnSeen" }, // 1199514749
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIEnemy.h" },
		{ "ModuleRelativePath", "Public/AIEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIEnemy_Statics::NewProp_AIPawn_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AIEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_AIPawn = { "AIPawn", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIEnemy, AIPawn), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIEnemy_Statics::NewProp_AIPawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIEnemy_Statics::NewProp_AIPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_AIPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIEnemy_Statics::ClassParams = {
		&AAIEnemy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIEnemy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAIEnemy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAIEnemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIEnemy, 1053536984);
	template<> FPSGAME_API UClass* StaticClass<AAIEnemy>()
	{
		return AAIEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIEnemy(Z_Construct_UClass_AAIEnemy, &AAIEnemy::StaticClass, TEXT("/Script/FPSGame"), TEXT("AAIEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
