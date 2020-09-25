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

// Function CashEarnedElement.CashEarnedElement_C.ShowRewardEarned
struct UCashEarnedElement_C_ShowRewardEarned_Params
{
	struct FKSScoreChangeEvent*                        ScoreEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CashEarnedElement.CashEarnedElement_C.Construct
struct UCashEarnedElement_C_Construct_Params
{
};

// Function CashEarnedElement.CashEarnedElement_C.HandleShowValueAnimFinished
struct UCashEarnedElement_C_HandleShowValueAnimFinished_Params
{
};

// Function CashEarnedElement.CashEarnedElement_C.HandleHideValueAnimFinished
struct UCashEarnedElement_C_HandleHideValueAnimFinished_Params
{
};

// Function CashEarnedElement.CashEarnedElement_C.ExecuteUbergraph_CashEarnedElement
struct UCashEarnedElement_C_ExecuteUbergraph_CashEarnedElement_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
