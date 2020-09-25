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

// Function NewStartMenu.NewStartMenu_C.set version text
struct UNewStartMenu_C_set_version_text_Params
{
};

// Function NewStartMenu.NewStartMenu_C.NavigateBack
struct UNewStartMenu_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NewStartMenu.NewStartMenu_C.ShowMenuFinished
struct UNewStartMenu_C_ShowMenuFinished_Params
{
};

// Function NewStartMenu.NewStartMenu_C.ShowMenuAnim
struct UNewStartMenu_C_ShowMenuAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewStartMenu.NewStartMenu_C.InitializeTickAnimations
struct UNewStartMenu_C_InitializeTickAnimations_Params
{
};

// Function NewStartMenu.NewStartMenu_C.InitHideAnimation
struct UNewStartMenu_C_InitHideAnimation_Params
{
};

// Function NewStartMenu.NewStartMenu_C.HideMenuFinished
struct UNewStartMenu_C_HideMenuFinished_Params
{
};

// Function NewStartMenu.NewStartMenu_C.HideMenuAnim
struct UNewStartMenu_C_HideMenuAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewStartMenu.NewStartMenu_C.StartHideAnim
struct UNewStartMenu_C_StartHideAnim_Params
{
};

// Function NewStartMenu.NewStartMenu_C.InitializeWidget
struct UNewStartMenu_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewStartMenu.NewStartMenu_C.InitializeWidgetNavigation
struct UNewStartMenu_C_InitializeWidgetNavigation_Params
{
};

// Function NewStartMenu.NewStartMenu_C.BackToLastScreen
struct UNewStartMenu_C_BackToLastScreen_Params
{
};

// Function NewStartMenu.NewStartMenu_C.StartShowSequence
struct UNewStartMenu_C_StartShowSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewStartMenu.NewStartMenu_C.StartHideSequence
struct UNewStartMenu_C_StartHideSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewStartMenu.NewStartMenu_C.StartShowAnim
struct UNewStartMenu_C_StartShowAnim_Params
{
};

// Function NewStartMenu.NewStartMenu_C.Construct
struct UNewStartMenu_C_Construct_Params
{
};

// Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UNewStartMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UNewStartMenu_C_BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UNewStartMenu_C_BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NewStartMenu.NewStartMenu_C.OnBackButton
struct UNewStartMenu_C_OnBackButton_Params
{
};

// Function NewStartMenu.NewStartMenu_C.ExecuteUbergraph_NewStartMenu
struct UNewStartMenu_C_ExecuteUbergraph_NewStartMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
