// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponDataTable();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SHOOTER_API UEnum* Z_Construct_UEnum_Shooter_EAmmoType();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AWeapon();
	SHOOTER_API UClass* Z_Construct_UClass_AItem();
	SHOOTER_API UEnum* Z_Construct_UEnum_Shooter_EWeaponType();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FWeaponDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeaponDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FWeaponDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FWeaponDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponDataTable, Z_Construct_UPackage__Script_Shooter(), TEXT("WeaponDataTable"), sizeof(FWeaponDataTable), Get_Z_Construct_UScriptStruct_FWeaponDataTable_Hash());
	}
	return Singleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FWeaponDataTable>()
{
	return FWeaponDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponDataTable(FWeaponDataTable::StaticStruct, TEXT("/Script/Shooter"), TEXT("WeaponDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_Shooter_StaticRegisterNativesFWeaponDataTable
{
	FScriptStruct_Shooter_StaticRegisterNativesFWeaponDataTable()
	{
		UScriptStruct::DeferCppStructOps<FWeaponDataTable>(FName(TEXT("WeaponDataTable")));
	}
} ScriptStruct_Shooter_StaticRegisterNativesFWeaponDataTable;
	struct Z_Construct_UScriptStruct_FWeaponDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazingCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MagazingCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClipBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadMontageSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReloadMontageSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsMiddle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairsMiddle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairsLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairsRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsBottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairsBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairsTop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponDataTable>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AmmoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AmmoType_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AmmoType = { "AmmoType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, AmmoType), Z_Construct_UEnum_Shooter_EAmmoType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AmmoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AmmoType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_WeaponAmmo_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_WeaponAmmo = { "WeaponAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, WeaponAmmo), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_WeaponAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_WeaponAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MagazingCapacity_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MagazingCapacity = { "MagazingCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, MagazingCapacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MagazingCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MagazingCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_PickupSound_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, PickupSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_PickupSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_PickupSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_EquipSound_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_EquipSound = { "EquipSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, EquipSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_EquipSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_EquipSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, ItemMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ItemMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_InventoryIcon_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_InventoryIcon = { "InventoryIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, InventoryIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_InventoryIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_InventoryIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AmmoIcon_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AmmoIcon = { "AmmoIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, AmmoIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AmmoIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AmmoIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, MaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ClipBoneName_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ClipBoneName = { "ClipBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, ClipBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ClipBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ClipBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ReloadMontageSection_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ReloadMontageSection = { "ReloadMontageSection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, ReloadMontageSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ReloadMontageSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ReloadMontageSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AnimBP_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AnimBP = { "AnimBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, AnimBP), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AnimBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AnimBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsMiddle_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsMiddle = { "CrosshairsMiddle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, CrosshairsMiddle), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsMiddle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsMiddle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsLeft_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsLeft = { "CrosshairsLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, CrosshairsLeft), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsRight_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsRight = { "CrosshairsRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, CrosshairsRight), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsBottom_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsBottom = { "CrosshairsBottom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, CrosshairsBottom), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsTop_MetaData[] = {
		{ "Category", "WeaponDataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsTop = { "CrosshairsTop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataTable, CrosshairsTop), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsTop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AmmoType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AmmoType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_WeaponAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MagazingCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_PickupSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_EquipSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ItemMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_InventoryIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AmmoIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_MaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ClipBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_ReloadMontageSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_AnimBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsMiddle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataTable_Statics::NewProp_CrosshairsTop,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WeaponDataTable",
		sizeof(FWeaponDataTable),
		alignof(FWeaponDataTable),
		Z_Construct_UScriptStruct_FWeaponDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Shooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponDataTable"), sizeof(FWeaponDataTable), Get_Z_Construct_UScriptStruct_FWeaponDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponDataTable_Hash() { return 1290821786U; }
	void AWeapon::StaticRegisterNativesAWeapon()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ammo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MagazineCapacity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadMontageSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReloadMontageSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMovingClip_MetaData[];
#endif
		static void NewProp_bMovingClip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMovingClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClipBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsMiddle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairsMiddle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairsLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairsRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsBottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairsBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairsTop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon.h" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WeaponProperties" },
		{ "Comment", "//Ammo count for this weapon\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Ammo count for this weapon" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Ammo), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MagazineCapacity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WeaponProperties" },
		{ "Comment", "//Maximum ammo that our weapon can hold\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Maximum ammo that our weapon can hold" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MagazineCapacity = { "MagazineCapacity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MagazineCapacity), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MagazineCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MagazineCapacity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WeaponProperties" },
		{ "Comment", "//the type of weapon\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "the type of weapon" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, WeaponType), Z_Construct_UEnum_Shooter_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WeaponProperties" },
		{ "Comment", "//the type of Ammo for this weapon;\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "the type of Ammo for this weapon;" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoType = { "AmmoType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, AmmoType), Z_Construct_UEnum_Shooter_EAmmoType, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadMontageSection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WeaponProperties" },
		{ "Comment", "//?????? ??\xc5\xb8?\xd6\xb8? ???\xd8\xbc? FName???? ?????? ??????\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "?????? ??\xc5\xb8?\xd6\xb8? ???\xd8\xbc? FName???? ?????? ??????" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadMontageSection = { "ReloadMontageSection", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, ReloadMontageSection), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadMontageSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadMontageSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_bMovingClip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WeaponProperties" },
		{ "Comment", "//True when moving the Clip while reloading\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "True when moving the Clip while reloading" },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_bMovingClip_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->bMovingClip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bMovingClip = { "bMovingClip", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bMovingClip_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_bMovingClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_bMovingClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_ClipBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WeaponProperties" },
		{ "Comment", "//Name for the clip bone\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Name for the clip bone" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ClipBoneName = { "ClipBoneName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, ClipBoneName), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_ClipBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_ClipBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DataTable" },
		{ "Comment", "//DataTable for weapon properties\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "DataTable for weapon properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponDataTable = { "WeaponDataTable", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, WeaponDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsMiddle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DataTable" },
		{ "Comment", "// Texture for the weapon crosshair\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Texture for the weapon crosshair" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsMiddle = { "CrosshairsMiddle", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, CrosshairsMiddle), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsMiddle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsMiddle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsLeft = { "CrosshairsLeft", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, CrosshairsLeft), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsRight = { "CrosshairsRight", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, CrosshairsRight), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsBottom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsBottom = { "CrosshairsBottom", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, CrosshairsBottom), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsTop_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsTop = { "CrosshairsTop", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, CrosshairsTop), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsTop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MagazineCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadMontageSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bMovingClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ClipBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsMiddle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsTop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon, 2135945877);
	template<> SHOOTER_API UClass* StaticClass<AWeapon>()
	{
		return AWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon(Z_Construct_UClass_AWeapon, &AWeapon::StaticClass, TEXT("/Script/Shooter"), TEXT("AWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
