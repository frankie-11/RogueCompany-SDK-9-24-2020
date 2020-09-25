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

// Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.SetStatText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  StatName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  StatValue                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MatchSummary_StatEntry_C::SetStatText(struct FText* StatName, struct FText* StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.SetStatText");

	UWBP_MatchSummary_StatEntry_C_SetStatText_Params params;
	params.StatName = StatName;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchSummary_StatEntry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.PreConstruct");

	UWBP_MatchSummary_StatEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MatchSummary_StatEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.Construct");

	UWBP_MatchSummary_StatEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.ExecuteUbergraph_WBP_MatchSummary_StatEntry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchSummary_StatEntry_C::ExecuteUbergraph_WBP_MatchSummary_StatEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.ExecuteUbergraph_WBP_MatchSummary_StatEntry");

	UWBP_MatchSummary_StatEntry_C_ExecuteUbergraph_WBP_MatchSummary_StatEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
