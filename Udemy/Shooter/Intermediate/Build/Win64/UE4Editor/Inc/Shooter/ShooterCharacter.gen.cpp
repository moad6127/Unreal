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
	SHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
	{
	}
	UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
	{
		return AShooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomInterSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomInterSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//?\xd1\xbc\xd2\xb8? \xc5\xa5\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?\xd1\xbc\xd2\xb8? \xc5\xa5" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, FireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//?? ???? ?????? \xc8\xad????\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "?? ???? ?????? \xc8\xad????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MuzzleFlash_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ZoomInterSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "//???\xd2\xb6? ?\xd9\xb0????? ?\xd3\xb5?\n" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "???\xd2\xb6? ?\xd9\xb0????? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ZoomInterSpeed = { "ZoomInterSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ZoomInterSpeed), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ZoomInterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ZoomInterSpeed_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MuzzleFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipFireMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ImpactParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BeamParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ZoomInterSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter_Statics::ClassParams = {
		&AShooterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(AShooterCharacter, 3976109806);
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
