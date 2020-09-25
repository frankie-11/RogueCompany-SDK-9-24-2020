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

// Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.SetStatText
struct UWBP_MatchSummary_StatEntry_C_SetStatText_Params
{
	struct FText*                                      StatName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      StatValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.PreConstruct
struct UWBP_MatchSummary_StatEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.Construct
struct UWBP_MatchSummary_StatEntry_C_Construct_Params
{
};

// Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.ExecuteUbergraph_WBP_MatchSummary_StatEntry
struct UWBP_MatchSummary_StatEntry_C_ExecuteUbergraph_WBP_MatchSummary_StatEntry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
