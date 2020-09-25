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

// Function Checkbox.Checkbox_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCheckbox_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkbox.Checkbox_C.NavigateConfirm");

	UCheckbox_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCheckbox_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UCheckbox_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCheckbox_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UCheckbox_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCheckbox_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UCheckbox_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Checkbox.Checkbox_C.SetCheckedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheckbox_C::SetCheckedState(bool* Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkbox.Checkbox_C.SetCheckedState");

	UCheckbox_C_SetCheckedState_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Checkbox.Checkbox_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UCheckbox_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkbox.Checkbox_C.GamepadConfirm");

	UCheckbox_C_GamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Checkbox.Checkbox_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UCheckbox_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkbox.Checkbox_C.GamepadHover");

	UCheckbox_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Checkbox.Checkbox_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UCheckbox_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkbox.Checkbox_C.GamepadUnhover");

	UCheckbox_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Checkbox.Checkbox_C.ExecuteUbergraph_Checkbox
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheckbox_C::ExecuteUbergraph_Checkbox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkbox.Checkbox_C.ExecuteUbergraph_Checkbox");

	UCheckbox_C_ExecuteUbergraph_Checkbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Checkbox.Checkbox_C.OnCheckChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheckbox_C::OnCheckChanged__DelegateSignature(bool* Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkbox.Checkbox_C.OnCheckChanged__DelegateSignature");

	UCheckbox_C_OnCheckChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
