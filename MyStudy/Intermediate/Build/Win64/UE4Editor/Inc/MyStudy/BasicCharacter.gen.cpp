// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyStudy/BasicCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicCharacter() {}
// Cross Module References
	MYSTUDY_API UClass* Z_Construct_UClass_ABasicCharacter_NoRegister();
	MYSTUDY_API UClass* Z_Construct_UClass_ABasicCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyStudy();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void ABasicCharacter::StaticRegisterNativesABasicCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABasicCharacter_NoRegister()
	{
		return ABasicCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABasicCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackCombo_AnimMT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackCombo_AnimMT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastAttack_Anims_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastAttack_Anims;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasicCharacter.h" },
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_AttackCombo_AnimMT_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_AttackCombo_AnimMT = { "AttackCombo_AnimMT", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicCharacter, AttackCombo_AnimMT), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_AttackCombo_AnimMT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_AttackCombo_AnimMT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_LastAttack_Anims_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_LastAttack_Anims = { "LastAttack_Anims", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicCharacter, LastAttack_Anims), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_LastAttack_Anims_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_LastAttack_Anims_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_AttackCombo_AnimMT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_LastAttack_Anims,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicCharacter_Statics::ClassParams = {
		&ABasicCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasicCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicCharacter, 84862807);
	template<> MYSTUDY_API UClass* StaticClass<ABasicCharacter>()
	{
		return ABasicCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicCharacter(Z_Construct_UClass_ABasicCharacter, &ABasicCharacter::StaticClass, TEXT("/Script/MyStudy"), TEXT("ABasicCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
