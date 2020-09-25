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

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.UpdateCurrencyDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CurrencySummary_C::UpdateCurrencyDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CurrencySummary.WBP_CurrencySummary_C.UpdateCurrencyDisplay");

	UWBP_CurrencySummary_C_UpdateCurrencyDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CurrencySummary.WBP_CurrencySummary_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CurrencySummary_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CurrencySummary.WBP_CurrencySummary_C.InitializeWidget");

	UWBP_CurrencySummary_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CurrencySummary.WBP_CurrencySummary_C.ExecuteUbergraph_WBP_CurrencySummary
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CurrencySummary_C::ExecuteUbergraph_WBP_CurrencySummary(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CurrencySummary.WBP_CurrencySummary_C.ExecuteUbergraph_WBP_CurrencySummary");

	UWBP_CurrencySummary_C_ExecuteUbergraph_WBP_CurrencySummary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
