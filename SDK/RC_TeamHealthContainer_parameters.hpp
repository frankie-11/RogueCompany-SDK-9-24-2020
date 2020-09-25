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

// Function TeamHealthContainer.TeamHealthContainer_C.Construct
struct UTeamHealthContainer_C_Construct_Params
{
};

// Function TeamHealthContainer.TeamHealthContainer_C.UpdateTeammateHealthBars
struct UTeamHealthContainer_C_UpdateTeammateHealthBars_Params
{
};

// Function TeamHealthContainer.TeamHealthContainer_C.HandlePlayerSpawn
struct UTeamHealthContainer_C_HandlePlayerSpawn_Params
{
	class AKSCharacterBase**                           NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamHealthContainer.TeamHealthContainer_C.HandlePhaseChnage
struct UTeamHealthContainer_C_HandlePhaseChnage_Params
{
	struct FName*                                      NewPhaseName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousPhaseName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamHealthContainer.TeamHealthContainer_C.HandleSetupStart
struct UTeamHealthContainer_C_HandleSetupStart_Params
{
};

// Function TeamHealthContainer.TeamHealthContainer_C.ExecuteUbergraph_TeamHealthContainer
struct UTeamHealthContainer_C_ExecuteUbergraph_TeamHealthContainer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
