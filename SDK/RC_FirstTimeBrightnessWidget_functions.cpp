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

// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.OnShown
// (Event, Public, BlueprintEvent)

void UFirstTimeBrightnessWidget_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.OnShown");

	UFirstTimeBrightnessWidget_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.OnHide
// (Event, Public, BlueprintEvent)

void UFirstTimeBrightnessWidget_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.OnHide");

	UFirstTimeBrightnessWidget_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFirstTimeBrightnessWidget_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.InitializeWidget");

	UFirstTimeBrightnessWidget_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UFirstTimeBrightnessWidget_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.InitializeWidgetNavigation");

	UFirstTimeBrightnessWidget_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFirstTimeBrightnessWidget_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UFirstTimeBrightnessWidget_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFirstTimeBrightnessWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.PreConstruct");

	UFirstTimeBrightnessWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.ExecuteUbergraph_FirstTimeBrightnessWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFirstTimeBrightnessWidget_C::ExecuteUbergraph_FirstTimeBrightnessWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.ExecuteUbergraph_FirstTimeBrightnessWidget");

	UFirstTimeBrightnessWidget_C_ExecuteUbergraph_FirstTimeBrightnessWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
