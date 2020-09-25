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

// Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UFirstTimeSafeZoneWidget_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.InitializeWidgetNavigation");

	UFirstTimeSafeZoneWidget_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFirstTimeSafeZoneWidget_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.InitializeWidget");

	UFirstTimeSafeZoneWidget_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.OnShown
// (Event, Public, BlueprintEvent)

void UFirstTimeSafeZoneWidget_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.OnShown");

	UFirstTimeSafeZoneWidget_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFirstTimeSafeZoneWidget_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UFirstTimeSafeZoneWidget_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFirstTimeSafeZoneWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.PreConstruct");

	UFirstTimeSafeZoneWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.ExecuteUbergraph_FirstTimeSafeZoneWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFirstTimeSafeZoneWidget_C::ExecuteUbergraph_FirstTimeSafeZoneWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.ExecuteUbergraph_FirstTimeSafeZoneWidget");

	UFirstTimeSafeZoneWidget_C_ExecuteUbergraph_FirstTimeSafeZoneWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
