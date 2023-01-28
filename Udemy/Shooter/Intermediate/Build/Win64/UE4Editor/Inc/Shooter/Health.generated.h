// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef SHOOTER_Health_generated_h
#error "Health.generated.h already included, missing '#pragma once' in Health.h"
#endif
#define SHOOTER_Health_generated_h

#define Shooter_Source_Shooter_Health_h_12_SPARSE_DATA
#define Shooter_Source_Shooter_Health_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCombatRangeOverlap);


#define Shooter_Source_Shooter_Health_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCombatRangeOverlap);


#define Shooter_Source_Shooter_Health_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealth(); \
	friend struct Z_Construct_UClass_AHealth_Statics; \
public: \
	DECLARE_CLASS(AHealth, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AHealth)


#define Shooter_Source_Shooter_Health_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHealth(); \
	friend struct Z_Construct_UClass_AHealth_Statics; \
public: \
	DECLARE_CLASS(AHealth, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AHealth)


#define Shooter_Source_Shooter_Health_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealth(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealth) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealth); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealth(AHealth&&); \
	NO_API AHealth(const AHealth&); \
public:


#define Shooter_Source_Shooter_Health_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealth(AHealth&&); \
	NO_API AHealth(const AHealth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealth); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealth)


#define Shooter_Source_Shooter_Health_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthMesh() { return STRUCT_OFFSET(AHealth, HealthMesh); } \
	FORCEINLINE static uint32 __PPO__HealthOverlapSphere() { return STRUCT_OFFSET(AHealth, HealthOverlapSphere); } \
	FORCEINLINE static uint32 __PPO__PickupSound() { return STRUCT_OFFSET(AHealth, PickupSound); }


#define Shooter_Source_Shooter_Health_h_9_PROLOG
#define Shooter_Source_Shooter_Health_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Health_h_12_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Health_h_12_SPARSE_DATA \
	Shooter_Source_Shooter_Health_h_12_RPC_WRAPPERS \
	Shooter_Source_Shooter_Health_h_12_INCLASS \
	Shooter_Source_Shooter_Health_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Health_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Health_h_12_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Health_h_12_SPARSE_DATA \
	Shooter_Source_Shooter_Health_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Health_h_12_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Health_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AHealth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Health_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
