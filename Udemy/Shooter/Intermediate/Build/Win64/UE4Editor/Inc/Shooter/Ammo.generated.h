// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_Ammo_generated_h
#error "Ammo.generated.h already included, missing '#pragma once' in Ammo.h"
#endif
#define SHOOTER_Ammo_generated_h

#define Shooter_Source_Shooter_Ammo_h_15_SPARSE_DATA
#define Shooter_Source_Shooter_Ammo_h_15_RPC_WRAPPERS
#define Shooter_Source_Shooter_Ammo_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Ammo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmo(); \
	friend struct Z_Construct_UClass_AAmmo_Statics; \
public: \
	DECLARE_CLASS(AAmmo, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AAmmo)


#define Shooter_Source_Shooter_Ammo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAmmo(); \
	friend struct Z_Construct_UClass_AAmmo_Statics; \
public: \
	DECLARE_CLASS(AAmmo, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AAmmo)


#define Shooter_Source_Shooter_Ammo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmo(AAmmo&&); \
	NO_API AAmmo(const AAmmo&); \
public:


#define Shooter_Source_Shooter_Ammo_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmo(AAmmo&&); \
	NO_API AAmmo(const AAmmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmmo)


#define Shooter_Source_Shooter_Ammo_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AmmoMesh() { return STRUCT_OFFSET(AAmmo, AmmoMesh); }


#define Shooter_Source_Shooter_Ammo_h_12_PROLOG
#define Shooter_Source_Shooter_Ammo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Ammo_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Ammo_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Ammo_h_15_RPC_WRAPPERS \
	Shooter_Source_Shooter_Ammo_h_15_INCLASS \
	Shooter_Source_Shooter_Ammo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Ammo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Ammo_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Ammo_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Ammo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Ammo_h_15_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Ammo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AAmmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Ammo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
