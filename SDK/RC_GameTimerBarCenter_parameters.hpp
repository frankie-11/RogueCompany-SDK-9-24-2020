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

// Function GameTimerBarCenter.GameTimerBarCenter_C.SetContestedState
struct UGameTimerBarCenter_C_SetContestedState_Params
{
	bool*                                              bIsContested;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.PlayScoreAnim
struct UGameTimerBarCenter_C_PlayScoreAnim_Params
{
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.SetCurrentPhase
struct UGameTimerBarCenter_C_SetCurrentPhase_Params
{
	struct FName*                                      PhaseName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.ResetCenterTextStyle
struct UGameTimerBarCenter_C_ResetCenterTextStyle_Params
{
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.ResetCenter
struct UGameTimerBarCenter_C_ResetCenter_Params
{
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.SetRoundTimers
struct UGameTimerBarCenter_C_SetRoundTimers_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.Update Bomb Timer Seconds
struct UGameTimerBarCenter_C_Update_Bomb_Timer_Seconds_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.Reset Bomb Timer
struct UGameTimerBarCenter_C_Reset_Bomb_Timer_Params
{
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.Set Hack Seconds
struct UGameTimerBarCenter_C_Set_Hack_Seconds_Params
{
	float*                                             HackTimeLeft;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.Set Countdown Seconds
struct UGameTimerBarCenter_C_Set_Countdown_Seconds_Params
{
	float*                                             CountdownTimeLeft;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CountdownTimeTotal;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.Set View By Objective State
struct UGameTimerBarCenter_C_Set_View_By_Objective_State_Params
{
	TEnumAsByte<EGameTimerBarCenterState>*             Center_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.PreConstruct
struct UGameTimerBarCenter_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.Tick
struct UGameTimerBarCenter_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.PlayFlipTime
struct UGameTimerBarCenter_C_PlayFlipTime_Params
{
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.SetProgress
struct UGameTimerBarCenter_C_SetProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.SetTeamProgress
struct UGameTimerBarCenter_C_SetTeamProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.Tick Countdown Time
struct UGameTimerBarCenter_C_Tick_Countdown_Time_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.Circle Progress Close
struct UGameTimerBarCenter_C_Circle_Progress_Close_Params
{
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.Circle Progress Open
struct UGameTimerBarCenter_C_Circle_Progress_Open_Params
{
};

// Function GameTimerBarCenter.GameTimerBarCenter_C.ExecuteUbergraph_GameTimerBarCenter
struct UGameTimerBarCenter_C_ExecuteUbergraph_GameTimerBarCenter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
