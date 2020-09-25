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

// Function WBP_PanelButton.WBP_PanelButton_C.SetIsDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bDisabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PanelButton_C::SetIsDisabled(bool* bDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.SetIsDisabled");

	UWBP_PanelButton_C_SetIsDisabled_Params params;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelButton.WBP_PanelButton_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PanelButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.NavigateConfirm");

	UWBP_PanelButton_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PanelButton.WBP_PanelButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PanelButton_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_PanelButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelButton.WBP_PanelButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PanelButton_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_PanelButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelButton.WBP_PanelButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PanelButton_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_PanelButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelButton.WBP_PanelButton_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_PanelButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.GamepadHover");

	UWBP_PanelButton_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelButton.WBP_PanelButton_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_PanelButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.GamepadUnhover");

	UWBP_PanelButton_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelButton.WBP_PanelButton_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_PanelButton_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.GamepadConfirm");

	UWBP_PanelButton_C_GamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelButton.WBP_PanelButton_C.Do Hover
// (BlueprintCallable, BlueprintEvent)

void UWBP_PanelButton_C::Do_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.Do Hover");

	UWBP_PanelButton_C_Do_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelButton.WBP_PanelButton_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_PanelButton_C::Do_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.Do Unhover");

	UWBP_PanelButton_C_Do_Unhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelButton.WBP_PanelButton_C.ExecuteUbergraph_WBP_PanelButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PanelButton_C::ExecuteUbergraph_WBP_PanelButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.ExecuteUbergraph_WBP_PanelButton");

	UWBP_PanelButton_C_ExecuteUbergraph_WBP_PanelButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelButton.WBP_PanelButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PanelButton_C::OnUnhovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.OnUnhovered__DelegateSignature");

	UWBP_PanelButton_C_OnUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelButton.WBP_PanelButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PanelButton_C::OnHovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.OnHovered__DelegateSignature");

	UWBP_PanelButton_C_OnHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelButton.WBP_PanelButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PanelButton_C::OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelButton.WBP_PanelButton_C.OnClicked__DelegateSignature");

	UWBP_PanelButton_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
