// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INFLEARN_TESTUNREAL_MyStatComponent_generated_h
#error "MyStatComponent.generated.h already included, missing '#pragma once' in MyStatComponent.h"
#endif
#define INFLEARN_TESTUNREAL_MyStatComponent_generated_h

#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_SPARSE_DATA
#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_RPC_WRAPPERS
#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyStatComponent(); \
	friend struct Z_Construct_UClass_UMyStatComponent_Statics; \
public: \
	DECLARE_CLASS(UMyStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/inflearn_TestUnreal"), NO_API) \
	DECLARE_SERIALIZER(UMyStatComponent)


#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMyStatComponent(); \
	friend struct Z_Construct_UClass_UMyStatComponent_Statics; \
public: \
	DECLARE_CLASS(UMyStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/inflearn_TestUnreal"), NO_API) \
	DECLARE_SERIALIZER(UMyStatComponent)


#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyStatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyStatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyStatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyStatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyStatComponent(UMyStatComponent&&); \
	NO_API UMyStatComponent(const UMyStatComponent&); \
public:


#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyStatComponent(UMyStatComponent&&); \
	NO_API UMyStatComponent(const UMyStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyStatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyStatComponent)


#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Level() { return STRUCT_OFFSET(UMyStatComponent, Level); } \
	FORCEINLINE static uint32 __PPO__HP() { return STRUCT_OFFSET(UMyStatComponent, HP); } \
	FORCEINLINE static uint32 __PPO__MaxHP() { return STRUCT_OFFSET(UMyStatComponent, MaxHP); } \
	FORCEINLINE static uint32 __PPO__Attack() { return STRUCT_OFFSET(UMyStatComponent, Attack); }


#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_11_PROLOG
#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_SPARSE_DATA \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_RPC_WRAPPERS \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_INCLASS \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_SPARSE_DATA \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_INCLASS_NO_PURE_DECLS \
	inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INFLEARN_TESTUNREAL_API UClass* StaticClass<class UMyStatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID inflearn_TestUnreal_Source_inflearn_TestUnreal_MyStatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
