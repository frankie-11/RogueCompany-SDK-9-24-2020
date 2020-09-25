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

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateCancelButton
struct UWBP_QueueTimer_v2_C_UpdateCancelButton_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetNeutralLabel
struct UWBP_QueueTimer_v2_C_SetNeutralLabel_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.GetColorFromPalette
struct UWBP_QueueTimer_v2_C_GetColorFromPalette_Params
{
	struct FName*                                      RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LinearColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdatePenaltyTime
struct UWBP_QueueTimer_v2_C_UpdatePenaltyTime_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateStatusLabel
struct UWBP_QueueTimer_v2_C_UpdateStatusLabel_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.HandleInputStateChanged
struct UWBP_QueueTimer_v2_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetGamepadCallout
struct UWBP_QueueTimer_v2_C_SetGamepadCallout_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateQueueTime
struct UWBP_QueueTimer_v2_C_UpdateQueueTime_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidget
struct UWBP_QueueTimer_v2_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.Construct
struct UWBP_QueueTimer_v2_C_Construct_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.CancelQueue
struct UWBP_QueueTimer_v2_C_CancelQueue_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetNavigation
struct UWBP_QueueTimer_v2_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetButtonListeners
struct UWBP_QueueTimer_v2_C_InitializeWidgetButtonListeners_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.PreConstruct
struct UWBP_QueueTimer_v2_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_QueueTimer_v2_C_BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_QueueTimer_v2_C_BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UWBP_QueueTimer_v2_C_BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTime
struct UWBP_QueueTimer_v2_C_OnUpdateQueueTime_Params
{
	float*                                             TimeSecs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTimerState
struct UWBP_QueueTimer_v2_C_OnUpdateQueueTimerState_Params
{
	EQueueTimerState*                                  State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnControlQueuePermissionUpdate
struct UWBP_QueueTimer_v2_C_OnControlQueuePermissionUpdate_Params
{
	bool*                                              CanControl;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.ExecuteUbergraph_WBP_QueueTimer_v2
struct UWBP_QueueTimer_v2_C_ExecuteUbergraph_WBP_QueueTimer_v2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
