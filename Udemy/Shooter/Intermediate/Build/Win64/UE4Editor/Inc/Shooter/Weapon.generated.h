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

#define Shooter_Source_Shooter_Weapon_h_98_SPARSE_DATA
#define Shooter_Source_Shooter_Weapon_h_98_RPC_WRAPPERS
#define Shooter_Source_Shooter_Weapon_h_98_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Weapon_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define Shooter_Source_Shooter_Weapon_h_98_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define Shooter_Source_Shooter_Weapon_h_98_STANDARD_CONSTRUCTORS \
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


#define Shooter_Source_Shooter_Weapon_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define Shooter_Source_Shooter_Weapon_h_98_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ammo() { return STRUCT_OFFSET(AWeapon, Ammo); } \
	FORCEINLINE static uint32 __PPO__MagazineCapacity() { return STRUCT_OFFSET(AWeapon, MagazineCapacity); } \
	FORCEINLINE static uint32 __PPO__WeaponType() { return STRUCT_OFFSET(AWeapon, WeaponType); } \
	FORCEINLINE static uint32 __PPO__AmmoType() { return STRUCT_OFFSET(AWeapon, AmmoType); } \
	FORCEINLINE static uint32 __PPO__ReloadMontageSection() { return STRUCT_OFFSET(AWeapon, ReloadMontageSection); } \
	FORCEINLINE static uint32 __PPO__bMovingClip() { return STRUCT_OFFSET(AWeapon, bMovingClip); } \
	FORCEINLINE static uint32 __PPO__ClipBoneName() { return STRUCT_OFFSET(AWeapon, ClipBoneName); } \
	FORCEINLINE static uint32 __PPO__WeaponDataTable() { return STRUCT_OFFSET(AWeapon, WeaponDataTable); } \
	FORCEINLINE static uint32 __PPO__CrosshairsMiddle() { return STRUCT_OFFSET(AWeapon, CrosshairsMiddle); } \
	FORCEINLINE static uint32 __PPO__CrosshairsLeft() { return STRUCT_OFFSET(AWeapon, CrosshairsLeft); } \
	FORCEINLINE static uint32 __PPO__CrosshairsRight() { return STRUCT_OFFSET(AWeapon, CrosshairsRight); } \
	FORCEINLINE static uint32 __PPO__CrosshairsBottom() { return STRUCT_OFFSET(AWeapon, CrosshairsBottom); } \
	FORCEINLINE static uint32 __PPO__CrosshairsTop() { return STRUCT_OFFSET(AWeapon, CrosshairsTop); } \
	FORCEINLINE static uint32 __PPO__AutoFireRate() { return STRUCT_OFFSET(AWeapon, AutoFireRate); } \
	FORCEINLINE static uint32 __PPO__MuzzleFlash() { return STRUCT_OFFSET(AWeapon, MuzzleFlash); } \
	FORCEINLINE static uint32 __PPO__FireSound() { return STRUCT_OFFSET(AWeapon, FireSound); } \
	FORCEINLINE static uint32 __PPO__BoneToHide() { return STRUCT_OFFSET(AWeapon, BoneToHide); } \
	FORCEINLINE static uint32 __PPO__SlideDisplacement() { return STRUCT_OFFSET(AWeapon, SlideDisplacement); } \
	FORCEINLINE static uint32 __PPO__SlideDisplacementCurve() { return STRUCT_OFFSET(AWeapon, SlideDisplacementCurve); } \
	FORCEINLINE static uint32 __PPO__SlideDisplacementTime() { return STRUCT_OFFSET(AWeapon, SlideDisplacementTime); } \
	FORCEINLINE static uint32 __PPO__bMovingSlide() { return STRUCT_OFFSET(AWeapon, bMovingSlide); } \
	FORCEINLINE static uint32 __PPO__MaxSlideDisplacement() { return STRUCT_OFFSET(AWeapon, MaxSlideDisplacement); } \
	FORCEINLINE static uint32 __PPO__MaxRecoilRotation() { return STRUCT_OFFSET(AWeapon, MaxRecoilRotation); } \
	FORCEINLINE static uint32 __PPO__RecoilRotation() { return STRUCT_OFFSET(AWeapon, RecoilRotation); } \
	FORCEINLINE static uint32 __PPO__bAutomatic() { return STRUCT_OFFSET(AWeapon, bAutomatic); }


#define Shooter_Source_Shooter_Weapon_h_95_PROLOG
#define Shooter_Source_Shooter_Weapon_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Weapon_h_98_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Weapon_h_98_SPARSE_DATA \
	Shooter_Source_Shooter_Weapon_h_98_RPC_WRAPPERS \
	Shooter_Source_Shooter_Weapon_h_98_INCLASS \
	Shooter_Source_Shooter_Weapon_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Weapon_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Weapon_h_98_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Weapon_h_98_SPARSE_DATA \
	Shooter_Source_Shooter_Weapon_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Weapon_h_98_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Weapon_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
