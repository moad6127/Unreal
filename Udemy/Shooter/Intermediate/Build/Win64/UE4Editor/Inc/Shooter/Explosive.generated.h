// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_Explosive_generated_h
#error "Explosive.generated.h already included, missing '#pragma once' in Explosive.h"
#endif
#define SHOOTER_Explosive_generated_h

#define Shooter_Source_Shooter_Explosive_h_13_SPARSE_DATA
#define Shooter_Source_Shooter_Explosive_h_13_RPC_WRAPPERS
#define Shooter_Source_Shooter_Explosive_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Explosive_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosive(); \
	friend struct Z_Construct_UClass_AExplosive_Statics; \
public: \
	DECLARE_CLASS(AExplosive, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AExplosive) \
	virtual UObject* _getUObject() const override { return const_cast<AExplosive*>(this); }


#define Shooter_Source_Shooter_Explosive_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAExplosive(); \
	friend struct Z_Construct_UClass_AExplosive_Statics; \
public: \
	DECLARE_CLASS(AExplosive, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AExplosive) \
	virtual UObject* _getUObject() const override { return const_cast<AExplosive*>(this); }


#define Shooter_Source_Shooter_Explosive_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosive(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosive(AExplosive&&); \
	NO_API AExplosive(const AExplosive&); \
public:


#define Shooter_Source_Shooter_Explosive_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosive(AExplosive&&); \
	NO_API AExplosive(const AExplosive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosive)


#define Shooter_Source_Shooter_Explosive_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExplodeParticles() { return STRUCT_OFFSET(AExplosive, ExplodeParticles); } \
	FORCEINLINE static uint32 __PPO__ImpactSound() { return STRUCT_OFFSET(AExplosive, ImpactSound); }


#define Shooter_Source_Shooter_Explosive_h_10_PROLOG
#define Shooter_Source_Shooter_Explosive_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Explosive_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Explosive_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_Explosive_h_13_RPC_WRAPPERS \
	Shooter_Source_Shooter_Explosive_h_13_INCLASS \
	Shooter_Source_Shooter_Explosive_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Explosive_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Explosive_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Explosive_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_Explosive_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Explosive_h_13_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Explosive_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AExplosive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Explosive_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
