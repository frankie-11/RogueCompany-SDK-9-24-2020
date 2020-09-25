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

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnKeyUp
struct UWBP_CustomGameLobby_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TogglePlayerCardFor
struct UWBP_CustomGameLobby_C_TogglePlayerCardFor_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_CustomLobbyPlayer_C**                   PlayerWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberUpdate
struct UWBP_CustomGameLobby_C_HandleVoiceMemberUpdate_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              bIsTalking;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsMuted;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberRemoved
struct UWBP_CustomGameLobby_C_HandleVoiceMemberRemoved_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberAdded
struct UWBP_CustomGameLobby_C_HandleVoiceMemberAdded_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetMemberWidgetForVoice
struct UWBP_CustomGameLobby_C_GetMemberWidgetForVoice_Params
{
	struct FString*                                    VoiceId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWBP_CustomLobbyPlayer_C*                    Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupExistingPlayers
struct UWBP_CustomGameLobby_C_SetupExistingPlayers_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupQueueFactoryEvents
struct UWBP_CustomGameLobby_C_SetupQueueFactoryEvents_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueStateUpdated
struct UWBP_CustomGameLobby_C_OnQueueStateUpdated_Params
{
	EPUMG_MatchStatus*                                 MatchStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamButtons
struct UWBP_CustomGameLobby_C_GetTeamButtons_Params
{
	TArray<class UKSWidget*>                           TeamButtons;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnKeyDown
struct UWBP_CustomGameLobby_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Close
struct UWBP_CustomGameLobby_C_MassInvite_Close_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Select
struct UWBP_CustomGameLobby_C_MassInvite_Select_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EKSInviteSelectResult                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_IsSelected
struct UWBP_CustomGameLobby_C_MassInvite_IsSelected_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_ShouldShowPlayer
struct UWBP_CustomGameLobby_C_MassInvite_ShouldShowPlayer_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnReceiveHostName
struct UWBP_CustomGameLobby_C_OnReceiveHostName_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.CheckQueueState
struct UWBP_CustomGameLobby_C_CheckQueueState_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.FinalizeLog
struct UWBP_CustomGameLobby_C_FinalizeLog_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UPUMG_PlayerInfo**                           playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.LogPermissionChange
struct UWBP_CustomGameLobby_C_LogPermissionChange_Params
{
	class UPUMG_PlayerInfo**                           playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPUMG_CustomMatchPermission*                       NewPermissions;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPUMG_CustomMatchPermission*                       OldPermissions;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleReceivePlayerName
struct UWBP_CustomGameLobby_C_HandleReceivePlayerName_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamName
struct UWBP_CustomGameLobby_C_GetTeamName_Params
{
	struct FPUMG_CustomMatchMember*                    PUMG_CustomMatchMember;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddLog
struct UWBP_CustomGameLobby_C_AddLog_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UPUMG_PlayerInfo**                           playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.RemoveMember
struct UWBP_CustomGameLobby_C_RemoveMember_Params
{
	struct FPUMG_CustomMatchMember                     FormerMember;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Removed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddMember
struct UWBP_CustomGameLobby_C_AddMember_Params
{
	struct FPUMG_CustomMatchMember*                    MatchMember;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Added;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.NavigateBack
struct UWBP_CustomGameLobby_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TEST_InviteNextAvailablePlayer
struct UWBP_CustomGameLobby_C_TEST_InviteNextAvailablePlayer_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupTeamNavigation
struct UWBP_CustomGameLobby_C_SetupTeamNavigation_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateWidgetsWithData
struct UWBP_CustomGameLobby_C_UpdateWidgetsWithData_Params
{
	struct FFBP_CustomMatchTeam                        Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberUpdate
struct UWBP_CustomGameLobby_C_OnMemberUpdate_Params
{
	struct FPUMG_CustomMatchMember*                    MatchMember;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FPUMG_CustomMatchMember*                    PreviousData;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberRemoved
struct UWBP_CustomGameLobby_C_OnMemberRemoved_Params
{
	struct FPUMG_CustomMatchMember*                    FormerMember;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberAdded
struct UWBP_CustomGameLobby_C_OnMemberAdded_Params
{
	struct FPUMG_CustomMatchMember*                    MatchMember;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueUpdate
struct UWBP_CustomGameLobby_C_OnQueueUpdate_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetQueueDataFactory
struct UWBP_CustomGameLobby_C_GetQueueDataFactory_Params
{
	class UKSQueueDataFactory*                         DataFactory;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PopulateTeamRenderers
struct UWBP_CustomGameLobby_C_PopulateTeamRenderers_Params
{
	class UPanelWidget**                               TeamPanel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               TeamId;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELaterality>*                          ControlsSide;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupRenderers
struct UWBP_CustomGameLobby_C_SetupRenderers_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupDisplayElements
struct UWBP_CustomGameLobby_C_SetupDisplayElements_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueInfo
struct UWBP_CustomGameLobby_C_UpdateQueueInfo_Params
{
	struct FClientQueueInfo*                           QueueInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PreConstruct
struct UWBP_CustomGameLobby_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.Construct
struct UWBP_CustomGameLobby_C_Construct_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnInitialized
struct UWBP_CustomGameLobby_C_OnInitialized_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleDataChange
struct UWBP_CustomGameLobby_C_HandleDataChange_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InvalidateData
struct UWBP_CustomGameLobby_C_InvalidateData_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InitializeWidgetNavigation
struct UWBP_CustomGameLobby_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerClicked
struct UWBP_CustomGameLobby_C_HandlePlayerClicked_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWidget**                                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleEmptyClicked
struct UWBP_CustomGameLobby_C_HandleEmptyClicked_Params
{
	class UKSWidget**                                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerKick
struct UWBP_CustomGameLobby_C_HandlePlayerKick_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWidget**                                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerSwap
struct UWBP_CustomGameLobby_C_HandlePlayerSwap_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWidget**                                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnClickBack
struct UWBP_CustomGameLobby_C_OnClickBack_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnShown
struct UWBP_CustomGameLobby_C_OnShown_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnPlayerHovered
struct UWBP_CustomGameLobby_C_OnPlayerHovered_Params
{
	class UWBP_CustomLobbyPlayer_C**                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnPlayerUnhovered
struct UWBP_CustomGameLobby_C_OnPlayerUnhovered_Params
{
	class UWBP_CustomLobbyPlayer_C**                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueLeft
struct UWBP_CustomGameLobby_C_OnQueueLeft_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              bIsTalking;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsMuted;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_5_OnMenuStart__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_5_OnMenuStart__DelegateSignature_Params
{
	class UWidget**                                    FocusWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_6_OnReadyForNavigation__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_6_OnReadyForNavigation__DelegateSignature_Params
{
	TArray<class UWidget*>                             NavWidgets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWidget**                                    Default_Widget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ExecuteUbergraph_WBP_CustomGameLobby
struct UWBP_CustomGameLobby_C_ExecuteUbergraph_WBP_CustomGameLobby_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
