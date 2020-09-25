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

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NavigateConfirm
struct UWBP_NewsRotatorWidget_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdatePrompts
struct UWBP_NewsRotatorWidget_C_UpdatePrompts_Params
{
	unsigned char*                                     InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HasFocus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GetNavigationWidgets
struct UWBP_NewsRotatorWidget_C_GetNavigationWidgets_Params
{
	TArray<class UPUMG_Widget*>                        Widgets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPanel
struct UWBP_NewsRotatorWidget_C_ShowPanel_Params
{
	int*                                               NewPanelIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdateRotatorButtons
struct UWBP_NewsRotatorWidget_C_UpdateRotatorButtons_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPrevPanel
struct UWBP_NewsRotatorWidget_C_ShowPrevPanel_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowNextPanel
struct UWBP_NewsRotatorWidget_C_ShowNextPanel_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.PopulateData
struct UWBP_NewsRotatorWidget_C_PopulateData_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidget
struct UWBP_NewsRotatorWidget_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnJsonChanged
struct UWBP_NewsRotatorWidget_C_OnJsonChanged_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnAnimationFinished
struct UWBP_NewsRotatorWidget_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnItemClicked
struct UWBP_NewsRotatorWidget_C_OnItemClicked_Params
{
	int*                                               ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionClicked
struct UWBP_NewsRotatorWidget_C_OnActionClicked_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionButtonHovered
struct UWBP_NewsRotatorWidget_C_OnActionButtonHovered_Params
{
	class UPUMG_Widget**                               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bHovered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnInputModeChange
struct UWBP_NewsRotatorWidget_C_OnInputModeChange_Params
{
	unsigned char*                                     CurrentState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.Tick
struct UWBP_NewsRotatorWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidgetNavigation
struct UWBP_NewsRotatorWidget_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.BindInputActions
struct UWBP_NewsRotatorWidget_C_BindInputActions_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UnbindInputActions
struct UWBP_NewsRotatorWidget_C_UnbindInputActions_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.HandleGamepadHovered
struct UWBP_NewsRotatorWidget_C_HandleGamepadHovered_Params
{
	class UPUMG_Widget**                               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bHovered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadHover
struct UWBP_NewsRotatorWidget_C_GamepadHover_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadUnhover
struct UWBP_NewsRotatorWidget_C_GamepadUnhover_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ExecuteUbergraph_WBP_NewsRotatorWidget
struct UWBP_NewsRotatorWidget_C_ExecuteUbergraph_WBP_NewsRotatorWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NewsVisibilityUpdated__DelegateSignature
struct UWBP_NewsRotatorWidget_C_NewsVisibilityUpdated__DelegateSignature_Params
{
	bool*                                              Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
