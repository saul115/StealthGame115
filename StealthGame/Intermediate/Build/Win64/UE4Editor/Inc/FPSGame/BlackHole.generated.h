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
#ifdef FPSGAME_BlackHole_generated_h
#error "BlackHole.generated.h already included, missing '#pragma once' in BlackHole.h"
#endif
#define FPSGAME_BlackHole_generated_h

#define StealthGame_Source_FPSGame_Public_BlackHole_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCharacterOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CharacterOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_BodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_FPSGame_Public_BlackHole_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCharacterOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CharacterOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_BodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_FPSGame_Public_BlackHole_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlackHole(); \
	friend struct Z_Construct_UClass_ABlackHole_Statics; \
public: \
	DECLARE_CLASS(ABlackHole, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ABlackHole)


#define StealthGame_Source_FPSGame_Public_BlackHole_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABlackHole(); \
	friend struct Z_Construct_UClass_ABlackHole_Statics; \
public: \
	DECLARE_CLASS(ABlackHole, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ABlackHole)


#define StealthGame_Source_FPSGame_Public_BlackHole_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlackHole(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlackHole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHole); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHole(ABlackHole&&); \
	NO_API ABlackHole(const ABlackHole&); \
public:


#define StealthGame_Source_FPSGame_Public_BlackHole_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHole(ABlackHole&&); \
	NO_API ABlackHole(const ABlackHole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlackHole)


#define StealthGame_Source_FPSGame_Public_BlackHole_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterComponent() { return STRUCT_OFFSET(ABlackHole, CharacterComponent); } \
	FORCEINLINE static uint32 __PPO__CapsuleComponent() { return STRUCT_OFFSET(ABlackHole, CapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__OuterSphere() { return STRUCT_OFFSET(ABlackHole, OuterSphere); } \
	FORCEINLINE static uint32 __PPO__Particle115() { return STRUCT_OFFSET(ABlackHole, Particle115); } \
	FORCEINLINE static uint32 __PPO__Sound115() { return STRUCT_OFFSET(ABlackHole, Sound115); }


#define StealthGame_Source_FPSGame_Public_BlackHole_h_9_PROLOG
#define StealthGame_Source_FPSGame_Public_BlackHole_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_BlackHole_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_BlackHole_h_12_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_BlackHole_h_12_INCLASS \
	StealthGame_Source_FPSGame_Public_BlackHole_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_BlackHole_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_BlackHole_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_BlackHole_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_BlackHole_h_12_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_BlackHole_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class ABlackHole>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_BlackHole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
