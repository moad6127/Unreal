// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSTUDY_MyTestCharacter_generated_h
#error "MyTestCharacter.generated.h already included, missing '#pragma once' in MyTestCharacter.h"
#endif
#define MYSTUDY_MyTestCharacter_generated_h

#define MyStudy_Source_MyStudy_MyTestCharacter_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharcterInfo_Statics; \
	MYSTUDY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MYSTUDY_API UScriptStruct* StaticStruct<struct FCharcterInfo>();

#define MyStudy_Source_MyStudy_MyTestCharacter_h_45_SPARSE_DATA
#define MyStudy_Source_MyStudy_MyTestCharacter_h_45_RPC_WRAPPERS
#define MyStudy_Source_MyStudy_MyTestCharacter_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define MyStudy_Source_MyStudy_MyTestCharacter_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestCharacter(); \
	friend struct Z_Construct_UClass_AMyTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyTestCharacter, ABasicCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyTestCharacter)


#define MyStudy_Source_MyStudy_MyTestCharacter_h_45_INCLASS \
private: \
	static void StaticRegisterNativesAMyTestCharacter(); \
	friend struct Z_Construct_UClass_AMyTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyTestCharacter, ABasicCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyTestCharacter)


#define MyStudy_Source_MyStudy_MyTestCharacter_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestCharacter(AMyTestCharacter&&); \
	NO_API AMyTestCharacter(const AMyTestCharacter&); \
public:


#define MyStudy_Source_MyStudy_MyTestCharacter_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestCharacter(AMyTestCharacter&&); \
	NO_API AMyTestCharacter(const AMyTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTestCharacter)


#define MyStudy_Source_MyStudy_MyTestCharacter_h_45_PRIVATE_PROPERTY_OFFSET
#define MyStudy_Source_MyStudy_MyTestCharacter_h_42_PROLOG
#define MyStudy_Source_MyStudy_MyTestCharacter_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyStudy_Source_MyStudy_MyTestCharacter_h_45_PRIVATE_PROPERTY_OFFSET \
	MyStudy_Source_MyStudy_MyTestCharacter_h_45_SPARSE_DATA \
	MyStudy_Source_MyStudy_MyTestCharacter_h_45_RPC_WRAPPERS \
	MyStudy_Source_MyStudy_MyTestCharacter_h_45_INCLASS \
	MyStudy_Source_MyStudy_MyTestCharacter_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyStudy_Source_MyStudy_MyTestCharacter_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyStudy_Source_MyStudy_MyTestCharacter_h_45_PRIVATE_PROPERTY_OFFSET \
	MyStudy_Source_MyStudy_MyTestCharacter_h_45_SPARSE_DATA \
	MyStudy_Source_MyStudy_MyTestCharacter_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	MyStudy_Source_MyStudy_MyTestCharacter_h_45_INCLASS_NO_PURE_DECLS \
	MyStudy_Source_MyStudy_MyTestCharacter_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSTUDY_API UClass* StaticClass<class AMyTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyStudy_Source_MyStudy_MyTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
