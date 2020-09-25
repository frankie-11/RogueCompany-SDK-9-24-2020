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

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.SetVersionText
struct UWBP_HomeScreen_v2_C_SetVersionText_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.CanFocus
struct UWBP_HomeScreen_v2_C_CanFocus_Params
{
	bool                                               bAllowFous;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateContextPrompts
struct UWBP_HomeScreen_v2_C_UpdateContextPrompts_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StopConflictingAnimation
struct UWBP_HomeScreen_v2_C_StopConflictingAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NavigateBack
struct UWBP_HomeScreen_v2_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleQueueStatusChange
struct UWBP_HomeScreen_v2_C_HandleQueueStatusChange_Params
{
	EPUMG_MatchStatus*                                 NewStatus;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleLobbyCameraSet
struct UWBP_HomeScreen_v2_C_HandleLobbyCameraSet_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandlePreMatchAnimStarted
struct UWBP_HomeScreen_v2_C_HandlePreMatchAnimStarted_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UnbindLobbyAnimationHandling
struct UWBP_HomeScreen_v2_C_UnbindLobbyAnimationHandling_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.BindLobbyAnimationHandling
struct UWBP_HomeScreen_v2_C_BindLobbyAnimationHandling_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeContentWidgets
struct UWBP_HomeScreen_v2_C_InitializeContentWidgets_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowAnim
struct UWBP_HomeScreen_v2_C_StartShowAnim_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeTickAnimations
struct UWBP_HomeScreen_v2_C_InitializeTickAnimations_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayFinished
struct UWBP_HomeScreen_v2_C_ShowQuickPlayFinished_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayAnim
struct UWBP_HomeScreen_v2_C_ShowQuickPlayAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitHideAnimation
struct UWBP_HomeScreen_v2_C_InitHideAnimation_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayFinished
struct UWBP_HomeScreen_v2_C_HideQuickPlayFinished_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayAnim
struct UWBP_HomeScreen_v2_C_HideQuickPlayAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideAnim
struct UWBP_HomeScreen_v2_C_StartHideAnim_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidget
struct UWBP_HomeScreen_v2_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetButtonListeners
struct UWBP_HomeScreen_v2_C_InitializeWidgetButtonListeners_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleJoinQueue
struct UWBP_HomeScreen_v2_C_HandleJoinQueue_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleChangeQueue
struct UWBP_HomeScreen_v2_C_HandleChangeQueue_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnShown
struct UWBP_HomeScreen_v2_C_OnShown_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UninitializeWidget
struct UWBP_HomeScreen_v2_C_UninitializeWidget_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowSequence
struct UWBP_HomeScreen_v2_C_StartShowSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideSequence
struct UWBP_HomeScreen_v2_C_StartHideSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetNavigation
struct UWBP_HomeScreen_v2_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Construct
struct UWBP_HomeScreen_v2_C_Construct_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnCrossplayChanged
struct UWBP_HomeScreen_v2_C_OnCrossplayChanged_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateCrossplay
struct UWBP_HomeScreen_v2_C_UpdateCrossplay_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.LoginState
struct UWBP_HomeScreen_v2_C_LoginState_Params
{
	EPUMG_LoginState*                                  LoginState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Update Region
struct UWBP_HomeScreen_v2_C_Update_Region_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Party Player Card Selected
struct UWBP_HomeScreen_v2_C_Handle_Party_Player_Card_Selected_Params
{
	class UWBP_player_card_module_C**                  Selected_Player_Card;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Navigation
struct UWBP_HomeScreen_v2_C_Handle_Context_Menu_Navigation_Params
{
	TArray<class UWidget*>                             NavWidgets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWidget**                                    Default_Widget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Hidden
struct UWBP_HomeScreen_v2_C_Handle_Context_Menu_Hidden_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleContextMenuShown
struct UWBP_HomeScreen_v2_C_HandleContextMenuShown_Params
{
	class UWidget**                                    FocusWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateRightFailure
struct UWBP_HomeScreen_v2_C_FocusGroupNavigateRightFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateLeftFailure
struct UWBP_HomeScreen_v2_C_FocusGroupNavigateLeftFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NewsPanelVisibilityChanged
struct UWBP_HomeScreen_v2_C_NewsPanelVisibilityChanged_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnEOMButton
struct UWBP_HomeScreen_v2_C_OnEOMButton_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleViewSocial
struct UWBP_HomeScreen_v2_C_HandleViewSocial_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateDownFailure
struct UWBP_HomeScreen_v2_C_FocusGroupNavigateDownFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateUpFailure
struct UWBP_HomeScreen_v2_C_FocusGroupNavigateUpFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Player Card Back Button
struct UWBP_HomeScreen_v2_C_Handle_Player_Card_Back_Button_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.PreConstruct
struct UWBP_HomeScreen_v2_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnSetQueueInputState
struct UWBP_HomeScreen_v2_C_OnSetQueueInputState_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnPartyLeaveVisibilityChange
struct UWBP_HomeScreen_v2_C_OnPartyLeaveVisibilityChange_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ExecuteUbergraph_WBP_HomeScreen_v2
struct UWBP_HomeScreen_v2_C_ExecuteUbergraph_WBP_HomeScreen_v2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
