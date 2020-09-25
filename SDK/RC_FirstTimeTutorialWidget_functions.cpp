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

// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UFirstTimeTutorialWidget_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.InitializeWidgetNavigation");

	UFirstTimeTutorialWidget_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.OnShown
// (Event, Public, BlueprintEvent)

void UFirstTimeTutorialWidget_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.OnShown");

	UFirstTimeTutorialWidget_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFirstTimeTutorialWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.PreConstruct");

	UFirstTimeTutorialWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFirstTimeTutorialWidget_C::BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UFirstTimeTutorialWidget_C_BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFirstTimeTutorialWidget_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UFirstTimeTutorialWidget_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature
// (BlueprintEvent)

void UFirstTimeTutorialWidget_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature");

	UFirstTimeTutorialWidget_C_BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.ExecuteUbergraph_FirstTimeTutorialWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFirstTimeTutorialWidget_C::ExecuteUbergraph_FirstTimeTutorialWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.ExecuteUbergraph_FirstTimeTutorialWidget");

	UFirstTimeTutorialWidget_C_ExecuteUbergraph_FirstTimeTutorialWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
