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

// Function ScoreboardOverview.ScoreboardOverview_C.GetAllPlayerDisplays
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UScoreboardPlayerStats_Lobby_C*> Widgets                        (Parm, OutParm, ZeroConstructor)

void UScoreboardOverview_C::GetAllPlayerDisplays(TArray<class UScoreboardPlayerStats_Lobby_C*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.GetAllPlayerDisplays");

	UScoreboardOverview_C_GetAllPlayerDisplays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function ScoreboardOverview.ScoreboardOverview_C.CreateTeamDisplay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTeamStats*             TeamStats                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FScoreboardStats*       ScoreboardStats                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UScoreboardTeamSection_Lobby_C* ScoreboardTeam                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScoreboardOverview_C::CreateTeamDisplay(struct FTeamStats* TeamStats, struct FScoreboardStats* ScoreboardStats, class UScoreboardTeamSection_Lobby_C** ScoreboardTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.CreateTeamDisplay");

	UScoreboardOverview_C_CreateTeamDisplay_Params params;
	params.TeamStats = TeamStats;
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScoreboardTeam != nullptr)
		*ScoreboardTeam = params.ScoreboardTeam;
}


// Function ScoreboardOverview.ScoreboardOverview_C.PopulateScoreboard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScoreboardStats*       ScoreboardStatStruct           (BlueprintVisible, BlueprintReadOnly, Parm)

void UScoreboardOverview_C::PopulateScoreboard(struct FScoreboardStats* ScoreboardStatStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.PopulateScoreboard");

	UScoreboardOverview_C_PopulateScoreboard_Params params;
	params.ScoreboardStatStruct = ScoreboardStatStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardOverview.ScoreboardOverview_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardOverview_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.InitializeWidget");

	UScoreboardOverview_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardOverview.ScoreboardOverview_C.SetMatchResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DidWin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardOverview_C::SetMatchResult(bool* DidWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.SetMatchResult");

	UScoreboardOverview_C_SetMatchResult_Params params;
	params.DidWin = DidWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardOverview.ScoreboardOverview_C.SetTeamColor
// (BlueprintCallable, BlueprintEvent)

void UScoreboardOverview_C::SetTeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.SetTeamColor");

	UScoreboardOverview_C_SetTeamColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardOverview.ScoreboardOverview_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardOverview_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.PreConstruct");

	UScoreboardOverview_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardOverview.ScoreboardOverview_C.HandleTeamPlayersChanged
// (BlueprintCallable, BlueprintEvent)

void UScoreboardOverview_C::HandleTeamPlayersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.HandleTeamPlayersChanged");

	UScoreboardOverview_C_HandleTeamPlayersChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardOverview.ScoreboardOverview_C.ExecuteUbergraph_ScoreboardOverview
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardOverview_C::ExecuteUbergraph_ScoreboardOverview(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.ExecuteUbergraph_ScoreboardOverview");

	UScoreboardOverview_C_ExecuteUbergraph_ScoreboardOverview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardOverview.ScoreboardOverview_C.OnTeamsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UScoreboardOverview_C::OnTeamsChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.OnTeamsChanged__DelegateSignature");

	UScoreboardOverview_C_OnTeamsChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
