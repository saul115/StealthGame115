// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPSGAME_LaunchPad_generated_h
#error "LaunchPad.generated.h already included, missing '#pragma once' in LaunchPad.h"
#endif
#define FPSGAME_LaunchPad_generated_h

#define StealthGame_Source_FPSGame_Public_LaunchPad_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlappedLaunchPad) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverlappedLaunchPad(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlappedLaunchPad) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverlappedLaunchPad(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaunchPad(); \
	friend struct Z_Construct_UClass_ALaunchPad_Statics; \
public: \
	DECLARE_CLASS(ALaunchPad, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ALaunchPad)


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALaunchPad(); \
	friend struct Z_Construct_UClass_ALaunchPad_Statics; \
public: \
	DECLARE_CLASS(ALaunchPad, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ALaunchPad)


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALaunchPad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALaunchPad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaunchPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaunchPad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaunchPad(ALaunchPad&&); \
	NO_API ALaunchPad(const ALaunchPad&); \
public:


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaunchPad(ALaunchPad&&); \
	NO_API ALaunchPad(const ALaunchPad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaunchPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaunchPad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaunchPad)


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_12_PRIVATE_PROPERTY_OFFSET
#define StealthGame_Source_FPSGame_Public_LaunchPad_h_9_PROLOG
#define StealthGame_Source_FPSGame_Public_LaunchPad_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_12_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_12_INCLASS \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_12_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class ALaunchPad>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_LaunchPad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
