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

// Function ScoreboardOverview.ScoreboardOverview_C.GetAllPlayerDisplays
struct UScoreboardOverview_C_GetAllPlayerDisplays_Params
{
	TArray<class UScoreboardPlayerStats_Lobby_C*>      Widgets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function ScoreboardOverview.ScoreboardOverview_C.CreateTeamDisplay
struct UScoreboardOverview_C_CreateTeamDisplay_Params
{
	struct FTeamStats*                                 TeamStats;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FScoreboardStats*                           ScoreboardStats;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UScoreboardTeamSection_Lobby_C*              ScoreboardTeam;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScoreboardOverview.ScoreboardOverview_C.PopulateScoreboard
struct UScoreboardOverview_C_PopulateScoreboard_Params
{
	struct FScoreboardStats*                           ScoreboardStatStruct;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ScoreboardOverview.ScoreboardOverview_C.InitializeWidget
struct UScoreboardOverview_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardOverview.ScoreboardOverview_C.SetMatchResult
struct UScoreboardOverview_C_SetMatchResult_Params
{
	bool*                                              DidWin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardOverview.ScoreboardOverview_C.SetTeamColor
struct UScoreboardOverview_C_SetTeamColor_Params
{
};

// Function ScoreboardOverview.ScoreboardOverview_C.PreConstruct
struct UScoreboardOverview_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardOverview.ScoreboardOverview_C.HandleTeamPlayersChanged
struct UScoreboardOverview_C_HandleTeamPlayersChanged_Params
{
};

// Function ScoreboardOverview.ScoreboardOverview_C.ExecuteUbergraph_ScoreboardOverview
struct UScoreboardOverview_C_ExecuteUbergraph_ScoreboardOverview_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardOverview.ScoreboardOverview_C.OnTeamsChanged__DelegateSignature
struct UScoreboardOverview_C_OnTeamsChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
