// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSObjectiveActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSObjectiveActor() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSObjectiveActor_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSObjectiveActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFPSObjectiveActor::StaticRegisterNativesAFPSObjectiveActor()
	{
	}
	UClass* Z_Construct_UClass_AFPSObjectiveActor_NoRegister()
	{
		return AFPSObjectiveActor::StaticClass();
	}
	struct Z_Construct_UClass_AFPSObjectiveActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSObjectiveActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSObjectiveActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FPSObjectiveActor.h" },
		{ "ModuleRelativePath", "Public/FPSObjectiveActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_PickupFX_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/FPSObjectiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_PickupFX = { "PickupFX", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSObjectiveActor, PickupFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_PickupFX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_PickupFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//It is to indicate a collision component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSObjectiveActor.h" },
		{ "ToolTip", "It is to indicate a collision component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSObjectiveActor, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_SphereComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//This is to indicate that the objective exist\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSObjectiveActor.h" },
		{ "ToolTip", "This is to indicate that the objective exist" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSObjectiveActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSObjectiveActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_PickupFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSObjectiveActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSObjectiveActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSObjectiveActor_Statics::ClassParams = {
		&AFPSObjectiveActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPSObjectiveActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFPSObjectiveActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSObjectiveActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSObjectiveActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSObjectiveActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSObjectiveActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSObjectiveActor, 2412281171);
	template<> FPSGAME_API UClass* StaticClass<AFPSObjectiveActor>()
	{
		return AFPSObjectiveActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSObjectiveActor(Z_Construct_UClass_AFPSObjectiveActor, &AFPSObjectiveActor::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSObjectiveActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSObjectiveActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
