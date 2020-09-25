#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetDeserterStatusMessage
struct UWBP_HomeQuickPlay_C_GetDeserterStatusMessage_Params
{
	struct FText                                       OutDisplayText;                                           // (Parm, OutParm)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Apply Pending Display
struct UWBP_HomeQuickPlay_C_Apply_Pending_Display_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceVisualState
struct UWBP_HomeQuickPlay_C_ForceVisualState_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateQueueTimer
struct UWBP_HomeQuickPlay_C_UpdateQueueTimer_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateStatusModeDisplay
struct UWBP_HomeQuickPlay_C_UpdateStatusModeDisplay_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateDeserterCountdown
struct UWBP_HomeQuickPlay_C_UpdateDeserterCountdown_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleQuickPlayStateUpdate
struct UWBP_HomeQuickPlay_C_HandleQuickPlayStateUpdate_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TogglePlayBtnEnabled
struct UWBP_HomeQuickPlay_C_TogglePlayBtnEnabled_Params
{
	bool*                                              InIsEnabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ToggleSupplementaryBtnEnabled
struct UWBP_HomeQuickPlay_C_ToggleSupplementaryBtnEnabled_Params
{
	bool*                                              InIsEnabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ApplyKeyShortcutsEnabled
struct UWBP_HomeQuickPlay_C_ApplyKeyShortcutsEnabled_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetNavigationWidgets
struct UWBP_HomeQuickPlay_C_GetNavigationWidgets_Params
{
	TArray<class UPUMG_Widget*>                        Return_Value;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleInputModeChanged
struct UWBP_HomeQuickPlay_C_HandleInputModeChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetCurrentGameModeTextDisplay
struct UWBP_HomeQuickPlay_C_SetCurrentGameModeTextDisplay_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetupGamepadCallout
struct UWBP_HomeQuickPlay_C_SetupGamepadCallout_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickPlayButton
struct UWBP_HomeQuickPlay_C_ForceClickPlayButton_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_HomeQuickPlay_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_HomeQuickPlay_C_BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickSupplementaryButton
struct UWBP_HomeQuickPlay_C_ForceClickSupplementaryButton_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
struct UWBP_HomeQuickPlay_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
struct UWBP_HomeQuickPlay_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
struct UWBP_HomeQuickPlay_C_BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
struct UWBP_HomeQuickPlay_C_BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceUnhoverSupplementaryBtn
struct UWBP_HomeQuickPlay_C_ForceUnhoverSupplementaryBtn_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceHoverSupplementaryBtn
struct UWBP_HomeQuickPlay_C_ForceHoverSupplementaryBtn_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQuickPlayState
struct UWBP_HomeQuickPlay_C_OnUpdateQuickPlayState_Params
{
	EQuickPlayQueueState*                              QueueState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdatePenaltyTimeLeft
struct UWBP_HomeQuickPlay_C_OnUpdatePenaltyTimeLeft_Params
{
	int*                                               TimeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnSelectedQueueUpdate
struct UWBP_HomeQuickPlay_C_OnSelectedQueueUpdate_Params
{
	struct FClientQueueInfo*                           CurrentSelectedQueue;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.InitializeWidgetNavigation
struct UWBP_HomeQuickPlay_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnQueueStateUpdate
struct UWBP_HomeQuickPlay_C_OnQueueStateUpdate_Params
{
	EPUMG_MatchStatus*                                 CurrentMatchStatus;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Construct
struct UWBP_HomeQuickPlay_C_Construct_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.PreConstruct
struct UWBP_HomeQuickPlay_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnTransitionAnimationFinished
struct UWBP_HomeQuickPlay_C_OnTransitionAnimationFinished_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleTriggerStatusModeEvent
struct UWBP_HomeQuickPlay_C_HandleTriggerStatusModeEvent_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQueueTimeElapsed
struct UWBP_HomeQuickPlay_C_OnUpdateQueueTimeElapsed_Params
{
	float*                                             TimeElapsed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Pending Queue Update Timeout
struct UWBP_HomeQuickPlay_C_Pending_Queue_Update_Timeout_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnInitialized
struct UWBP_HomeQuickPlay_C_OnInitialized_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleCustomQueueUpdate
struct UWBP_HomeQuickPlay_C_HandleCustomQueueUpdate_Params
{
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ExecuteUbergraph_WBP_HomeQuickPlay
struct UWBP_HomeQuickPlay_C_ExecuteUbergraph_WBP_HomeQuickPlay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TriggerStatusModeDisplayUpdate__DelegateSignature
struct UWBP_HomeQuickPlay_C_TriggerStatusModeDisplayUpdate__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
