// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABGameState_generated_h
#error "ABGameState.generated.h already included, missing '#pragma once' in ABGameState.h"
#endif
#define ARENABATTLE_ABGameState_generated_h

#define ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_SPARSE_DATA
#define ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_RPC_WRAPPERS
#define ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABGameState(); \
	friend struct Z_Construct_UClass_AABGameState_Statics; \
public: \
	DECLARE_CLASS(AABGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABGameState)


#define ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAABGameState(); \
	friend struct Z_Construct_UClass_AABGameState_Statics; \
public: \
	DECLARE_CLASS(AABGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABGameState)


#define ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABGameState(AABGameState&&); \
	NO_API AABGameState(const AABGameState&); \
public:


#define ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABGameState(AABGameState&&); \
	NO_API AABGameState(const AABGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABGameState)


#define ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TotalGameScore() { return STRUCT_OFFSET(AABGameState, TotalGameScore); } \
	FORCEINLINE static uint32 __PPO__bGameCleared() { return STRUCT_OFFSET(AABGameState, bGameCleared); }


#define ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_7_PROLOG
#define ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_RPC_WRAPPERS \
	ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_INCLASS \
	ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_INCLASS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABGameState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AABGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaBattle_Source_ArenaBattle_Public_ABGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
