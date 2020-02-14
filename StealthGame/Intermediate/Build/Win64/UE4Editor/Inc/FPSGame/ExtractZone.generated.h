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
#ifdef FPSGAME_ExtractZone_generated_h
#error "ExtractZone.generated.h already included, missing '#pragma once' in ExtractZone.h"
#endif
#define FPSGAME_ExtractZone_generated_h

#define StealthGame_Source_FPSGame_Public_ExtractZone_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEXOverlapping) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EXOverlapping(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_FPSGame_Public_ExtractZone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEXOverlapping) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EXOverlapping(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_FPSGame_Public_ExtractZone_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExtractZone(); \
	friend struct Z_Construct_UClass_AExtractZone_Statics; \
public: \
	DECLARE_CLASS(AExtractZone, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AExtractZone)


#define StealthGame_Source_FPSGame_Public_ExtractZone_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAExtractZone(); \
	friend struct Z_Construct_UClass_AExtractZone_Statics; \
public: \
	DECLARE_CLASS(AExtractZone, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AExtractZone)


#define StealthGame_Source_FPSGame_Public_ExtractZone_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExtractZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExtractZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExtractZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExtractZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExtractZone(AExtractZone&&); \
	NO_API AExtractZone(const AExtractZone&); \
public:


#define StealthGame_Source_FPSGame_Public_ExtractZone_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExtractZone(AExtractZone&&); \
	NO_API AExtractZone(const AExtractZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExtractZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExtractZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExtractZone)


#define StealthGame_Source_FPSGame_Public_ExtractZone_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EXMaterial() { return STRUCT_OFFSET(AExtractZone, EXMaterial); } \
	FORCEINLINE static uint32 __PPO__EXBox() { return STRUCT_OFFSET(AExtractZone, EXBox); } \
	FORCEINLINE static uint32 __PPO__Particle115() { return STRUCT_OFFSET(AExtractZone, Particle115); } \
	FORCEINLINE static uint32 __PPO__Sound115() { return STRUCT_OFFSET(AExtractZone, Sound115); }


#define StealthGame_Source_FPSGame_Public_ExtractZone_h_9_PROLOG
#define StealthGame_Source_FPSGame_Public_ExtractZone_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_ExtractZone_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_ExtractZone_h_12_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_ExtractZone_h_12_INCLASS \
	StealthGame_Source_FPSGame_Public_ExtractZone_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_ExtractZone_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_ExtractZone_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_ExtractZone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_ExtractZone_h_12_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_ExtractZone_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AExtractZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_ExtractZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
