// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class AActor;
class AController;
#ifdef SHOOTER_BulletHitInterface_generated_h
#error "BulletHitInterface.generated.h already included, missing '#pragma once' in BulletHitInterface.h"
#endif
#define SHOOTER_BulletHitInterface_generated_h

#define Shooter_Source_Shooter_BulletHitInterface_h_13_SPARSE_DATA
#define Shooter_Source_Shooter_BulletHitInterface_h_13_RPC_WRAPPERS \
	virtual void BulletHit_Implementation(FHitResult HitResult, AActor* Shooter, AController* ShooterController) {}; \
 \
	DECLARE_FUNCTION(execBulletHit);


#define Shooter_Source_Shooter_BulletHitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BulletHit_Implementation(FHitResult HitResult, AActor* Shooter, AController* ShooterController) {}; \
 \
	DECLARE_FUNCTION(execBulletHit);


#define Shooter_Source_Shooter_BulletHitInterface_h_13_EVENT_PARMS \
	struct BulletHitInterface_eventBulletHit_Parms \
	{ \
		FHitResult HitResult; \
		AActor* Shooter; \
		AController* ShooterController; \
	};


#define Shooter_Source_Shooter_BulletHitInterface_h_13_CALLBACK_WRAPPERS
#define Shooter_Source_Shooter_BulletHitInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTER_API UBulletHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBulletHitInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTER_API, UBulletHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBulletHitInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHOOTER_API UBulletHitInterface(UBulletHitInterface&&); \
	SHOOTER_API UBulletHitInterface(const UBulletHitInterface&); \
public:


#define Shooter_Source_Shooter_BulletHitInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTER_API UBulletHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHOOTER_API UBulletHitInterface(UBulletHitInterface&&); \
	SHOOTER_API UBulletHitInterface(const UBulletHitInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTER_API, UBulletHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBulletHitInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBulletHitInterface)


#define Shooter_Source_Shooter_BulletHitInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBulletHitInterface(); \
	friend struct Z_Construct_UClass_UBulletHitInterface_Statics; \
public: \
	DECLARE_CLASS(UBulletHitInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Shooter"), SHOOTER_API) \
	DECLARE_SERIALIZER(UBulletHitInterface)


#define Shooter_Source_Shooter_BulletHitInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Shooter_Source_Shooter_BulletHitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Shooter_Source_Shooter_BulletHitInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_BulletHitInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Shooter_Source_Shooter_BulletHitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Shooter_Source_Shooter_BulletHitInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_BulletHitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBulletHitInterface() {} \
public: \
	typedef UBulletHitInterface UClassType; \
	typedef IBulletHitInterface ThisClass; \
	static void Execute_BulletHit(UObject* O, FHitResult HitResult, AActor* Shooter, AController* ShooterController); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Shooter_Source_Shooter_BulletHitInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IBulletHitInterface() {} \
public: \
	typedef UBulletHitInterface UClassType; \
	typedef IBulletHitInterface ThisClass; \
	static void Execute_BulletHit(UObject* O, FHitResult HitResult, AActor* Shooter, AController* ShooterController); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Shooter_Source_Shooter_BulletHitInterface_h_10_PROLOG \
	Shooter_Source_Shooter_BulletHitInterface_h_13_EVENT_PARMS


#define Shooter_Source_Shooter_BulletHitInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_BulletHitInterface_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_BulletHitInterface_h_13_RPC_WRAPPERS \
	Shooter_Source_Shooter_BulletHitInterface_h_13_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_BulletHitInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_BulletHitInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_BulletHitInterface_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_BulletHitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_BulletHitInterface_h_13_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_BulletHitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class UBulletHitInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_BulletHitInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
