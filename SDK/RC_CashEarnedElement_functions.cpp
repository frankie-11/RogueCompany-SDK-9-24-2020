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

// Function CashEarnedElement.CashEarnedElement_C.ShowRewardEarned
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSScoreChangeEvent*    ScoreEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UCashEarnedElement_C::ShowRewardEarned(struct FKSScoreChangeEvent* ScoreEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.ShowRewardEarned");

	UCashEarnedElement_C_ShowRewardEarned_Params params;
	params.ScoreEvent = ScoreEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashEarnedElement.CashEarnedElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCashEarnedElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.Construct");

	UCashEarnedElement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashEarnedElement.CashEarnedElement_C.HandleShowValueAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UCashEarnedElement_C::HandleShowValueAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.HandleShowValueAnimFinished");

	UCashEarnedElement_C_HandleShowValueAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashEarnedElement.CashEarnedElement_C.HandleHideValueAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UCashEarnedElement_C::HandleHideValueAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.HandleHideValueAnimFinished");

	UCashEarnedElement_C_HandleHideValueAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashEarnedElement.CashEarnedElement_C.ExecuteUbergraph_CashEarnedElement
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCashEarnedElement_C::ExecuteUbergraph_CashEarnedElement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.ExecuteUbergraph_CashEarnedElement");

	UCashEarnedElement_C_ExecuteUbergraph_CashEarnedElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
