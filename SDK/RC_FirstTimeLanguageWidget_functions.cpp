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

// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFirstTimeLanguageWidget_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.InitializeWidget");

	UFirstTimeLanguageWidget_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnShown
// (Event, Public, BlueprintEvent)

void UFirstTimeLanguageWidget_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnShown");

	UFirstTimeLanguageWidget_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFirstTimeLanguageWidget_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UFirstTimeLanguageWidget_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFirstTimeLanguageWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.PreConstruct");

	UFirstTimeLanguageWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.HandleInputState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFirstTimeLanguageWidget_C::HandleInputState(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.HandleInputState");

	UFirstTimeLanguageWidget_C_HandleInputState_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.SaveSetting
// (BlueprintCallable, BlueprintEvent)

void UFirstTimeLanguageWidget_C::SaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.SaveSetting");

	UFirstTimeLanguageWidget_C_SaveSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnHide
// (Event, Public, BlueprintEvent)

void UFirstTimeLanguageWidget_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnHide");

	UFirstTimeLanguageWidget_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnSettingSelected
// (BlueprintCallable, BlueprintEvent)

void UFirstTimeLanguageWidget_C::OnSettingSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnSettingSelected");

	UFirstTimeLanguageWidget_C_OnSettingSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.ExecuteUbergraph_FirstTimeLanguageWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFirstTimeLanguageWidget_C::ExecuteUbergraph_FirstTimeLanguageWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.ExecuteUbergraph_FirstTimeLanguageWidget");

	UFirstTimeLanguageWidget_C_ExecuteUbergraph_FirstTimeLanguageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
