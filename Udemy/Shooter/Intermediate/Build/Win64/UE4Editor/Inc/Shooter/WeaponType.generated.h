// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_WeaponType_generated_h
#error "WeaponType.generated.h already included, missing '#pragma once' in WeaponType.h"
#endif
#define SHOOTER_WeaponType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_WeaponType_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::EWT_SubmachineGun) \
	op(EWeaponType::EWT_AssaultRifle) \
	op(EWeaponType::EWT_Pistol) 

enum class EWeaponType : uint8;
template<> SHOOTER_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
