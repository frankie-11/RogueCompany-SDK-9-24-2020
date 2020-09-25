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

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetInitialState
struct UWBP_ProgressionCardSlot_C_SetInitialState_Params
{
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.Construct
struct UWBP_ProgressionCardSlot_C_Construct_Params
{
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.AnimateIn
struct UWBP_ProgressionCardSlot_C_AnimateIn_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.PreConstruct
struct UWBP_ProgressionCardSlot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.CustomEvent_1
struct UWBP_ProgressionCardSlot_C_CustomEvent_1_Params
{
	class UKSActivityInstance**                        ActivityInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FActivityTier*                              NewTier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.ExecuteUbergraph_WBP_ProgressionCardSlot
struct UWBP_ProgressionCardSlot_C_ExecuteUbergraph_WBP_ProgressionCardSlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimation__DelegateSignature
struct UWBP_ProgressionCardSlot_C_StartAnimation__DelegateSignature_Params
{
	int*                                               CurrencyEarned;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
