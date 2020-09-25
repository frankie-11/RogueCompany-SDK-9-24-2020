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

// Function StandardButton.StandardButton_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStandardButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.NavigateConfirm");

	UStandardButton_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StandardButton.StandardButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStandardButton_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStandardButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardButton.StandardButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStandardButton_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStandardButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardButton.StandardButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStandardButton_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStandardButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardButton.StandardButton_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UStandardButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.GamepadHover");

	UStandardButton_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardButton.StandardButton_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UStandardButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.GamepadUnhover");

	UStandardButton_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardButton.StandardButton_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UStandardButton_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.GamepadConfirm");

	UStandardButton_C_GamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardButton.StandardButton_C.Do Hover
// (BlueprintCallable, BlueprintEvent)

void UStandardButton_C::Do_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.Do Hover");

	UStandardButton_C_Do_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardButton.StandardButton_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)

void UStandardButton_C::Do_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.Do Unhover");

	UStandardButton_C_Do_Unhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardButton.StandardButton_C.ExecuteUbergraph_StandardButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStandardButton_C::ExecuteUbergraph_StandardButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.ExecuteUbergraph_StandardButton");

	UStandardButton_C_ExecuteUbergraph_StandardButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardButton.StandardButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStandardButton_C::OnUnhovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.OnUnhovered__DelegateSignature");

	UStandardButton_C_OnUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardButton.StandardButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStandardButton_C::OnHovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.OnHovered__DelegateSignature");

	UStandardButton_C_OnHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardButton.StandardButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStandardButton_C::OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardButton.StandardButton_C.OnClicked__DelegateSignature");

	UStandardButton_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
