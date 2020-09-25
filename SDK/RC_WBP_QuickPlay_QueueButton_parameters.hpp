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

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.UpdateStatus
struct UWBP_QuickPlay_QueueButton_C_UpdateStatus_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.NavigateConfirm
struct UWBP_QuickPlay_QueueButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature
struct UWBP_QuickPlay_QueueButton_C_BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature
struct UWBP_QuickPlay_QueueButton_C_BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature
struct UWBP_QuickPlay_QueueButton_C_BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.InitializeWidget
struct UWBP_QuickPlay_QueueButton_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.Construct
struct UWBP_QuickPlay_QueueButton_C_Construct_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnButtonHovered
struct UWBP_QuickPlay_QueueButton_C_OnButtonHovered_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnButtonUnhovered
struct UWBP_QuickPlay_QueueButton_C_OnButtonUnhovered_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadHover
struct UWBP_QuickPlay_QueueButton_C_GamepadHover_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadUnhover
struct UWBP_QuickPlay_QueueButton_C_GamepadUnhover_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadConfirm
struct UWBP_QuickPlay_QueueButton_C_GamepadConfirm_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.SetButtonActive
struct UWBP_QuickPlay_QueueButton_C_SetButtonActive_Params
{
	bool*                                              bIsActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.PreConstruct
struct UWBP_QuickPlay_QueueButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.ExecuteUbergraph_WBP_QuickPlay_QueueButton
struct UWBP_QuickPlay_QueueButton_C_ExecuteUbergraph_WBP_QuickPlay_QueueButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnUnhovered__DelegateSignature
struct UWBP_QuickPlay_QueueButton_C_OnQueueBtnUnhovered__DelegateSignature_Params
{
	class UWidget**                                    UnhoverWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnHovered__DelegateSignature
struct UWBP_QuickPlay_QueueButton_C_OnQueueBtnHovered__DelegateSignature_Params
{
	class UWidget**                                    HoveredWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnClicked__DelegateSignature
struct UWBP_QuickPlay_QueueButton_C_OnQueueBtnClicked__DelegateSignature_Params
{
	int*                                               QueueId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
