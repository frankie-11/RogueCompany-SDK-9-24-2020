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

// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetAmmoInClipDisplaySize
struct UWBP_ActiveWeaponComponent_C_SetAmmoInClipDisplaySize_Params
{
};

// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetClipCount
struct UWBP_ActiveWeaponComponent_C_SetClipCount_Params
{
};

// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.DetermineLowAmmo
struct UWBP_ActiveWeaponComponent_C_DetermineLowAmmo_Params
{
};

// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.OnAmmoChange
struct UWBP_ActiveWeaponComponent_C_OnAmmoChange_Params
{
	class UKSWeaponComponent**                         WeaponComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetReserveAmmo
struct UWBP_ActiveWeaponComponent_C_SetReserveAmmo_Params
{
	int*                                               ReserveAmmo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.PostSetActiveWeaponComponent
struct UWBP_ActiveWeaponComponent_C_PostSetActiveWeaponComponent_Params
{
};

// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.PreClearActiveWeaponComponent
struct UWBP_ActiveWeaponComponent_C_PreClearActiveWeaponComponent_Params
{
};

// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.Construct
struct UWBP_ActiveWeaponComponent_C_Construct_Params
{
};

// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.ExecuteUbergraph_WBP_ActiveWeaponComponent
struct UWBP_ActiveWeaponComponent_C_ExecuteUbergraph_WBP_ActiveWeaponComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
