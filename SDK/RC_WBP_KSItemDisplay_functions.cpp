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

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnButtonHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSItemDisplay_C::OnButtonHovered(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnButtonHovered");

	UWBP_KSItemDisplay_C_OnButtonHovered_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnHoverSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_KSItemDisplay_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnHoverSound");

	UWBP_KSItemDisplay_C_OnHoverSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_KSItemDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_KSItemDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.PopulateSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                KSItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSItemDisplay_C::PopulateSlot(class UKSItem** KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.PopulateSlot");

	UWBP_KSItemDisplay_C_PopulateSlot_Params params;
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_KSItemDisplay_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.GamepadHover");

	UWBP_KSItemDisplay_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_KSItemDisplay_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.GamepadUnhover");

	UWBP_KSItemDisplay_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_KSItemDisplay_C::BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_KSItemDisplay_C_BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_KSItemDisplay_C::BndEvt__Button_111_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_KSItemDisplay_C_BndEvt__Button_111_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.SetIsActiveState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSItemDisplay_C::SetIsActiveState(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.SetIsActiveState");

	UWBP_KSItemDisplay_C_SetIsActiveState_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.ExecuteUbergraph_WBP_KSItemDisplay
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSItemDisplay_C::ExecuteUbergraph_WBP_KSItemDisplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.ExecuteUbergraph_WBP_KSItemDisplay");

	UWBP_KSItemDisplay_C_ExecuteUbergraph_WBP_KSItemDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                PerkItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSItemDisplay_C::OnClick__DelegateSignature(class UKSItem** PerkItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnClick__DelegateSignature");

	UWBP_KSItemDisplay_C_OnClick__DelegateSignature_Params params;
	params.PerkItem = PerkItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_KSItemDisplay_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnUnhover__DelegateSignature");

	UWBP_KSItemDisplay_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                KSItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSItemDisplay_C::OnHover__DelegateSignature(class UKSItem** KSItem, bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnHover__DelegateSignature");

	UWBP_KSItemDisplay_C_OnHover__DelegateSignature_Params params;
	params.KSItem = KSItem;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
