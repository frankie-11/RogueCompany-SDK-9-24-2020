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

// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.Get Ammo Warning Text
struct UWeaponComponentAmmoWarning_C_Get_Ammo_Warning_Text_Params
{
	struct FText                                       AmmoText;                                                 // (Parm, OutParm)
};

// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.Update Visibility And State
struct UWeaponComponentAmmoWarning_C_Update_Visibility_And_State_Params
{
};

// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PostSetPawn
struct UWeaponComponentAmmoWarning_C_PostSetPawn_Params
{
};

// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PreClearPawn
struct UWeaponComponentAmmoWarning_C_PreClearPawn_Params
{
};

// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PawnHealthChanged
struct UWeaponComponentAmmoWarning_C_PawnHealthChanged_Params
{
	class AKSCharacterBase**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.AmmoStateChanged
struct UWeaponComponentAmmoWarning_C_AmmoStateChanged_Params
{
};

// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PostSetActiveWeaponComponent
struct UWeaponComponentAmmoWarning_C_PostSetActiveWeaponComponent_Params
{
};

// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.ExecuteUbergraph_WeaponComponentAmmoWarning
struct UWeaponComponentAmmoWarning_C_ExecuteUbergraph_WeaponComponentAmmoWarning_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
