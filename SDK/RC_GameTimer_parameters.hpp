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

// Function GameTimer.GameTimer_C.ShouldPlayCountdownSound
struct UGameTimer_C_ShouldPlayCountdownSound_Params
{
	bool                                               ShouldPlay;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimer.GameTimer_C.PlayFinalCountdownSound
struct UGameTimer_C_PlayFinalCountdownSound_Params
{
};

// Function GameTimer.GameTimer_C.DebugIssues
struct UGameTimer_C_DebugIssues_Params
{
	struct FString*                                    Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameTimer.GameTimer_C.UpdateRoundDisplay
struct UGameTimer_C_UpdateRoundDisplay_Params
{
};

// Function GameTimer.GameTimer_C.UpdateMatchPointDisplay
struct UGameTimer_C_UpdateMatchPointDisplay_Params
{
};

// Function GameTimer.GameTimer_C.UpdateTeamCountDisplay
struct UGameTimer_C_UpdateTeamCountDisplay_Params
{
};

// Function GameTimer.GameTimer_C.SetRoundTimerSize
struct UGameTimer_C_SetRoundTimerSize_Params
{
	int*                                               NewSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimer.GameTimer_C.Construct
struct UGameTimer_C_Construct_Params
{
};

// Function GameTimer.GameTimer_C.HackInProgress
struct UGameTimer_C_HackInProgress_Params
{
	class AKSExtractionComputer**                      Computer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimer.GameTimer_C.RoundEnd
struct UGameTimer_C_RoundEnd_Params
{
	class AKSGameState**                               GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRoundResult*                               RoundResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameTimer.GameTimer_C.RoundWarmup
struct UGameTimer_C_RoundWarmup_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameTimer.GameTimer_C.RoundStart
struct UGameTimer_C_RoundStart_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameTimer.GameTimer_C.ComputersUnlock
struct UGameTimer_C_ComputersUnlock_Params
{
};

// Function GameTimer.GameTimer_C.Tick
struct UGameTimer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimer.GameTimer_C.Player Eliminated
struct UGameTimer_C_Player_Eliminated_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimer.GameTimer_C.OpenRetryGameStateBind
struct UGameTimer_C_OpenRetryGameStateBind_Params
{
};

// Function GameTimer.GameTimer_C.CloseRetryGameStateBind
struct UGameTimer_C_CloseRetryGameStateBind_Params
{
};

// Function GameTimer.GameTimer_C.RetryGameStateBind
struct UGameTimer_C_RetryGameStateBind_Params
{
};

// Function GameTimer.GameTimer_C.OnUIRelevantPlayerStateChanged
struct UGameTimer_C_OnUIRelevantPlayerStateChanged_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimer.GameTimer_C.OnGameTimerUpdate
struct UGameTimer_C_OnGameTimerUpdate_Params
{
	float*                                             NewTruncatedSeconds;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimer.GameTimer_C.InitializeTimer
struct UGameTimer_C_InitializeTimer_Params
{
};

// Function GameTimer.GameTimer_C.HandleKillCamEnabled
struct UGameTimer_C_HandleKillCamEnabled_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimer.GameTimer_C.Unbind OnGameTimerUpdate
struct UGameTimer_C_Unbind_OnGameTimerUpdate_Params
{
};

// Function GameTimer.GameTimer_C.HandleKillCamViewPawn
struct UGameTimer_C_HandleKillCamViewPawn_Params
{
	class APawn**                                      ViewedPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimer.GameTimer_C.BombTimerActive
struct UGameTimer_C_BombTimerActive_Params
{
	bool*                                              bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimer.GameTimer_C.BombTimerTick
struct UGameTimer_C_BombTimerTick_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimer.GameTimer_C.ExecuteUbergraph_GameTimer
struct UGameTimer_C_ExecuteUbergraph_GameTimer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
