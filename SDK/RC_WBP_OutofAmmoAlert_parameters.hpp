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

// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.IsValidWeaponType
struct UWBP_OutOfAmmoAlert_C_IsValidWeaponType_Params
{
	bool                                               IsValidWeaponType;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.HandleAmmoChanged
struct UWBP_OutOfAmmoAlert_C_HandleAmmoChanged_Params
{
	class UKSWeaponComponent**                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.BindToAmmoUpdate
struct UWBP_OutOfAmmoAlert_C_BindToAmmoUpdate_Params
{
};

// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.PostSetActiveWeaponComponent
struct UWBP_OutOfAmmoAlert_C_PostSetActiveWeaponComponent_Params
{
};

// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.PreClearActiveWeaponComponent
struct UWBP_OutOfAmmoAlert_C_PreClearActiveWeaponComponent_Params
{
};

// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.Construct
struct UWBP_OutOfAmmoAlert_C_Construct_Params
{
};

// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.ExecuteUbergraph_WBP_OutOfAmmoAlert
struct UWBP_OutOfAmmoAlert_C_ExecuteUbergraph_WBP_OutOfAmmoAlert_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
