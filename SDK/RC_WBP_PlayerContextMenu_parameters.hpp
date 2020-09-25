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

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetCustomMatchOptions
struct UWBP_PlayerContextMenu_C_SetCustomMatchOptions_Params
{
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetQueueDataFactory
struct UWBP_PlayerContextMenu_C_GetQueueDataFactory_Params
{
	class UKSQueueDataFactory*                         DataFactory;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               WasFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.UpdateOptionsList
struct UWBP_PlayerContextMenu_C_UpdateOptionsList_Params
{
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetMenuContext
struct UWBP_PlayerContextMenu_C_SetMenuContext_Params
{
	TEnumAsByte<EPlayerContextMenuContext>*            Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsShowingPlayer
struct UWBP_PlayerContextMenu_C_IsShowingPlayer_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Showing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsContextMenuOpen
struct UWBP_PlayerContextMenu_C_IsContextMenuOpen_Params
{
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetPlayerReported
struct UWBP_PlayerContextMenu_C_SetPlayerReported_Params
{
	int64_t*                                           PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HasReportedPlayer
struct UWBP_PlayerContextMenu_C_HasReportedPlayer_Params
{
	class UKSPlayerInfo**                              Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasReported;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayerCard
struct UWBP_PlayerContextMenu_C_ShowForPlayerCard_Params
{
	class UWBP_player_card_module_C**                  PlayerCard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ELaterality>*                          Side;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetSide
struct UWBP_PlayerContextMenu_C_MoveToWidgetSide_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ELaterality>*                          Side;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMargin*                                    Padding;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.UpdatePlayerAliases
struct UWBP_PlayerContextMenu_C_UpdatePlayerAliases_Params
{
	TArray<struct FPlayerAlias>*                       Aliases;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetAndShow
struct UWBP_PlayerContextMenu_C_MoveToWidgetAndShow_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidget
struct UWBP_PlayerContextMenu_C_MoveToWidget_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ELaterality>                           Side;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsCurrentAccountId
struct UWBP_PlayerContextMenu_C_IsCurrentAccountId_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsAccountId;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetOptionsWidgetByEnum
struct UWBP_PlayerContextMenu_C_GetOptionsWidgetByEnum_Params
{
	TEnumAsByte<EPlayerContextOption>*                 InOption;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_PlayerContextMenuOption_C*              OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.RefreshOptionsPadding
struct UWBP_PlayerContextMenu_C_RefreshOptionsPadding_Params
{
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HideContextMenu
struct UWBP_PlayerContextMenu_C_HideContextMenu_Params
{
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Move To Player Card And Show
struct UWBP_PlayerContextMenu_C_Move_To_Player_Card_And_Show_Params
{
	class UWBP_player_card_module_C**                  Selected_Player_Card;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Get Option Widgets
struct UWBP_PlayerContextMenu_C_Get_Option_Widgets_Params
{
	TArray<class UWBP_PlayerContextMenuOption_C*>      Option_Widgets;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetMenuPosition
struct UWBP_PlayerContextMenu_C_SetMenuPosition_Params
{
	struct FBox2D*                                     AbsoluteRect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ELaterality>*                          Side;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Is Any Option Visible
struct UWBP_PlayerContextMenu_C_Is_Any_Option_Visible_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetAllOptionsVisibility
struct UWBP_PlayerContextMenu_C_SetAllOptionsVisibility_Params
{
	bool*                                              IsLocalInParty;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsLocalPartyFull;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HasPlayerInvitedUsToParty;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsLocalPartyLeader;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsPlayerPendingPartyInvite;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsPlayerInLocalParty;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsPlayerOnline;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsLocalPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsCrossplayEnabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsFriend;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsRequestingFriend;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsPendingFriend;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              LocalPlayerCanInvite;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMuted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyUp
struct UWBP_PlayerContextMenu_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyDown
struct UWBP_PlayerContextMenu_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetAllActiveButtons
struct UWBP_PlayerContextMenu_C_GetAllActiveButtons_Params
{
	TArray<class UWidget*>                             Buttons;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetFirstActiveButton
struct UWBP_PlayerContextMenu_C_GetFirstActiveButton_Params
{
	class UWidget*                                     FocusWidget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleQueueStatusChanged
struct UWBP_PlayerContextMenu_C_HandleQueueStatusChanged_Params
{
	EPUMG_MatchStatus*                                 QueueStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.InitializeQueueDF
struct UWBP_PlayerContextMenu_C_InitializeQueueDF_Params
{
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetInactiveOption
struct UWBP_PlayerContextMenu_C_SetInactiveOption_Params
{
	TEnumAsByte<EPlayerContextOption>*                 Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleOptionSelected
struct UWBP_PlayerContextMenu_C_HandleOptionSelected_Params
{
	TEnumAsByte<EPlayerContextOption>*                 Selected_Option;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayer
struct UWBP_PlayerContextMenu_C_ShowForPlayer_Params
{
	class UKSPlayerInfo**                              Friend_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UIKSContextMenuTarget_C>*   TargetWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELaterality>*                          Side;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetEnabledOption
struct UWBP_PlayerContextMenu_C_SetEnabledOption_Params
{
	TEnumAsByte<EPlayerContextOption>*                 ContextOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.PreConstruct
struct UWBP_PlayerContextMenu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle Input State Changed
struct UWBP_PlayerContextMenu_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle View State Changed
struct UWBP_PlayerContextMenu_C_Handle_View_State_Changed_Params
{
	struct FName*                                      CurrentRoute;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousRoute;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EViewManagerLayer*                                 Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnInitialized
struct UWBP_PlayerContextMenu_C_OnInitialized_Params
{
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature
struct UWBP_PlayerContextMenu_C_BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              bIsTalking;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsMuted;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature
struct UWBP_PlayerContextMenu_C_BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature_Params
{
	EKSVoiceActivityAudioState*                        AudioState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ExecuteUbergraph_WBP_PlayerContextMenu
struct UWBP_PlayerContextMenu_C_ExecuteUbergraph_WBP_PlayerContextMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReportPlayer__DelegateSignature
struct UWBP_PlayerContextMenu_C_OnReportPlayer__DelegateSignature_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuStart__DelegateSignature
struct UWBP_PlayerContextMenu_C_OnMenuStart__DelegateSignature_Params
{
	class UWidget**                                    FocusWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuHidden__DelegateSignature
struct UWBP_PlayerContextMenu_C_OnMenuHidden__DelegateSignature_Params
{
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReadyForNavigation__DelegateSignature
struct UWBP_PlayerContextMenu_C_OnReadyForNavigation__DelegateSignature_Params
{
	TArray<class UWidget*>                             NavWidgets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWidget**                                    Default_Widget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
