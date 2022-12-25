// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define SHOOTER_Weapon_generated_h

#define Shooter_Source_Shooter_Weapon_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponDataTable_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FWeaponDataTable>();

#define Shooter_Source_Shooter_Weapon_h_68_SPARSE_DATA
#define Shooter_Source_Shooter_Weapon_h_68_RPC_WRAPPERS
#define Shooter_Source_Shooter_Weapon_h_68_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Weapon_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define Shooter_Source_Shooter_Weapon_h_68_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define Shooter_Source_Shooter_Weapon_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define Shooter_Source_Shooter_Weapon_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define Shooter_Source_Shooter_Weapon_h_68_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ammo() { return STRUCT_OFFSET(AWeapon, Ammo); } \
	FORCEINLINE static uint32 __PPO__MagazineCapacity() { return STRUCT_OFFSET(AWeapon, MagazineCapacity); } \
	FORCEINLINE static uint32 __PPO__WeaponType() { return STRUCT_OFFSET(AWeapon, WeaponType); } \
	FORCEINLINE static uint32 __PPO__AmmoType() { return STRUCT_OFFSET(AWeapon, AmmoType); } \
	FORCEINLINE static uint32 __PPO__ReloadMontageSection() { return STRUCT_OFFSET(AWeapon, ReloadMontageSection); } \
	FORCEINLINE static uint32 __PPO__bMovingClip() { return STRUCT_OFFSET(AWeapon, bMovingClip); } \
	FORCEINLINE static uint32 __PPO__ClipBoneName() { return STRUCT_OFFSET(AWeapon, ClipBoneName); } \
	FORCEINLINE static uint32 __PPO__WeaponDataTable() { return STRUCT_OFFSET(AWeapon, WeaponDataTable); }


#define Shooter_Source_Shooter_Weapon_h_65_PROLOG
#define Shooter_Source_Shooter_Weapon_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Weapon_h_68_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Weapon_h_68_SPARSE_DATA \
	Shooter_Source_Shooter_Weapon_h_68_RPC_WRAPPERS \
	Shooter_Source_Shooter_Weapon_h_68_INCLASS \
	Shooter_Source_Shooter_Weapon_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Weapon_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Weapon_h_68_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Weapon_h_68_SPARSE_DATA \
	Shooter_Source_Shooter_Weapon_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Weapon_h_68_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Weapon_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
