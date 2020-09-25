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

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.RestoreDefaultColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::RestoreDefaultColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.RestoreDefaultColor");

	UWBP_ButtonSlot_Cosmetic_C_RestoreDefaultColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OverrideColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           New_Base_Color                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           New_Highlight_Color            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonSlot_Cosmetic_C::OverrideColor(struct FLinearColor* New_Base_Color, struct FLinearColor* New_Highlight_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OverrideColor");

	UWBP_ButtonSlot_Cosmetic_C_OverrideColor_Params params;
	params.New_Base_Color = New_Base_Color;
	params.New_Highlight_Color = New_Highlight_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           BaseColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           HighlightColor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonSlot_Cosmetic_C::SetTint(struct FLinearColor* BaseColor, struct FLinearColor* HighlightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetTint");

	UWBP_ButtonSlot_Cosmetic_C_SetTint_Params params;
	params.BaseColor = BaseColor;
	params.HighlightColor = HighlightColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoveredLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonSlot_Cosmetic_C::OnHoveredLogic(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoveredLogic");

	UWBP_ButtonSlot_Cosmetic_C_OnHoveredLogic_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ButtonSlot_Cosmetic_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.NavigateConfirm");

	UWBP_ButtonSlot_Cosmetic_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoverSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoverSound");

	UWBP_ButtonSlot_Cosmetic_C_OnHoverSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Construct");

	UWBP_ButtonSlot_Cosmetic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnGamepadConfirmed
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::OnGamepadConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnGamepadConfirmed");

	UWBP_ButtonSlot_Cosmetic_C_OnGamepadConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadHover");

	UWBP_ButtonSlot_Cosmetic_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadUnhover");

	UWBP_ButtonSlot_Cosmetic_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.DisableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShouldDisable                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonSlot_Cosmetic_C::DisableButton(bool* bShouldDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.DisableButton");

	UWBP_ButtonSlot_Cosmetic_C_DisableButton_Params params;
	params.bShouldDisable = bShouldDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonHover
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::CallButtonHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonHover");

	UWBP_ButtonSlot_Cosmetic_C_CallButtonHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonUnhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::CallButtonUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonUnhover");

	UWBP_ButtonSlot_Cosmetic_C_CallButtonUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetIsActiveState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonSlot_Cosmetic_C::SetIsActiveState(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetIsActiveState");

	UWBP_ButtonSlot_Cosmetic_C_SetIsActiveState_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonSlot_Cosmetic_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PreConstruct");

	UWBP_ButtonSlot_Cosmetic_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnClickSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnClickSound");

	UWBP_ButtonSlot_Cosmetic_C_OnClickSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ExecuteUbergraph_WBP_ButtonSlot_Cosmetic
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonSlot_Cosmetic_C::ExecuteUbergraph_WBP_ButtonSlot_Cosmetic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ExecuteUbergraph_WBP_ButtonSlot_Cosmetic");

	UWBP_ButtonSlot_Cosmetic_C_ExecuteUbergraph_WBP_ButtonSlot_Cosmetic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::OnBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnUnhovered__DelegateSignature");

	UWBP_ButtonSlot_Cosmetic_C_OnBtnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonSlot_Cosmetic_C::OnBtnHovered__DelegateSignature(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnHovered__DelegateSignature");

	UWBP_ButtonSlot_Cosmetic_C_OnBtnHovered__DelegateSignature_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnClicked__DelegateSignature");

	UWBP_ButtonSlot_Cosmetic_C_OnBtnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
