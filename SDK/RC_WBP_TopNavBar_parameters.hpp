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

// Function WBP_TopNavBar.WBP_TopNavBar_C.OnHasNewStoreItems
struct UWBP_TopNavBar_C_OnHasNewStoreItems_Params
{
	bool*                                              HasNew;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleViewRouteChanged
struct UWBP_TopNavBar_C_HandleViewRouteChanged_Params
{
	struct FName*                                      CurrentRoute;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NextRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EViewManagerLayer*                                 Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleInputStateChanged
struct UWBP_TopNavBar_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavRight
struct UWBP_TopNavBar_C_HandleNavRight_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavLeft
struct UWBP_TopNavBar_C_HandleNavLeft_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeNavButtons
struct UWBP_TopNavBar_C_InitializeNavButtons_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.SetupGamepadIcon
struct UWBP_TopNavBar_C_SetupGamepadIcon_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.SetupGamepadCallout
struct UWBP_TopNavBar_C_SetupGamepadCallout_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeTickAnimations
struct UWBP_TopNavBar_C_InitializeTickAnimations_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarFinished
struct UWBP_TopNavBar_C_ShowTopBarFinished_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarAnim
struct UWBP_TopNavBar_C_ShowTopBarAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.InitHideAnimation
struct UWBP_TopNavBar_C_InitHideAnimation_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarFinished
struct UWBP_TopNavBar_C_HideTopBarFinished_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarAnim
struct UWBP_TopNavBar_C_HideTopBarAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideAnim
struct UWBP_TopNavBar_C_StartHideAnim_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowAnim
struct UWBP_TopNavBar_C_StartShowAnim_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.DisableTopBar
struct UWBP_TopNavBar_C_DisableTopBar_Params
{
	bool*                                              IsDisable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidget
struct UWBP_TopNavBar_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidgetButtonListeners
struct UWBP_TopNavBar_C_InitializeWidgetButtonListeners_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.Construct
struct UWBP_TopNavBar_C_Construct_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidgetNavigation
struct UWBP_TopNavBar_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowSequence
struct UWBP_TopNavBar_C_StartShowSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideSequence
struct UWBP_TopNavBar_C_StartHideSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.ExecuteUbergraph_WBP_TopNavBar
struct UWBP_TopNavBar_C_ExecuteUbergraph_WBP_TopNavBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
