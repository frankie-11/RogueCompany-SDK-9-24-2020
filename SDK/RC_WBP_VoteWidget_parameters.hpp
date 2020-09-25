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

// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateMenuBlock
struct UWBP_VoteWidget_C_UpdateMenuBlock_Params
{
	class AKSPlayerController**                        PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateVotePipStates
struct UWBP_VoteWidget_C_UpdateVotePipStates_Params
{
	int*                                               NewInFavorCount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewAgainstCount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IgnoreCached;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateVotePipCount
struct UWBP_VoteWidget_C_UpdateVotePipCount_Params
{
	int*                                               NewVoteCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.CastVote
struct UWBP_VoteWidget_C_CastVote_Params
{
	bool*                                              InFavor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.ResetTimerBar
struct UWBP_VoteWidget_C_ResetTimerBar_Params
{
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateRightChoice
struct UWBP_VoteWidget_C_UpdateRightChoice_Params
{
	float*                                             In_Delta_Time;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShouldReset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IgnoreHold;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateLeftChoice
struct UWBP_VoteWidget_C_UpdateLeftChoice_Params
{
	float*                                             In_Delta_Time;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShouldReset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IgnoreHold;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateTimerBar
struct UWBP_VoteWidget_C_UpdateTimerBar_Params
{
	float*                                             In_Delta_Time;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.Finished_B57E4A0043F84951AB8468824D8B8B03
struct UWBP_VoteWidget_C_Finished_B57E4A0043F84951AB8468824D8B8B03_Params
{
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.Tick
struct UWBP_VoteWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.OnNewPollCalled
struct UWBP_VoteWidget_C_OnNewPollCalled_Params
{
	class UClass**                                     PollType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.OnLocalPlayerHasVoted
struct UWBP_VoteWidget_C_OnLocalPlayerHasVoted_Params
{
	bool*                                              bInFavor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.OnPollCompleted
struct UWBP_VoteWidget_C_OnPollCompleted_Params
{
	struct FKSPollResults*                             PollResults;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.OnPollStateChanged
struct UWBP_VoteWidget_C_OnPollStateChanged_Params
{
	bool*                                              bIsPaused;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.SetupPollInfo
struct UWBP_VoteWidget_C_SetupPollInfo_Params
{
	class UClass**                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.InitializeWidget
struct UWBP_VoteWidget_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.OnVoteCountUpdated
struct UWBP_VoteWidget_C_OnVoteCountUpdated_Params
{
	struct FKSPollData*                                NewVoteData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.OnInputStateChanged
struct UWBP_VoteWidget_C_OnInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteWidget.WBP_VoteWidget_C.ExecuteUbergraph_WBP_VoteWidget
struct UWBP_VoteWidget_C_ExecuteUbergraph_WBP_VoteWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
