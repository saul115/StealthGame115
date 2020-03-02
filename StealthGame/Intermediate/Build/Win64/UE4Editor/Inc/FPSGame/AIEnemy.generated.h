// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
#ifdef FPSGAME_AIEnemy_generated_h
#error "AIEnemy.generated.h already included, missing '#pragma once' in AIEnemy.h"
#endif
#define FPSGAME_AIEnemy_generated_h

#define StealthGame_Source_FPSGame_Public_AIEnemy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHearNoise) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HearNoise(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_FPSGame_Public_AIEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHearNoise) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HearNoise(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_FPSGame_Public_AIEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIEnemy(); \
	friend struct Z_Construct_UClass_AAIEnemy_Statics; \
public: \
	DECLARE_CLASS(AAIEnemy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AAIEnemy)


#define StealthGame_Source_FPSGame_Public_AIEnemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAIEnemy(); \
	friend struct Z_Construct_UClass_AAIEnemy_Statics; \
public: \
	DECLARE_CLASS(AAIEnemy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AAIEnemy)


#define StealthGame_Source_FPSGame_Public_AIEnemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIEnemy(AAIEnemy&&); \
	NO_API AAIEnemy(const AAIEnemy&); \
public:


#define StealthGame_Source_FPSGame_Public_AIEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIEnemy(AAIEnemy&&); \
	NO_API AAIEnemy(const AAIEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIEnemy)


#define StealthGame_Source_FPSGame_Public_AIEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIPawn() { return STRUCT_OFFSET(AAIEnemy, AIPawn); }


#define StealthGame_Source_FPSGame_Public_AIEnemy_h_9_PROLOG
#define StealthGame_Source_FPSGame_Public_AIEnemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_AIEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_AIEnemy_h_12_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_AIEnemy_h_12_INCLASS \
	StealthGame_Source_FPSGame_Public_AIEnemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_AIEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_AIEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_AIEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_AIEnemy_h_12_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_AIEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AAIEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_AIEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
