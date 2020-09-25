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

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.TriggerLevelUpEvent
struct UWBP_player_level_tracker_C_TriggerLevelUpEvent_Params
{
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetXpProgressPercentageInLevel
struct UWBP_player_level_tracker_C_GetXpProgressPercentageInLevel_Params
{
	float                                              PercentProgress;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                XpNumber;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.SetNewLerpTimeframe
struct UWBP_player_level_tracker_C_SetNewLerpTimeframe_Params
{
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.UpdateLevelDisplay
struct UWBP_player_level_tracker_C_UpdateLevelDisplay_Params
{
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetXPRequiredForLevel
struct UWBP_player_level_tracker_C_GetXPRequiredForLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetNextLevel
struct UWBP_player_level_tracker_C_GetNextLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetCurrentLevel
struct UWBP_player_level_tracker_C_GetCurrentLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.DisplayXpAnimationState
struct UWBP_player_level_tracker_C_DisplayXpAnimationState_Params
{
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.OnLevelUpAnimCompleted
struct UWBP_player_level_tracker_C_OnLevelUpAnimCompleted_Params
{
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.SetPalette
struct UWBP_player_level_tracker_C_SetPalette_Params
{
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.ProcessPlayerProgression
struct UWBP_player_level_tracker_C_ProcessPlayerProgression_Params
{
	struct FPlayerProgression*                         PlayerProgression;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.InitializeWidget
struct UWBP_player_level_tracker_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.Tick
struct UWBP_player_level_tracker_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.PlayProgressionAnim
struct UWBP_player_level_tracker_C_PlayProgressionAnim_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.PreConstruct
struct UWBP_player_level_tracker_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.Construct
struct UWBP_player_level_tracker_C_Construct_Params
{
};

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.ExecuteUbergraph_WBP_player_level_tracker
struct UWBP_player_level_tracker_C_ExecuteUbergraph_WBP_player_level_tracker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
