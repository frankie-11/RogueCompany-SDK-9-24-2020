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

// Function PlayerActivePerks.PlayerActivePerks_C.PostSetPawn
struct UPlayerActivePerks_C_PostSetPawn_Params
{
};

// Function PlayerActivePerks.PlayerActivePerks_C.PreClearPawn
struct UPlayerActivePerks_C_PreClearPawn_Params
{
};

// Function PlayerActivePerks.PlayerActivePerks_C.HandleModsUpdated
struct UPlayerActivePerks_C_HandleModsUpdated_Params
{
	class AKSCharacter**                               KSCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerActivePerks.PlayerActivePerks_C.HandleDownedElim
struct UPlayerActivePerks_C_HandleDownedElim_Params
{
	class AKSPlayerState**                             KSPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerActivePerks.PlayerActivePerks_C.Bind Callbacks to Player State
struct UPlayerActivePerks_C_Bind_Callbacks_to_Player_State_Params
{
	class AKSPlayerState**                             In_Player_State;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerActivePerks.PlayerActivePerks_C.Unbind Callbacks to Player State
struct UPlayerActivePerks_C_Unbind_Callbacks_to_Player_State_Params
{
};

// Function PlayerActivePerks.PlayerActivePerks_C.Bind Callbacks to Pawn
struct UPlayerActivePerks_C_Bind_Callbacks_to_Pawn_Params
{
	class AKSCharacter**                               In_Pawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerActivePerks.PlayerActivePerks_C.Unbind Callbacks to Pawn
struct UPlayerActivePerks_C_Unbind_Callbacks_to_Pawn_Params
{
};

// Function PlayerActivePerks.PlayerActivePerks_C.PreClearPlayerState
struct UPlayerActivePerks_C_PreClearPlayerState_Params
{
};

// Function PlayerActivePerks.PlayerActivePerks_C.PostSetPlayerState
struct UPlayerActivePerks_C_PostSetPlayerState_Params
{
};

// Function PlayerActivePerks.PlayerActivePerks_C.SetPlayerStateUIRelevanceChanged
struct UPlayerActivePerks_C_SetPlayerStateUIRelevanceChanged_Params
{
};

// Function PlayerActivePerks.PlayerActivePerks_C.Try To Show On UI Relevant
struct UPlayerActivePerks_C_Try_To_Show_On_UI_Relevant_Params
{
};

// Function PlayerActivePerks.PlayerActivePerks_C.ExecuteUbergraph_PlayerActivePerks
struct UPlayerActivePerks_C_ExecuteUbergraph_PlayerActivePerks_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
