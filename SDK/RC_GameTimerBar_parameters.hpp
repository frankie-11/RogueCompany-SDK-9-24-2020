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

// Function GameTimerBar.GameTimerBar_C.CheckTeamSides
struct UGameTimerBar_C_CheckTeamSides_Params
{
};

// Function GameTimerBar.GameTimerBar_C.Bind Player State
struct UGameTimerBar_C_Bind_Player_State_Params
{
};

// Function GameTimerBar.GameTimerBar_C.ResetPlayerStates
struct UGameTimerBar_C_ResetPlayerStates_Params
{
};

// Function GameTimerBar.GameTimerBar_C.OnTeamChanged
struct UGameTimerBar_C_OnTeamChanged_Params
{
	class AKSPlayerState**                             KSPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.UpdateRoundNumberText
struct UGameTimerBar_C_UpdateRoundNumberText_Params
{
};

// Function GameTimerBar.GameTimerBar_C.OnTotalRoundsSet
struct UGameTimerBar_C_OnTotalRoundsSet_Params
{
};

// Function GameTimerBar.GameTimerBar_C.OnRoundsToWinSet
struct UGameTimerBar_C_OnRoundsToWinSet_Params
{
};

// Function GameTimerBar.GameTimerBar_C.BindRoundEvents
struct UGameTimerBar_C_BindRoundEvents_Params
{
};

// Function GameTimerBar.GameTimerBar_C.OnTeamScoreChanged
struct UGameTimerBar_C_OnTeamScoreChanged_Params
{
	class AKSTeamState**                               KSTeamState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.On Team Respawns Changed
struct UGameTimerBar_C_On_Team_Respawns_Changed_Params
{
	class AKSTeamState**                               KSTeamState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.OnMemberRemoved
struct UGameTimerBar_C_OnMemberRemoved_Params
{
	class AKSPlayerState**                             KSPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.OnMemberAdded
struct UGameTimerBar_C_OnMemberAdded_Params
{
	class AKSPlayerState**                             KSPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.OnTeamAdded
struct UGameTimerBar_C_OnTeamAdded_Params
{
	class AKSTeamState**                               KSTeamState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.Bind Team Events
struct UGameTimerBar_C_Bind_Team_Events_Params
{
};

// Function GameTimerBar.GameTimerBar_C.GetRoundInProgressText
struct UGameTimerBar_C_GetRoundInProgressText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameTimerBar.GameTimerBar_C.SetAttackDefendIcons
struct UGameTimerBar_C_SetAttackDefendIcons_Params
{
};

// Function GameTimerBar.GameTimerBar_C.HandlePhaseChanged
struct UGameTimerBar_C_HandlePhaseChanged_Params
{
	struct FName*                                      NewPhase;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousPhase;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.PlayBombCountdownSFX
struct UGameTimerBar_C_PlayBombCountdownSFX_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.ShouldPlayCountdownSFX
struct UGameTimerBar_C_ShouldPlayCountdownSFX_Params
{
	bool                                               ShouldPlay;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.PlayFinalCountdownSFX
struct UGameTimerBar_C_PlayFinalCountdownSFX_Params
{
	float*                                             Current_Second;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.Set Timer Text
struct UGameTimerBar_C_Set_Timer_Text_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.Handle Neutral Bomb State Changed
struct UGameTimerBar_C_Handle_Neutral_Bomb_State_Changed_Params
{
	struct FKSNeutralBombState*                        BombState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameTimerBar.GameTimerBar_C.Construct
struct UGameTimerBar_C_Construct_Params
{
};

// Function GameTimerBar.GameTimerBar_C.Tick
struct UGameTimerBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.Handle Timer Second Tick
struct UGameTimerBar_C_Handle_Timer_Second_Tick_Params
{
	float*                                             Seconds_Remaining;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.Handle Round Info Changed
struct UGameTimerBar_C_Handle_Round_Info_Changed_Params
{
};

// Function GameTimerBar.GameTimerBar_C.Handle Computers Unlocked
struct UGameTimerBar_C_Handle_Computers_Unlocked_Params
{
};

// Function GameTimerBar.GameTimerBar_C.Handle Round Start
struct UGameTimerBar_C_Handle_Round_Start_Params
{
	struct FRoundInitState*                            Round_Init_State;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameTimerBar.GameTimerBar_C.Handle Computer Update
struct UGameTimerBar_C_Handle_Computer_Update_Params
{
	class AKSObjectiveBase**                           Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.Handle Round End
struct UGameTimerBar_C_Handle_Round_End_Params
{
	class AKSGameState**                               GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRoundResult*                               RoundResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameTimerBar.GameTimerBar_C.InitializeWidget
struct UGameTimerBar_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.HandleKillCamEnabled
struct UGameTimerBar_C_HandleKillCamEnabled_Params
{
	bool*                                              bIsEnabled;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.HandleFadeAnimEnd
struct UGameTimerBar_C_HandleFadeAnimEnd_Params
{
};

// Function GameTimerBar.GameTimerBar_C.OnUIRelevantPlayerStateChanged
struct UGameTimerBar_C_OnUIRelevantPlayerStateChanged_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.OnControlPointUpdate
struct UGameTimerBar_C_OnControlPointUpdate_Params
{
	class AKSObjectiveBase**                           Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.OnControlPointScored
struct UGameTimerBar_C_OnControlPointScored_Params
{
	class AKSTeamState**                               TeamState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSControlPoint**                            ControlPoint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.Handle Attacking Team Updated
struct UGameTimerBar_C_Handle_Attacking_Team_Updated_Params
{
	class AKSTeamState**                               NewTeam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.Handle Bomb State Timer Tick
struct UGameTimerBar_C_Handle_Bomb_State_Timer_Tick_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.Handle Bomb State Timer Active
struct UGameTimerBar_C_Handle_Bomb_State_Timer_Active_Params
{
	bool*                                              bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBar.GameTimerBar_C.Deferred Game State Open
struct UGameTimerBar_C_Deferred_Game_State_Open_Params
{
};

// Function GameTimerBar.GameTimerBar_C.Deferred Bind Computer Open
struct UGameTimerBar_C_Deferred_Bind_Computer_Open_Params
{
};

// Function GameTimerBar.GameTimerBar_C.DeferredPlayerStateOpen
struct UGameTimerBar_C_DeferredPlayerStateOpen_Params
{
};

// Function GameTimerBar.GameTimerBar_C.StopTickCaptureProgress
struct UGameTimerBar_C_StopTickCaptureProgress_Params
{
};

// Function GameTimerBar.GameTimerBar_C.TickCaptureProgress
struct UGameTimerBar_C_TickCaptureProgress_Params
{
};

// Function GameTimerBar.GameTimerBar_C.DeferredBindControlPointOpen
struct UGameTimerBar_C_DeferredBindControlPointOpen_Params
{
};

// Function GameTimerBar.GameTimerBar_C.ExecuteUbergraph_GameTimerBar
struct UGameTimerBar_C_ExecuteUbergraph_GameTimerBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
