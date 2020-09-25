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

// Function PlayersRemaining.PlayersRemaining_C.Construct
struct UPlayersRemaining_C_Construct_Params
{
};

// Function PlayersRemaining.PlayersRemaining_C.RefreshPlayerCount
struct UPlayersRemaining_C_RefreshPlayerCount_Params
{
};

// Function PlayersRemaining.PlayersRemaining_C.HandlePlayerEliminated
struct UPlayersRemaining_C_HandlePlayerEliminated_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayersRemaining.PlayersRemaining_C.HandlePlayerSpawn
struct UPlayersRemaining_C_HandlePlayerSpawn_Params
{
	class AKSCharacterBase**                           NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayersRemaining.PlayersRemaining_C.HandlePhaseChange
struct UPlayersRemaining_C_HandlePhaseChange_Params
{
	struct FName*                                      NewPhaseName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousPhaseName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayersRemaining.PlayersRemaining_C.ExecuteUbergraph_PlayersRemaining
struct UPlayersRemaining_C_ExecuteUbergraph_PlayersRemaining_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
