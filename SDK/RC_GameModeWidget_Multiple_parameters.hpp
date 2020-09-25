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

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Bind Killcam
struct UGameModeWidget_Multiple_C_Bind_Killcam_Params
{
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeHudWidgets
struct UGameModeWidget_Multiple_C_InitializeHudWidgets_Params
{
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeMapWidgets
struct UGameModeWidget_Multiple_C_InitializeMapWidgets_Params
{
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Tick
struct UGameModeWidget_Multiple_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.SetListenersActive
struct UGameModeWidget_Multiple_C_SetListenersActive_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.BndEvt__VehicleOverlay_K2Node_ComponentBoundEvent_0_Vehicle State Changed__DelegateSignature
struct UGameModeWidget_Multiple_C_BndEvt__VehicleOverlay_K2Node_ComponentBoundEvent_0_Vehicle_State_Changed__DelegateSignature_Params
{
	bool*                                              InVehicle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HandleKillCamEnabled
struct UGameModeWidget_Multiple_C_HandleKillCamEnabled_Params
{
	bool*                                              IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ShowHUD
struct UGameModeWidget_Multiple_C_ShowHUD_Params
{
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HideHUD
struct UGameModeWidget_Multiple_C_HideHUD_Params
{
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ToggleTopBarHUD
struct UGameModeWidget_Multiple_C_ToggleTopBarHUD_Params
{
	bool*                                              ShouldShow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ToggleMiniMap
struct UGameModeWidget_Multiple_C_ToggleMiniMap_Params
{
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeWidget
struct UGameModeWidget_Multiple_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Handle Swimming Changed
struct UGameModeWidget_Multiple_C_Handle_Swimming_Changed_Params
{
	bool*                                              IsSwimming;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HandleRoundSetup
struct UGameModeWidget_Multiple_C_HandleRoundSetup_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ExecuteUbergraph_GameModeWidget_Multiple
struct UGameModeWidget_Multiple_C_ExecuteUbergraph_GameModeWidget_Multiple_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
