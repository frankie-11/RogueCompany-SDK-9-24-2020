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

// Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.Construct
struct UWBP_WaitForPlayers_C_Construct_Params
{
};

// Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.HandlePhaseChange
struct UWBP_WaitForPlayers_C_HandlePhaseChange_Params
{
	struct FName*                                      NewPhaseName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousPhaseName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.ExecuteUbergraph_WBP_WaitForPlayers
struct UWBP_WaitForPlayers_C_ExecuteUbergraph_WBP_WaitForPlayers_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
