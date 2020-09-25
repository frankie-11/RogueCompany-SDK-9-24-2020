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

// Function CenterScreenMessage.CenterScreenMessage_C.ResetVisualState
struct UCenterScreenMessage_C_ResetVisualState_Params
{
};

// Function CenterScreenMessage.CenterScreenMessage_C.Construct
struct UCenterScreenMessage_C_Construct_Params
{
};

// Function CenterScreenMessage.CenterScreenMessage_C.DisplayMessage
struct UCenterScreenMessage_C_DisplayMessage_Params
{
	struct FEliminationMessage*                        Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CenterScreenMessage.CenterScreenMessage_C.MessageDisplayFinished
struct UCenterScreenMessage_C_MessageDisplayFinished_Params
{
};

// Function CenterScreenMessage.CenterScreenMessage_C.DeathReceived
struct UCenterScreenMessage_C_DeathReceived_Params
{
	struct FCombatEventInfo*                           EventInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CenterScreenMessage.CenterScreenMessage_C.DownRecieved
struct UCenterScreenMessage_C_DownRecieved_Params
{
	struct FCombatEventInfo*                           EventInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               ExpBonus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CenterScreenMessage.CenterScreenMessage_C.AssistRecieved
struct UCenterScreenMessage_C_AssistRecieved_Params
{
	struct FAssistInfo*                                EventInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CenterScreenMessage.CenterScreenMessage_C.OnKillCamEnabled
struct UCenterScreenMessage_C_OnKillCamEnabled_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CenterScreenMessage.CenterScreenMessage_C.OnKillCamViewedPawn
struct UCenterScreenMessage_C_OnKillCamViewedPawn_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CenterScreenMessage.CenterScreenMessage_C.HandleOnReceivedMessage
struct UCenterScreenMessage_C_HandleOnReceivedMessage_Params
{
	struct FEliminationMessage*                        Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CenterScreenMessage.CenterScreenMessage_C.OnRoundStart
struct UCenterScreenMessage_C_OnRoundStart_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CenterScreenMessage.CenterScreenMessage_C.ExecuteUbergraph_CenterScreenMessage
struct UCenterScreenMessage_C_ExecuteUbergraph_CenterScreenMessage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
