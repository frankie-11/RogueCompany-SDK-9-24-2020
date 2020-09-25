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

// Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetVisuallyDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldDisable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonStacked_C::SetVisuallyDisabled(bool* ShouldDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetVisuallyDisabled");

	UWBP_ButtonStacked_C_SetVisuallyDisabled_Params params;
	params.ShouldDisable = ShouldDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetInitialDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ButtonStacked_C::SetInitialDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetInitialDisplay");

	UWBP_ButtonStacked_C_SetInitialDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoveredLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonStacked_C::OnHoveredLogic(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoveredLogic");

	UWBP_ButtonStacked_C_OnHoveredLogic_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ButtonStacked_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.NavigateConfirm");

	UWBP_ButtonStacked_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnClickSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonStacked_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnClickSound");

	UWBP_ButtonStacked_C_OnClickSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoverSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonStacked_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoverSound");

	UWBP_ButtonStacked_C_OnHoverSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ButtonStacked_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.Construct");

	UWBP_ButtonStacked_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnGamepadConfirmed
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonStacked_C::OnGamepadConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnGamepadConfirmed");

	UWBP_ButtonStacked_C_OnGamepadConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_ButtonStacked_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_ButtonStacked_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_ButtonStacked_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_ButtonStacked_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadHover");

	UWBP_ButtonStacked_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_ButtonStacked_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadUnhover");

	UWBP_ButtonStacked_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.DisableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShouldDisable                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonStacked_C::DisableButton(bool* bShouldDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.DisableButton");

	UWBP_ButtonStacked_C_DisableButton_Params params;
	params.bShouldDisable = bShouldDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonHover
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonStacked_C::CallButtonHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonHover");

	UWBP_ButtonStacked_C_CallButtonHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonUnhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonStacked_C::CallButtonUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonUnhover");

	UWBP_ButtonStacked_C_CallButtonUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetIsActiveState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonStacked_C::SetIsActiveState(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetIsActiveState");

	UWBP_ButtonStacked_C_SetIsActiveState_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonStacked_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.PreConstruct");

	UWBP_ButtonStacked_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UWBP_ButtonStacked_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");

	UWBP_ButtonStacked_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.ExecuteUbergraph_WBP_ButtonStacked
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonStacked_C::ExecuteUbergraph_WBP_ButtonStacked(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.ExecuteUbergraph_WBP_ButtonStacked");

	UWBP_ButtonStacked_C_ExecuteUbergraph_WBP_ButtonStacked_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ButtonStacked_C::OnBtnStackedReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedReleased__DelegateSignature");

	UWBP_ButtonStacked_C_OnBtnStackedReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ButtonStacked_C::OnBtnStackedUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedUnhovered__DelegateSignature");

	UWBP_ButtonStacked_C_OnBtnStackedUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonStacked_C::OnBtnStackedHovered__DelegateSignature(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedHovered__DelegateSignature");

	UWBP_ButtonStacked_C_OnBtnStackedHovered__DelegateSignature_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ButtonStacked_C::OnBtnStackedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedClicked__DelegateSignature");

	UWBP_ButtonStacked_C_OnBtnStackedClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
