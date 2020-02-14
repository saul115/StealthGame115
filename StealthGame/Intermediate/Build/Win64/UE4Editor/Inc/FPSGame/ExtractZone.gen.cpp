// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/ExtractZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtractZone() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AExtractZone_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AExtractZone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UFunction* Z_Construct_UFunction_AExtractZone_EXOverlapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
// End Cross Module References
	void AExtractZone::StaticRegisterNativesAExtractZone()
	{
		UClass* Class = AExtractZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EXOverlapping", &AExtractZone::execEXOverlapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics
	{
		struct ExtractZone_eventEXOverlapping_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExtractZone_eventEXOverlapping_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ExtractZone_eventEXOverlapping_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExtractZone_eventEXOverlapping_Parms), &Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExtractZone_eventEXOverlapping_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExtractZone_eventEXOverlapping_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExtractZone_eventEXOverlapping_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExtractZone_eventEXOverlapping_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExtractZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExtractZone, nullptr, "EXOverlapping", nullptr, nullptr, sizeof(ExtractZone_eventEXOverlapping_Parms), Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExtractZone_EXOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExtractZone_EXOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExtractZone_NoRegister()
	{
		return AExtractZone::StaticClass();
	}
	struct Z_Construct_UClass_AExtractZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound115_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound115;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particle115_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle115;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EXBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EXBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EXMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EXMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExtractZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExtractZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExtractZone_EXOverlapping, "EXOverlapping" }, // 1385439693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtractZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExtractZone.h" },
		{ "ModuleRelativePath", "Public/ExtractZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtractZone_Statics::NewProp_Sound115_MetaData[] = {
		{ "Category", "Sound Effect" },
		{ "ModuleRelativePath", "Public/ExtractZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExtractZone_Statics::NewProp_Sound115 = { "Sound115", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExtractZone, Sound115), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExtractZone_Statics::NewProp_Sound115_MetaData, ARRAY_COUNT(Z_Construct_UClass_AExtractZone_Statics::NewProp_Sound115_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtractZone_Statics::NewProp_Particle115_MetaData[] = {
		{ "Category", "Particle Effect" },
		{ "ModuleRelativePath", "Public/ExtractZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExtractZone_Statics::NewProp_Particle115 = { "Particle115", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExtractZone, Particle115), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExtractZone_Statics::NewProp_Particle115_MetaData, ARRAY_COUNT(Z_Construct_UClass_AExtractZone_Statics::NewProp_Particle115_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtractZone_Statics::NewProp_EXBox_MetaData[] = {
		{ "Category", "Extraction Zone Box" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExtractZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExtractZone_Statics::NewProp_EXBox = { "EXBox", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExtractZone, EXBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExtractZone_Statics::NewProp_EXBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AExtractZone_Statics::NewProp_EXBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtractZone_Statics::NewProp_EXMaterial_MetaData[] = {
		{ "Category", "Extraction Zone Material" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExtractZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExtractZone_Statics::NewProp_EXMaterial = { "EXMaterial", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExtractZone, EXMaterial), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExtractZone_Statics::NewProp_EXMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AExtractZone_Statics::NewProp_EXMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExtractZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExtractZone_Statics::NewProp_Sound115,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExtractZone_Statics::NewProp_Particle115,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExtractZone_Statics::NewProp_EXBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExtractZone_Statics::NewProp_EXMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExtractZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExtractZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExtractZone_Statics::ClassParams = {
		&AExtractZone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExtractZone_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AExtractZone_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AExtractZone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AExtractZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExtractZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExtractZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExtractZone, 2256229353);
	template<> FPSGAME_API UClass* StaticClass<AExtractZone>()
	{
		return AExtractZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExtractZone(Z_Construct_UClass_AExtractZone, &AExtractZone::StaticClass, TEXT("/Script/FPSGame"), TEXT("AExtractZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExtractZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
