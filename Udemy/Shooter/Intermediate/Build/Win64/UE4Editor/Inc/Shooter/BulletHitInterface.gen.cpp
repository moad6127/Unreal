// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/BulletHitInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletHitInterface() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UBulletHitInterface_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UBulletHitInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(IBulletHitInterface::execBulletHit)
	{
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulletHit_Implementation(Z_Param_HitResult);
		P_NATIVE_END;
	}
	void IBulletHitInterface::BulletHit(FHitResult HitResult)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BulletHit instead.");
	}
	void UBulletHitInterface::StaticRegisterNativesUBulletHitInterface()
	{
		UClass* Class = UBulletHitInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BulletHit", &IBulletHitInterface::execBulletHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBulletHitInterface_BulletHit_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBulletHitInterface_BulletHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BulletHitInterface_eventBulletHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBulletHitInterface_BulletHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBulletHitInterface_BulletHit_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBulletHitInterface_BulletHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BulletHitInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBulletHitInterface_BulletHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBulletHitInterface, nullptr, "BulletHit", nullptr, nullptr, sizeof(BulletHitInterface_eventBulletHit_Parms), Z_Construct_UFunction_UBulletHitInterface_BulletHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBulletHitInterface_BulletHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBulletHitInterface_BulletHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBulletHitInterface_BulletHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBulletHitInterface_BulletHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBulletHitInterface_BulletHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBulletHitInterface_NoRegister()
	{
		return UBulletHitInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBulletHitInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBulletHitInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBulletHitInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBulletHitInterface_BulletHit, "BulletHit" }, // 1676440587
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBulletHitInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BulletHitInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBulletHitInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBulletHitInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBulletHitInterface_Statics::ClassParams = {
		&UBulletHitInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBulletHitInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBulletHitInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBulletHitInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBulletHitInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBulletHitInterface, 1299642913);
	template<> SHOOTER_API UClass* StaticClass<UBulletHitInterface>()
	{
		return UBulletHitInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBulletHitInterface(Z_Construct_UClass_UBulletHitInterface, &UBulletHitInterface::StaticClass, TEXT("/Script/Shooter"), TEXT("UBulletHitInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBulletHitInterface);
	static FName NAME_UBulletHitInterface_BulletHit = FName(TEXT("BulletHit"));
	void IBulletHitInterface::Execute_BulletHit(UObject* O, FHitResult HitResult)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBulletHitInterface::StaticClass()));
		BulletHitInterface_eventBulletHit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBulletHitInterface_BulletHit);
		if (Func)
		{
			Parms.HitResult=HitResult;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBulletHitInterface*)(O->GetNativeInterfaceAddress(UBulletHitInterface::StaticClass())))
		{
			I->BulletHit_Implementation(HitResult);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
