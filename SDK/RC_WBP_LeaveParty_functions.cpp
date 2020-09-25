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

// Function WBP_LeaveParty.WBP_LeaveParty_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_LeaveParty_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.NavigateConfirm");

	UWBP_LeaveParty_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.HandleInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* CurrentInputState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LeaveParty_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* CurrentInputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.HandleInputStateChanged");

	UWBP_LeaveParty_C_HandleInputStateChanged_Params params;
	params.CurrentInputState = CurrentInputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyHoverSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_LeaveParty_C::SocialLeavePartyHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyHoverSFX");

	UWBP_LeaveParty_C_SocialLeavePartyHoverSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyClickSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_LeaveParty_C::SocialLeavePartyClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyClickSFX");

	UWBP_LeaveParty_C_SocialLeavePartyClickSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LeaveParty_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.InitializeWidget");

	UWBP_LeaveParty_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.HandlePartyUpdated
// (BlueprintCallable, BlueprintEvent)

void UWBP_LeaveParty_C::HandlePartyUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.HandlePartyUpdated");

	UWBP_LeaveParty_C_HandlePartyUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.CallLeaveParty
// (BlueprintCallable, BlueprintEvent)

void UWBP_LeaveParty_C::CallLeaveParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.CallLeaveParty");

	UWBP_LeaveParty_C_CallLeaveParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_LeaveParty_C::BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_LeaveParty_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_LeaveParty_C::BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_LeaveParty_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_LeaveParty_C::BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_LeaveParty_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_LeaveParty_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadHover");

	UWBP_LeaveParty_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_LeaveParty_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadUnhover");

	UWBP_LeaveParty_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.ExecuteUbergraph_WBP_LeaveParty
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LeaveParty_C::ExecuteUbergraph_WBP_LeaveParty(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.ExecuteUbergraph_WBP_LeaveParty");

	UWBP_LeaveParty_C_ExecuteUbergraph_WBP_LeaveParty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.OnPartyLeaveVisibilityChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LeaveParty_C::OnPartyLeaveVisibilityChange__DelegateSignature(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.OnPartyLeaveVisibilityChange__DelegateSignature");

	UWBP_LeaveParty_C_OnPartyLeaveVisibilityChange__DelegateSignature_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
