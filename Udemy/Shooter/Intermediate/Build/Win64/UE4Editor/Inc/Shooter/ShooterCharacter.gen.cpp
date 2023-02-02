// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/ShooterCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacter() {}
// Cross Module References
	SHOOTER_API UFunction* Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UFunction* Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature();
	SHOOTER_API UEnum* Z_Construct_UEnum_Shooter_ECombatState();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FInterpLocation();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AItem_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UEnum* Z_Construct_UEnum_Shooter_EAmmoType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics
	{
		struct _Script_Shooter_eventHighlightIconDelegate_Parms
		{
			int32 SlotIndex;
			bool bStartAnimation;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static void NewProp_bStartAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Shooter_eventHighlightIconDelegate_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::NewProp_bStartAnimation_SetBit(void* Obj)
	{
		((_Script_Shooter_eventHighlightIconDelegate_Parms*)Obj)->bStartAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::NewProp_bStartAnimation = { "bStartAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_Shooter_eventHighlightIconDelegate_Parms), &Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::NewProp_bStartAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::NewProp_bStartAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Shooter, nullptr, "HighlightIconDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Shooter_eventHighlightIconDelegate_Parms), Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics
	{
		struct _Script_Shooter_eventEquipItemDelegate_Parms
		{
			int32 CurrentSlotIndex;
			int32 NewSlotIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentSlotIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics::NewProp_CurrentSlotIndex = { "CurrentSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Shooter_eventEquipItemDelegate_Parms, CurrentSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics::NewProp_NewSlotIndex = { "NewSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Shooter_eventEquipItemDelegate_Parms, NewSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics::NewProp_CurrentSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics::NewProp_NewSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Shooter, nullptr, "EquipItemDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Shooter_eventEquipItemDelegate_Parms), Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ECombatState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Shooter_ECombatState, Z_Construct_UPackage__Script_Shooter(), TEXT("ECombatState"));
		}
		return Singleton;
	}
	template<> SHOOTER_API UEnum* StaticEnum<ECombatState>()
	{
		return ECombatState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECombatState(ECombatState_StaticEnum, TEXT("/Script/Shooter"), TEXT("ECombatState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Shooter_ECombatState_Hash() { return 3018442016U; }
	UEnum* Z_Construct_UEnum_Shooter_ECombatState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Shooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECombatState"), 0, Get_Z_Construct_UEnum_Shooter_ECombatState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECombatState::ECS_Unoccupied", (int64)ECombatState::ECS_Unoccupied },
				{ "ECombatState::ECS_FireTimerInProgress", (int64)ECombatState::ECS_FireTimerInProgress },
				{ "ECombatState::ECS_Reloading", (int64)ECombatState::ECS_Reloading },
				{ "ECombatState::ECS_Equipping", (int64)ECombatState::ECS_Equipping },
				{ "ECombatState::ECS_Stunned", (int64)ECombatState::ECS_Stunned },
				{ "ECombatState::ECS_Die", (int64)ECombatState::ECS_Die },
				{ "ECombatState::ECS_MAX", (int64)ECombatState::ECS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ECS_Die.DisplayName", "Die" },
				{ "ECS_Die.Name", "ECombatState::ECS_Die" },
				{ "ECS_Equipping.DisplayName", "Equipping" },
				{ "ECS_Equipping.Name", "ECombatState::ECS_Equipping" },
				{ "ECS_FireTimerInProgress.DisplayName", "FireTimerInProgress" },
				{ "ECS_FireTimerInProgress.Name", "ECombatState::ECS_FireTimerInProgress" },
				{ "ECS_MAX.DisplayName", "DefaultMAX" },
				{ "ECS_MAX.Name", "ECombatState::ECS_MAX" },
				{ "ECS_Reloading.DisplayName", "Reloading" },
				{ "ECS_Reloading.Name", "ECombatState::ECS_Reloading" },
				{ "ECS_Stunned.DisplayName", "Stunned" },
				{ "ECS_Stunned.Name", "ECombatState::ECS_Stunned" },
				{ "ECS_Unoccupied.DisplayName", "Unoccupied" },
				{ "ECS_Unoccupied.Name", "ECombatState::ECS_Unoccupied" },
				{ "ModuleRelativePath", "ShooterCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Shooter,
				nullptr,
				"ECombatState",
				"ECombatState",
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
class UScriptStruct* FInterpLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FInterpLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpLocation, Z_Construct_UPackage__Script_Shooter(), TEXT("InterpLocation"), sizeof(FInterpLocation), Get_Z_Construct_UScriptStruct_FInterpLocation_Hash());
	}
	return Singleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FInterpLocation>()
{
	return FInterpLocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterpLocation(FInterpLocation::StaticStruct, TEXT("/Script/Shooter"), TEXT("InterpLocation"), false, nullptr, nullptr);
static struct FScriptStruct_Shooter_StaticRegisterNativesFInterpLocation
{
	FScriptStruct_Shooter_StaticRegisterNativesFInterpLocation()
	{
		UScriptStruct::DeferCppStructOps<FInterpLocation>(FName(TEXT("InterpLocation")));
	}
} ScriptStruct_Shooter_StaticRegisterNativesFInterpLocation;
	struct Z_Construct_UScriptStruct_FInterpLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterpLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpLocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLocation_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "InterpLocation" },
		{ "Comment", "//ScecnComponent to use for its location for interping\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "ScecnComponent to use for its location for interping" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInterpLocation_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpLocation, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLocation_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLocation_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLocation_Statics::NewProp_ItemCount_MetaData[] = {
		{ "Category", "InterpLocation" },
		{ "Comment", "//Number of items interping to/at this scene comp location\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Number of items interping to/at this scene comp location" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInterpLocation_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpLocation, ItemCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLocation_Statics::NewProp_ItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLocation_Statics::NewProp_ItemCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLocation_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLocation_Statics::NewProp_ItemCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
		nullptr,
		&NewStructOps,
		"InterpLocation",
		sizeof(FInterpLocation),
		alignof(FInterpLocation),
		Z_Construct_UScriptStruct_FInterpLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterpLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterpLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Shooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InterpLocation"), sizeof(FInterpLocation), Get_Z_Construct_UScriptStruct_FInterpLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInterpLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterpLocation_Hash() { return 4190114197U; }
	DEFINE_FUNCTION(AShooterCharacter::execGetCrosshairSpreadMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCrosshairSpreadMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execFinishEquipping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishEquipping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execFinishReloading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishReloading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execStartVerticalRecoil)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartVerticalRecoil(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execStartHorizontalRecoil)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartHorizontalRecoil(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execFinishDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execEndStun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndStun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGetSurfaceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPhysicalSurface>*)Z_Param__Result=P_THIS->GetSurfaceType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execReleaseClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseClip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGrabClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabClip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execAutoFireReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoFireReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execFinishCrosshairBulletFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishCrosshairBulletFire();
		P_NATIVE_END;
	}
	void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
	{
		UClass* Class = AShooterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoFireReset", &AShooterCharacter::execAutoFireReset },
			{ "EndStun", &AShooterCharacter::execEndStun },
			{ "FinishCrosshairBulletFire", &AShooterCharacter::execFinishCrosshairBulletFire },
			{ "FinishDeath", &AShooterCharacter::execFinishDeath },
			{ "FinishEquipping", &AShooterCharacter::execFinishEquipping },
			{ "FinishReloading", &AShooterCharacter::execFinishReloading },
			{ "GetCrosshairSpreadMultiplier", &AShooterCharacter::execGetCrosshairSpreadMultiplier },
			{ "GetSurfaceType", &AShooterCharacter::execGetSurfaceType },
			{ "GrabClip", &AShooterCharacter::execGrabClip },
			{ "ReleaseClip", &AShooterCharacter::execReleaseClip },
			{ "StartHorizontalRecoil", &AShooterCharacter::execStartHorizontalRecoil },
			{ "StartVerticalRecoil", &AShooterCharacter::execStartVerticalRecoil },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterCharacter_AutoFireReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_AutoFireReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_AutoFireReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "AutoFireReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_AutoFireReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_AutoFireReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_AutoFireReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_AutoFireReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_EndStun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_EndStun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_EndStun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "EndStun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_EndStun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_EndStun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_EndStun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_EndStun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "FinishCrosshairBulletFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_FinishDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_FinishDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_FinishDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "FinishDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_FinishDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_FinishDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_FinishDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_FinishDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_FinishEquipping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_FinishEquipping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_FinishEquipping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "FinishEquipping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_FinishEquipping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_FinishEquipping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_FinishEquipping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_FinishEquipping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_FinishReloading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_FinishReloading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_FinishReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "FinishReloading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_FinishReloading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_FinishReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_FinishReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_FinishReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier_Statics
	{
		struct ShooterCharacter_eventGetCrosshairSpreadMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetCrosshairSpreadMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetCrosshairSpreadMultiplier", nullptr, nullptr, sizeof(ShooterCharacter_eventGetCrosshairSpreadMultiplier_Parms), Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetSurfaceType_Statics
	{
		struct ShooterCharacter_eventGetSurfaceType_Parms
		{
			TEnumAsByte<EPhysicalSurface> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AShooterCharacter_GetSurfaceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetSurfaceType_Parms, ReturnValue), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetSurfaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetSurfaceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetSurfaceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetSurfaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetSurfaceType", nullptr, nullptr, sizeof(ShooterCharacter_eventGetSurfaceType_Parms), Z_Construct_UFunction_AShooterCharacter_GetSurfaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetSurfaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetSurfaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetSurfaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetSurfaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetSurfaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GrabClip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GrabClip_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called from Animation Blueprint with Grab Clip notify\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Called from Animation Blueprint with Grab Clip notify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GrabClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GrabClip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GrabClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GrabClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GrabClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GrabClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_ReleaseClip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_ReleaseClip_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called fromt Animation Blueprint with Release Clip notify\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Called fromt Animation Blueprint with Release Clip notify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_ReleaseClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "ReleaseClip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_ReleaseClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_ReleaseClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_ReleaseClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_ReleaseClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil_Statics
	{
		struct ShooterCharacter_eventStartHorizontalRecoil_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventStartHorizontalRecoil_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "StartHorizontalRecoil", nullptr, nullptr, sizeof(ShooterCharacter_eventStartHorizontalRecoil_Parms), Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil_Statics
	{
		struct ShooterCharacter_eventStartVerticalRecoil_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventStartVerticalRecoil_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "StartVerticalRecoil", nullptr, nullptr, sizeof(ShooterCharacter_eventStartVerticalRecoil_Parms), Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
	{
		return AShooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HipTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HipLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseHipTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseHipTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseHipLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseHipLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseAimingTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseAimingTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseAimingLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseAimingLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipFireMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HipFireMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeamParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeamParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[];
#endif
		static void NewProp_bAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDefaultFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraDefaultFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraZoomedFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraZoomedFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomInterSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomInterSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairSpreadMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairSpreadMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairVelocityFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairVelocityFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairInAirFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairInAirFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairAimFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairAimFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairShootingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairShootingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceHitItemLastFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceHitItemLastFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultWeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceHitItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceHitItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraInterpDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraInterpDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraInterpElevtion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraInterpElevtion;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AmmoMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Starting9mmAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Starting9mmAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingARAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartingARAmmo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CombatState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CombatState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClipTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCrouching_MetaData[];
#endif
		static void NewProp_bCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchMovemnetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchMovemnetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_standingCapsuleHlfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_standingCapsuleHlfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchingCapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchingCapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseGroundFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseGroundFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchGrouundFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchGrouundFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInterpComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponInterpComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterComp2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterComp2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterComp3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterComp3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterComp4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterComp4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterComp5_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterComp5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterComp6_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterComp6;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpLocation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupSoundResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PickupSoundResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipSoundResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquipSoundResetTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipItemDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EquipItemDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightIconDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HighlightIconDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightedSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HighlightedSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeImpactSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeImpactSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitReactMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitReactMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StunChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChangeView_MetaData[];
#endif
		static void NewProp_bChangeView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChangeView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSFollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSFollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSMeshComponen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSMeshComponen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringCameraShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FiringCameraShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VerticalCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorizontalCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckGunMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckGunMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFPSAiming_MetaData[];
#endif
		static void NewProp_bFPSAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFPSAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSAimingCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSAimingCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterCharacter_AutoFireReset, "AutoFireReset" }, // 1453503891
		{ &Z_Construct_UFunction_AShooterCharacter_EndStun, "EndStun" }, // 889669114
		{ &Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire, "FinishCrosshairBulletFire" }, // 4128212246
		{ &Z_Construct_UFunction_AShooterCharacter_FinishDeath, "FinishDeath" }, // 556881444
		{ &Z_Construct_UFunction_AShooterCharacter_FinishEquipping, "FinishEquipping" }, // 2463802825
		{ &Z_Construct_UFunction_AShooterCharacter_FinishReloading, "FinishReloading" }, // 712437738
		{ &Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMultiplier, "GetCrosshairSpreadMultiplier" }, // 1013151514
		{ &Z_Construct_UFunction_AShooterCharacter_GetSurfaceType, "GetSurfaceType" }, // 2218513356
		{ &Z_Construct_UFunction_AShooterCharacter_GrabClip, "GrabClip" }, // 1307519431
		{ &Z_Construct_UFunction_AShooterCharacter_ReleaseClip, "ReleaseClip" }, // 337692770
		{ &Z_Construct_UFunction_AShooterCharacter_StartHorizontalRecoil, "StartHorizontalRecoil" }, // 3371125784
		{ &Z_Construct_UFunction_AShooterCharacter_StartVerticalRecoil, "StartVerticalRecoil" }, // 770646564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterCharacter.h" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/* Camera boom positioning the behind the character*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Camera boom positioning the behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/*\xc4\xb3???\xcd\xb8? ?????\xd9\xb4\xcf\xb4? \xc4\xab?\xde\xb6?*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "\xc4\xb3???\xcd\xb8? ?????\xd9\xb4\xcf\xb4? \xc4\xab?\xde\xb6?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// ?\xe2\xba\xbb \xc8\xb8???? \n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?\xe2\xba\xbb \xc8\xb8????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "//???????? ?????? \xc8\xb8????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "???????? ?????? \xc8\xb8????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipTurnRate = { "HipTurnRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, HipTurnRate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "//??????????????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipLookUpRate = { "HipLookUpRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, HipLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "//?????\xd2\xb6?\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?????\xd2\xb6?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingTurnRate = { "AimingTurnRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, AimingTurnRate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "//?????\xd2\xb6?\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?????\xd2\xb6?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingLookUpRate = { "AimingLookUpRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, AimingLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//???????? ?????? ???\xec\xbd\xba?? ????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "???????? ?????? ???\xec\xbd\xba?? ????" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipTurnRate = { "MouseHipTurnRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MouseHipTurnRate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//???????? ?????? ???\xec\xbd\xba?? ????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "???????? ?????? ???\xec\xbd\xba?? ????" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipLookUpRate = { "MouseHipLookUpRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MouseHipLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//?????\xd2\xb6? ???\xec\xbd\xba?? ????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?????\xd2\xb6? ???\xec\xbd\xba?? ????" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingTurnRate = { "MouseAimingTurnRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MouseAimingTurnRate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//?????\xd2\xb6? ???\xec\xbd\xba?? ????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?????\xd2\xb6? ???\xec\xbd\xba?? ????" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingLookUpRate = { "MouseAimingLookUpRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MouseAimingLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipFireMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//???? ?\xdf\xbb? ?\xd6\xb4\xcf\xb8??\xcc\xbc? ??\xc5\xb8??\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "???? ?\xdf\xbb? ?\xd6\xb4\xcf\xb8??\xcc\xbc? ??\xc5\xb8??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipFireMontage = { "HipFireMontage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, HipFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipFireMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//?\xd1\xbe? ?\xe6\xb5\xb9?? ?????\xc7\xb4? ????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?\xd1\xbe? ?\xe6\xb5\xb9?? ?????\xc7\xb4? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ImpactParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ImpactParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BeamParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//?\xd1\xbe??? ???? ????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?\xd1\xbe??? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BeamParticles = { "BeamParticles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BeamParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BeamParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BeamParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//???\xd3\xb9?\xc6\xb0?? ?????\xc2\xb0??\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "???\xd3\xb9?\xc6\xb0?? ?????\xc2\xb0??" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bAiming_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraDefaultFOV_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "//?\xe2\xba\xbb \xc4\xab?\xde\xb6? ?\xc3\xbe\xdf\xb0?\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?\xe2\xba\xbb \xc4\xab?\xde\xb6? ?\xc3\xbe\xdf\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraDefaultFOV = { "CameraDefaultFOV", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CameraDefaultFOV), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraDefaultFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraDefaultFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraZoomedFOV_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "//???????? \xc4\xab?\xde\xb6? ?\xc3\xbe\xdf\xb0?\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "???????? \xc4\xab?\xde\xb6? ?\xc3\xbe\xdf\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraZoomedFOV = { "CameraZoomedFOV", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CameraZoomedFOV), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraZoomedFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraZoomedFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ZoomInterSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//???\xd2\xb6? ?\xd9\xb0????? ?\xd3\xb5?\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "???\xd2\xb6? ?\xd9\xb0????? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ZoomInterSpeed = { "ZoomInterSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ZoomInterSpeed), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ZoomInterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ZoomInterSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairSpreadMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "//???\xda\xb0??? ????????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "???\xda\xb0??? ????????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairSpreadMultiplier = { "CrosshairSpreadMultiplier", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CrosshairSpreadMultiplier), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairSpreadMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairSpreadMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairVelocityFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "//???\xda\xb0??? ?????? ?????? ??\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "???\xda\xb0??? ?????? ?????? ??" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairVelocityFactor = { "CrosshairVelocityFactor", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CrosshairVelocityFactor), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairVelocityFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairVelocityFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairInAirFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "//???\xdf\xbf??? ???\xda\xb0??? ?????? ????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "???\xdf\xbf??? ???\xda\xb0??? ?????? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairInAirFactor = { "CrosshairInAirFactor", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CrosshairInAirFactor), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairInAirFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairInAirFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairAimFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "//?????????? ???\xda\xb0??? ????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?????????? ???\xda\xb0??? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairAimFactor = { "CrosshairAimFactor", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CrosshairAimFactor), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairAimFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairAimFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairShootingFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "//?????? ???\xda\xb0??? ???? ????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?????? ???\xda\xb0??? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairShootingFactor = { "CrosshairShootingFactor", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CrosshairShootingFactor), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairShootingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairShootingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TraceHitItemLastFrame_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "Comment", "//?????? ?????\xd3\xbf??? ???? ??????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?????? ?????\xd3\xbf??? ???? ??????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TraceHitItemLastFrame = { "TraceHitItemLastFrame", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, TraceHitItemLastFrame), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TraceHitItemLastFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TraceHitItemLastFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//???? ?????? ????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefaultWeaponClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//????????\xc6\xae?? ?\xcc\xb0??? ?\xe2\xba\xbb ?????? ????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "????????\xc6\xae?? ?\xcc\xb0??? ?\xe2\xba\xbb ?????? ????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefaultWeaponClass = { "DefaultWeaponClass", nullptr, (EPropertyFlags)0x0044000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, DefaultWeaponClass), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefaultWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefaultWeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TraceHitItem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//???????? ??????(colud be null)\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "???????? ??????(colud be null)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TraceHitItem = { "TraceHitItem", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, TraceHitItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TraceHitItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TraceHitItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "Comment", "//Distance outward from the camera for the interp distination\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Distance outward from the camera for the interp distination" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpDistance = { "CameraInterpDistance", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CameraInterpDistance), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpElevtion_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "Comment", "// Distance upward from the camera for the interp distination\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Distance upward from the camera for the interp distination" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpElevtion = { "CameraInterpElevtion", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CameraInterpElevtion), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpElevtion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpElevtion_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_ValueProp = { "AmmoMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_Key_KeyProp = { "AmmoMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Shooter_EAmmoType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "Comment", "//Map to keep track of ammo of the different ammo type \n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Map to keep track of ammo of the different ammo type" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap = { "AmmoMap", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, AmmoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Starting9mmAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "Comment", "//Starting amount of 9mm ammo\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Starting amount of 9mm ammo" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Starting9mmAmmo = { "Starting9mmAmmo", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, Starting9mmAmmo), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Starting9mmAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Starting9mmAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StartingARAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "Comment", "//Starting amount of AR ammo\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Starting amount of AR ammo" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StartingARAmmo = { "StartingARAmmo", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, StartingARAmmo), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StartingARAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StartingARAmmo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CombatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CombatState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//CombatState, can only fire or reload if Unoccupied\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "CombatState, can only fire or reload if Unoccupied" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CombatState = { "CombatState", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CombatState), Z_Construct_UEnum_Shooter_ECombatState, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CombatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CombatState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//Montage for reload animation\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Montage for reload animation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipMontage = { "EquipMontage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, EquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ClipTransform_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//Transeform fo the clip when we first grab the clip during reloading\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Transeform fo the clip when we first grab the clip during reloading" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ClipTransform = { "ClipTransform", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ClipTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ClipTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ClipTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HandSceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//Scene component to attach to the Character's hand during reloading\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Scene component to attach to the Character's hand during reloading" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HandSceneComponent = { "HandSceneComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, HandSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HandSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HandSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCrouching_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "//true when crouching\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "true when crouching" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCrouching_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCrouching = { "bCrouching", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseMovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "//Regular movement speed\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Regular movement speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseMovementSpeed = { "BaseMovementSpeed", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BaseMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchMovemnetSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "//Croch movemet speed\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Croch movemet speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchMovemnetSpeed = { "CrouchMovemnetSpeed", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CrouchMovemnetSpeed), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchMovemnetSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchMovemnetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_standingCapsuleHlfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "//Half heigh of the Capsule when not crouching\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Half heigh of the Capsule when not crouching" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_standingCapsuleHlfHeight = { "standingCapsuleHlfHeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, standingCapsuleHlfHeight), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_standingCapsuleHlfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_standingCapsuleHlfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchingCapsuleHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "//Half height of the Capsule when crouching\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Half height of the Capsule when crouching" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchingCapsuleHalfHeight = { "CrouchingCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CrouchingCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchingCapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchingCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseGroundFriction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "//Ground friction while not crouching\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Ground friction while not crouching" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseGroundFriction = { "BaseGroundFriction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BaseGroundFriction), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseGroundFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseGroundFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchGrouundFriction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "//Ground friction while crouching\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Ground friction while crouching" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchGrouundFriction = { "CrouchGrouundFriction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CrouchGrouundFriction), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchGrouundFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchGrouundFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInterpComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShooterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInterpComp = { "WeaponInterpComp", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, WeaponInterpComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInterpComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInterpComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShooterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp = { "InterComp", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, InterComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShooterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp2 = { "InterComp2", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, InterComp2), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp3_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShooterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp3 = { "InterComp3", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, InterComp3), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp4_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShooterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp4 = { "InterComp4", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, InterComp4), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp5_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShooterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp5 = { "InterComp5", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, InterComp5), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp6_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShooterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp6 = { "InterComp6", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, InterComp6), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp6_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterpLocation_Inner = { "InterpLocation", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInterpLocation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterpLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShooterCharacter" },
		{ "Comment", "//Array of interp location struct\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Array of interp location struct" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterpLocation = { "InterpLocation", nullptr, (EPropertyFlags)0x0040008000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, InterpLocation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterpLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterpLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PickupSoundResetTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "Comment", "//Time to wait before we can play another PickupSound\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Time to wait before we can play another PickupSound" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PickupSoundResetTime = { "PickupSoundResetTime", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, PickupSoundResetTime), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PickupSoundResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PickupSoundResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipSoundResetTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "Comment", "//Time to wait before we can play another EquipSound\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Time to wait before we can play another EquipSound" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipSoundResetTime = { "EquipSoundResetTime", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, EquipSoundResetTime), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipSoundResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipSoundResetTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "Comment", "//Array of AItme for our Inventory\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Array of AItme for our Inventory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipItemDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Delegate" },
		{ "Comment", "//Delegate for sending slot information to InventoryBar when equipping\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Delegate for sending slot information to InventoryBar when equipping" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipItemDelegate = { "EquipItemDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, EquipItemDelegate), Z_Construct_UDelegateFunction_Shooter_EquipItemDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipItemDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipItemDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HighlightIconDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Delegate" },
		{ "Comment", "//Delegate for sending slot information for playing the icon animation\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Delegate for sending slot information for playing the icon animation" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HighlightIconDelegate = { "HighlightIconDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, HighlightIconDelegate), Z_Construct_UDelegateFunction_Shooter_HighlightIconDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HighlightIconDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HighlightIconDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HighlightedSlot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "Comment", "//the index for the currently highlighted slot\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "the index for the currently highlighted slot" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HighlightedSlot = { "HighlightedSlot", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, HighlightedSlot), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HighlightedSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HighlightedSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//Character Health\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Character Health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//Character MaxHealth\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Character MaxHealth" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MeleeImpactSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//Sound made when Character gets hit by a melee attack\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Sound made when Character gets hit by a melee attack" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MeleeImpactSound = { "MeleeImpactSound", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MeleeImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MeleeImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MeleeImpactSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//Blood splatter particles for melee hit\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Blood splatter particles for melee hit" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodParticles = { "BloodParticles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BloodParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HitReactMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//Hit react anim montage when character is stunned\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Hit react anim montage when character is stunned" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HitReactMontage = { "HitReactMontage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, HitReactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HitReactMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HitReactMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StunChance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//Chance of being stunned when hit by an enemy\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Chance of being stunned when hit by an enemy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StunChance = { "StunChance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, StunChance), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StunChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StunChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bChangeView_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//??\xc4\xaa ???\xe6\xba\xaf???? Top\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "??\xc4\xaa ???\xe6\xba\xaf???? Top" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bChangeView_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bChangeView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bChangeView = { "bChangeView", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bChangeView_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bChangeView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bChangeView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSFollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSFollowCamera = { "FPSFollowCamera", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, FPSFollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSFollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSFollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSMeshComponen_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSMeshComponen = { "FPSMeshComponen", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, FPSMeshComponen), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSMeshComponen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSMeshComponen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DeathMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//Montage for character Death\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Montage for character Death" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DeathMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DeathMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FiringCameraShakeClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FiringCameraShakeClass = { "FiringCameraShakeClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, FiringCameraShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FiringCameraShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FiringCameraShakeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_VerticalCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_VerticalCurve = { "VerticalCurve", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, VerticalCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_VerticalCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_VerticalCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HorizontalCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HorizontalCurve = { "HorizontalCurve", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, HorizontalCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HorizontalCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HorizontalCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CheckGunMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "//?\xdd\xb5? ???? ??????Bottom\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?\xdd\xb5? ???? ??????Bottom" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CheckGunMesh = { "CheckGunMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CheckGunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CheckGunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CheckGunMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFPSAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFPSAiming_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bFPSAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFPSAiming = { "bFPSAiming", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFPSAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFPSAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFPSAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSAimingCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSAimingCamera = { "FPSAimingCamera", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, FPSAimingCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSAimingCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSAimingCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipFireMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ImpactParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BeamParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraDefaultFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraZoomedFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ZoomInterSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairSpreadMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairVelocityFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairInAirFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairAimFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairShootingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TraceHitItemLastFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquippedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefaultWeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TraceHitItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpElevtion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Starting9mmAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StartingARAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CombatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CombatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ClipTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HandSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchMovemnetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_standingCapsuleHlfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchingCapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseGroundFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchGrouundFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInterpComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterComp6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterpLocation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InterpLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PickupSoundResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipSoundResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquipItemDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HighlightIconDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HighlightedSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MeleeImpactSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HitReactMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StunChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bChangeView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSFollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSMeshComponen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DeathMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FiringCameraShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_VerticalCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HorizontalCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CheckGunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFPSAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FPSAimingCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter_Statics::ClassParams = {
		&AShooterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterCharacter, 3238788392);
	template<> SHOOTER_API UClass* StaticClass<AShooterCharacter>()
	{
		return AShooterCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterCharacter(Z_Construct_UClass_AShooterCharacter, &AShooterCharacter::StaticClass, TEXT("/Script/Shooter"), TEXT("AShooterCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
