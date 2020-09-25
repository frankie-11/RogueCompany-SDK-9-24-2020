#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveStarted
struct UAttackBomb_WeaponComponent_C_OnSkyDiveStarted_Params
{
	class AKSCharacter**                               bpp__SkyDiver__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveSkipped
struct UAttackBomb_WeaponComponent_C_OnSkyDiveSkipped_Params
{
	class AKSCharacter**                               bpp__SkyDiver__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveEnded
struct UAttackBomb_WeaponComponent_C_OnSkyDiveEnded_Params
{
	class AKSCharacter**                               bpp__SkyDiver__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.DoesCharacterHaveBackpack
struct UAttackBomb_WeaponComponent_C_DoesCharacterHaveBackpack_Params
{
	bool                                               bpp__HasBackpack__pf;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.BombStateChange
struct UAttackBomb_WeaponComponent_C_BombStateChange_Params
{
	struct FKSNeutralBombState*                        bpp__BombState__pf;                                       // (Parm)
};

// DelegateFunction AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnNeutralBombStateChanged__DelegateSignature
struct UAttackBomb_WeaponComponent_C_OnNeutralBombStateChanged__DelegateSignature_Params
{
	struct FKSNeutralBombState*                        bpp__BombState__pf;                                       // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
