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

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ChangeFocusable
struct UWBP_TabScreenWidget_C_ChangeFocusable_Params
{
	bool*                                              Is_Focusable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.UpdateAfterTabChange
struct UWBP_TabScreenWidget_C_UpdateAfterTabChange_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.RegisterAllForFocus
struct UWBP_TabScreenWidget_C_RegisterAllForFocus_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupContextPrompts
struct UWBP_TabScreenWidget_C_SetupContextPrompts_Params
{
	class AHUD**                                       HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupReportButtonNav
struct UWBP_TabScreenWidget_C_SetupReportButtonNav_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandlePlayerReported
struct UWBP_TabScreenWidget_C_HandlePlayerReported_Params
{
	int64_t*                                           PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeReportPlayer
struct UWBP_TabScreenWidget_C_InitializeReportPlayer_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardNav
struct UWBP_TabScreenWidget_C_ResetScoreboardNav_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.MoveFocusTo
struct UWBP_TabScreenWidget_C_MoveFocusTo_Params
{
	struct FName*                                      ToGoScreen;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleOnActionBack
struct UWBP_TabScreenWidget_C_HandleOnActionBack_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleOnPlayerReported
struct UWBP_TabScreenWidget_C_HandleOnPlayerReported_Params
{
	int64_t*                                           PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TeamNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializePlayerAction
struct UWBP_TabScreenWidget_C_InitializePlayerAction_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeScoreboard
struct UWBP_TabScreenWidget_C_InitializeScoreboard_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupPlayerActionNavigation
struct UWBP_TabScreenWidget_C_SetupPlayerActionNavigation_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ToggleHideCursor
struct UWBP_TabScreenWidget_C_ToggleHideCursor_Params
{
	bool*                                              ShouldHide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnMouseMove
struct UWBP_TabScreenWidget_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardHoverState
struct UWBP_TabScreenWidget_C_ResetScoreboardHoverState_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavigateBack
struct UWBP_TabScreenWidget_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnKeyUp
struct UWBP_TabScreenWidget_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupScoreboardNav
struct UWBP_TabScreenWidget_C_SetupScoreboardNav_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleInputModeChanged
struct UWBP_TabScreenWidget_C_HandleInputModeChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HasTabs
struct UWBP_TabScreenWidget_C_HasTabs_Params
{
	bool                                               HasTabs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleNavButtonClicked
struct UWBP_TabScreenWidget_C_HandleNavButtonClicked_Params
{
	class UWidget**                                    TargetWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.CycleTabs
struct UWBP_TabScreenWidget_C_CycleTabs_Params
{
	bool*                                              Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.IncrementTabWrapped
struct UWBP_TabScreenWidget_C_IncrementTabWrapped_Params
{
	int*                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Refresh Tabs
struct UWBP_TabScreenWidget_C_Refresh_Tabs_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetGamepadCallouts
struct UWBP_TabScreenWidget_C_SetGamepadCallouts_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidget
struct UWBP_TabScreenWidget_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidgetNavigation
struct UWBP_TabScreenWidget_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnShown
struct UWBP_TabScreenWidget_C_OnShown_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnHide
struct UWBP_TabScreenWidget_C_OnHide_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidgetButtonListeners
struct UWBP_TabScreenWidget_C_InitializeWidgetButtonListeners_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavLeft
struct UWBP_TabScreenWidget_C_NavLeft_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavRight
struct UWBP_TabScreenWidget_C_NavRight_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OpenTimerGate
struct UWBP_TabScreenWidget_C_OpenTimerGate_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.CloseTimerGate
struct UWBP_TabScreenWidget_C_CloseTimerGate_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Tick
struct UWBP_TabScreenWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.AttemptCloseTab
struct UWBP_TabScreenWidget_C_AttemptCloseTab_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.FocusScoreboardPlayerEntries
struct UWBP_TabScreenWidget_C_FocusScoreboardPlayerEntries_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardFocus
struct UWBP_TabScreenWidget_C_ResetScoreboardFocus_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ShowPlayerOptions
struct UWBP_TabScreenWidget_C_ShowPlayerOptions_Params
{
	int64_t*                                           PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             NewPlayerState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TeamNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CanReport;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Handle KillCamEnabled
struct UWBP_TabScreenWidget_C_Handle_KillCamEnabled_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Construct
struct UWBP_TabScreenWidget_C_Construct_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Handle Back Button Clicked
struct UWBP_TabScreenWidget_C_Handle_Back_Button_Clicked_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.UnfocusScoreboardPlayers
struct UWBP_TabScreenWidget_C_UnfocusScoreboardPlayers_Params
{
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.AttemptCloseTabFromKeyUp
struct UWBP_TabScreenWidget_C_AttemptCloseTabFromKeyUp_Params
{
	bool*                                              bKeyboardInput;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ExecuteUbergraph_WBP_TabScreenWidget
struct UWBP_TabScreenWidget_C_ExecuteUbergraph_WBP_TabScreenWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
