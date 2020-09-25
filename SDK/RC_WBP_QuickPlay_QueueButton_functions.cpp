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

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.UpdateStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_QueueButton_C::UpdateStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.UpdateStatus");

	UWBP_QuickPlay_QueueButton_C_UpdateStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QuickPlay_QueueButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.NavigateConfirm");

	UWBP_QuickPlay_QueueButton_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_QuickPlay_QueueButton_C::BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature");

	UWBP_QuickPlay_QueueButton_C_BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_QueueButton_C::BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature");

	UWBP_QuickPlay_QueueButton_C_BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature
// (BlueprintEvent)

void UWBP_QuickPlay_QueueButton_C::BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature");

	UWBP_QuickPlay_QueueButton_C_BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_QueueButton_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.InitializeWidget");

	UWBP_QuickPlay_QueueButton_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuickPlay_QueueButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.Construct");

	UWBP_QuickPlay_QueueButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_QueueButton_C::OnButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnButtonHovered");

	UWBP_QuickPlay_QueueButton_C_OnButtonHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnButtonUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_QueueButton_C::OnButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnButtonUnhovered");

	UWBP_QuickPlay_QueueButton_C_OnButtonUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_QuickPlay_QueueButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadHover");

	UWBP_QuickPlay_QueueButton_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_QuickPlay_QueueButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadUnhover");

	UWBP_QuickPlay_QueueButton_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_QueueButton_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadConfirm");

	UWBP_QuickPlay_QueueButton_C_GamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.SetButtonActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_QueueButton_C::SetButtonActive(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.SetButtonActive");

	UWBP_QuickPlay_QueueButton_C_SetButtonActive_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_QueueButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.PreConstruct");

	UWBP_QuickPlay_QueueButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.ExecuteUbergraph_WBP_QuickPlay_QueueButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_QueueButton_C::ExecuteUbergraph_WBP_QuickPlay_QueueButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.ExecuteUbergraph_WBP_QuickPlay_QueueButton");

	UWBP_QuickPlay_QueueButton_C_ExecuteUbergraph_WBP_QuickPlay_QueueButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                UnhoverWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QuickPlay_QueueButton_C::OnQueueBtnUnhovered__DelegateSignature(class UWidget** UnhoverWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnUnhovered__DelegateSignature");

	UWBP_QuickPlay_QueueButton_C_OnQueueBtnUnhovered__DelegateSignature_Params params;
	params.UnhoverWidget = UnhoverWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                HoveredWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QuickPlay_QueueButton_C::OnQueueBtnHovered__DelegateSignature(class UWidget** HoveredWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnHovered__DelegateSignature");

	UWBP_QuickPlay_QueueButton_C_OnQueueBtnHovered__DelegateSignature_Params params;
	params.HoveredWidget = HoveredWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           QueueId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_QueueButton_C::OnQueueBtnClicked__DelegateSignature(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnClicked__DelegateSignature");

	UWBP_QuickPlay_QueueButton_C_OnQueueBtnClicked__DelegateSignature_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
