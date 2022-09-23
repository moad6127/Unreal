// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INFLEARN_TESTUNREAL_MyPawn_generated_h
#error "MyPawn.generated.h already included, missing '#pragma once' in MyPawn.h"
#endif
#define INFLEARN_TESTUNREAL_MyPawn_generated_h

#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_SPARSE_DATA
#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_RPC_WRAPPERS
#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/inflearn_TestUnreal"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/inflearn_TestUnreal"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public:


#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawn)


#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AMyPawn, Mesh); } \
	FORCEINLINE static uint32 __PPO__Movement() { return STRUCT_OFFSET(AMyPawn, Movement); }


#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_10_PROLOG
#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_SPARSE_DATA \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_RPC_WRAPPERS \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_INCLASS \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_SPARSE_DATA \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_INCLASS_NO_PURE_DECLS \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INFLEARN_TESTUNREAL_API UClass* StaticClass<class AMyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID inflearn_TestUnreal_Source_inflearn_TestUnreal_MyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
