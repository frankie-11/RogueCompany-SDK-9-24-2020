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

// Function Scoreboard.Scoreboard_C.HandleInputModeChanged
struct UScoreboard_C_HandleInputModeChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard.Scoreboard_C.GetLocalPlayerJobInfo
struct UScoreboard_C_GetLocalPlayerJobInfo_Params
{
	bool                                               JobFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem*                                  JobItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard.Scoreboard_C.UpdateRogueInfo
struct UScoreboard_C_UpdateRogueInfo_Params
{
};

// Function Scoreboard.Scoreboard_C.GetPlayerData
struct UScoreboard_C_GetPlayerData_Params
{
	TArray<class UKSPersistentPlayerData*>             OutPlayerData;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Scoreboard.Scoreboard_C.UpdateVoicePlayer
struct UScoreboard_C_UpdateVoicePlayer_Params
{
	struct FString*                                    Account;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMuted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard.Scoreboard_C.NavigateBack
struct UScoreboard_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scoreboard.Scoreboard_C.GetPlayers
struct UScoreboard_C_GetPlayers_Params
{
	TArray<class UScoreboardPlayerEntry_C*>            Players;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Scoreboard.Scoreboard_C.GetPlayerButtons
struct UScoreboard_C_GetPlayerButtons_Params
{
	TArray<class UStandardButtonNoBorder_C*>           PlayerButtons;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Scoreboard.Scoreboard_C.UpdateTeamColors
struct UScoreboard_C_UpdateTeamColors_Params
{
};

// Function Scoreboard.Scoreboard_C.SortKSPlayerStatesByMoney
struct UScoreboard_C_SortKSPlayerStatesByMoney_Params
{
	TArray<class UKSPersistentPlayerData*>             InKSPlayerData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              DescOrder;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UKSPersistentPlayerData*>             OutKSPlayerData;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Scoreboard.Scoreboard_C.Get KSPlayer Data
struct UScoreboard_C_Get_KSPlayer_Data_Params
{
	TArray<class UKSPersistentPlayerData*>             KSPlayerData;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Scoreboard.Scoreboard_C.ComparePlayerScore
struct UScoreboard_C_ComparePlayerScore_Params
{
	class AKSPlayerState**                             PlayerStateA;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             PlayerStateB;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               After;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard.Scoreboard_C.UpdateScores
struct UScoreboard_C_UpdateScores_Params
{
};

// Function Scoreboard.Scoreboard_C.OnLoaded_4848F73A412C50823EB015A4F7EF3736
struct UScoreboard_C_OnLoaded_4848F73A412C50823EB015A4F7EF3736_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard.Scoreboard_C.Tick
struct UScoreboard_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard.Scoreboard_C.UpdateScoreboard
struct UScoreboard_C_UpdateScoreboard_Params
{
};

// Function Scoreboard.Scoreboard_C.HandleOnScoreboardEntryAdded
struct UScoreboard_C_HandleOnScoreboardEntryAdded_Params
{
};

// Function Scoreboard.Scoreboard_C.OnVoiceParticipantUpdated
struct UScoreboard_C_OnVoiceParticipantUpdated_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              bIsTalking;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsMuted;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard.Scoreboard_C.InitializeWidget
struct UScoreboard_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard.Scoreboard_C.OnShown
struct UScoreboard_C_OnShown_Params
{
};

// Function Scoreboard.Scoreboard_C.LoadAndPopulateFirstPassive
struct UScoreboard_C_LoadAndPopulateFirstPassive_Params
{
};

// Function Scoreboard.Scoreboard_C.ExecuteUbergraph_Scoreboard
struct UScoreboard_C_ExecuteUbergraph_Scoreboard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard.Scoreboard_C.OnScoreboardEntryAdded__DelegateSignature
struct UScoreboard_C_OnScoreboardEntryAdded__DelegateSignature_Params
{
};

// Function Scoreboard.Scoreboard_C.ScoreboardTabPress__DelegateSignature
struct UScoreboard_C_ScoreboardTabPress__DelegateSignature_Params
{
};

// Function Scoreboard.Scoreboard_C.Closed__DelegateSignature
struct UScoreboard_C_Closed__DelegateSignature_Params
{
};

// Function Scoreboard.Scoreboard_C.Opened__DelegateSignature
struct UScoreboard_C_Opened__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
