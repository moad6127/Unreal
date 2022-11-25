// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/AmmoType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoType() {}
// Cross Module References
	SHOOTER_API UEnum* Z_Construct_UEnum_Shooter_EAmmoType();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	static UEnum* EAmmoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Shooter_EAmmoType, Z_Construct_UPackage__Script_Shooter(), TEXT("EAmmoType"));
		}
		return Singleton;
	}
	template<> SHOOTER_API UEnum* StaticEnum<EAmmoType>()
	{
		return EAmmoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAmmoType(EAmmoType_StaticEnum, TEXT("/Script/Shooter"), TEXT("EAmmoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Shooter_EAmmoType_Hash() { return 1973855553U; }
	UEnum* Z_Construct_UEnum_Shooter_EAmmoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Shooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAmmoType"), 0, Get_Z_Construct_UEnum_Shooter_EAmmoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAmmoType::EAT_9mm", (int64)EAmmoType::EAT_9mm },
				{ "EAmmoType::EAT_AR", (int64)EAmmoType::EAT_AR },
				{ "EAmmoType::EAT_MAX", (int64)EAmmoType::EAT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EAT_9mm.DisplayName", "9mm" },
				{ "EAT_9mm.Name", "EAmmoType::EAT_9mm" },
				{ "EAT_AR.DisplayName", "Assault Rifle" },
				{ "EAT_AR.Name", "EAmmoType::EAT_AR" },
				{ "EAT_MAX.DisplayName", "DefaultMAX" },
				{ "EAT_MAX.Name", "EAmmoType::EAT_MAX" },
				{ "ModuleRelativePath", "AmmoType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Shooter,
				nullptr,
				"EAmmoType",
				"EAmmoType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
