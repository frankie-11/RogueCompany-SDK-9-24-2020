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

// Function WorldMessages.WorldMessages_C.GetPooledMessage
struct UWorldMessages_C_GetPooledMessage_Params
{
	class UCombatLogElement_C*                         Message;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WorldMessages.WorldMessages_C.ReturnPooledMessage
struct UWorldMessages_C_ReturnPooledMessage_Params
{
	class UCombatLogElement_C**                        Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WorldMessages.WorldMessages_C.SFXKillFeed
struct UWorldMessages_C_SFXKillFeed_Params
{
	class AActor**                                     Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMessages.WorldMessages_C.Construct
struct UWorldMessages_C_Construct_Params
{
};

// Function WorldMessages.WorldMessages_C.DeathMessage
struct UWorldMessages_C_DeathMessage_Params
{
	struct FCombatEventInfo*                           EventInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WorldMessages.WorldMessages_C.DownMessage
struct UWorldMessages_C_DownMessage_Params
{
	struct FCombatEventInfo*                           EventInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               ExpBonus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMessages.WorldMessages_C.ResetMessages
struct UWorldMessages_C_ResetMessages_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WorldMessages.WorldMessages_C.OnRoundOver
struct UWorldMessages_C_OnRoundOver_Params
{
	class AKSGameState**                               GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRoundResult*                               RoundResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WorldMessages.WorldMessages_C.OnKillCamEnabled
struct UWorldMessages_C_OnKillCamEnabled_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMessages.WorldMessages_C.OnKillCamViewedPawn
struct UWorldMessages_C_OnKillCamViewedPawn_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMessages.WorldMessages_C.HandleQueuedMessage
struct UWorldMessages_C_HandleQueuedMessage_Params
{
};

// Function WorldMessages.WorldMessages_C.ExecuteUbergraph_WorldMessages
struct UWorldMessages_C_ExecuteUbergraph_WorldMessages_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
