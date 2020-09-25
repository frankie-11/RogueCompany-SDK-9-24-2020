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

// Function NewMenuMain.NewMenuMain_C.SetupGamepadCallout
struct UNewMenuMain_C_SetupGamepadCallout_Params
{
};

// Function NewMenuMain.NewMenuMain_C.HandleInputStateChanged
struct UNewMenuMain_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMenuMain.NewMenuMain_C.HideMenuButtonFinished
struct UNewMenuMain_C_HideMenuButtonFinished_Params
{
};

// Function NewMenuMain.NewMenuMain_C.HideMenuButtonAnim
struct UNewMenuMain_C_HideMenuButtonAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMenuMain.NewMenuMain_C.InitHideAnimation
struct UNewMenuMain_C_InitHideAnimation_Params
{
};

// Function NewMenuMain.NewMenuMain_C.InitializeTickAnimations
struct UNewMenuMain_C_InitializeTickAnimations_Params
{
};

// Function NewMenuMain.NewMenuMain_C.ShowMenuButtonFinished
struct UNewMenuMain_C_ShowMenuButtonFinished_Params
{
};

// Function NewMenuMain.NewMenuMain_C.StartShowAnim
struct UNewMenuMain_C_StartShowAnim_Params
{
};

// Function NewMenuMain.NewMenuMain_C.StartHideAnim
struct UNewMenuMain_C_StartHideAnim_Params
{
};

// Function NewMenuMain.NewMenuMain_C.InitializeWidget
struct UNewMenuMain_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMenuMain.NewMenuMain_C.InitializeWidgetNavigation
struct UNewMenuMain_C_InitializeWidgetNavigation_Params
{
};

// Function NewMenuMain.NewMenuMain_C.Construct
struct UNewMenuMain_C_Construct_Params
{
};

// Function NewMenuMain.NewMenuMain_C.ShowMenuButtonAnim
struct UNewMenuMain_C_ShowMenuButtonAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMenuMain.NewMenuMain_C.OpenStartMenu
struct UNewMenuMain_C_OpenStartMenu_Params
{
};

// Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UNewMenuMain_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UNewMenuMain_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UNewMenuMain_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function NewMenuMain.NewMenuMain_C.ExecuteUbergraph_NewMenuMain
struct UNewMenuMain_C_ExecuteUbergraph_NewMenuMain_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
