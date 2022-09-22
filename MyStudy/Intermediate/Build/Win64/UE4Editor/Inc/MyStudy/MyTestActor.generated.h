// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MYSTUDY_MyTestActor_generated_h
#error "MyTestActor.generated.h already included, missing '#pragma once' in MyTestActor.h"
#endif
#define MYSTUDY_MyTestActor_generated_h

#define MyStudy_Source_MyStudy_MyTestActor_h_12_SPARSE_DATA
#define MyStudy_Source_MyStudy_MyTestActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MyStudy_Source_MyStudy_MyTestActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MyStudy_Source_MyStudy_MyTestActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestActor(); \
	friend struct Z_Construct_UClass_AMyTestActor_Statics; \
public: \
	DECLARE_CLASS(AMyTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyTestActor)


#define MyStudy_Source_MyStudy_MyTestActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyTestActor(); \
	friend struct Z_Construct_UClass_AMyTestActor_Statics; \
public: \
	DECLARE_CLASS(AMyTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyTestActor)


#define MyStudy_Source_MyStudy_MyTestActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTestActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestActor(AMyTestActor&&); \
	NO_API AMyTestActor(const AMyTestActor&); \
public:


#define MyStudy_Source_MyStudy_MyTestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestActor(AMyTestActor&&); \
	NO_API AMyTestActor(const AMyTestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTestActor)


#define MyStudy_Source_MyStudy_MyTestActor_h_12_PRIVATE_PROPERTY_OFFSET
#define MyStudy_Source_MyStudy_MyTestActor_h_9_PROLOG
#define MyStudy_Source_MyStudy_MyTestActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyStudy_Source_MyStudy_MyTestActor_h_12_PRIVATE_PROPERTY_OFFSET \
	MyStudy_Source_MyStudy_MyTestActor_h_12_SPARSE_DATA \
	MyStudy_Source_MyStudy_MyTestActor_h_12_RPC_WRAPPERS \
	MyStudy_Source_MyStudy_MyTestActor_h_12_INCLASS \
	MyStudy_Source_MyStudy_MyTestActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyStudy_Source_MyStudy_MyTestActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyStudy_Source_MyStudy_MyTestActor_h_12_PRIVATE_PROPERTY_OFFSET \
	MyStudy_Source_MyStudy_MyTestActor_h_12_SPARSE_DATA \
	MyStudy_Source_MyStudy_MyTestActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyStudy_Source_MyStudy_MyTestActor_h_12_INCLASS_NO_PURE_DECLS \
	MyStudy_Source_MyStudy_MyTestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSTUDY_API UClass* StaticClass<class AMyTestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyStudy_Source_MyStudy_MyTestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
