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

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.TickAnchorAnim
struct UWBP_RogueStatsScreen_RogueEntry_C_TickAnchorAnim_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ResetState
struct UWBP_RogueStatsScreen_RogueEntry_C_ResetState_Params
{
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnimInternal
struct UWBP_RogueStatsScreen_RogueEntry_C_PlayShowAnimInternal_Params
{
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnim
struct UWBP_RogueStatsScreen_RogueEntry_C_PlayShowAnim_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateValueText
struct UWBP_RogueStatsScreen_RogueEntry_C_UpdateValueText_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateIcon
struct UWBP_RogueStatsScreen_RogueEntry_C_UpdateIcon_Params
{
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.SetActivityInstance
struct UWBP_RogueStatsScreen_RogueEntry_C_SetActivityInstance_Params
{
	class UKSActivityInstance**                        Instance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Construct
struct UWBP_RogueStatsScreen_RogueEntry_C_Construct_Params
{
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Tick
struct UWBP_RogueStatsScreen_RogueEntry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry
struct UWBP_RogueStatsScreen_RogueEntry_C_ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
