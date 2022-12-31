// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_AmmoType_generated_h
#error "AmmoType.generated.h already included, missing '#pragma once' in AmmoType.h"
#endif
#define SHOOTER_AmmoType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_AmmoType_h


#define FOREACH_ENUM_EAMMOTYPE(op) \
	op(EAmmoType::EAT_9mm) \
	op(EAmmoType::EAT_AR) 

enum class EAmmoType : uint8;
template<> SHOOTER_API UEnum* StaticEnum<EAmmoType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
