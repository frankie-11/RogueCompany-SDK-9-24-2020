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

// Function AlphaDisclaimer.AlphaDisclaimer_C.HideScrollCallout
struct UAlphaDisclaimer_C_HideScrollCallout_Params
{
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.ShowArrows
struct UAlphaDisclaimer_C_ShowArrows_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.Tick
struct UAlphaDisclaimer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidget
struct UAlphaDisclaimer_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidgetNavigation
struct UAlphaDisclaimer_C_InitializeWidgetNavigation_Params
{
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidgetButtonListeners
struct UAlphaDisclaimer_C_InitializeWidgetButtonListeners_Params
{
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollUpPressed
struct UAlphaDisclaimer_C_ScrollUpPressed_Params
{
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollDownPressed
struct UAlphaDisclaimer_C_ScrollDownPressed_Params
{
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollUpReleased
struct UAlphaDisclaimer_C_ScrollUpReleased_Params
{
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollDownReleased
struct UAlphaDisclaimer_C_ScrollDownReleased_Params
{
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.Handle Input State Changed
struct UAlphaDisclaimer_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.CalloutTimerFunction
struct UAlphaDisclaimer_C_CalloutTimerFunction_Params
{
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UAlphaDisclaimer_C_BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.OnHide
struct UAlphaDisclaimer_C_OnHide_Params
{
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.OnShown
struct UAlphaDisclaimer_C_OnShown_Params
{
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.Destruct
struct UAlphaDisclaimer_C_Destruct_Params
{
};

// Function AlphaDisclaimer.AlphaDisclaimer_C.ExecuteUbergraph_AlphaDisclaimer
struct UAlphaDisclaimer_C_ExecuteUbergraph_AlphaDisclaimer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
