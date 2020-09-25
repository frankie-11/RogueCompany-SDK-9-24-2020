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

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.ToggleContextMenuForPlayerCard
struct UWBP_Social_Overlay_C_ToggleContextMenuForPlayerCard_Params
{
	class UKSWidget**                                  KSWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuHidden
struct UWBP_Social_Overlay_C_HandleStatusMenuHidden_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuShown
struct UWBP_Social_Overlay_C_HandleStatusMenuShown_Params
{
	class UWBP_PlayerStatus_ContextMenuOption_C**      FocusWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusNavigationReady
struct UWBP_Social_Overlay_C_HandleStatusNavigationReady_Params
{
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupHeader
struct UWBP_Social_Overlay_C_SetupHeader_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetTabIndex
struct UWBP_Social_Overlay_C_SetTabIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabChange
struct UWBP_Social_Overlay_C_OnTabChange_Params
{
	class UWBP_subscreen_nav_tab_C**                   ActiveTabButton;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetActiveTabByWidget
struct UWBP_Social_Overlay_C_SetActiveTabByWidget_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnMouseButtonUp
struct UWBP_Social_Overlay_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.MoveTabBy
struct UWBP_Social_Overlay_C_MoveTabBy_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupNavTabs
struct UWBP_Social_Overlay_C_SetupNavTabs_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.NavigateBack
struct UWBP_Social_Overlay_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.ClosePanel
struct UWBP_Social_Overlay_C_ClosePanel_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnShown
struct UWBP_Social_Overlay_C_OnShown_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_Social_Overlay_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartShowSequence
struct UWBP_Social_Overlay_C_StartShowSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartHideSequence
struct UWBP_Social_Overlay_C_StartHideSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidget
struct UWBP_Social_Overlay_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabClicked
struct UWBP_Social_Overlay_C_OnTabClicked_Params
{
	class UWBP_subscreen_nav_tab_C**                   ButtonClicked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.UninitializeWidget
struct UWBP_Social_Overlay_C_UninitializeWidget_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnPlayerCardClick
struct UWBP_Social_Overlay_C_OnPlayerCardClick_Params
{
	class UKSWidget**                                  PlayerCard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnInputStateChange
struct UWBP_Social_Overlay_C_OnInputStateChange_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidgetNavigation
struct UWBP_Social_Overlay_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHide
struct UWBP_Social_Overlay_C_OnHide_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabLeft
struct UWBP_Social_Overlay_C_OnTabLeft_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabRight
struct UWBP_Social_Overlay_C_OnTabRight_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleSocial
struct UWBP_Social_Overlay_C_OnToggleSocial_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnViewStateChange
struct UWBP_Social_Overlay_C_OnViewStateChange_Params
{
	struct FName*                                      CurrentRoute;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousRoute;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EViewManagerLayer*                                 Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleStatusMenu
struct UWBP_Social_Overlay_C_OnToggleStatusMenu_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnReadyForNavigation__DelegateSignature
struct UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnReadyForNavigation__DelegateSignature_Params
{
	TArray<class UWidget*>                             NavWidgets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWidget**                                    Default_Widget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuHidden__DelegateSignature
struct UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuHidden__DelegateSignature_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_3_OnMenuStart__DelegateSignature
struct UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_3_OnMenuStart__DelegateSignature_Params
{
	class UWidget**                                    FocusWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandlePlayerInvitesChanged
struct UWBP_Social_Overlay_C_HandlePlayerInvitesChanged_Params
{
	class UKSDataSocialCategory**                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UKSDataSocialPlayer*>*                Players;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UWBP_Social_Overlay_C_BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.ExecuteUbergraph_WBP_Social_Overlay
struct UWBP_Social_Overlay_C_ExecuteUbergraph_WBP_Social_Overlay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
