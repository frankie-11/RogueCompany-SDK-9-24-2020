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

// Function WBP_MatchSummary.WBP_MatchSummary_C.PopulatePlayerStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerEntryStats*      PlayerEntryStats               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MatchSummary_C::PopulatePlayerStats(struct FPlayerEntryStats* PlayerEntryStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary.WBP_MatchSummary_C.PopulatePlayerStats");

	UWBP_MatchSummary_C_PopulatePlayerStats_Params params;
	params.PlayerEntryStats = PlayerEntryStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateMatchSummary
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerRewardsSummary*  PlayerRewards                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScoreboardStats*       ScoreboardStats                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MatchSummary_C::PopulateMatchSummary(struct FPlayerRewardsSummary* PlayerRewards, struct FScoreboardStats* ScoreboardStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateMatchSummary");

	UWBP_MatchSummary_C_PopulateMatchSummary_Params params;
	params.PlayerRewards = PlayerRewards;
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateBestStats
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerMatchStatInfo> BestStats                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_MatchSummary_C::PopulateBestStats(TArray<struct FPlayerMatchStatInfo>* BestStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateBestStats");

	UWBP_MatchSummary_C_PopulateBestStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BestStats != nullptr)
		*BestStats = params.BestStats;
}


// Function WBP_MatchSummary.WBP_MatchSummary_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchSummary_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary.WBP_MatchSummary_C.InitializeWidget");

	UWBP_MatchSummary_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchSummary.WBP_MatchSummary_C.ExecuteUbergraph_WBP_MatchSummary
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchSummary_C::ExecuteUbergraph_WBP_MatchSummary(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary.WBP_MatchSummary_C.ExecuteUbergraph_WBP_MatchSummary");

	UWBP_MatchSummary_C_ExecuteUbergraph_WBP_MatchSummary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
