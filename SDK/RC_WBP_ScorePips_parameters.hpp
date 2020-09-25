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

// Function WBP_ScorePips.WBP_ScorePips_C.Set Total Pips
struct UWBP_ScorePips_C_Set_Total_Pips_Params
{
	int*                                               Pips_Number;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScorePips.WBP_ScorePips_C.Set Pips Number
struct UWBP_ScorePips_C_Set_Pips_Number_Params
{
	int*                                               Pips_Number;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScorePips.WBP_ScorePips_C.PreConstruct
struct UWBP_ScorePips_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScorePips.WBP_ScorePips_C.Construct
struct UWBP_ScorePips_C_Construct_Params
{
};

// Function WBP_ScorePips.WBP_ScorePips_C.ExecuteUbergraph_WBP_ScorePips
struct UWBP_ScorePips_C_ExecuteUbergraph_WBP_ScorePips_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
