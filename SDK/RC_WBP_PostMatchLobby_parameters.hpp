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

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetPreviousMatchPlayerIds
struct UWBP_PostMatchLobby_C_GetPreviousMatchPlayerIds_Params
{
	TArray<int64_t>                                    PlayerIds;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.TryUpdatePlayAgainPrompt
struct UWBP_PostMatchLobby_C_TryUpdatePlayAgainPrompt_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetCurrentPrompts
struct UWBP_PostMatchLobby_C_SetCurrentPrompts_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.TryMakeTabArray
struct UWBP_PostMatchLobby_C_TryMakeTabArray_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupReportMenuNav
struct UWBP_PostMatchLobby_C_SetupReportMenuNav_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetReportMenuFocusGroup
struct UWBP_PostMatchLobby_C_GetReportMenuFocusGroup_Params
{
	int                                                FocusGroup;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ShowContextMenuForPlayer
struct UWBP_PostMatchLobby_C_ShowContextMenuForPlayer_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int64_t*                                           PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetContextMenuFocusGroup
struct UWBP_PostMatchLobby_C_GetContextMenuFocusGroup_Params
{
	int                                                GroupIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleScoreboardChange
struct UWBP_PostMatchLobby_C_HandleScoreboardChange_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetScoreboardFocusGroup
struct UWBP_PostMatchLobby_C_GetScoreboardFocusGroup_Params
{
	int                                                GroupIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupContextMenuNav
struct UWBP_PostMatchLobby_C_SetupContextMenuNav_Params
{
	TArray<class UWidget*>                             NavWidgets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWidget**                                    DefaultFocus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupFocusGroups
struct UWBP_PostMatchLobby_C_SetupFocusGroups_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetGamepadIcon
struct UWBP_PostMatchLobby_C_SetGamepadIcon_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnKeyUp
struct UWBP_PostMatchLobby_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetGamepadPrompt
struct UWBP_PostMatchLobby_C_SetGamepadPrompt_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetNavButtons
struct UWBP_PostMatchLobby_C_GetNavButtons_Params
{
	TArray<class UWBP_PostMatchNavButton_C*>           NavButtons;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.FormatPlayedTime
struct UWBP_PostMatchLobby_C_FormatPlayedTime_Params
{
	float*                                             timePlayed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulateTimePlayed
struct UWBP_PostMatchLobby_C_PopulateTimePlayed_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.NavigateBack
struct UWBP_PostMatchLobby_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetVictoryDefeat
struct UWBP_PostMatchLobby_C_SetVictoryDefeat_Params
{
	struct FScoreboardStats*                           ScoreboardStats;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.DetermineMatchResult
struct UWBP_PostMatchLobby_C_DetermineMatchResult_Params
{
	struct FScoreboardStats*                           ScoreboardStats;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               DidWin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulateScoreboard
struct UWBP_PostMatchLobby_C_PopulateScoreboard_Params
{
	struct FScoreboardStats*                           ScoreboardStats;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleTabClicked
struct UWBP_PostMatchLobby_C_HandleTabClicked_Params
{
	class UWBP_PostMatchNavButton_C**                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.CycleTab
struct UWBP_PostMatchLobby_C_CycleTab_Params
{
	bool*                                              Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Construct
struct UWBP_PostMatchLobby_C_Construct_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.InitializeWidget
struct UWBP_PostMatchLobby_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.InitializeWidgetNavigation
struct UWBP_PostMatchLobby_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnShown
struct UWBP_PostMatchLobby_C_OnShown_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulatePostMatch
struct UWBP_PostMatchLobby_C_PopulatePostMatch_Params
{
	struct FPlayerRewardsSummary*                      PlayerSummary;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScoreboardStats*                           ScoreboardStats;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleOnShowAnimationFinished
struct UWBP_PostMatchLobby_C_HandleOnShowAnimationFinished_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleOnPlayerDataChanged
struct UWBP_PostMatchLobby_C_HandleOnPlayerDataChanged_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleInputStateChanged
struct UWBP_PostMatchLobby_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.StartShowSequence
struct UWBP_PostMatchLobby_C_StartShowSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.StartHideSequence
struct UWBP_PostMatchLobby_C_StartHideSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnHide
struct UWBP_PostMatchLobby_C_OnHide_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnBackButtonClicked
struct UWBP_PostMatchLobby_C_OnBackButtonClicked_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PreConstruct
struct UWBP_PostMatchLobby_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Play Again
struct UWBP_PostMatchLobby_C_Handle_Play_Again_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.JoinQueue
struct UWBP_PostMatchLobby_C_JoinQueue_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Party Data Updated
struct UWBP_PostMatchLobby_C_Handle_Party_Data_Updated_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Queue Status Change
struct UWBP_PostMatchLobby_C_Handle_Queue_Status_Change_Params
{
	EPUMG_MatchStatus*                                 MatchStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_0_OnReadyForNavigation__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_0_OnReadyForNavigation__DelegateSignature_Params
{
	TArray<class UWidget*>                             NavWidgets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWidget**                                    Default_Widget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnMenuHidden__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnMenuHidden__DelegateSignature_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuStart__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuStart__DelegateSignature_Params
{
	class UWidget**                                    FocusWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandlePlayerClicked
struct UWBP_PostMatchLobby_C_HandlePlayerClicked_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int64_t*                                           PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_4_OnReportPlayer__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_4_OnReportPlayer__DelegateSignature_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature_Params
{
	int64_t*                                           PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ExecuteUbergraph_WBP_PostMatchLobby
struct UWBP_PostMatchLobby_C_ExecuteUbergraph_WBP_PostMatchLobby_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
