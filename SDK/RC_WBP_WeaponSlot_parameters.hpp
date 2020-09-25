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

// Function WBP_WeaponSlot.WBP_WeaponSlot_C.ToggleActiveState
struct UWBP_WeaponSlot_C_ToggleActiveState_Params
{
	bool*                                              bIsActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WeaponSlot.WBP_WeaponSlot_C.Construct
struct UWBP_WeaponSlot_C_Construct_Params
{
};

// Function WBP_WeaponSlot.WBP_WeaponSlot_C.HandleSlotRemoved
struct UWBP_WeaponSlot_C_HandleSlotRemoved_Params
{
	class UKSWeaponAsset**                             WeaponAsset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WeaponSlot.WBP_WeaponSlot_C.UpdateSlotDisplay
struct UWBP_WeaponSlot_C_UpdateSlotDisplay_Params
{
	class UKSWeaponAsset**                             WeaponAsset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WeaponSlot.WBP_WeaponSlot_C.ResetSlot
struct UWBP_WeaponSlot_C_ResetSlot_Params
{
};

// Function WBP_WeaponSlot.WBP_WeaponSlot_C.ExecuteUbergraph_WBP_WeaponSlot
struct UWBP_WeaponSlot_C_ExecuteUbergraph_WBP_WeaponSlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
