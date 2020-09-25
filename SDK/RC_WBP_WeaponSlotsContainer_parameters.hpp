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

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.FindActiveSlot
struct UWBP_WeaponSlotsContainer_C_FindActiveSlot_Params
{
	class UKSWeaponComponent**                         ActiveWeaponComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.RefreshActiveSlot
struct UWBP_WeaponSlotsContainer_C_RefreshActiveSlot_Params
{
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.HandleInputStop
struct UWBP_WeaponSlotsContainer_C_HandleInputStop_Params
{
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.HandleInputHold
struct UWBP_WeaponSlotsContainer_C_HandleInputHold_Params
{
	float*                                             TotalTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.ResetWeaponSlotsText
struct UWBP_WeaponSlotsContainer_C_ResetWeaponSlotsText_Params
{
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.Construct
struct UWBP_WeaponSlotsContainer_C_Construct_Params
{
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnUpdatedPawnInventorySlot
struct UWBP_WeaponSlotsContainer_C_OnUpdatedPawnInventorySlot_Params
{
	struct FPlayerInventorySlot*                       InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnActivePawnInventorySlot
struct UWBP_WeaponSlotsContainer_C_OnActivePawnInventorySlot_Params
{
	struct FPlayerInventorySlot*                       InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnRemovedPawnInventorySlot
struct UWBP_WeaponSlotsContainer_C_OnRemovedPawnInventorySlot_Params
{
	struct FPlayerInventorySlot*                       InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.InitializeWidget
struct UWBP_WeaponSlotsContainer_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.StartHoldProgress
struct UWBP_WeaponSlotsContainer_C_StartHoldProgress_Params
{
	float*                                             HoldTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.CloseHoldProgress
struct UWBP_WeaponSlotsContainer_C_CloseHoldProgress_Params
{
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.Tick Wheel
struct UWBP_WeaponSlotsContainer_C_Tick_Wheel_Params
{
};

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.ExecuteUbergraph_WBP_WeaponSlotsContainer
struct UWBP_WeaponSlotsContainer_C_ExecuteUbergraph_WBP_WeaponSlotsContainer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
