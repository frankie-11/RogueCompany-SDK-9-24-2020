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

// Function WBP_DurationBar.WBP_DurationBar_C.SetDurationBar
struct UWBP_DurationBar_C_SetDurationBar_Params
{
	float*                                             DurationTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DurationBar.WBP_DurationBar_C.Construct
struct UWBP_DurationBar_C_Construct_Params
{
};

// Function WBP_DurationBar.WBP_DurationBar_C.Tick
struct UWBP_DurationBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DurationBar.WBP_DurationBar_C.OpenUpdateGate
struct UWBP_DurationBar_C_OpenUpdateGate_Params
{
};

// Function WBP_DurationBar.WBP_DurationBar_C.CloseUpdateGate
struct UWBP_DurationBar_C_CloseUpdateGate_Params
{
};

// Function WBP_DurationBar.WBP_DurationBar_C.HandleModActivated
struct UWBP_DurationBar_C_HandleModActivated_Params
{
	bool*                                              Activated;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DurationBar.WBP_DurationBar_C.UpdateDurationDisplay
struct UWBP_DurationBar_C_UpdateDurationDisplay_Params
{
};

// Function WBP_DurationBar.WBP_DurationBar_C.HideDurationBar
struct UWBP_DurationBar_C_HideDurationBar_Params
{
};

// Function WBP_DurationBar.WBP_DurationBar_C.HandleProjectileFired
struct UWBP_DurationBar_C_HandleProjectileFired_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset**                             WeaponAsset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DurationBar.WBP_DurationBar_C.InitializeWidget
struct UWBP_DurationBar_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DurationBar.WBP_DurationBar_C.ExecuteUbergraph_WBP_DurationBar
struct UWBP_DurationBar_C_ExecuteUbergraph_WBP_DurationBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
