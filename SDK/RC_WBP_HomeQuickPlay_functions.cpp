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

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetDeserterStatusMessage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   OutDisplayText                 (Parm, OutParm)

void UWBP_HomeQuickPlay_C::GetDeserterStatusMessage(struct FText* OutDisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetDeserterStatusMessage");

	UWBP_HomeQuickPlay_C_GetDeserterStatusMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDisplayText != nullptr)
		*OutDisplayText = params.OutDisplayText;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Apply Pending Display
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::Apply_Pending_Display()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Apply Pending Display");

	UWBP_HomeQuickPlay_C_Apply_Pending_Display_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceVisualState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::ForceVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceVisualState");

	UWBP_HomeQuickPlay_C_ForceVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateQueueTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::UpdateQueueTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateQueueTimer");

	UWBP_HomeQuickPlay_C_UpdateQueueTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateStatusModeDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::UpdateStatusModeDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateStatusModeDisplay");

	UWBP_HomeQuickPlay_C_UpdateStatusModeDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateDeserterCountdown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::UpdateDeserterCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateDeserterCountdown");

	UWBP_HomeQuickPlay_C_UpdateDeserterCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleQuickPlayStateUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::HandleQuickPlayStateUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleQuickPlayStateUpdate");

	UWBP_HomeQuickPlay_C_HandleQuickPlayStateUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TogglePlayBtnEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InIsEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeQuickPlay_C::TogglePlayBtnEnabled(bool* InIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TogglePlayBtnEnabled");

	UWBP_HomeQuickPlay_C_TogglePlayBtnEnabled_Params params;
	params.InIsEnabled = InIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ToggleSupplementaryBtnEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InIsEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeQuickPlay_C::ToggleSupplementaryBtnEnabled(bool* InIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ToggleSupplementaryBtnEnabled");

	UWBP_HomeQuickPlay_C_ToggleSupplementaryBtnEnabled_Params params;
	params.InIsEnabled = InIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ApplyKeyShortcutsEnabled
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::ApplyKeyShortcutsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ApplyKeyShortcutsEnabled");

	UWBP_HomeQuickPlay_C_ApplyKeyShortcutsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetNavigationWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Return_Value                   (Parm, OutParm, ZeroConstructor)

void UWBP_HomeQuickPlay_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetNavigationWidgets");

	UWBP_HomeQuickPlay_C_GetNavigationWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputMode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeQuickPlay_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleInputModeChanged");

	UWBP_HomeQuickPlay_C_HandleInputModeChanged_Params params;
	params.InputMode = InputMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetCurrentGameModeTextDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::SetCurrentGameModeTextDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetCurrentGameModeTextDisplay");

	UWBP_HomeQuickPlay_C_SetCurrentGameModeTextDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetupGamepadCallout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::SetupGamepadCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetupGamepadCallout");

	UWBP_HomeQuickPlay_C_SetupGamepadCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickPlayButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::ForceClickPlayButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickPlayButton");

	UWBP_HomeQuickPlay_C_ForceClickPlayButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HomeQuickPlay_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWBP_HomeQuickPlay_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HomeQuickPlay_C::BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWBP_HomeQuickPlay_C_BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickSupplementaryButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::ForceClickSupplementaryButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickSupplementaryButton");

	UWBP_HomeQuickPlay_C_ForceClickSupplementaryButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_HomeQuickPlay_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");

	UWBP_HomeQuickPlay_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_HomeQuickPlay_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature");

	UWBP_HomeQuickPlay_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_HomeQuickPlay_C::BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");

	UWBP_HomeQuickPlay_C_BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_HomeQuickPlay_C::BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature");

	UWBP_HomeQuickPlay_C_BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceUnhoverSupplementaryBtn
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::ForceUnhoverSupplementaryBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceUnhoverSupplementaryBtn");

	UWBP_HomeQuickPlay_C_ForceUnhoverSupplementaryBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceHoverSupplementaryBtn
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::ForceHoverSupplementaryBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceHoverSupplementaryBtn");

	UWBP_HomeQuickPlay_C_ForceHoverSupplementaryBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQuickPlayState
// (Event, Protected, BlueprintEvent)
// Parameters:
// EQuickPlayQueueState*          QueueState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeQuickPlay_C::OnUpdateQuickPlayState(EQuickPlayQueueState* QueueState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQuickPlayState");

	UWBP_HomeQuickPlay_C_OnUpdateQuickPlayState_Params params;
	params.QueueState = QueueState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdatePenaltyTimeLeft
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           TimeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeQuickPlay_C::OnUpdatePenaltyTimeLeft(int* TimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdatePenaltyTimeLeft");

	UWBP_HomeQuickPlay_C_OnUpdatePenaltyTimeLeft_Params params;
	params.TimeLeft = TimeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnSelectedQueueUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FClientQueueInfo*       CurrentSelectedQueue           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_HomeQuickPlay_C::OnSelectedQueueUpdate(struct FClientQueueInfo* CurrentSelectedQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnSelectedQueueUpdate");

	UWBP_HomeQuickPlay_C_OnSelectedQueueUpdate_Params params;
	params.CurrentSelectedQueue = CurrentSelectedQueue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_HomeQuickPlay_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.InitializeWidgetNavigation");

	UWBP_HomeQuickPlay_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnQueueStateUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// EPUMG_MatchStatus*             CurrentMatchStatus             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeQuickPlay_C::OnQueueStateUpdate(EPUMG_MatchStatus* CurrentMatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnQueueStateUpdate");

	UWBP_HomeQuickPlay_C_OnQueueStateUpdate_Params params;
	params.CurrentMatchStatus = CurrentMatchStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HomeQuickPlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Construct");

	UWBP_HomeQuickPlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeQuickPlay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.PreConstruct");

	UWBP_HomeQuickPlay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnTransitionAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::OnTransitionAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnTransitionAnimationFinished");

	UWBP_HomeQuickPlay_C_OnTransitionAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleTriggerStatusModeEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::HandleTriggerStatusModeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleTriggerStatusModeEvent");

	UWBP_HomeQuickPlay_C_HandleTriggerStatusModeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQueueTimeElapsed
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         TimeElapsed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeQuickPlay_C::OnUpdateQueueTimeElapsed(float* TimeElapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQueueTimeElapsed");

	UWBP_HomeQuickPlay_C_OnUpdateQueueTimeElapsed_Params params;
	params.TimeElapsed = TimeElapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Pending Queue Update Timeout
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::Pending_Queue_Update_Timeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Pending Queue Update Timeout");

	UWBP_HomeQuickPlay_C_Pending_Queue_Update_Timeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HomeQuickPlay_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnInitialized");

	UWBP_HomeQuickPlay_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleCustomQueueUpdate
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::HandleCustomQueueUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleCustomQueueUpdate");

	UWBP_HomeQuickPlay_C_HandleCustomQueueUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ExecuteUbergraph_WBP_HomeQuickPlay
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeQuickPlay_C::ExecuteUbergraph_WBP_HomeQuickPlay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ExecuteUbergraph_WBP_HomeQuickPlay");

	UWBP_HomeQuickPlay_C_ExecuteUbergraph_WBP_HomeQuickPlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TriggerStatusModeDisplayUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_HomeQuickPlay_C::TriggerStatusModeDisplayUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TriggerStatusModeDisplayUpdate__DelegateSignature");

	UWBP_HomeQuickPlay_C_TriggerStatusModeDisplayUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
