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

// Function Incursion_GameState.Incursion_GameState_C.GetUIMatchTime
struct AIncursion_GameState_C_GetUIMatchTime_Params
{
	float                                              OutTimeRemaining;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutTotalTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Incursion_GameState.Incursion_GameState_C.ReceiveBeginPlay
struct AIncursion_GameState_C_ReceiveBeginPlay_Params
{
};

// Function Incursion_GameState.Incursion_GameState_C.ExecuteUbergraph_Incursion_GameState
struct AIncursion_GameState_C_ExecuteUbergraph_Incursion_GameState_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Incursion_GameState.Incursion_GameState_C.On New Wave__DelegateSignature
struct AIncursion_GameState_C_On_New_Wave__DelegateSignature_Params
{
	int*                                               Current_Wave_Number;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Total_Wave_Number;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
