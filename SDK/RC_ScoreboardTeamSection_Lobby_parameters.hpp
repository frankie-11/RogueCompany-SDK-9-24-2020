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

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.GetPlayerDisplays
struct UScoreboardTeamSection_Lobby_C_GetPlayerDisplays_Params
{
	TArray<class UScoreboardPlayerStats_Lobby_C*>      PlayerEntries;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntry
struct UScoreboardTeamSection_Lobby_C_CreatePlayerEntry_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerEntryStats*                          playerStats;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UScoreboardPlayerStats_Lobby_C*              PlayerEntry;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetIsVictorious
struct UScoreboardTeamSection_Lobby_C_SetIsVictorious_Params
{
	bool*                                              IsVictorious;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SortPlayers
struct UScoreboardTeamSection_Lobby_C_SortPlayers_Params
{
	TArray<struct FPlayerEntryStats>                   PlayerEntries;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              DescOrder;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerEntryStats>                   SortedArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntries
struct UScoreboardTeamSection_Lobby_C_CreatePlayerEntries_Params
{
	TArray<struct FPlayerEntryStats>                   PlayerEntries;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.FindPlayerTeam
struct UScoreboardTeamSection_Lobby_C_FindPlayerTeam_Params
{
	int                                                PlayerTeamNum;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PopulatePlayer
struct UScoreboardTeamSection_Lobby_C_PopulatePlayer_Params
{
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.Construct
struct UScoreboardTeamSection_Lobby_C_Construct_Params
{
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetColor
struct UScoreboardTeamSection_Lobby_C_SetColor_Params
{
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PreConstruct
struct UScoreboardTeamSection_Lobby_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.ExecuteUbergraph_ScoreboardTeamSection_Lobby
struct UScoreboardTeamSection_Lobby_C_ExecuteUbergraph_ScoreboardTeamSection_Lobby_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.OnPlayersChanged__DelegateSignature
struct UScoreboardTeamSection_Lobby_C_OnPlayersChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
