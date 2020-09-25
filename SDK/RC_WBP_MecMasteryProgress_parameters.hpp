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

// Function WBP_MecMasteryProgress.WBP_MecMasteryProgress_C.GetNextMasteryRewardTier
struct UWBP_MecMasteryProgress_C_GetNextMasteryRewardTier_Params
{
	TArray<struct FActivityTier>                       ActivityTiers;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               CurrentProgressCount;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FActivityTier                               NextRewardTier;                                           // (Parm, OutParm)
	bool                                               RewardFound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MecMasteryProgress.WBP_MecMasteryProgress_C.SetMasteryLevelForJob
struct UWBP_MecMasteryProgress_C_SetMasteryLevelForJob_Params
{
	class UKSJobItem**                                 JobItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
