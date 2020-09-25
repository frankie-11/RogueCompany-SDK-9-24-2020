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

// Function WBP_RogueDetails.WBP_RogueDetails_C.SetJobCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSJobItem**             KSJobItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueDetails_C::SetJobCharacter(class UKSJobItem** KSJobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.SetJobCharacter");

	UWBP_RogueDetails_C_SetJobCharacter_Params params;
	params.KSJobItem = KSJobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnPurchaseRogue
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueDetails_C::OnPurchaseRogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.OnPurchaseRogue");

	UWBP_RogueDetails_C_OnPurchaseRogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.SetContextBar
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueDetails_C::SetContextBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.SetContextBar");

	UWBP_RogueDetails_C_SetContextBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeOverViewButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueDetails_C::InitializeOverViewButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeOverViewButtons");

	UWBP_RogueDetails_C_InitializeOverViewButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_RogueDetails_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.NavigateBack");

	UWBP_RogueDetails_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.BindOverViewButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueDetails_C::BindOverViewButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.BindOverViewButtons");

	UWBP_RogueDetails_C_BindOverViewButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.PopulatedJobOverview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSJobItem**             JobItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueDetails_C::PopulatedJobOverview(class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.PopulatedJobOverview");

	UWBP_RogueDetails_C_PopulatedJobOverview_Params params;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RogueDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.Construct");

	UWBP_RogueDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueDetails_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeWidget");

	UWBP_RogueDetails_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_RogueDetails_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.OnShown");

	UWBP_RogueDetails_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_RogueDetails_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeWidgetNavigation");

	UWBP_RogueDetails_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnCombatLoadout
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueDetails_C::OnCombatLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.OnCombatLoadout");

	UWBP_RogueDetails_C_OnCombatLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnCustomizeLoadout
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueDetails_C::OnCustomizeLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.OnCustomizeLoadout");

	UWBP_RogueDetails_C_OnCustomizeLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnRogueMastery
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueDetails_C::OnRogueMastery()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.OnRogueMastery");

	UWBP_RogueDetails_C_OnRogueMastery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueDetails_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.OnBackPrompt");

	UWBP_RogueDetails_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.SetDisableButtons
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueDetails_C::SetDisableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.SetDisableButtons");

	UWBP_RogueDetails_C_SetDisableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_RogueDetails_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.OnHide");

	UWBP_RogueDetails_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.ExecuteUbergraph_WBP_RogueDetails
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueDetails_C::ExecuteUbergraph_WBP_RogueDetails(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueDetails.WBP_RogueDetails_C.ExecuteUbergraph_WBP_RogueDetails");

	UWBP_RogueDetails_C_ExecuteUbergraph_WBP_RogueDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
