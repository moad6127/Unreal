// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
struct FVector;
#ifdef SHOOTER_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define SHOOTER_Enemy_generated_h

#define Shooter_Source_Shooter_Enemy_h_13_SPARSE_DATA
#define Shooter_Source_Shooter_Enemy_h_13_RPC_WRAPPERS \
	virtual void ShowHealthBar_Implementation(); \
 \
	DECLARE_FUNCTION(execDestroyHitNumber); \
	DECLARE_FUNCTION(execStoreHitNumber); \
	DECLARE_FUNCTION(execShowHealthBar);


#define Shooter_Source_Shooter_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyHitNumber); \
	DECLARE_FUNCTION(execStoreHitNumber); \
	DECLARE_FUNCTION(execShowHealthBar);


#define Shooter_Source_Shooter_Enemy_h_13_EVENT_PARMS \
	struct Enemy_eventShowHitNumber_Parms \
	{ \
		int32 Damage; \
		FVector HitLocation; \
		bool bHeadShot; \
	};


#define Shooter_Source_Shooter_Enemy_h_13_CALLBACK_WRAPPERS
#define Shooter_Source_Shooter_Enemy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemy*>(this); }


#define Shooter_Source_Shooter_Enemy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemy*>(this); }


#define Shooter_Source_Shooter_Enemy_h_13_STANDARD_CONSTRUCTORS \
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


#define Shooter_Source_Shooter_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define Shooter_Source_Shooter_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ImpactParticles() { return STRUCT_OFFSET(AEnemy, ImpactParticles); } \
	FORCEINLINE static uint32 __PPO__ImpactSound() { return STRUCT_OFFSET(AEnemy, ImpactSound); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AEnemy, Health); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AEnemy, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__HeadBone() { return STRUCT_OFFSET(AEnemy, HeadBone); } \
	FORCEINLINE static uint32 __PPO__HealthBarDisplayTime() { return STRUCT_OFFSET(AEnemy, HealthBarDisplayTime); } \
	FORCEINLINE static uint32 __PPO__HitMontage() { return STRUCT_OFFSET(AEnemy, HitMontage); } \
	FORCEINLINE static uint32 __PPO__HitReactTimeMin() { return STRUCT_OFFSET(AEnemy, HitReactTimeMin); } \
	FORCEINLINE static uint32 __PPO__HitReactTimeMax() { return STRUCT_OFFSET(AEnemy, HitReactTimeMax); } \
	FORCEINLINE static uint32 __PPO__HitNumbers() { return STRUCT_OFFSET(AEnemy, HitNumbers); } \
	FORCEINLINE static uint32 __PPO__HitNumberDestroyTime() { return STRUCT_OFFSET(AEnemy, HitNumberDestroyTime); } \
	FORCEINLINE static uint32 __PPO__BehaviorTree() { return STRUCT_OFFSET(AEnemy, BehaviorTree); } \
	FORCEINLINE static uint32 __PPO__PatrolPoint() { return STRUCT_OFFSET(AEnemy, PatrolPoint); } \
	FORCEINLINE static uint32 __PPO__PatrolPoint2() { return STRUCT_OFFSET(AEnemy, PatrolPoint2); }


#define Shooter_Source_Shooter_Enemy_h_10_PROLOG \
	Shooter_Source_Shooter_Enemy_h_13_EVENT_PARMS


#define Shooter_Source_Shooter_Enemy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Enemy_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_Enemy_h_13_RPC_WRAPPERS \
	Shooter_Source_Shooter_Enemy_h_13_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_Enemy_h_13_INCLASS \
	Shooter_Source_Shooter_Enemy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Enemy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Enemy_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Enemy_h_13_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_Enemy_h_13_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
