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

// Function MedDroneMenu.MedDroneMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMedDroneMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.Construct");

	UMedDroneMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenu.MedDroneMenu_C.OptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         Selected_Target                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMedDroneMenu_C::OptionSelected(class AKSPlayerState** Selected_Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.OptionSelected");

	UMedDroneMenu_C_OptionSelected_Params params;
	params.Selected_Target = Selected_Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenu.MedDroneMenu_C.BndEvt__OutButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMedDroneMenu_C::BndEvt__OutButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.BndEvt__OutButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UMedDroneMenu_C_BndEvt__OutButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenu.MedDroneMenu_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Should_Cancel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMedDroneMenu_C::Close(bool* Should_Cancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.Close");

	UMedDroneMenu_C_Close_Params params;
	params.Should_Cancel = Should_Cancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenu.MedDroneMenu_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UMedDroneMenu_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.InitializeWidgetNavigation");

	UMedDroneMenu_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenu.MedDroneMenu_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMedDroneMenu_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.InitializeWidget");

	UMedDroneMenu_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenu.MedDroneMenu_C.Handle Input State Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMedDroneMenu_C::Handle_Input_State_Change(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.Handle Input State Change");

	UMedDroneMenu_C_Handle_Input_State_Change_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MedDroneMenu.MedDroneMenu_C.ExecuteUbergraph_MedDroneMenu
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMedDroneMenu_C::ExecuteUbergraph_MedDroneMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.ExecuteUbergraph_MedDroneMenu");

	UMedDroneMenu_C_ExecuteUbergraph_MedDroneMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
