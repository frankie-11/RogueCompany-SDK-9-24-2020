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

// Function MedDroneMenuOption.MedDroneMenuOption_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMedDroneMenuOption_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.NavigateBack");

	UMedDroneMenuOption_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMedDroneMenuOption_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.NavigateConfirm");

	UMedDroneMenuOption_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMedDroneMenuOption_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.Construct");

	UMedDroneMenuOption_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMedDroneMenuOption_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UMedDroneMenuOption_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.Target Player Check Validity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMedDroneMenuOption_C::Target_Player_Check_Validity(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.Target Player Check Validity");

	UMedDroneMenuOption_C_Target_Player_Check_Validity_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.TargetSelected
// (BlueprintCallable, BlueprintEvent)

void UMedDroneMenuOption_C::TargetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.TargetSelected");

	UMedDroneMenuOption_C_TargetSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMedDroneMenuOption_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UMedDroneMenuOption_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UMedDroneMenuOption_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.GamepadHover");

	UMedDroneMenuOption_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMedDroneMenuOption_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UMedDroneMenuOption_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UMedDroneMenuOption_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.GamepadUnhover");

	UMedDroneMenuOption_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.ExecuteUbergraph_MedDroneMenuOption
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMedDroneMenuOption_C::ExecuteUbergraph_MedDroneMenuOption(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.ExecuteUbergraph_MedDroneMenuOption");

	UMedDroneMenuOption_C_ExecuteUbergraph_MedDroneMenuOption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         Selected_Target                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMedDroneMenuOption_C::Selected__DelegateSignature(class AKSPlayerState** Selected_Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.Selected__DelegateSignature");

	UMedDroneMenuOption_C_Selected__DelegateSignature_Params params;
	params.Selected_Target = Selected_Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
