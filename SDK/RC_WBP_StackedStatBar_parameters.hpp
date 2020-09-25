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

// Function WBP_StackedStatBar.WBP_StackedStatBar_C.SetStatCurrentToNext
struct UWBP_StackedStatBar_C_SetStatCurrentToNext_Params
{
	struct FItemDisplayStat*                           CurrentStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDisplayStat*                           ProjectedStat;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StackedStatBar.WBP_StackedStatBar_C.SetStatCurrent
struct UWBP_StackedStatBar_C_SetStatCurrent_Params
{
	struct FItemDisplayStat*                           Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StackedStatBar.WBP_StackedStatBar_C.PreConstruct
struct UWBP_StackedStatBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StackedStatBar.WBP_StackedStatBar_C.Construct
struct UWBP_StackedStatBar_C_Construct_Params
{
};

// Function WBP_StackedStatBar.WBP_StackedStatBar_C.ExecuteUbergraph_WBP_StackedStatBar
struct UWBP_StackedStatBar_C_ExecuteUbergraph_WBP_StackedStatBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
