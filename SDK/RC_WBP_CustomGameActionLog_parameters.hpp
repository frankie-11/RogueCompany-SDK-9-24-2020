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

// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ClearLog
struct UWBP_CustomGameActionLog_C_ClearLog_Params
{
};

// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.AddLog
struct UWBP_CustomGameActionLog_C_AddLog_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.PreConstruct
struct UWBP_CustomGameActionLog_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.Construct
struct UWBP_CustomGameActionLog_C_Construct_Params
{
};

// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.HandleScrollBottom
struct UWBP_CustomGameActionLog_C_HandleScrollBottom_Params
{
};

// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
struct UWBP_CustomGameActionLog_C_BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params
{
	float*                                             CurrentOffset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ExecuteUbergraph_WBP_CustomGameActionLog
struct UWBP_CustomGameActionLog_C_ExecuteUbergraph_WBP_CustomGameActionLog_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
