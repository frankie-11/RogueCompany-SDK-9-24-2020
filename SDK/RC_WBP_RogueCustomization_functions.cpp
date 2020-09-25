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

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetMeleeCustomizeNav
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCustomization_C::SetMeleeCustomizeNav(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetMeleeCustomizeNav");

	UWBP_RogueCustomization_C_SetMeleeCustomizeNav_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.RegisterGamepadNavigation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCustomization_C::RegisterGamepadNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.RegisterGamepadNavigation");

	UWBP_RogueCustomization_C_RegisterGamepadNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_RogueCustomization_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.NavigateBack");

	UWBP_RogueCustomization_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetContextBar
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCustomization_C::SetContextBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetContextBar");

	UWBP_RogueCustomization_C_SetContextBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.BindSlots
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCustomization_C::BindSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.BindSlots");

	UWBP_RogueCustomization_C_BindSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetSlots
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCustomization_C::SetSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetSlots");

	UWBP_RogueCustomization_C_SetSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCustomization_C::InitializeButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeButtons");

	UWBP_RogueCustomization_C_InitializeButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.UpdateEquippedItems
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCustomization_C::UpdateEquippedItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.UpdateEquippedItems");

	UWBP_RogueCustomization_C_UpdateEquippedItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetActiveJob
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSJobItem**             JobItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCustomization_C::SetActiveJob(class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetActiveJob");

	UWBP_RogueCustomization_C_SetActiveJob_Params params;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCustomization_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeWidget");

	UWBP_RogueCustomization_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails*   CosmeticSlotDetail             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_KSCosmeticItemDisplay_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_RogueCustomization_C::OnCosmeticHovered(struct FCosmeticSlotDetails* CosmeticSlotDetail, bool* IsGamepad, class UWBP_KSCosmeticItemDisplay_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticHovered");

	UWBP_RogueCustomization_C_OnCosmeticHovered_Params params;
	params.CosmeticSlotDetail = CosmeticSlotDetail;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueCustomization_C::OnCosmeticUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticUnhovered");

	UWBP_RogueCustomization_C_OnCosmeticUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C** CosmeticSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCosmeticSlotDetails*   CosmeticSlotDetails            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_RogueCustomization_C::OnCosmeticSelected(class UWBP_KSCosmeticItemDisplay_C** CosmeticSlot, struct FCosmeticSlotDetails* CosmeticSlotDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticSelected");

	UWBP_RogueCustomization_C_OnCosmeticSelected_Params params;
	params.CosmeticSlot = CosmeticSlot;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_RogueCustomization_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnShown");

	UWBP_RogueCustomization_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.ExternalOnShown
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueCustomization_C::ExternalOnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.ExternalOnShown");

	UWBP_RogueCustomization_C_ExternalOnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueCustomization_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnBackPrompt");

	UWBP_RogueCustomization_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_RogueCustomization_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeWidgetNavigation");

	UWBP_RogueCustomization_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCustomization_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.PreConstruct");

	UWBP_RogueCustomization_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.ExecuteUbergraph_WBP_RogueCustomization
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCustomization_C::ExecuteUbergraph_WBP_RogueCustomization(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.ExecuteUbergraph_WBP_RogueCustomization");

	UWBP_RogueCustomization_C_ExecuteUbergraph_WBP_RogueCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.GotoCustomizationScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C** CosmeticSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_RogueCustomization_C::GotoCustomizationScreen__DelegateSignature(class UWBP_KSCosmeticItemDisplay_C** CosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.GotoCustomizationScreen__DelegateSignature");

	UWBP_RogueCustomization_C_GotoCustomizationScreen__DelegateSignature_Params params;
	params.CosmeticSlot = CosmeticSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
