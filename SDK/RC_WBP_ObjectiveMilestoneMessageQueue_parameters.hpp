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

// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.WrapUpCurrentMessages
struct UWBP_ObjectiveMilestoneMessageQueue_C_WrapUpCurrentMessages_Params
{
};

// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.Construct
struct UWBP_ObjectiveMilestoneMessageQueue_C_Construct_Params
{
};

// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnAnnouncementReady
struct UWBP_ObjectiveMilestoneMessageQueue_C_OnAnnouncementReady_Params
{
};

// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.SetToNotBusy
struct UWBP_ObjectiveMilestoneMessageQueue_C_SetToNotBusy_Params
{
};

// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnKillCamEnabled
struct UWBP_ObjectiveMilestoneMessageQueue_C_OnKillCamEnabled_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.HandleRoundSetup
struct UWBP_ObjectiveMilestoneMessageQueue_C_HandleRoundSetup_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnRoundOverDel_Event_1
struct UWBP_ObjectiveMilestoneMessageQueue_C_OnRoundOverDel_Event_1_Params
{
	class AKSGameState**                               GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRoundResult*                               RoundResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.ResetDisplay
struct UWBP_ObjectiveMilestoneMessageQueue_C_ResetDisplay_Params
{
};

// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.ExecuteUbergraph_WBP_ObjectiveMilestoneMessageQueue
struct UWBP_ObjectiveMilestoneMessageQueue_C_ExecuteUbergraph_WBP_ObjectiveMilestoneMessageQueue_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
