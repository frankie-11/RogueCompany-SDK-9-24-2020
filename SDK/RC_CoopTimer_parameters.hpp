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

// Function CoopTimer.CoopTimer_C.UpdateMatchPointDisplay
struct UCoopTimer_C_UpdateMatchPointDisplay_Params
{
};

// Function CoopTimer.CoopTimer_C.UpdateTeamCountDisplay
struct UCoopTimer_C_UpdateTeamCountDisplay_Params
{
};

// Function CoopTimer.CoopTimer_C.SetRoundTimerSize
struct UCoopTimer_C_SetRoundTimerSize_Params
{
	int*                                               NewSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopTimer.CoopTimer_C.Construct
struct UCoopTimer_C_Construct_Params
{
};

// Function CoopTimer.CoopTimer_C.HackInProgress
struct UCoopTimer_C_HackInProgress_Params
{
	class AKSExtractionComputer**                      Computer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopTimer.CoopTimer_C.RoundEnd
struct UCoopTimer_C_RoundEnd_Params
{
	class AKSGameState**                               GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRoundResult*                               RoundResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CoopTimer.CoopTimer_C.RoundWarmup
struct UCoopTimer_C_RoundWarmup_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CoopTimer.CoopTimer_C.RoundStart
struct UCoopTimer_C_RoundStart_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CoopTimer.CoopTimer_C.ComputersUnlock
struct UCoopTimer_C_ComputersUnlock_Params
{
};

// Function CoopTimer.CoopTimer_C.Tick
struct UCoopTimer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopTimer.CoopTimer_C.Player Eliminated
struct UCoopTimer_C_Player_Eliminated_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopTimer.CoopTimer_C.OpenRetryGameStateBind
struct UCoopTimer_C_OpenRetryGameStateBind_Params
{
};

// Function CoopTimer.CoopTimer_C.CloseRetryGameStateBind
struct UCoopTimer_C_CloseRetryGameStateBind_Params
{
};

// Function CoopTimer.CoopTimer_C.RetryGameStateBind
struct UCoopTimer_C_RetryGameStateBind_Params
{
};

// Function CoopTimer.CoopTimer_C.OnUIRelevantPlayerStateChanged
struct UCoopTimer_C_OnUIRelevantPlayerStateChanged_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopTimer.CoopTimer_C.OnGameTimerUpdate
struct UCoopTimer_C_OnGameTimerUpdate_Params
{
	float*                                             NewTruncatedSeconds;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopTimer.CoopTimer_C.InitializeTimer
struct UCoopTimer_C_InitializeTimer_Params
{
};

// Function CoopTimer.CoopTimer_C.HandleKillCamEnabled
struct UCoopTimer_C_HandleKillCamEnabled_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopTimer.CoopTimer_C.Unbind OnGameTimerUpdate
struct UCoopTimer_C_Unbind_OnGameTimerUpdate_Params
{
};

// Function CoopTimer.CoopTimer_C.HandleKillCamViewPawn
struct UCoopTimer_C_HandleKillCamViewPawn_Params
{
	class APawn**                                      ViewedPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopTimer.CoopTimer_C.Handle Alarm State Changed
struct UCoopTimer_C_Handle_Alarm_State_Changed_Params
{
	bool*                                              bAlarmState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopTimer.CoopTimer_C.ExecuteUbergraph_CoopTimer
struct UCoopTimer_C_ExecuteUbergraph_CoopTimer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
