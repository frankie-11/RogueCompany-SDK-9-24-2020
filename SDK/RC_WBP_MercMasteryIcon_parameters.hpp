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

// Function WBP_MercMasteryIcon.WBP_MercMasteryIcon_C.SetMasteryLevelExplicit
struct UWBP_MercMasteryIcon_C_SetMasteryLevelExplicit_Params
{
	int*                                               CurrentLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MercMasteryIcon.WBP_MercMasteryIcon_C.SetMasteryLevelForJob
struct UWBP_MercMasteryIcon_C_SetMasteryLevelForJob_Params
{
	class UKSJobItem**                                 JobItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
