// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GUNS_GunsGameMode_generated_h
#error "GunsGameMode.generated.h already included, missing '#pragma once' in GunsGameMode.h"
#endif
#define GUNS_GunsGameMode_generated_h

#define Guns_Source_Guns_GunsGameMode_h_12_SPARSE_DATA
#define Guns_Source_Guns_GunsGameMode_h_12_RPC_WRAPPERS
#define Guns_Source_Guns_GunsGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Guns_Source_Guns_GunsGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunsGameMode(); \
	friend struct Z_Construct_UClass_AGunsGameMode_Statics; \
public: \
	DECLARE_CLASS(AGunsGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Guns"), GUNS_API) \
	DECLARE_SERIALIZER(AGunsGameMode)


#define Guns_Source_Guns_GunsGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGunsGameMode(); \
	friend struct Z_Construct_UClass_AGunsGameMode_Statics; \
public: \
	DECLARE_CLASS(AGunsGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Guns"), GUNS_API) \
	DECLARE_SERIALIZER(AGunsGameMode)


#define Guns_Source_Guns_GunsGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GUNS_API AGunsGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGunsGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GUNS_API, AGunsGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunsGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GUNS_API AGunsGameMode(AGunsGameMode&&); \
	GUNS_API AGunsGameMode(const AGunsGameMode&); \
public:


#define Guns_Source_Guns_GunsGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GUNS_API AGunsGameMode(AGunsGameMode&&); \
	GUNS_API AGunsGameMode(const AGunsGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GUNS_API, AGunsGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunsGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunsGameMode)


#define Guns_Source_Guns_GunsGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Guns_Source_Guns_GunsGameMode_h_9_PROLOG
#define Guns_Source_Guns_GunsGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Guns_Source_Guns_GunsGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Guns_Source_Guns_GunsGameMode_h_12_SPARSE_DATA \
	Guns_Source_Guns_GunsGameMode_h_12_RPC_WRAPPERS \
	Guns_Source_Guns_GunsGameMode_h_12_INCLASS \
	Guns_Source_Guns_GunsGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Guns_Source_Guns_GunsGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Guns_Source_Guns_GunsGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Guns_Source_Guns_GunsGameMode_h_12_SPARSE_DATA \
	Guns_Source_Guns_GunsGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Guns_Source_Guns_GunsGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Guns_Source_Guns_GunsGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNS_API UClass* StaticClass<class AGunsGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Guns_Source_Guns_GunsGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
