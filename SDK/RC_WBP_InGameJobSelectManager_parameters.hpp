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

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnPlayerStateChanged
struct UWBP_InGameJobSelectManager_C_OnPlayerStateChanged_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandlePhaseChange
struct UWBP_InGameJobSelectManager_C_HandlePhaseChange_Params
{
	struct FName*                                      NewPhaseName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousPhaseName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnKeyDown
struct UWBP_InGameJobSelectManager_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.RestoreJobSelectViewState
struct UWBP_InGameJobSelectManager_C_RestoreJobSelectViewState_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnKeyUp
struct UWBP_InGameJobSelectManager_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.SetFocusGroup
struct UWBP_InGameJobSelectManager_C_SetFocusGroup_Params
{
	struct FName*                                      FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeLoadoutScreen
struct UWBP_InGameJobSelectManager_C_InitializeLoadoutScreen_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.NavigateBack
struct UWBP_InGameJobSelectManager_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.ViewScreen
struct UWBP_InGameJobSelectManager_C_ViewScreen_Params
{
	struct FName*                                      GoToScreen;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelectionEntryChanged
struct UWBP_InGameJobSelectManager_C_HandleJobSelectionEntryChanged_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              EnemyTeam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeJobSelectScreen
struct UWBP_InGameJobSelectManager_C_InitializeJobSelectScreen_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelectionReady
struct UWBP_InGameJobSelectManager_C_HandleJobSelectionReady_Params
{
	TArray<class UJobSelectionEntryDetails*>           JobEntries;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              EnemyTeam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelection
struct UWBP_InGameJobSelectManager_C_HandleJobSelection_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobLockedIn
struct UWBP_InGameJobSelectManager_C_HandleJobLockedIn_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobLoadoutView
struct UWBP_InGameJobSelectManager_C_HandleJobLoadoutView_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeWidget
struct UWBP_InGameJobSelectManager_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnJobEntryChanged
struct UWBP_InGameJobSelectManager_C_OnJobEntryChanged_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              EnemyTeam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeWidgetNavigation
struct UWBP_InGameJobSelectManager_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnShown
struct UWBP_InGameJobSelectManager_C_OnShown_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleNavigateBack
struct UWBP_InGameJobSelectManager_C_HandleNavigateBack_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OpenMainMenu
struct UWBP_InGameJobSelectManager_C_OpenMainMenu_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnHide
struct UWBP_InGameJobSelectManager_C_OnHide_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnBackPrompt
struct UWBP_InGameJobSelectManager_C_OnBackPrompt_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.PreRoundAnimComplete
struct UWBP_InGameJobSelectManager_C_PreRoundAnimComplete_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.Construct
struct UWBP_InGameJobSelectManager_C_Construct_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnJobEntriesReady
struct UWBP_InGameJobSelectManager_C_OnJobEntriesReady_Params
{
	TArray<class UJobSelectionEntryDetails*>*          JobEntries;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              EnemyTeam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnResetSelection
struct UWBP_InGameJobSelectManager_C_OnResetSelection_Params
{
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnPlayerSelectionStateChanged
struct UWBP_InGameJobSelectManager_C_OnPlayerSelectionStateChanged_Params
{
	EPlayerSelectionState*                             NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.ExecuteUbergraph_WBP_InGameJobSelectManager
struct UWBP_InGameJobSelectManager_C_ExecuteUbergraph_WBP_InGameJobSelectManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
