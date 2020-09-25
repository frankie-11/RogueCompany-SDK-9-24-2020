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

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.SetTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           BaseColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StorePanelButton_C::SetTint(struct FLinearColor* BaseColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.SetTint");

	UWBP_StorePanelButton_C_SetTint_Params params;
	params.BaseColor = BaseColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnHoveredLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StorePanelButton_C::OnHoveredLogic(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnHoveredLogic");

	UWBP_StorePanelButton_C_OnHoveredLogic_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_StorePanelButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.NavigateConfirm");

	UWBP_StorePanelButton_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnClickSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_StorePanelButton_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnClickSound");

	UWBP_StorePanelButton_C_OnClickSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnHoverSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_StorePanelButton_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnHoverSound");

	UWBP_StorePanelButton_C_OnHoverSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StorePanelButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.Construct");

	UWBP_StorePanelButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnGamepadConfirmed
// (BlueprintCallable, BlueprintEvent)

void UWBP_StorePanelButton_C::OnGamepadConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnGamepadConfirmed");

	UWBP_StorePanelButton_C_OnGamepadConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StorePanelButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_StorePanelButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StorePanelButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_StorePanelButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StorePanelButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_StorePanelButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_StorePanelButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.GamepadHover");

	UWBP_StorePanelButton_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_StorePanelButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.GamepadUnhover");

	UWBP_StorePanelButton_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.DisableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShouldDisable                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StorePanelButton_C::DisableButton(bool* bShouldDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.DisableButton");

	UWBP_StorePanelButton_C_DisableButton_Params params;
	params.bShouldDisable = bShouldDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.CallButtonHover
// (BlueprintCallable, BlueprintEvent)

void UWBP_StorePanelButton_C::CallButtonHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.CallButtonHover");

	UWBP_StorePanelButton_C_CallButtonHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.CallButtonUnhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_StorePanelButton_C::CallButtonUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.CallButtonUnhover");

	UWBP_StorePanelButton_C_CallButtonUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StorePanelButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.PreConstruct");

	UWBP_StorePanelButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StorePanelButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UWBP_StorePanelButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StorePanelButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UWBP_StorePanelButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.ExecuteUbergraph_WBP_StorePanelButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StorePanelButton_C::ExecuteUbergraph_WBP_StorePanelButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.ExecuteUbergraph_WBP_StorePanelButton");

	UWBP_StorePanelButton_C_ExecuteUbergraph_WBP_StorePanelButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StorePanelButton_C::OnBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnUnhovered__DelegateSignature");

	UWBP_StorePanelButton_C_OnBtnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StorePanelButton_C::OnBtnHovered__DelegateSignature(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnHovered__DelegateSignature");

	UWBP_StorePanelButton_C_OnBtnHovered__DelegateSignature_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StorePanelButton_C::OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnClicked__DelegateSignature");

	UWBP_StorePanelButton_C_OnBtnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
