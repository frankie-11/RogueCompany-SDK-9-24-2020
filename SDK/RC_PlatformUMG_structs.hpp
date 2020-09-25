#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PlatformUMG.EPUMG_TextFilterStatus
enum class EPUMG_TextFilterStatus : uint8_t
{
	EPUMG_TextFilterStatus__Unchecked = 0,
	EPUMG_TextFilterStatus__CheckingNow = 1,
	EPUMG_TextFilterStatus__Filtered = 2,
	EPUMG_TextFilterStatus__EPUMG_MAX = 3
};


// Enum PlatformUMG.EPUMG_ChatPhase
enum class EPUMG_ChatPhase : uint8_t
{
	EPUMG_ChatPhase__PortalAllowed = 0,
	EPUMG_ChatPhase__PlayerNamesExist = 1,
	EPUMG_ChatPhase__LocalFilters  = 2,
	EPUMG_ChatPhase__PortalAllowedOtherUser = 3,
	EPUMG_ChatPhase__PortalTextFilter = 4,
	EPUMG_ChatPhase__ChannelAlreadyHasPending = 5,
	EPUMG_ChatPhase__Ready         = 6,
	EPUMG_ChatPhase__EPUMG_MAX     = 7
};


// Enum PlatformUMG.EPUMG_ChatChannel
enum class EPUMG_ChatChannel : uint8_t
{
	EPUMG_ChatChannel__UNKNOWN     = 0,
	EPUMG_ChatChannel__PERSONAL    = 1,
	EPUMG_ChatChannel__CLAN        = 2,
	EPUMG_ChatChannel__GLOBAL      = 3,
	EPUMG_ChatChannel__MATCH       = 4,
	EPUMG_ChatChannel__LOCAL_TEAM  = 5,
	EPUMG_ChatChannel__PARTY       = 6,
	EPUMG_ChatChannel__CITY        = 7,
	EPUMG_ChatChannel__PRIVATE     = 8,
	EPUMG_ChatChannel__EOM_LOBBY   = 9,
	EPUMG_ChatChannel__SYSTEM      = 10,
	EPUMG_ChatChannel__TRADE       = 11,
	EPUMG_ChatChannel__LFG         = 12,
	EPUMG_ChatChannel__LFG01       = 13,
	EPUMG_ChatChannel__HELP        = 14,
	EPUMG_ChatChannel__VOIP_NEWS   = 15,
	EPUMG_ChatChannel__GM          = 16,
	EPUMG_ChatChannel__VIP         = 17,
	EPUMG_ChatChannel__LFG02       = 18,
	EPUMG_ChatChannel__VOIP_ECHO   = 19,
	EPUMG_ChatChannel__VOIP_CONF   = 20,
	EPUMG_ChatChannel__COMBAT      = 21,
	EPUMG_ChatChannel__EMOTE       = 22,
	EPUMG_ChatChannel__NUM_CHAT_CHANNELS = 23,
	EPUMG_ChatChannel__EPUMG_MAX   = 24
};


// Enum PlatformUMG.EViewManagerLayer
enum class EViewManagerLayer : uint8_t
{
	EViewManagerLayer__Base        = 0,
	EViewManagerLayer__Modal       = 1,
	EViewManagerLayer__EViewManagerLayer_MAX = 2
};


// Enum PlatformUMG.EPUMG_LoginState
enum class EPUMG_LoginState : uint8_t
{
	EPUMG_LoginState__ELS_LoggedOut = 0,
	EPUMG_LoginState__ELS_Eula     = 1,
	EPUMG_LoginState__ELS_CreateName = 2,
	EPUMG_LoginState__ELS_LoggingIn = 3,
	EPUMG_LoginState__ELS_LoggedIn = 4,
	EPUMG_LoginState__ELS_TwoFactor = 5,
	EPUMG_LoginState__ELS_LinkOffer = 6,
	EPUMG_LoginState__ELS_Unknown  = 7,
	EPUMG_LoginState__ELS_MAX      = 8
};


// Enum PlatformUMG.EPUMG_MatchStatus
enum class EPUMG_MatchStatus : uint8_t
{
	EPUMG_MatchStatus__EPUMG_MatchStatus_NotQueued = 0,
	EPUMG_MatchStatus__EPUMG_MatchStatus_Declined = 1,
	EPUMG_MatchStatus__EPUMG_MatchStatus_Queued = 2,
	EPUMG_MatchStatus__EPUMG_MatchStatus_Invited = 3,
	EPUMG_MatchStatus__EPUMG_MatchStatus_Accepted = 4,
	EPUMG_MatchStatus__EPUMG_MatchStatus_Matching = 5,
	EPUMG_MatchStatus__EPUMG_MatchStatus_Waiting = 6,
	EPUMG_MatchStatus__EPUMG_MatchStatus_InGame = 7,
	EPUMG_MatchStatus__EPUMG_MatchStatus_SpectatorLobby = 8,
	EPUMG_MatchStatus__EPUMG_MatchStatus_SpectatorGame = 9,
	EPUMG_MatchStatus__EPUMG_MatchStatus_MAX = 10
};


// Enum PlatformUMG.EPUMG_CustomMatchPermission
enum class EPUMG_CustomMatchPermission : uint8_t
{
	EPUMG_CustomMatchPermission__None = 0,
	EPUMG_CustomMatchPermission__Inviter = 1,
	EPUMG_CustomMatchPermission__Leader = 2,
	EPUMG_CustomMatchPermission__EPUMG_MAX = 3
};


// Enum PlatformUMG.EPUMG_SettingUIType
enum class EPUMG_SettingUIType : uint8_t
{
	EPUMG_SettingUIType__Header    = 0,
	EPUMG_SettingUIType__Slider    = 1,
	EPUMG_SettingUIType__OptionStepper = 2,
	EPUMG_SettingUIType__Checkbox  = 3,
	EPUMG_SettingUIType__Button    = 4,
	EPUMG_SettingUIType__Dropdown  = 5,
	EPUMG_SettingUIType__KeyBinding = 6,
	EPUMG_SettingUIType__EPUMG_MAX = 7
};


// Enum PlatformUMG.EPUMG_LastInputType
enum class EPUMG_LastInputType : uint8_t
{
	EPUMG_LastInputType__EPUMG_LastInputType_Up = 0,
	EPUMG_LastInputType__EPUMG_LastInputType_Down = 1,
	EPUMG_LastInputType__EPUMG_LastInputType_Left = 2,
	EPUMG_LastInputType__EPUMG_LastInputType_Right = 3,
	EPUMG_LastInputType__EPUMG_LastInputType_MAX = 4
};


// Enum PlatformUMG.EPUMG_PartyInviteRightsMode
enum class EPUMG_PartyInviteRightsMode : uint8_t
{
	EPUMG_PartyInviteRightsMode__EPUMG_PIRM_OnlyLeader = 0,
	EPUMG_PartyInviteRightsMode__EPUMG_PIRM_LeaderStartingCanGrant = 1,
	EPUMG_PartyInviteRightsMode__EPUMG_PIRM_AllMembers = 2,
	EPUMG_PartyInviteRightsMode__EPUMG_PIRM_MAX = 3
};


// Enum PlatformUMG.EPUMG_PopupButtonType
enum class EPUMG_PopupButtonType : uint8_t
{
	EPUMG_PopupButtonType__Confirm = 0,
	EPUMG_PopupButtonType__Cancel  = 1,
	EPUMG_PopupButtonType__Default = 2,
	EPUMG_PopupButtonType__EPUMG_MAX = 3
};


// Enum PlatformUMG.EPUMG_CustomMatchInviteError
enum class EPUMG_CustomMatchInviteError : uint8_t
{
	EPUMG_CustomMatchInviteError__None = 0,
	EPUMG_CustomMatchInviteError__NotInvitable = 1,
	EPUMG_CustomMatchInviteError__Banned = 2,
	EPUMG_CustomMatchInviteError__EPUMG_MAX = 3
};


// Enum PlatformUMG.EPUMG_CustomMatchError
enum class EPUMG_CustomMatchError : uint8_t
{
	EPUMG_CustomMatchError__None   = 0,
	EPUMG_CustomMatchError__TeamEmpty = 1,
	EPUMG_CustomMatchError__TeamUnderCapacity = 2,
	EPUMG_CustomMatchError__TeamOverCapacity = 3,
	EPUMG_CustomMatchError__EPUMG_MAX = 4
};


// Enum PlatformUMG.EViewRouteRedirectionPhase
enum class EViewRouteRedirectionPhase : uint8_t
{
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_None = 0,
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_ApplicationLaunch = 1,
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_AccountLogin = 2,
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_AlwaysCheck = 3,
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_MAX = 4
};


// Enum PlatformUMG.EViewManagerTransitionState
enum class EViewManagerTransitionState : uint8_t
{
	EViewManagerTransitionState__Idle = 0,
	EViewManagerTransitionState__Loading = 1,
	EViewManagerTransitionState__AnimatingHide = 2,
	EViewManagerTransitionState__AnimatingShow = 3,
	EViewManagerTransitionState__Locked = 4,
	EViewManagerTransitionState__EViewManagerTransitionState_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlatformUMG.PUMG_ChatData
// 0x0040
struct FPUMG_ChatData
{
	class UPUMG_PlayerInfo*                            Sender;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPUMG_PlayerInfo*                            Recipient;                                                // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      IsOwnMessage;                                             // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsSeen;                                                   // 0x0029(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SystemMessage;                                            // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsReplayedMessage;                                        // 0x002B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPUMG_ChatChannel                                  ChatChannel;                                              // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPUMG_ChatPhase                                    ChatPhase;                                                // 0x002D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPCOM_PrivilegeStatus                              UserPrivilege;                                            // 0x002E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPUMG_TextFilterStatus                             PortalTextFilterStatus;                                   // 0x002F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MessageId;                                                // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            MctsMessageId;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_ChatCommand
// 0x0040
struct FPUMG_ChatCommand
{
	struct FString                                     Function;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             Commands;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Desc;                                                     // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UObject*                                     Target;                                                   // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_ActiveChatChannelData
// 0x0010
struct FPUMG_ActiveChatChannelData
{
	EPUMG_ChatChannel                                  ChatChannel;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPUMG_PlayerInfo*                            PersonalChannelPlayer;                                    // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_AvatarData
// 0x0048
struct FPUMG_AvatarData
{
	int                                                ItemId;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0004(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PlatformUMG.PUMG_AvatarData.Texture
	struct FString                                     Name;                                                     // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      owned;                                                    // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Selected;                                                 // 0x0041(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_FriendData
// 0x0028
struct FPUMG_FriendData
{
	class UPUMG_PlayerInfo*                            PlayerData;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       StatusMessage;                                            // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      Online;                                                   // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CanChallenge;                                             // 0x0021(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CanSpectate;                                              // 0x0022(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HasHRRelationship;                                        // 0x0023(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HasPortalRelationship;                                    // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_InputFocusGroup
// 0x0038
struct FPUMG_InputFocusGroup
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_InputFocusDetails
// 0x0018
struct FPUMG_InputFocusDetails
{
	TArray<struct FPUMG_InputFocusGroup>               FocusGroups;                                              // 0x0000(0x0010) (ZeroConstructor)
	int                                                DefaultFocusGroupIndex;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentFocusGroupIndex;                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_PartyMemberData
// 0x0030
struct FPUMG_PartyMemberData
{
	class UPUMG_PlayerInfo*                            PlayerData;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsFriend;                                                 // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       StatusMessage;                                            // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      Online;                                                   // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsPending;                                                // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CanInvite;                                                // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsLeader;                                                 // 0x002B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsReady;                                                  // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_PopupButtonConfig
// 0x0030
struct FPUMG_PopupButtonConfig
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (BlueprintVisible)
	struct FScriptMulticastDelegate                    Action;                                                   // 0x0018(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0018(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	EPUMG_PopupButtonType                              Type;                                                     // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_PopupConfig
// 0x00D8
struct FPUMG_PopupConfig
{
	struct FText                                       Header;                                                   // 0x0000(0x0018) (BlueprintVisible)
	struct FText                                       SubHeading;                                               // 0x0018(0x0018) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PlatformUMG.PUMG_PopupConfig.HeadingIcon
	struct FText                                       Description;                                              // 0x0058(0x0018) (BlueprintVisible)
	struct FText                                       Warning;                                                  // 0x0070(0x0018) (BlueprintVisible)
	unsigned char                                      TextEntry;                                                // 0x0088(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       TextEntryHint;                                            // 0x0090(0x0018) (BlueprintVisible)
	unsigned char                                      IsImportant;                                              // 0x00A8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPUMG_PopupButtonConfig>             Buttons;                                                  // 0x00B0(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    CancelAction;                                             // 0x00C0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00C0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TEnumAsByte<ETextJustify>                          TextAlignment;                                            // 0x00D0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PopupId;                                                  // 0x00D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_CustomMatchMember
// 0x0010
struct FPUMG_CustomMatchMember
{
	class UPUMG_PlayerInfo*                            playerinfo;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPUMG_CustomMatchPermission                        Permissions;                                              // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_ClientQueueInfo
// 0x0050
struct FPUMG_ClientQueueInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                ID;                                                       // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LevelLock;                                                // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinPartySize;                                             // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxPartySize;                                             // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsCustom;                                                 // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_SoundThemeEventMapping
// 0x0010
struct FPUMG_SoundThemeEventMapping
{
	struct FName                                       SoundEventName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SoundToPlay;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct PlatformUMG.StickyWidgetData
// 0x0010
struct FStickyWidgetData
{
	struct FName                                       StickyWidgetName;                                         // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPUMG_Widget*                                Widget;                                                   // 0x0008(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct PlatformUMG.ViewRouteRedirectData
// 0x0018
struct FViewRouteRedirectData
{
	struct FName                                       RouteName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CheckOrder;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      OpenOverOriginal;                                         // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	class UPUMG_ViewRedirecter*                        Redirector;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.LoginQueueInfo
// 0x0028
struct FLoginQueueInfo
{
	struct FText                                       QueueMessage;                                             // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                QueuePosition;                                            // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                QueueSize;                                                // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EstimatedWaitTime;                                        // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_SettingsConfig
// 0x0050
struct FPUMG_SettingsConfig
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FText>                               ValueNames;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EPUMG_SettingUIType                                Type;                                                     // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SettingId;                                                // 0x002C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinValue;                                                 // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StepValue;                                                // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DisplayAsPercent;                                         // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AvailableOffline;                                         // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsStoredInDatabase;                                       // 0x0049(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_KeyBindConfig
// 0x0080
struct FPUMG_KeyBindConfig
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       InputName;                                                // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPUMG_SettingUIType                                Type;                                                     // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SettingId;                                                // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FKey                                        PrimaryKey;                                               // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FKey                                        SecondaryKey;                                             // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FKey                                        GamepadKey;                                               // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      IsGamepadOnly;                                            // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.InventoryId
// 0x0020
struct FInventoryId
{
	int64_t                                            PlayerId;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            ItemId;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct PlatformUMG.InventoryTypeId
// 0x0020
struct FInventoryTypeId
{
	int64_t                                            PlayerId;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemTypeId;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemSubTypeId;                                            // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_LoadoutItem
// 0x0028
struct FPUMG_LoadoutItem
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                ItemId;                                                   // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SortOrder;                                                // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemType;                                                 // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.ErrorMessage
// 0x0020 (0x0028 - 0x0008)
struct FErrorMessage : public FTableRowBase
{
	int                                                ErrorMsgId;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       ErrorMsg;                                                 // 0x0010(0x0018) (Edit)
};

// ScriptStruct PlatformUMG.ViewRoute
// 0x0038 (0x0040 - 0x0008)
struct FViewRoute : public FTableRowBase
{
	class UClass*                                      ViewWidget;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ViewStickyWidgets;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
	EViewManagerLayer                                  ViewLayer;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsDefaultRoute;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShouldPreload;                                            // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AlwaysShowContextBar;                                     // 0x0023(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EViewRouteRedirectionPhase                         RedirectionPhase;                                         // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RedirectionPhaseOrder;                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ViewRedirector;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OpenOverOriginal;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BlockAcquisitions;                                        // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
