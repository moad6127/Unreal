// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define SHOOTER_ShooterCharacter_generated_h

#define Shooter_Source_Shooter_ShooterCharacter_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterpLocation_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FInterpLocation>();

#define Shooter_Source_Shooter_ShooterCharacter_h_38_DELEGATE \
struct _Script_Shooter_eventHighlightIconDelegate_Parms \
{ \
	int32 SlotIndex; \
	bool bStartAnimation; \
}; \
static inline void FHighlightIconDelegate_DelegateWrapper(const FMulticastScriptDelegate& HighlightIconDelegate, int32 SlotIndex, bool bStartAnimation) \
{ \
	_Script_Shooter_eventHighlightIconDelegate_Parms Parms; \
	Parms.SlotIndex=SlotIndex; \
	Parms.bStartAnimation=bStartAnimation ? true : false; \
	HighlightIconDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Shooter_Source_Shooter_ShooterCharacter_h_37_DELEGATE \
struct _Script_Shooter_eventEquipItemDelegate_Parms \
{ \
	int32 CurrentSlotIndex; \
	int32 NewSlotIndex; \
}; \
static inline void FEquipItemDelegate_DelegateWrapper(const FMulticastScriptDelegate& EquipItemDelegate, int32 CurrentSlotIndex, int32 NewSlotIndex) \
{ \
	_Script_Shooter_eventEquipItemDelegate_Parms Parms; \
	Parms.CurrentSlotIndex=CurrentSlotIndex; \
	Parms.NewSlotIndex=NewSlotIndex; \
	EquipItemDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Shooter_Source_Shooter_ShooterCharacter_h_43_SPARSE_DATA
#define Shooter_Source_Shooter_ShooterCharacter_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCrosshairSpreadMultiplier); \
	DECLARE_FUNCTION(execFinishEquipping); \
	DECLARE_FUNCTION(execFinishReloading); \
	DECLARE_FUNCTION(execStartVerticalRecoil); \
	DECLARE_FUNCTION(execStartHorizontalRecoil); \
	DECLARE_FUNCTION(execFinishDeath); \
	DECLARE_FUNCTION(execEndStun); \
	DECLARE_FUNCTION(execGetSurfaceType); \
	DECLARE_FUNCTION(execReleaseClip); \
	DECLARE_FUNCTION(execGrabClip); \
	DECLARE_FUNCTION(execAutoFireReset); \
	DECLARE_FUNCTION(execFinishCrosshairBulletFire);


#define Shooter_Source_Shooter_ShooterCharacter_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCrosshairSpreadMultiplier); \
	DECLARE_FUNCTION(execFinishEquipping); \
	DECLARE_FUNCTION(execFinishReloading); \
	DECLARE_FUNCTION(execStartVerticalRecoil); \
	DECLARE_FUNCTION(execStartHorizontalRecoil); \
	DECLARE_FUNCTION(execFinishDeath); \
	DECLARE_FUNCTION(execEndStun); \
	DECLARE_FUNCTION(execGetSurfaceType); \
	DECLARE_FUNCTION(execReleaseClip); \
	DECLARE_FUNCTION(execGrabClip); \
	DECLARE_FUNCTION(execAutoFireReset); \
	DECLARE_FUNCTION(execFinishCrosshairBulletFire);


#define Shooter_Source_Shooter_ShooterCharacter_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define Shooter_Source_Shooter_ShooterCharacter_h_43_INCLASS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define Shooter_Source_Shooter_ShooterCharacter_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public:


#define Shooter_Source_Shooter_ShooterCharacter_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterCharacter)


#define Shooter_Source_Shooter_ShooterCharacter_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AShooterCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AShooterCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(AShooterCharacter, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(AShooterCharacter, BaseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__HipTurnRate() { return STRUCT_OFFSET(AShooterCharacter, HipTurnRate); } \
	FORCEINLINE static uint32 __PPO__HipLookUpRate() { return STRUCT_OFFSET(AShooterCharacter, HipLookUpRate); } \
	FORCEINLINE static uint32 __PPO__AimingTurnRate() { return STRUCT_OFFSET(AShooterCharacter, AimingTurnRate); } \
	FORCEINLINE static uint32 __PPO__AimingLookUpRate() { return STRUCT_OFFSET(AShooterCharacter, AimingLookUpRate); } \
	FORCEINLINE static uint32 __PPO__MouseHipTurnRate() { return STRUCT_OFFSET(AShooterCharacter, MouseHipTurnRate); } \
	FORCEINLINE static uint32 __PPO__MouseHipLookUpRate() { return STRUCT_OFFSET(AShooterCharacter, MouseHipLookUpRate); } \
	FORCEINLINE static uint32 __PPO__MouseAimingTurnRate() { return STRUCT_OFFSET(AShooterCharacter, MouseAimingTurnRate); } \
	FORCEINLINE static uint32 __PPO__MouseAimingLookUpRate() { return STRUCT_OFFSET(AShooterCharacter, MouseAimingLookUpRate); } \
	FORCEINLINE static uint32 __PPO__HipFireMontage() { return STRUCT_OFFSET(AShooterCharacter, HipFireMontage); } \
	FORCEINLINE static uint32 __PPO__ImpactParticles() { return STRUCT_OFFSET(AShooterCharacter, ImpactParticles); } \
	FORCEINLINE static uint32 __PPO__BeamParticles() { return STRUCT_OFFSET(AShooterCharacter, BeamParticles); } \
	FORCEINLINE static uint32 __PPO__bAiming() { return STRUCT_OFFSET(AShooterCharacter, bAiming); } \
	FORCEINLINE static uint32 __PPO__CameraDefaultFOV() { return STRUCT_OFFSET(AShooterCharacter, CameraDefaultFOV); } \
	FORCEINLINE static uint32 __PPO__CameraZoomedFOV() { return STRUCT_OFFSET(AShooterCharacter, CameraZoomedFOV); } \
	FORCEINLINE static uint32 __PPO__ZoomInterSpeed() { return STRUCT_OFFSET(AShooterCharacter, ZoomInterSpeed); } \
	FORCEINLINE static uint32 __PPO__CrosshairSpreadMultiplier() { return STRUCT_OFFSET(AShooterCharacter, CrosshairSpreadMultiplier); } \
	FORCEINLINE static uint32 __PPO__CrosshairVelocityFactor() { return STRUCT_OFFSET(AShooterCharacter, CrosshairVelocityFactor); } \
	FORCEINLINE static uint32 __PPO__CrosshairInAirFactor() { return STRUCT_OFFSET(AShooterCharacter, CrosshairInAirFactor); } \
	FORCEINLINE static uint32 __PPO__CrosshairAimFactor() { return STRUCT_OFFSET(AShooterCharacter, CrosshairAimFactor); } \
	FORCEINLINE static uint32 __PPO__CrosshairShootingFactor() { return STRUCT_OFFSET(AShooterCharacter, CrosshairShootingFactor); } \
	FORCEINLINE static uint32 __PPO__TraceHitItemLastFrame() { return STRUCT_OFFSET(AShooterCharacter, TraceHitItemLastFrame); } \
	FORCEINLINE static uint32 __PPO__EquippedWeapon() { return STRUCT_OFFSET(AShooterCharacter, EquippedWeapon); } \
	FORCEINLINE static uint32 __PPO__DefaultWeaponClass() { return STRUCT_OFFSET(AShooterCharacter, DefaultWeaponClass); } \
	FORCEINLINE static uint32 __PPO__TraceHitItem() { return STRUCT_OFFSET(AShooterCharacter, TraceHitItem); } \
	FORCEINLINE static uint32 __PPO__CameraInterpDistance() { return STRUCT_OFFSET(AShooterCharacter, CameraInterpDistance); } \
	FORCEINLINE static uint32 __PPO__CameraInterpElevtion() { return STRUCT_OFFSET(AShooterCharacter, CameraInterpElevtion); } \
	FORCEINLINE static uint32 __PPO__AmmoMap() { return STRUCT_OFFSET(AShooterCharacter, AmmoMap); } \
	FORCEINLINE static uint32 __PPO__Starting9mmAmmo() { return STRUCT_OFFSET(AShooterCharacter, Starting9mmAmmo); } \
	FORCEINLINE static uint32 __PPO__StartingARAmmo() { return STRUCT_OFFSET(AShooterCharacter, StartingARAmmo); } \
	FORCEINLINE static uint32 __PPO__CombatState() { return STRUCT_OFFSET(AShooterCharacter, CombatState); } \
	FORCEINLINE static uint32 __PPO__ReloadMontage() { return STRUCT_OFFSET(AShooterCharacter, ReloadMontage); } \
	FORCEINLINE static uint32 __PPO__EquipMontage() { return STRUCT_OFFSET(AShooterCharacter, EquipMontage); } \
	FORCEINLINE static uint32 __PPO__ClipTransform() { return STRUCT_OFFSET(AShooterCharacter, ClipTransform); } \
	FORCEINLINE static uint32 __PPO__HandSceneComponent() { return STRUCT_OFFSET(AShooterCharacter, HandSceneComponent); } \
	FORCEINLINE static uint32 __PPO__bCrouching() { return STRUCT_OFFSET(AShooterCharacter, bCrouching); } \
	FORCEINLINE static uint32 __PPO__BaseMovementSpeed() { return STRUCT_OFFSET(AShooterCharacter, BaseMovementSpeed); } \
	FORCEINLINE static uint32 __PPO__CrouchMovemnetSpeed() { return STRUCT_OFFSET(AShooterCharacter, CrouchMovemnetSpeed); } \
	FORCEINLINE static uint32 __PPO__standingCapsuleHlfHeight() { return STRUCT_OFFSET(AShooterCharacter, standingCapsuleHlfHeight); } \
	FORCEINLINE static uint32 __PPO__CrouchingCapsuleHalfHeight() { return STRUCT_OFFSET(AShooterCharacter, CrouchingCapsuleHalfHeight); } \
	FORCEINLINE static uint32 __PPO__BaseGroundFriction() { return STRUCT_OFFSET(AShooterCharacter, BaseGroundFriction); } \
	FORCEINLINE static uint32 __PPO__CrouchGrouundFriction() { return STRUCT_OFFSET(AShooterCharacter, CrouchGrouundFriction); } \
	FORCEINLINE static uint32 __PPO__WeaponInterpComp() { return STRUCT_OFFSET(AShooterCharacter, WeaponInterpComp); } \
	FORCEINLINE static uint32 __PPO__InterComp() { return STRUCT_OFFSET(AShooterCharacter, InterComp); } \
	FORCEINLINE static uint32 __PPO__InterComp2() { return STRUCT_OFFSET(AShooterCharacter, InterComp2); } \
	FORCEINLINE static uint32 __PPO__InterComp3() { return STRUCT_OFFSET(AShooterCharacter, InterComp3); } \
	FORCEINLINE static uint32 __PPO__InterComp4() { return STRUCT_OFFSET(AShooterCharacter, InterComp4); } \
	FORCEINLINE static uint32 __PPO__InterComp5() { return STRUCT_OFFSET(AShooterCharacter, InterComp5); } \
	FORCEINLINE static uint32 __PPO__InterComp6() { return STRUCT_OFFSET(AShooterCharacter, InterComp6); } \
	FORCEINLINE static uint32 __PPO__InterpLocation() { return STRUCT_OFFSET(AShooterCharacter, InterpLocation); } \
	FORCEINLINE static uint32 __PPO__PickupSoundResetTime() { return STRUCT_OFFSET(AShooterCharacter, PickupSoundResetTime); } \
	FORCEINLINE static uint32 __PPO__EquipSoundResetTime() { return STRUCT_OFFSET(AShooterCharacter, EquipSoundResetTime); } \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(AShooterCharacter, Inventory); } \
	FORCEINLINE static uint32 __PPO__EquipItemDelegate() { return STRUCT_OFFSET(AShooterCharacter, EquipItemDelegate); } \
	FORCEINLINE static uint32 __PPO__HighlightIconDelegate() { return STRUCT_OFFSET(AShooterCharacter, HighlightIconDelegate); } \
	FORCEINLINE static uint32 __PPO__HighlightedSlot() { return STRUCT_OFFSET(AShooterCharacter, HighlightedSlot); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AShooterCharacter, Health); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AShooterCharacter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__MeleeImpactSound() { return STRUCT_OFFSET(AShooterCharacter, MeleeImpactSound); } \
	FORCEINLINE static uint32 __PPO__BloodParticles() { return STRUCT_OFFSET(AShooterCharacter, BloodParticles); } \
	FORCEINLINE static uint32 __PPO__HitReactMontage() { return STRUCT_OFFSET(AShooterCharacter, HitReactMontage); } \
	FORCEINLINE static uint32 __PPO__StunChance() { return STRUCT_OFFSET(AShooterCharacter, StunChance); } \
	FORCEINLINE static uint32 __PPO__bChangeView() { return STRUCT_OFFSET(AShooterCharacter, bChangeView); } \
	FORCEINLINE static uint32 __PPO__FPSFollowCamera() { return STRUCT_OFFSET(AShooterCharacter, FPSFollowCamera); } \
	FORCEINLINE static uint32 __PPO__FPSMeshComponen() { return STRUCT_OFFSET(AShooterCharacter, FPSMeshComponen); } \
	FORCEINLINE static uint32 __PPO__DeathMontage() { return STRUCT_OFFSET(AShooterCharacter, DeathMontage); } \
	FORCEINLINE static uint32 __PPO__FiringCameraShakeClass() { return STRUCT_OFFSET(AShooterCharacter, FiringCameraShakeClass); } \
	FORCEINLINE static uint32 __PPO__VerticalCurve() { return STRUCT_OFFSET(AShooterCharacter, VerticalCurve); } \
	FORCEINLINE static uint32 __PPO__HorizontalCurve() { return STRUCT_OFFSET(AShooterCharacter, HorizontalCurve); } \
	FORCEINLINE static uint32 __PPO__CheckGunMesh() { return STRUCT_OFFSET(AShooterCharacter, CheckGunMesh); } \
	FORCEINLINE static uint32 __PPO__bFPSAiming() { return STRUCT_OFFSET(AShooterCharacter, bFPSAiming); } \
	FORCEINLINE static uint32 __PPO__FPSAimingCamera() { return STRUCT_OFFSET(AShooterCharacter, FPSAimingCamera); }


#define Shooter_Source_Shooter_ShooterCharacter_h_40_PROLOG
#define Shooter_Source_Shooter_ShooterCharacter_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_ShooterCharacter_h_43_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_ShooterCharacter_h_43_SPARSE_DATA \
	Shooter_Source_Shooter_ShooterCharacter_h_43_RPC_WRAPPERS \
	Shooter_Source_Shooter_ShooterCharacter_h_43_INCLASS \
	Shooter_Source_Shooter_ShooterCharacter_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_ShooterCharacter_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_ShooterCharacter_h_43_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_ShooterCharacter_h_43_SPARSE_DATA \
	Shooter_Source_Shooter_ShooterCharacter_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_ShooterCharacter_h_43_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_ShooterCharacter_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_ShooterCharacter_h


#define FOREACH_ENUM_ECOMBATSTATE(op) \
	op(ECombatState::ECS_Unoccupied) \
	op(ECombatState::ECS_FireTimerInProgress) \
	op(ECombatState::ECS_Reloading) \
	op(ECombatState::ECS_Equipping) \
	op(ECombatState::ECS_Stunned) \
	op(ECombatState::ECS_Die) 

enum class ECombatState : uint8;
template<> SHOOTER_API UEnum* StaticEnum<ECombatState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
