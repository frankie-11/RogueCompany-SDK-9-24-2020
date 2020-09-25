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

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ProcessPlayerProgression
struct UWBP_ProgressionCardSlot_MercMasteryXP_C_ProcessPlayerProgression_Params
{
	struct FPlayerProgression*                         PlayerProgress;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Construct
struct UWBP_ProgressionCardSlot_MercMasteryXP_C_Construct_Params
{
};

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.CustomEvent_1
struct UWBP_ProgressionCardSlot_MercMasteryXP_C_CustomEvent_1_Params
{
	int*                                               NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP
struct UWBP_ProgressionCardSlot_MercMasteryXP_C_ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.OnMercLevelUp__DelegateSignature
struct UWBP_ProgressionCardSlot_MercMasteryXP_C_OnMercLevelUp__DelegateSignature_Params
{
	class UKSActivityInstance**                        ActivityInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FActivityTier*                              NewTier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
