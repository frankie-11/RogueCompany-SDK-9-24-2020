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

// Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnHoveredLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonArrow_C::OnHoveredLogic(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnHoveredLogic");

	UWBP_ButtonArrow_C_OnHoveredLogic_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ButtonArrow_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.NavigateConfirm");

	UWBP_ButtonArrow_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnClickSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonArrow_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnClickSound");

	UWBP_ButtonArrow_C_OnClickSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnHoverSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonArrow_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnHoverSound");

	UWBP_ButtonArrow_C_OnHoverSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ButtonArrow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.Construct");

	UWBP_ButtonArrow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnGamepadConfirmed
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonArrow_C::OnGamepadConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnGamepadConfirmed");

	UWBP_ButtonArrow_C_OnGamepadConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonArrow_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_ButtonArrow_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonArrow_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_ButtonArrow_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ButtonArrow_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_ButtonArrow_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_ButtonArrow_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.GamepadHover");

	UWBP_ButtonArrow_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_ButtonArrow_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.GamepadUnhover");

	UWBP_ButtonArrow_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.DisableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShouldDisable                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonArrow_C::DisableButton(bool* bShouldDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.DisableButton");

	UWBP_ButtonArrow_C_DisableButton_Params params;
	params.bShouldDisable = bShouldDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.CallButtonHover
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonArrow_C::CallButtonHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.CallButtonHover");

	UWBP_ButtonArrow_C_CallButtonHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.CallButtonUnhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_ButtonArrow_C::CallButtonUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.CallButtonUnhover");

	UWBP_ButtonArrow_C_CallButtonUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonArrow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.PreConstruct");

	UWBP_ButtonArrow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.ExecuteUbergraph_WBP_ButtonArrow
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonArrow_C::ExecuteUbergraph_WBP_ButtonArrow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.ExecuteUbergraph_WBP_ButtonArrow");

	UWBP_ButtonArrow_C_ExecuteUbergraph_WBP_ButtonArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ButtonArrow_C::OnBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnUnhovered__DelegateSignature");

	UWBP_ButtonArrow_C_OnBtnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ButtonArrow_C::OnBtnHovered__DelegateSignature(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnHovered__DelegateSignature");

	UWBP_ButtonArrow_C_OnBtnHovered__DelegateSignature_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ButtonArrow_C::OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnClicked__DelegateSignature");

	UWBP_ButtonArrow_C_OnBtnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
