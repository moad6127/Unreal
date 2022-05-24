// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSTUDY_MyStudyGameModeBase_generated_h
#error "MyStudyGameModeBase.generated.h already included, missing '#pragma once' in MyStudyGameModeBase.h"
#endif
#define MYSTUDY_MyStudyGameModeBase_generated_h

#define MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_SPARSE_DATA
#define MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_RPC_WRAPPERS
#define MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyStudyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyStudyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyStudyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyStudyGameModeBase)


#define MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMyStudyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyStudyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyStudyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyStudyGameModeBase)


#define MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyStudyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyStudyGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyStudyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyStudyGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyStudyGameModeBase(AMyStudyGameModeBase&&); \
	NO_API AMyStudyGameModeBase(const AMyStudyGameModeBase&); \
public:


#define MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyStudyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyStudyGameModeBase(AMyStudyGameModeBase&&); \
	NO_API AMyStudyGameModeBase(const AMyStudyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyStudyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyStudyGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyStudyGameModeBase)


#define MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AMyStudyGameModeBase, CurrentWidget); } \
	FORCEINLINE static uint32 __PPO__HUDWidget() { return STRUCT_OFFSET(AMyStudyGameModeBase, HUDWidget); }


#define MyStudy_Source_MyStudy_MyStudyGameModeBase_h_14_PROLOG
#define MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_PRIVATE_PROPERTY_OFFSET \
	MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_SPARSE_DATA \
	MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_RPC_WRAPPERS \
	MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_INCLASS \
	MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_PRIVATE_PROPERTY_OFFSET \
	MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_SPARSE_DATA \
	MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
	MyStudy_Source_MyStudy_MyStudyGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSTUDY_API UClass* StaticClass<class AMyStudyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyStudy_Source_MyStudy_MyStudyGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
