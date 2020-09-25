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

// Function SurrenderPoll.SurrenderPoll_C.CanPlayerProposeThisPoll
struct USurrenderPoll_C_CanPlayerProposeThisPoll_Params
{
	class AKSPlayerState**                             Player;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SurrenderPoll.SurrenderPoll_C.OnPollPassed
struct USurrenderPoll_C_OnPollPassed_Params
{
	class AKSGameState**                               GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TeamNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SurrenderPoll.SurrenderPoll_C.OnPollFailed
struct USurrenderPoll_C_OnPollFailed_Params
{
	class AKSGameState**                               GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TeamNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SurrenderPoll.SurrenderPoll_C.OnPollStarted
struct USurrenderPoll_C_OnPollStarted_Params
{
	class AKSGameState**                               GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TeamNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SurrenderPoll.SurrenderPoll_C.ExecuteUbergraph_SurrenderPoll
struct USurrenderPoll_C_ExecuteUbergraph_SurrenderPoll_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
