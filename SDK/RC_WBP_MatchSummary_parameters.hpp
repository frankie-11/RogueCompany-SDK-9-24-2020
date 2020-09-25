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

// Function WBP_MatchSummary.WBP_MatchSummary_C.PopulatePlayerStats
struct UWBP_MatchSummary_C_PopulatePlayerStats_Params
{
	struct FPlayerEntryStats*                          PlayerEntryStats;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateMatchSummary
struct UWBP_MatchSummary_C_PopulateMatchSummary_Params
{
	struct FPlayerRewardsSummary*                      PlayerRewards;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScoreboardStats*                           ScoreboardStats;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateBestStats
struct UWBP_MatchSummary_C_PopulateBestStats_Params
{
	TArray<struct FPlayerMatchStatInfo>                BestStats;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_MatchSummary.WBP_MatchSummary_C.InitializeWidget
struct UWBP_MatchSummary_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MatchSummary.WBP_MatchSummary_C.ExecuteUbergraph_WBP_MatchSummary
struct UWBP_MatchSummary_C_ExecuteUbergraph_WBP_MatchSummary_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
