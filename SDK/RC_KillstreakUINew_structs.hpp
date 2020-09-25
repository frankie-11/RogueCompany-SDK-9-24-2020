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

// Enum KillstreakUINew.EKSPlayerQueryError
enum class EKSPlayerQueryError : uint8_t
{
	EKSPlayerQueryError__None      = 0,
	EKSPlayerQueryError__NoResults = 1,
	EKSPlayerQueryError__TimedOut  = 2,
	EKSPlayerQueryError__QueryError = 3,
	EKSPlayerQueryError__EKSPlayerQueryError_MAX = 4
};


// Enum KillstreakUINew.EPerkTreeNodeState
enum class EPerkTreeNodeState : uint8_t
{
	EPerkTreeNodeState__NODE_OFF   = 0,
	EPerkTreeNodeState__NODE_ERROR = 1,
	EPerkTreeNodeState__NODE_UNREACHABLE = 2,
	EPerkTreeNodeState__NODE_UNAFFORDABLE = 3,
	EPerkTreeNodeState__NODE_UNLOCKABLE = 4,
	EPerkTreeNodeState__NODE_OWNED = 5,
	EPerkTreeNodeState__NODE_OWNED_EQUIPPED = 6,
	EPerkTreeNodeState__NODE_MAX   = 7
};


// Enum KillstreakUINew.ESpecialtyItemType
enum class ESpecialtyItemType : uint8_t
{
	ESpecialtyItemType__ESpecItemType_SpecialtyPerk = 0,
	ESpecialtyItemType__ESpecItemType_GlobalPerk = 1,
	ESpecialtyItemType__ESpecItemType_Killstreak = 2,
	ESpecialtyItemType__ESpecItemType_Gadget = 3,
	ESpecialtyItemType__ESpecItemType_PistolAttachment = 4,
	ESpecialtyItemType__ESpecItemType_Pistol = 5,
	ESpecialtyItemType__ESpecItemType_Specialty = 6,
	ESpecialtyItemType__ESpecItemType_AutoEquippedPerk = 7,
	ESpecialtyItemType__ESpecItemType_SecondaryAbility = 8,
	ESpecialtyItemType__ESpecItemType_LoadoutClass = 9,
	ESpecialtyItemType__ESpecItemType_LoadoutBundle = 10,
	ESpecialtyItemType__ESpecItemType_MAX = 11
};


// Enum KillstreakUINew.EQueueType
enum class EQueueType : uint8_t
{
	EQueueType__QT_Training        = 0,
	EQueueType__QT_PVP             = 1,
	EQueueType__QT_PVE             = 2,
	EQueueType__QT_Custom          = 3,
	EQueueType__QT_None            = 4,
	EQueueType__QT_MAX             = 5
};


// Enum KillstreakUINew.EKSSocialOverlaySection
enum class EKSSocialOverlaySection : uint8_t
{
	EKSSocialOverlaySection__Invalid = 0,
	EKSSocialOverlaySection__PartyMembers = 1,
	EKSSocialOverlaySection__MatchTeamMembers = 2,
	EKSSocialOverlaySection__PartyInvitations = 3,
	EKSSocialOverlaySection__OnlineMctsFriends = 4,
	EKSSocialOverlaySection__OnlinePortalFriends = 5,
	EKSSocialOverlaySection__OfflineMctsFriends = 6,
	EKSSocialOverlaySection__Blocked = 7,
	EKSSocialOverlaySection__Pending = 8,
	EKSSocialOverlaySection__SearchResults = 9,
	EKSSocialOverlaySection__FriendInvites = 10,
	EKSSocialOverlaySection__RecentlyPlayed = 11,
	EKSSocialOverlaySection__SuggestedFriends = 12,
	EKSSocialOverlaySection__MAX   = 13
};


// Enum KillstreakUINew.EKSInviteSelectResult
enum class EKSInviteSelectResult : uint8_t
{
	EKSInviteSelectResult__NoChange = 0,
	EKSInviteSelectResult__Selected = 1,
	EKSInviteSelectResult__Deselected = 2,
	EKSInviteSelectResult__EKSInviteSelectResult_MAX = 3
};


// Enum KillstreakUINew.EKSInviteCloseAction
enum class EKSInviteCloseAction : uint8_t
{
	EKSInviteCloseAction__None     = 0,
	EKSInviteCloseAction__Submit   = 1,
	EKSInviteCloseAction__EKSInviteCloseAction_MAX = 2
};


// Enum KillstreakUINew.EKSVoiceActivityAudioState
enum class EKSVoiceActivityAudioState : uint8_t
{
	EKSVoiceActivityAudioState__Disconnected = 0,
	EKSVoiceActivityAudioState__Connecting = 1,
	EKSVoiceActivityAudioState__Connected = 2,
	EKSVoiceActivityAudioState__Disconnecting = 3,
	EKSVoiceActivityAudioState__EKSVoiceActivityAudioState_MAX = 4
};


// Enum KillstreakUINew.ECombatEventType
enum class ECombatEventType : uint8_t
{
	ECombatEventType__CombatEvent_Down = 0,
	ECombatEventType__CombatEvent_Elim = 1,
	ECombatEventType__CombatEvent_Assist = 2,
	ECombatEventType__CombatEvent_MAX = 3
};


// Enum KillstreakUINew.EConfigPropertyGuidedCalloutScenes
enum class EConfigPropertyGuidedCalloutScenes : uint8_t
{
	EConfigPropertyGuidedCalloutScenes__NONE = 0,
	EConfigPropertyGuidedCalloutScenes__ROGUE_SCENE = 1,
	EConfigPropertyGuidedCalloutScenes__ROGUE_CUSTOMIZATION = 2,
	EConfigPropertyGuidedCalloutScenes__QUEUE_SELECT = 3,
	EConfigPropertyGuidedCalloutScenes__MAX_DO_NOT_GO_OVER = 4,
	EConfigPropertyGuidedCalloutScenes__EConfigPropertyGuidedCalloutScenes_MAX = 5
};


// Enum KillstreakUINew.EAllyMarkerState
enum class EAllyMarkerState : uint8_t
{
	EAllyMarkerState__Normal       = 0,
	EAllyMarkerState__Downed       = 1,
	EAllyMarkerState__Reviving     = 2,
	EAllyMarkerState__Dead         = 3,
	EAllyMarkerState__Hidden       = 4,
	EAllyMarkerState__EAllyMarkerState_MAX = 5
};


// Enum KillstreakUINew.EContextPromptAnchoring
enum class EContextPromptAnchoring : uint8_t
{
	EContextPromptAnchoring__AnchorLeft = 0,
	EContextPromptAnchoring__AnchorRight = 1,
	EContextPromptAnchoring__AnchorCenter = 2,
	EContextPromptAnchoring__EContextPromptAnchoring_MAX = 3
};


// Enum KillstreakUINew.EKSCategoryOpenMode
enum class EKSCategoryOpenMode : uint8_t
{
	EKSCategoryOpenMode__ClosedByDefault = 0,
	EKSCategoryOpenMode__OpenByDefault = 1,
	EKSCategoryOpenMode__EKSCategoryOpenMode_MAX = 2
};


// Enum KillstreakUINew.EConsoleCommandParamType
enum class EConsoleCommandParamType : uint8_t
{
	EConsoleCommandParamType__None = 0,
	EConsoleCommandParamType__Bool = 1,
	EConsoleCommandParamType__String = 2,
	EConsoleCommandParamType__EConsoleCommandParamType_MAX = 3
};


// Enum KillstreakUINew.EPlayerAccountSlot
enum class EPlayerAccountSlot : uint8_t
{
	EPlayerAccountSlot__AVATAR_SLOT = 0,
	EPlayerAccountSlot__BANNER_SLOT = 1,
	EPlayerAccountSlot__PREFERRED_MERC_SLOT = 2,
	EPlayerAccountSlot__EPlayerAccountSlot_MAX = 3
};


// Enum KillstreakUINew.ESocialMessageType
enum class ESocialMessageType : uint8_t
{
	ESocialMessageType__EInvite    = 0,
	ESocialMessageType__EInviteResponse = 1,
	ESocialMessageType__EInviteExpired = 2,
	ESocialMessageType__EInviteError = 3,
	ESocialMessageType__EGenericMsg = 4,
	ESocialMessageType__ESocialMessageType_MAX = 5
};


// Enum KillstreakUINew.ELowAmmoState
enum class ELowAmmoState : uint8_t
{
	ELowAmmoState__Normal          = 0,
	ELowAmmoState__NeedsReload     = 1,
	ELowAmmoState__LowAmmo         = 2,
	ELowAmmoState__NoAmmo          = 3,
	ELowAmmoState__ELowAmmoState_MAX = 4
};


// Enum KillstreakUINew.EIconMarkerScreenRegion
enum class EIconMarkerScreenRegion : uint8_t
{
	EIconMarkerScreenRegion__Normal = 0,
	EIconMarkerScreenRegion__Center = 1,
	EIconMarkerScreenRegion__Edge  = 2,
	EIconMarkerScreenRegion__EIconMarkerScreenRegion_MAX = 3
};


// Enum KillstreakUINew.EIconHoverState
enum class EIconHoverState : uint8_t
{
	EIconHoverState__Unhovered     = 0,
	EIconHoverState__Hovering      = 1,
	EIconHoverState__Hovered       = 2,
	EIconHoverState__Unhovering    = 3,
	EIconHoverState__EIconHoverState_MAX = 4
};


// Enum KillstreakUINew.EMinimapWidgetClampStyle
enum class EMinimapWidgetClampStyle : uint8_t
{
	EMinimapWidgetClampStyle__Circular = 0,
	EMinimapWidgetClampStyle__Square = 1,
	EMinimapWidgetClampStyle__SquareByAngle = 2,
	EMinimapWidgetClampStyle__SquareByProjection = 3,
	EMinimapWidgetClampStyle__EMinimapWidgetClampStyle_MAX = 4
};


// Enum KillstreakUINew.ENewsActions
enum class ENewsActions : uint8_t
{
	ENewsActions__ENewsActions_Unknown = 0,
	ENewsActions__ENewsActions_ExternalURL = 1,
	ENewsActions__ENewsActions_NavToRoute = 2,
	ENewsActions__ENewsActions_MAX = 3
};


// Enum KillstreakUINew.EPerkTreeEdgeState
enum class EPerkTreeEdgeState : uint8_t
{
	EPerkTreeEdgeState__EDGE_OFF   = 0,
	EPerkTreeEdgeState__EDGE_ERROR = 1,
	EPerkTreeEdgeState__EDGE_UNREACHABLE = 2,
	EPerkTreeEdgeState__EDGE_TO_UNLOCKABLE = 3,
	EPerkTreeEdgeState__EDGE_OWNED = 4,
	EPerkTreeEdgeState__EDGE_MAX   = 5
};


// Enum KillstreakUINew.EPerkTreeEdgeType
enum class EPerkTreeEdgeType : uint8_t
{
	EPerkTreeEdgeType__EDGE_TOP    = 0,
	EPerkTreeEdgeType__EDGE_LEFT   = 1,
	EPerkTreeEdgeType__EDGE_DIAGONAL = 2,
	EPerkTreeEdgeType__EDGE_BACK_DIAGONAL = 3,
	EPerkTreeEdgeType__EDGE_MAX    = 4
};


// Enum KillstreakUINew.EKSPlatformType
enum class EKSPlatformType : uint8_t
{
	EKSPlatformType__PC            = 0,
	EKSPlatformType__XboxOne       = 1,
	EKSPlatformType__Playstation4  = 2,
	EKSPlatformType__Switch        = 3,
	EKSPlatformType__ConsoleGeneric = 4,
	EKSPlatformType__Epic          = 5,
	EKSPlatformType__Steam         = 6,
	EKSPlatformType__IOS           = 7,
	EKSPlatformType__Android       = 8,
	EKSPlatformType__MobileGeneric = 9,
	EKSPlatformType__EKSPlatformType_MAX = 10
};


// Enum KillstreakUINew.EKSPlayerInputType
enum class EKSPlayerInputType : uint8_t
{
	EKSPlayerInputType__PIT_Unknown = 0,
	EKSPlayerInputType__PIT_KeyboardMouse = 1,
	EKSPlayerInputType__PIT_Gamepad = 2,
	EKSPlayerInputType__PIT_Touch  = 3,
	EKSPlayerInputType__PIT_MAX    = 4
};


// Enum KillstreakUINew.EKSPlayerOnlineStatus
enum class EKSPlayerOnlineStatus : uint8_t
{
	EKSPlayerOnlineStatus__FGS_InParty = 0,
	EKSPlayerOnlineStatus__FGS_Online = 1,
	EKSPlayerOnlineStatus__FGS_DND = 2,
	EKSPlayerOnlineStatus__FGS_Offline = 3,
	EKSPlayerOnlineStatus__FGS_MAX = 4
};


// Enum KillstreakUINew.EPlayerSelectionState
enum class EPlayerSelectionState : uint8_t
{
	EPlayerSelectionState__EPlayerState_Selecting = 0,
	EPlayerSelectionState__EPlayerState_Selected = 1,
	EPlayerSelectionState__EPlayerState_LockedIn = 2,
	EPlayerSelectionState__EPlayerState_MAX = 3
};


// Enum KillstreakUINew.EPointObjectiveMarkerTeamState
enum class EPointObjectiveMarkerTeamState : uint8_t
{
	EPointObjectiveMarkerTeamState__Neutral = 0,
	EPointObjectiveMarkerTeamState__AllyOwned = 1,
	EPointObjectiveMarkerTeamState__EnemyOwned = 2,
	EPointObjectiveMarkerTeamState__Contested = 3,
	EPointObjectiveMarkerTeamState__EPointObjectiveMarkerTeamState_MAX = 4
};


// Enum KillstreakUINew.EPointObjectiveMarkerObjectiveState
enum class EPointObjectiveMarkerObjectiveState : uint8_t
{
	EPointObjectiveMarkerObjectiveState__Locked = 0,
	EPointObjectiveMarkerObjectiveState__Unlocked = 1,
	EPointObjectiveMarkerObjectiveState__Capturing = 2,
	EPointObjectiveMarkerObjectiveState__Captured = 3,
	EPointObjectiveMarkerObjectiveState__Recapturing = 4,
	EPointObjectiveMarkerObjectiveState__EPointObjectiveMarkerObjectiveState_MAX = 5
};


// Enum KillstreakUINew.EKSQueueJoinError
enum class EKSQueueJoinError : uint8_t
{
	EKSQueueJoinError__None        = 0,
	EKSQueueJoinError__SystemError = 1,
	EKSQueueJoinError__QueueUnavailable = 2,
	EKSQueueJoinError__DeserterPenaltyActive = 3,
	EKSQueueJoinError__PlayerLevelRequirement = 4,
	EKSQueueJoinError__PartyMinMemberRequirement = 5,
	EKSQueueJoinError__PartyMaxMemberRequirement = 6,
	EKSQueueJoinError__InQueue     = 7,
	EKSQueueJoinError__EKSQueueJoinError_MAX = 8
};


// Enum KillstreakUINew.EQueueTimerState
enum class EQueueTimerState : uint8_t
{
	EQueueTimerState__Unknown      = 0,
	EQueueTimerState__DeserterPenaltyActive = 1,
	EQueueTimerState__WaitingForLeader = 2,
	EQueueTimerState__Queued       = 3,
	EQueueTimerState__EnteringMatch = 4,
	EQueueTimerState__EQueueTimerState_MAX = 5
};


// Enum KillstreakUINew.EQuickPlayQueueState
enum class EQuickPlayQueueState : uint8_t
{
	EQuickPlayQueueState__Unknown  = 0,
	EQuickPlayQueueState__NoQueuesAvailable = 1,
	EQuickPlayQueueState__NoSelectedQueue = 2,
	EQuickPlayQueueState__SelectedQueueUnavailable = 3,
	EQuickPlayQueueState__DeserterPenaltyActive = 4,
	EQuickPlayQueueState__SelectedQueuePartyMinLimit = 5,
	EQuickPlayQueueState__SelectedQueuePartyMaxLimit = 6,
	EQuickPlayQueueState__ReadyToJoin = 7,
	EQuickPlayQueueState__WaitingForLeader = 8,
	EQuickPlayQueueState__Queued   = 9,
	EQuickPlayQueueState__EnteringMatch = 10,
	EQuickPlayQueueState__ReadyToRejoin = 11,
	EQuickPlayQueueState__EQuickPlayQueueState_MAX = 12
};


// Enum KillstreakUINew.EAmmoState
enum class EAmmoState : uint8_t
{
	EAmmoState__EAmmoState_Full    = 0,
	EAmmoState__EAmmoState_NeedsReload = 1,
	EAmmoState__EAmmoState_LowAmmo = 2,
	EAmmoState__EAmmoState_CriticallyLowAmmo = 3,
	EAmmoState__EAmmoState_NoAmmo  = 4,
	EAmmoState__EAmmoState_MAX     = 5
};


// Enum KillstreakUINew.EKSSettingType
enum class EKSSettingType : uint8_t
{
	EKSSettingType__Bool           = 0,
	EKSSettingType__Int            = 1,
	EKSSettingType__Float          = 2,
	EKSSettingType__Key            = 3,
	EKSSettingType__Invalid        = 4,
	EKSSettingType__EKSSettingType_MAX = 5
};


// Enum KillstreakUINew.EPUMG_ShopItemUpgradeSegmentType
enum class EPUMG_ShopItemUpgradeSegmentType : uint8_t
{
	EPUMG_ShopItemUpgradeSegmentType__Single = 0,
	EPUMG_ShopItemUpgradeSegmentType__First = 1,
	EPUMG_ShopItemUpgradeSegmentType__Middle = 2,
	EPUMG_ShopItemUpgradeSegmentType__Last = 3,
	EPUMG_ShopItemUpgradeSegmentType__EPUMG_MAX = 4
};


// Enum KillstreakUINew.EKSSocialFriendSection
enum class EKSSocialFriendSection : uint8_t
{
	EKSSocialFriendSection__Invalid = 0,
	EKSSocialFriendSection__PartyMembers = 1,
	EKSSocialFriendSection__MatchTeamMembers = 2,
	EKSSocialFriendSection__PartyInvitations = 3,
	EKSSocialFriendSection__OnlineMctsFriends = 4,
	EKSSocialFriendSection__OnlinePortalFriends = 5,
	EKSSocialFriendSection__OfflineMctsFriends = 6,
	EKSSocialFriendSection__Blocked = 7,
	EKSSocialFriendSection__Pending = 8,
	EKSSocialFriendSection__MAX    = 9
};


// Enum KillstreakUINew.EKSSocialPanelDisplayOption
enum class EKSSocialPanelDisplayOption : uint8_t
{
	EKSSocialPanelDisplayOption__HideIfEmpty = 0,
	EKSSocialPanelDisplayOption__ShowIfEmpty = 1,
	EKSSocialPanelDisplayOption__EKSSocialPanelDisplayOption_MAX = 2
};


// Enum KillstreakUINew.EStoreSectionTypes
enum class EStoreSectionTypes : uint8_t
{
	NewSection                     = 0,
	DLCSection                     = 1,
	FeaturedSection                = 2,
	RogueBucksSection              = 3,
	DailySection                   = 4,
	BoostsSection                  = 5,
	LimitedTimeOfferSection        = 6,
	SpecialPromotionsSection       = 7,
	EStoreSectionTypes_MAX         = 8
};


// Enum KillstreakUINew.EStoreItemWidgetType
enum class EStoreItemWidgetType : uint8_t
{
	ELargePanel                    = 0,
	ETallPanel                     = 1,
	ESmallPanel                    = 2,
	STORE_WIDGET_TYPE_MAX          = 3,
	EStoreItemWidgetType_MAX       = 4
};


// Enum KillstreakUINew.ETargetMarkerViewState
enum class ETargetMarkerViewState : uint8_t
{
	ETargetMarkerViewState__Hidden = 0,
	ETargetMarkerViewState__Showing = 1,
	ETargetMarkerViewState__Shown  = 2,
	ETargetMarkerViewState__HidingNeutral = 3,
	ETargetMarkerViewState__HidingActivated = 4,
	ETargetMarkerViewState__HidingFailed = 5,
	ETargetMarkerViewState__ETargetMarkerViewState_MAX = 6
};


// Enum KillstreakUINew.EToastCategory
enum class EToastCategory : uint8_t
{
	EToastCategory__ETOAST_INFO    = 0,
	EToastCategory__ETOAST_ERROR   = 1,
	EToastCategory__ETOAST_FRIEND  = 2,
	EToastCategory__ETOAST_PARTY   = 3,
	EToastCategory__ETOAST_CHALLENGE = 4,
	EToastCategory__ETOAST_MERC_MASTERY = 5,
	EToastCategory__ETOAST_ITEM_UNLOCK = 6,
	EToastCategory__ETOAST_MAX     = 7
};


// Enum KillstreakUINew.EReportPlayerReason
enum class EReportPlayerReason : uint8_t
{
	EReportPlayerReason__Unknown_None = 0,
	EReportPlayerReason__Harassment = 1,
	EReportPlayerReason__Cheating  = 2,
	EReportPlayerReason__Teaming   = 3,
	EReportPlayerReason__IntentionalFeeding = 4,
	EReportPlayerReason__StreamSniping = 5,
	EReportPlayerReason__LeavingTheGame_AFK = 6,
	EReportPlayerReason__OtherReason = 7,
	EReportPlayerReason__EReportPlayerReason_MAX = 8
};


// Enum KillstreakUINew.EKSVendorTypes
enum class EKSVendorTypes : uint8_t
{
	EKSVendorTypes__Unknown        = 0,
	EKSVendorTypes__Equipment      = 1,
	EKSVendorTypes__Specialty      = 2,
	EKSVendorTypes__SpecialtyItem  = 3,
	EKSVendorTypes__StarterSpecLoadout = 4,
	EKSVendorTypes__Apparel        = 5,
	EKSVendorTypes__StarterApparelLoadout = 6,
	EKSVendorTypes__MalwearApparelLoadout = 7,
	EKSVendorTypes__MercTwoApparelLoadout = 8,
	EKSVendorTypes__HitmanApparelLoadout = 9,
	EKSVendorTypes__EKSVendorTypes_MAX = 10
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KillstreakUINew.GuidedCalloutCardData
// 0x0058
struct FGuidedCalloutCardData
{
	struct FText                                       Header;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KillstreakUINew.GuidedCalloutCardData.Image
};

// ScriptStruct KillstreakUINew.TickAnimationParams
// 0x002C
struct FTickAnimationParams
{
	float                                              Duration;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             UpdateEvent;                                              // 0x0004(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             FinishedEvent;                                            // 0x0014(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      IsPlaying;                                                // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.ContextAction
// 0x0038 (0x0040 - 0x0008)
struct FContextAction : public FTableRowBase
{
	struct FKey                                        Key;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Text;                                                     // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                SortOrder;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EContextPromptAnchoring                            Anchor;                                                   // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsConfirm;                                                // 0x003D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsCancel;                                                 // 0x003E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.RouteContextInfo
// 0x0010
struct FRouteContextInfo
{
	TArray<class UContextActionData*>                  ActionData;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct KillstreakUINew.DebugMenuCommandInfo
// 0x0018
struct FDebugMenuCommandInfo
{
	struct FString                                     CommandName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EConsoleCommandParamType                           ParamType;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.EliminationMessage
// 0x0040
struct FEliminationMessage
{
	struct FString                                     VictimName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     InstigatorName;                                           // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Message;                                                  // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                DamageDealt;                                              // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECombatEventType                                   EventType;                                                // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsVictim;                                                 // 0x003D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsSelf;                                                   // 0x003E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.ExpDisplayInfo
// 0x0028
struct FExpDisplayInfo
{
	int                                                EventDelta;                                               // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       EventReason;                                              // 0x0008(0x0018) (BlueprintVisible)
	unsigned char                                      bIsBonus;                                                 // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.ButtonPromptData
// 0x0030
struct FButtonPromptData
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (BlueprintVisible)
	struct FText                                       Text;                                                     // 0x0018(0x0018) (BlueprintVisible)
};

// ScriptStruct KillstreakUINew.ButtonPromptContext
// 0x0010
struct FButtonPromptContext
{
	TArray<struct FButtonPromptData>                   PromptInfo;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct KillstreakUINew.UIMapInfo
// 0x0050 (0x0058 - 0x0008)
struct FUIMapInfo : public FTableRowBase
{
	TArray<int>                                        MapIds;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       DisplayName;                                              // 0x0018(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KillstreakUINew.UIMapInfo.MapThumbnail
};

// ScriptStruct KillstreakUINew.ClientQueueInfo
// 0x0058 (0x00A8 - 0x0050)
struct FClientQueueInfo : public FPUMG_ClientQueueInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KillstreakUINew.ClientQueueInfo.ItemIcon
	EQueueType                                         QueueType;                                                // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FUIMapInfo>                          MapRotationInfos;                                         // 0x0080(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                MaxPlayerPerSide;                                         // 0x0090(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SortOrder;                                                // 0x0094(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShelteredMMQueueId;                                       // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShelteredMMLevelLimit;                                    // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShelteredMMAttemptTimeout;                                // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UsesDeserterPenalty;                                      // 0x00A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.RoundResultAnnoucement
// 0x0020
struct FRoundResultAnnoucement
{
	int                                                WinningTeamID;                                            // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       ResultText;                                               // 0x0008(0x0018) (BlueprintVisible)
};

// ScriptStruct KillstreakUINew.CustomLoadoutItem
// 0x0010
struct FCustomLoadoutItem
{
	class UKSItem*                                     Item;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESpecialtyItemType                                 SpecialtyItemType;                                        // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LoadoutClassItemId;                                       // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSPerkTreeEdgeInfo
// 0x0002
struct FKSPerkTreeEdgeInfo
{
	EPerkTreeEdgeType                                  EdgeType;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPerkTreeEdgeState                                 EdgeState;                                                // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.PlayerAlias
// 0x0020
struct FPlayerAlias
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSPlayerQueryHandle
// 0x0010
struct FKSPlayerQueryHandle
{
	class UKSPlayerQueryDataFactory*                   Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSPointObjectiveMarkerViewState
// 0x000C
struct FKSPointObjectiveMarkerViewState
{
	struct FName                                       ObjectiveState;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPointObjectiveMarkerTeamState                     TeamState;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsBombDeployedHere;                                       // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.QueueSection
// 0x0018
struct FQueueSection
{
	EQueueType                                         QueueSectionType;                                         // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FClientQueueInfo>                    AssociatedQueues;                                         // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct KillstreakUINew.KSAllowedPlatformTypes
// 0x0008
struct FKSAllowedPlatformTypes
{
	unsigned char                                      XboxOne;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      PS4;                                                      // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Switch;                                                   // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Windows;                                                  // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Mac;                                                      // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Linux;                                                    // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IOS;                                                      // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Android;                                                  // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSRequiredInputTypes
// 0x0002
struct FKSRequiredInputTypes
{
	unsigned char                                      Gamepad;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Mouse;                                                    // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSSwitchDockedModeSetting
// 0x0002
struct FKSSwitchDockedModeSetting
{
	unsigned char                                      ShowDocked;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ShowHandheld;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSSettingsWidgetConfig
// 0x0010
struct FKSSettingsWidgetConfig
{
	class UClass*                                      WidgetClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SettingInfo;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSSettingsContainerConfig
// 0x00F0
struct FKSSettingsContainerConfig
{
	struct FText                                       SettingName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<struct FString, struct FText>                 SettingNameByPlatform;                                    // 0x0018(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       SettingDescription;                                       // 0x0068(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<struct FString, struct FText>                 SettingDescriptionByPlatform;                             // 0x0080(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bIsAvailableOffline;                                      // 0x00D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSAllowedPlatformTypes                     AllowedPlatformTypes;                                     // 0x00D1(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FKSRequiredInputTypes                       RequiredInputTypes;                                       // 0x00D9(0x0002) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FKSSwitchDockedModeSetting                  SwitchDockedModeSetting;                                  // 0x00DB(0x0002) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FKSSettingsWidgetConfig>             WidgetConfigs;                                            // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct KillstreakUINew.KSSettingsGroupConfig
// 0x0100
struct FKSSettingsGroupConfig
{
	struct FKSSettingsContainerConfig                  MainSettingContainer;                                     // 0x0000(0x00F0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FKSSettingsContainerConfig>          SubSettingContainers;                                     // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct KillstreakUINew.KSSettingsSectionConfig
// 0x0078
struct FKSSettingsSectionConfig
{
	struct FText                                       Heading;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<struct FString, struct FText>                 HeadingByPlatform;                                        // 0x0018(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FKSSettingsGroupConfig>              SettingsGroups;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct KillstreakUINew.KSSettingsPageConfig
// 0x0078
struct FKSSettingsPageConfig
{
	struct FText                                       PageName;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<struct FString, struct FText>                 HeadingByPlatform;                                        // 0x0018(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FKSSettingsSectionConfig>            SettingsSections;                                         // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct KillstreakUINew.KSSettingPropertyId
// 0x0018
struct FKSSettingPropertyId
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	int                                                ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSSettingsMenuConfig
// 0x0010
struct FKSSettingsMenuConfig
{
	TArray<struct FKSSettingsPageConfig>               SettingsPages;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct KillstreakUINew.SettingDelegateStruct
// 0x0020
struct FSettingDelegateStruct
{
	struct FScriptDelegate                             SettingApplied;                                           // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SettingSaved;                                             // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
};

// ScriptStruct KillstreakUINew.KSKeyBind
// 0x0078
struct FKSKeyBind
{
	struct FKey                                        Primary;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	EKSInputActionType                                 PrimaryInputActionType;                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Secondary;                                                // 0x0020(0x0018) (Edit, BlueprintVisible)
	EKSInputActionType                                 SecondaryInputActionType;                                 // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Gamepad;                                                  // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        Combo;                                                    // 0x0058(0x0018) (Edit, BlueprintVisible)
	EKSInputActionType                                 GamepadInputActionType;                                   // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSKeyBindInfo
// 0x0010
struct FKSKeyBindInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EKSInputType                                       InputType;                                                // 0x000C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EKSKeyBindType                                     KeyBindType;                                              // 0x000D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsPermanentBinding;                                       // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.ToastData
// 0x0050
struct FToastData
{
	EToastCategory                                     ToastCategory;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Message;                                                  // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UPUMG_StoreItem*                             Reward;                                                   // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPlatformInventoryItem*                      OptionalItemValue;                                        // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OptionalIntValue;                                         // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.ReportPlayerParams
// 0x0030
struct FReportPlayerParams
{
	int64_t                                            PlayerId;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            InstanceId;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LocalPlayerTeamId;                                        // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ReportedPlayerTeamId;                                     // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalPlayerCount;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EReportPlayerReason                                Reason;                                                   // 0x001C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReportComment;                                            // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct KillstreakUINew.SpecialDamageColors
// 0x0030
struct FSpecialDamageColors
{
	struct FLinearColor                                FontColor;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                StrokeColor;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                GlowColor;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.PlayerInventorySlot
// 0x0018
struct FPlayerInventorySlot
{
	int                                                SlotIndex;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset*                              WeaponAsset;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                SlotEquipPoint;                                           // 0x0010(0x0008) (BlueprintVisible)
};

// ScriptStruct KillstreakUINew.PlayerProgression
// 0x0028
struct FPlayerProgression
{
	TArray<struct FActivityTier>                       ProgressionTiers;                                         // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                StartingXPValue;                                          // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EndingXPValue;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UKSActivity*                                 ActivityReference;                                        // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UKSActivityInstance*                         ActivityInstanceReference;                                // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.GuidedCalloutSceneData
// 0x0038 (0x0040 - 0x0008)
struct FGuidedCalloutSceneData : public FTableRowBase
{
	EConfigPropertyGuidedCalloutScenes                 SceneIndex;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AssociatedViewRoute;                                      // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       HeaderText;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuidedCalloutCardData>              CalloutCards;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct KillstreakUINew.MatchDetail
// 0x0038
struct FMatchDetail
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.FontPaletteInfo
// 0x0050 (0x0058 - 0x0008)
struct FFontPaletteInfo : public FTableRowBase
{
	struct FSlateFontInfo                              FontInfo;                                                 // 0x0008(0x0050) (Edit, BlueprintVisible)
};

// ScriptStruct KillstreakUINew.ColorPaletteInfo
// 0x0010 (0x0018 - 0x0008)
struct FColorPaletteInfo : public FTableRowBase
{
	struct FLinearColor                                LinearColor;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.MapIconOptions
// 0x0018
struct FMapIconOptions
{
	struct FVector                                     MarkerWorldPosition;                                      // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchorHeight;                                             // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenMargin;                                             // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSMediaPlayerWidgetPlaylistEntry
// 0x0028 (0x0030 - 0x0008)
struct FKSMediaPlayerWidgetPlaylistEntry : public FTableRowBase
{
	unsigned char                                      bIsSkippable;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkippableAfter;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bForceFirstWatch;                                         // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bOnlyWatchOnce;                                           // 0x0011(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint16_t                                           MajorVersion;                                             // 0x0012(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlatformMediaSource*                        PlatformMediaSource;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               PlayEvent;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               StopEvent;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSPendingProfiles
// 0x0028
struct FKSPendingProfiles
{
	TArray<class UKSPlayerInfo*>                       PendingPlayers;                                           // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.QueueDetail
// 0x0040 (0x0048 - 0x0008)
struct FQueueDetail : public FTableRowBase
{
	int                                                QueueId;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       QueueName;                                                // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       QueueDescription;                                         // 0x0028(0x0018) (Edit, BlueprintVisible)
	int                                                SortOrder;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSKeyGroup
// 0x001C
struct FKSKeyGroup
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSSocialPanelSectionDef
// 0x0003
struct FKSSocialPanelSectionDef
{

};

// ScriptStruct KillstreakUINew.SpecialtyData
// 0x0048
struct FSpecialtyData
{
	class UKSSpecialty*                                Specialty;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FCustomLoadoutItem                          Killstreak;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FCustomLoadoutItem                          SecondaryAbility;                                         // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FCustomLoadoutItem                          PassiveAbility;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly)
	TArray<int>                                        AssociatedLoadoutItemIds;                                 // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct KillstreakUINew.SpecialtyCustomLoadout
// 0x01A0
struct FSpecialtyCustomLoadout
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                LoadoutClassItemId;                                       // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LoadoutBundleItemId;                                      // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSpecialtyData                              SpecialtyOne;                                             // 0x0010(0x0048) (BlueprintVisible)
	struct FSpecialtyData                              SpecialtyTwo;                                             // 0x0058(0x0048) (BlueprintVisible)
	struct FCustomLoadoutItem                          PerkOne;                                                  // 0x00A0(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PerkTwo;                                                  // 0x00B0(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PerkThree;                                                // 0x00C0(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PerkFour;                                                 // 0x00D0(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PassiveOne;                                               // 0x00E0(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PassiveTwo;                                               // 0x00F0(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          KillstreakOne;                                            // 0x0100(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          KillstreakTwo;                                            // 0x0110(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          SecondaryAbilityOne;                                      // 0x0120(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          SecondaryAbilityTwo;                                      // 0x0130(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          GadgetOne;                                                // 0x0140(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          Pistol;                                                   // 0x0150(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PistolAttachmentOne;                                      // 0x0160(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PistolAttachmentTwo;                                      // 0x0170(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PistolAttachmentThree;                                    // 0x0180(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PrimaryWeapon;                                            // 0x0190(0x0010) (BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
