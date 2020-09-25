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

// Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnHoveredLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Graphic_Button_C::OnHoveredLogic(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnHoveredLogic");

	UWBP_Graphic_Button_C_OnHoveredLogic_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_Graphic_Button_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.NavigateConfirm");

	UWBP_Graphic_Button_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Graphic_Button_C::SetImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.SetImage");

	UWBP_Graphic_Button_C_SetImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.SetImageTint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Graphic_Button_C::SetImageTint()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.SetImageTint");

	UWBP_Graphic_Button_C_SetImageTint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnClickSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_Graphic_Button_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnClickSound");

	UWBP_Graphic_Button_C_OnClickSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnHoverSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_Graphic_Button_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnHoverSound");

	UWBP_Graphic_Button_C_OnHoverSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Graphic_Button_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.Construct");

	UWBP_Graphic_Button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGamepadConfirmed
// (BlueprintCallable, BlueprintEvent)

void UWBP_Graphic_Button_C::OnGamepadConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGamepadConfirmed");

	UWBP_Graphic_Button_C_OnGamepadConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Graphic_Button_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_Graphic_Button_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Graphic_Button_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_Graphic_Button_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Graphic_Button_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_Graphic_Button_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_Graphic_Button_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.GamepadHover");

	UWBP_Graphic_Button_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_Graphic_Button_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.GamepadUnhover");

	UWBP_Graphic_Button_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.DisableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShouldDisable                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Graphic_Button_C::DisableButton(bool* bShouldDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.DisableButton");

	UWBP_Graphic_Button_C_DisableButton_Params params;
	params.bShouldDisable = bShouldDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.CallButtonHover
// (BlueprintCallable, BlueprintEvent)

void UWBP_Graphic_Button_C::CallButtonHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.CallButtonHover");

	UWBP_Graphic_Button_C_CallButtonHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.CallButtonUnhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_Graphic_Button_C::CallButtonUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.CallButtonUnhover");

	UWBP_Graphic_Button_C_CallButtonUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.SetIsActiveState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Graphic_Button_C::SetIsActiveState(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.SetIsActiveState");

	UWBP_Graphic_Button_C_SetIsActiveState_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.ExecuteUbergraph_WBP_Graphic_Button
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Graphic_Button_C::ExecuteUbergraph_WBP_Graphic_Button(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.ExecuteUbergraph_WBP_Graphic_Button");

	UWBP_Graphic_Button_C_ExecuteUbergraph_WBP_Graphic_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGraphicBtnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Graphic_Button_C::OnGraphicBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGraphicBtnUnhovered__DelegateSignature");

	UWBP_Graphic_Button_C_OnGraphicBtnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGraphicBtnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Graphic_Button_C::OnGraphicBtnHovered__DelegateSignature(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGraphicBtnHovered__DelegateSignature");

	UWBP_Graphic_Button_C_OnGraphicBtnHovered__DelegateSignature_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGraphicBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Graphic_Button_C::OnGraphicBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGraphicBtnClicked__DelegateSignature");

	UWBP_Graphic_Button_C_OnGraphicBtnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
