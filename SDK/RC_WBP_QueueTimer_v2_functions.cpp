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

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateCancelButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QueueTimer_v2_C::UpdateCancelButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateCancelButton");

	UWBP_QueueTimer_v2_C_UpdateCancelButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetNeutralLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_QueueTimer_v2_C::SetNeutralLabel(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetNeutralLabel");

	UWBP_QueueTimer_v2_C_SetNeutralLabel_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.GetColorFromPalette
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LinearColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueTimer_v2_C::GetColorFromPalette(struct FName* RowName, struct FLinearColor* LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.GetColorFromPalette");

	UWBP_QueueTimer_v2_C_GetColorFromPalette_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinearColor != nullptr)
		*LinearColor = params.LinearColor;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdatePenaltyTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QueueTimer_v2_C::UpdatePenaltyTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdatePenaltyTime");

	UWBP_QueueTimer_v2_C_UpdatePenaltyTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateStatusLabel
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QueueTimer_v2_C::UpdateStatusLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateStatusLabel");

	UWBP_QueueTimer_v2_C_UpdateStatusLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.HandleInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueTimer_v2_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.HandleInputStateChanged");

	UWBP_QueueTimer_v2_C_HandleInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetGamepadCallout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QueueTimer_v2_C::SetGamepadCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetGamepadCallout");

	UWBP_QueueTimer_v2_C_SetGamepadCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateQueueTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QueueTimer_v2_C::UpdateQueueTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateQueueTime");

	UWBP_QueueTimer_v2_C_UpdateQueueTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueTimer_v2_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidget");

	UWBP_QueueTimer_v2_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QueueTimer_v2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.Construct");

	UWBP_QueueTimer_v2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.CancelQueue
// (BlueprintCallable, BlueprintEvent)

void UWBP_QueueTimer_v2_C::CancelQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.CancelQueue");

	UWBP_QueueTimer_v2_C_CancelQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_QueueTimer_v2_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetNavigation");

	UWBP_QueueTimer_v2_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void UWBP_QueueTimer_v2_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetButtonListeners");

	UWBP_QueueTimer_v2_C_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueTimer_v2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.PreConstruct");

	UWBP_QueueTimer_v2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_QueueTimer_v2_C::BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_QueueTimer_v2_C_BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_QueueTimer_v2_C::BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_QueueTimer_v2_C_BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_QueueTimer_v2_C::BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UWBP_QueueTimer_v2_C_BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTime
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         TimeSecs                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueTimer_v2_C::OnUpdateQueueTime(float* TimeSecs)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTime");

	UWBP_QueueTimer_v2_C_OnUpdateQueueTime_Params params;
	params.TimeSecs = TimeSecs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTimerState
// (Event, Public, BlueprintEvent)
// Parameters:
// EQueueTimerState*              State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueTimer_v2_C::OnUpdateQueueTimerState(EQueueTimerState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTimerState");

	UWBP_QueueTimer_v2_C_OnUpdateQueueTimerState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnControlQueuePermissionUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          CanControl                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueTimer_v2_C::OnControlQueuePermissionUpdate(bool* CanControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnControlQueuePermissionUpdate");

	UWBP_QueueTimer_v2_C_OnControlQueuePermissionUpdate_Params params;
	params.CanControl = CanControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.ExecuteUbergraph_WBP_QueueTimer_v2
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueTimer_v2_C::ExecuteUbergraph_WBP_QueueTimer_v2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.ExecuteUbergraph_WBP_QueueTimer_v2");

	UWBP_QueueTimer_v2_C_ExecuteUbergraph_WBP_QueueTimer_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
