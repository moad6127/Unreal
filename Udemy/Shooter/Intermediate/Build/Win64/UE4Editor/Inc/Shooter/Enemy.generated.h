// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define SHOOTER_Enemy_generated_h

#define Shooter_Source_Shooter_Enemy_h_12_SPARSE_DATA
#define Shooter_Source_Shooter_Enemy_h_12_RPC_WRAPPERS
#define Shooter_Source_Shooter_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Enemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define Shooter_Source_Shooter_Enemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define Shooter_Source_Shooter_Enemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define Shooter_Source_Shooter_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define Shooter_Source_Shooter_Enemy_h_12_PRIVATE_PROPERTY_OFFSET
#define Shooter_Source_Shooter_Enemy_h_9_PROLOG
#define Shooter_Source_Shooter_Enemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Enemy_h_12_SPARSE_DATA \
	Shooter_Source_Shooter_Enemy_h_12_RPC_WRAPPERS \
	Shooter_Source_Shooter_Enemy_h_12_INCLASS \
	Shooter_Source_Shooter_Enemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Enemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Enemy_h_12_SPARSE_DATA \
	Shooter_Source_Shooter_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Enemy_h_12_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
