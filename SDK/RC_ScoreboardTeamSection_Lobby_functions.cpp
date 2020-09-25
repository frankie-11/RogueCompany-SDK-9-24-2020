// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.GetPlayerDisplays
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UScoreboardPlayerStats_Lobby_C*> PlayerEntries                  (Parm, OutParm, ZeroConstructor)

void UScoreboardTeamSection_Lobby_C::GetPlayerDisplays(TArray<class UScoreboardPlayerStats_Lobby_C*>* PlayerEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.GetPlayerDisplays");

	UScoreboardTeamSection_Lobby_C_GetPlayerDisplays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerEntries != nullptr)
		*PlayerEntries = params.PlayerEntries;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntry
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayerEntryStats*      playerStats                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UScoreboardPlayerStats_Lobby_C* PlayerEntry                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScoreboardTeamSection_Lobby_C::CreatePlayerEntry(int* Index, struct FPlayerEntryStats* playerStats, class UScoreboardPlayerStats_Lobby_C** PlayerEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntry");

	UScoreboardTeamSection_Lobby_C_CreatePlayerEntry_Params params;
	params.Index = Index;
	params.playerStats = playerStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerEntry != nullptr)
		*PlayerEntry = params.PlayerEntry;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetIsVictorious
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVictorious                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardTeamSection_Lobby_C::SetIsVictorious(bool* IsVictorious)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetIsVictorious");

	UScoreboardTeamSection_Lobby_C_SetIsVictorious_Params params;
	params.IsVictorious = IsVictorious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SortPlayers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerEntryStats> PlayerEntries                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          DescOrder                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPlayerEntryStats> SortedArray                    (Parm, OutParm, ZeroConstructor)

void UScoreboardTeamSection_Lobby_C::SortPlayers(bool* DescOrder, TArray<struct FPlayerEntryStats>* PlayerEntries, TArray<struct FPlayerEntryStats>* SortedArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SortPlayers");

	UScoreboardTeamSection_Lobby_C_SortPlayers_Params params;
	params.DescOrder = DescOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerEntries != nullptr)
		*PlayerEntries = params.PlayerEntries;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntries
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerEntryStats> PlayerEntries                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UScoreboardTeamSection_Lobby_C::CreatePlayerEntries(TArray<struct FPlayerEntryStats>* PlayerEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntries");

	UScoreboardTeamSection_Lobby_C_CreatePlayerEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerEntries != nullptr)
		*PlayerEntries = params.PlayerEntries;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.FindPlayerTeam
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PlayerTeamNum                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScoreboardTeamSection_Lobby_C::FindPlayerTeam(int* PlayerTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.FindPlayerTeam");

	UScoreboardTeamSection_Lobby_C_FindPlayerTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerTeamNum != nullptr)
		*PlayerTeamNum = params.PlayerTeamNum;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PopulatePlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScoreboardTeamSection_Lobby_C::PopulatePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PopulatePlayer");

	UScoreboardTeamSection_Lobby_C_PopulatePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreboardTeamSection_Lobby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.Construct");

	UScoreboardTeamSection_Lobby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetColor
// (BlueprintCallable, BlueprintEvent)

void UScoreboardTeamSection_Lobby_C::SetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetColor");

	UScoreboardTeamSection_Lobby_C_SetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardTeamSection_Lobby_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PreConstruct");

	UScoreboardTeamSection_Lobby_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.ExecuteUbergraph_ScoreboardTeamSection_Lobby
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardTeamSection_Lobby_C::ExecuteUbergraph_ScoreboardTeamSection_Lobby(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.ExecuteUbergraph_ScoreboardTeamSection_Lobby");

	UScoreboardTeamSection_Lobby_C_ExecuteUbergraph_ScoreboardTeamSection_Lobby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.OnPlayersChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UScoreboardTeamSection_Lobby_C::OnPlayersChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.OnPlayersChanged__DelegateSignature");

	UScoreboardTeamSection_Lobby_C_OnPlayersChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
