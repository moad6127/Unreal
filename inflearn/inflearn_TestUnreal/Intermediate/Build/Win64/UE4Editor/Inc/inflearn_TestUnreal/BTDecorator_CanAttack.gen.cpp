// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_TestUnreal/BTDecorator_CanAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CanAttack() {}
// Cross Module References
	INFLEARN_TESTUNREAL_API UClass* Z_Construct_UClass_UBTDecorator_CanAttack_NoRegister();
	INFLEARN_TESTUNREAL_API UClass* Z_Construct_UClass_UBTDecorator_CanAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_inflearn_TestUnreal();
// End Cross Module References
	void UBTDecorator_CanAttack::StaticRegisterNativesUBTDecorator_CanAttack()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_CanAttack_NoRegister()
	{
		return UBTDecorator_CanAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_CanAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_CanAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_TestUnreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CanAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTDecorator_CanAttack.h" },
		{ "ModuleRelativePath", "BTDecorator_CanAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_CanAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CanAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CanAttack_Statics::ClassParams = {
		&UBTDecorator_CanAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CanAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CanAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_CanAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_CanAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_CanAttack, 1793650859);
	template<> INFLEARN_TESTUNREAL_API UClass* StaticClass<UBTDecorator_CanAttack>()
	{
		return UBTDecorator_CanAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_CanAttack(Z_Construct_UClass_UBTDecorator_CanAttack, &UBTDecorator_CanAttack::StaticClass, TEXT("/Script/inflearn_TestUnreal"), TEXT("UBTDecorator_CanAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CanAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
