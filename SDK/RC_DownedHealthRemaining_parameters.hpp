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

// Function DownedHealthRemaining.DownedHealthRemaining_C.Unbind Player State
struct UDownedHealthRemaining_C_Unbind_Player_State_Params
{
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.StatusTextBind
struct UDownedHealthRemaining_C_StatusTextBind_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.OverallColorBind
struct UDownedHealthRemaining_C_OverallColorBind_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.BarPercentBind
struct UDownedHealthRemaining_C_BarPercentBind_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.Handle Give Up Timer Active
struct UDownedHealthRemaining_C_Handle_Give_Up_Timer_Active_Params
{
	bool*                                              bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.Tick
struct UDownedHealthRemaining_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.PreClearPawn
struct UDownedHealthRemaining_C_PreClearPawn_Params
{
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.PostSetPawn
struct UDownedHealthRemaining_C_PostSetPawn_Params
{
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.DownStateChanged
struct UDownedHealthRemaining_C_DownStateChanged_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.FadedOutFinished
struct UDownedHealthRemaining_C_FadedOutFinished_Params
{
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.Construct
struct UDownedHealthRemaining_C_Construct_Params
{
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.InitializeWidget
struct UDownedHealthRemaining_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.Handle Input State Changed
struct UDownedHealthRemaining_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.PostSetPlayerState
struct UDownedHealthRemaining_C_PostSetPlayerState_Params
{
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.PreClearPlayerState
struct UDownedHealthRemaining_C_PreClearPlayerState_Params
{
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.On Character Give Up Allowed
struct UDownedHealthRemaining_C_On_Character_Give_Up_Allowed_Params
{
	bool*                                              Allowed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DownedHealthRemaining.DownedHealthRemaining_C.ExecuteUbergraph_DownedHealthRemaining
struct UDownedHealthRemaining_C_ExecuteUbergraph_DownedHealthRemaining_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
