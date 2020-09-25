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

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_Guided_Tutorial_Tips_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.NavigateBack");

	UWBP_Guided_Tutorial_Tips_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.GuidedTutorialShown
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::GuidedTutorialShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.GuidedTutorialShown");

	UWBP_Guided_Tutorial_Tips_C_GuidedTutorialShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.SetTipMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGuidedMenuCalloutData** CalloutData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Guided_Tutorial_Tips_C::SetTipMode(class UGuidedMenuCalloutData** CalloutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.SetTipMode");

	UWBP_Guided_Tutorial_Tips_C_SetTipMode_Params params;
	params.CalloutData = CalloutData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.Construct");

	UWBP_Guided_Tutorial_Tips_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Guided_Tutorial_Tips_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidget");

	UWBP_Guided_Tutorial_Tips_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWBP_Guided_Tutorial_Tips_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCloseHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Guided_Tutorial_Tips_C::HandleCloseHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCloseHovered");

	UWBP_Guided_Tutorial_Tips_C_HandleCloseHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCLoseUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Guided_Tutorial_Tips_C::HandleCLoseUnhovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCLoseUnhovered");

	UWBP_Guided_Tutorial_Tips_C_HandleCLoseUnhovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidgetNavigation");

	UWBP_Guided_Tutorial_Tips_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnShown");

	UWBP_Guided_Tutorial_Tips_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Guided_Tutorial_Tips_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.PreConstruct");

	UWBP_Guided_Tutorial_Tips_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.CloseScene
// (BlueprintCallable, BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::CloseScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.CloseScene");

	UWBP_Guided_Tutorial_Tips_C_CloseScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Guided_Tutorial_Tips_C::BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_Guided_Tutorial_Tips_C_BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnBackPrompt");

	UWBP_Guided_Tutorial_Tips_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.ExecuteUbergraph_WBP_Guided_Tutorial_Tips
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Guided_Tutorial_Tips_C::ExecuteUbergraph_WBP_Guided_Tutorial_Tips(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.ExecuteUbergraph_WBP_Guided_Tutorial_Tips");

	UWBP_Guided_Tutorial_Tips_C_ExecuteUbergraph_WBP_Guided_Tutorial_Tips_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
