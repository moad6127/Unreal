// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GUNS_GunsCharacter_generated_h
#error "GunsCharacter.generated.h already included, missing '#pragma once' in GunsCharacter.h"
#endif
#define GUNS_GunsCharacter_generated_h

#define Guns_Source_Guns_GunsCharacter_h_12_SPARSE_DATA
#define Guns_Source_Guns_GunsCharacter_h_12_RPC_WRAPPERS
#define Guns_Source_Guns_GunsCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Guns_Source_Guns_GunsCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunsCharacter(); \
	friend struct Z_Construct_UClass_AGunsCharacter_Statics; \
public: \
	DECLARE_CLASS(AGunsCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Guns"), NO_API) \
	DECLARE_SERIALIZER(AGunsCharacter)


#define Guns_Source_Guns_GunsCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGunsCharacter(); \
	friend struct Z_Construct_UClass_AGunsCharacter_Statics; \
public: \
	DECLARE_CLASS(AGunsCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Guns"), NO_API) \
	DECLARE_SERIALIZER(AGunsCharacter)


#define Guns_Source_Guns_GunsCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGunsCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGunsCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunsCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunsCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunsCharacter(AGunsCharacter&&); \
	NO_API AGunsCharacter(const AGunsCharacter&); \
public:


#define Guns_Source_Guns_GunsCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunsCharacter(AGunsCharacter&&); \
	NO_API AGunsCharacter(const AGunsCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunsCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunsCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunsCharacter)


#define Guns_Source_Guns_GunsCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGunsCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AGunsCharacter, FollowCamera); }


#define Guns_Source_Guns_GunsCharacter_h_9_PROLOG
#define Guns_Source_Guns_GunsCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Guns_Source_Guns_GunsCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Guns_Source_Guns_GunsCharacter_h_12_SPARSE_DATA \
	Guns_Source_Guns_GunsCharacter_h_12_RPC_WRAPPERS \
	Guns_Source_Guns_GunsCharacter_h_12_INCLASS \
	Guns_Source_Guns_GunsCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Guns_Source_Guns_GunsCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Guns_Source_Guns_GunsCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Guns_Source_Guns_GunsCharacter_h_12_SPARSE_DATA \
	Guns_Source_Guns_GunsCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Guns_Source_Guns_GunsCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Guns_Source_Guns_GunsCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNS_API UClass* StaticClass<class AGunsCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Guns_Source_Guns_GunsCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
