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

// Enum Killstreak.EItemSourceType
enum class EItemSourceType : uint8_t
{
	EItemSourceType__Unknown       = 0,
	EItemSourceType__AbilityUse    = 1,
	EItemSourceType__Cheat         = 2,
	EItemSourceType__InitialInventory = 3,
	EItemSourceType__LobbyAnimation = 4,
	EItemSourceType__PickupInteraction = 5,
	EItemSourceType__Refund        = 6,
	EItemSourceType__RestoreInventory = 7,
	EItemSourceType__StorePurchase = 8,
	EItemSourceType__WeaponSwap    = 9,
	EItemSourceType__EItemSourceType_MAX = 10
};


// Enum Killstreak.EKSCharacterAimMode
enum class EKSCharacterAimMode : uint8_t
{
	EKSCharacterAimMode__Default   = 0,
	EKSCharacterAimMode__TransitionToDefault = 1,
	EKSCharacterAimMode__Shoulder  = 2,
	EKSCharacterAimMode__TransitionToShoulder = 3,
	EKSCharacterAimMode__AimDownSights = 4,
	EKSCharacterAimMode__TransitionToAimDownSights = 5,
	EKSCharacterAimMode__Alternate = 6,
	EKSCharacterAimMode__TransitionToAlternate = 7,
	EKSCharacterAimMode__EKSCharacterAimMode_MAX = 8
};


// Enum Killstreak.EKSEmotion
enum class EKSEmotion : uint8_t
{
	EKSEmotion__Neutral            = 0,
	EKSEmotion__Focused            = 1,
	EKSEmotion__Pain               = 2,
	EKSEmotion__Wounded            = 3,
	EKSEmotion__Dead               = 4,
	EKSEmotion__MAX                = 5
};


// Enum Killstreak.EAmmoType
enum class EAmmoType : uint8_t
{
	EAmmoType__NINE_MM             = 0,
	EAmmoType__SEVEN               = 1,
	EAmmoType__FIVE                = 2,
	EAmmoType__TWELVE_G            = 3,
	EAmmoType__FORTY_FIVE          = 4,
	EAmmoType__THREE_HUND          = 5,
	EAmmoType__TWENTY_TWO          = 6,
	EAmmoType__FIFTY               = 7,
	EAmmoType__NONE                = 8,
	EAmmoType__EAmmoType_MAX       = 9
};


// Enum Killstreak.ECharacterBehaviorState
enum class ECharacterBehaviorState : uint8_t
{
	ECharacterBehaviorState__Combat = 0,
	ECharacterBehaviorState__Idle  = 1,
	ECharacterBehaviorState__Skydive = 2,
	ECharacterBehaviorState__ECharacterBehaviorState_MAX = 3
};


// Enum Killstreak.EKSItemUsageFailureType
enum class EKSItemUsageFailureType : uint8_t
{
	EKSItemUsageFailureType__Unknown = 0,
	EKSItemUsageFailureType__NotEnoughQuantity = 1,
	EKSItemUsageFailureType__BlockingAction = 2,
	EKSItemUsageFailureType__NoEffect = 3,
	EKSItemUsageFailureType__EMP   = 4,
	EKSItemUsageFailureType__EKSItemUsageFailureType_MAX = 5
};


// Enum Killstreak.EShotgunHitResult
enum class EShotgunHitResult : uint8_t
{
	EShotgunHitResult__Miss        = 0,
	EShotgunHitResult__Hit         = 1,
	EShotgunHitResult__Headshot    = 2,
	EShotgunHitResult__EShotgunHitResult_MAX = 3
};


// Enum Killstreak.EWeaponStateNew
enum class EWeaponStateNew : uint8_t
{
	EWeaponStateNew__Idle          = 0,
	EWeaponStateNew__Buildup       = 1,
	EWeaponStateNew__PreFire       = 2,
	EWeaponStateNew__PostFire      = 3,
	EWeaponStateNew__Cooldown      = 4,
	EWeaponStateNew__PreReload     = 5,
	EWeaponStateNew__PostReload    = 6,
	EWeaponStateNew__ReloadCooldown = 7,
	EWeaponStateNew__Retrieve      = 8,
	EWeaponStateNew__Holster       = 9,
	EWeaponStateNew__Inactive      = 10,
	EWeaponStateNew__EWeaponStateNew_MAX = 11
};


// Enum Killstreak.ELootSiteRarity
enum class ELootSiteRarity : uint8_t
{
	ELootSiteRarity__Personal      = 0,
	ELootSiteRarity__Normal        = 1,
	ELootSiteRarity__Uncommon      = 2,
	ELootSiteRarity__Epic          = 3,
	ELootSiteRarity__Rare          = 4,
	ELootSiteRarity__Legendary     = 5,
	ELootSiteRarity__NonWeapons    = 6,
	ELootSiteRarity__ChildSpawner  = 7,
	ELootSiteRarity__CarePackage   = 8,
	ELootSiteRarity__MedPack       = 9,
	ELootSiteRarity__StartingDrop  = 10,
	ELootSiteRarity__GameMode      = 11,
	ELootSiteRarity__PowerUp       = 12,
	ELootSiteRarity__ELootSiteRarity_MAX = 13
};


// Enum Killstreak.ECombatEventFriendlyFireType
enum class ECombatEventFriendlyFireType : uint8_t
{
	ECombatEventFriendlyFireType__Enemy = 0,
	ECombatEventFriendlyFireType__Friendly = 1,
	ECombatEventFriendlyFireType__ReverseFriendly = 2,
	ECombatEventFriendlyFireType__Self = 3,
	ECombatEventFriendlyFireType__ECombatEventFriendlyFireType_MAX = 4
};


// Enum Killstreak.EProjectileExplosionType
enum class EProjectileExplosionType : uint8_t
{
	EProjectileExplosionType__Impact = 0,
	EProjectileExplosionType__Fizzle = 1,
	EProjectileExplosionType__FuseExpired = 2,
	EProjectileExplosionType__EProjectileExplosionType_MAX = 3
};


// Enum Killstreak.EKSAbilityUsageFailureType
enum class EKSAbilityUsageFailureType : uint8_t
{
	EKSAbilityUsageFailureType__Unknown = 0,
	EKSAbilityUsageFailureType__Dead = 1,
	EKSAbilityUsageFailureType__Downed = 2,
	EKSAbilityUsageFailureType__EMP = 3,
	EKSAbilityUsageFailureType__NoFireZone = 4,
	EKSAbilityUsageFailureType__AlreadyActivating = 5,
	EKSAbilityUsageFailureType__Driving = 6,
	EKSAbilityUsageFailureType__Stunned = 7,
	EKSAbilityUsageFailureType__BlockingMovement = 8,
	EKSAbilityUsageFailureType__HardLanding = 9,
	EKSAbilityUsageFailureType__OutOfBounds = 10,
	EKSAbilityUsageFailureType__Locked = 11,
	EKSAbilityUsageFailureType__AltLocked = 12,
	EKSAbilityUsageFailureType__NotEnoughCharge = 13,
	EKSAbilityUsageFailureType__NoBountyTarget = 14,
	EKSAbilityUsageFailureType__AlreadyHasWeapon = 15,
	EKSAbilityUsageFailureType__WeaponBusy = 16,
	EKSAbilityUsageFailureType__RoundNotInProgress = 17,
	EKSAbilityUsageFailureType__EKSAbilityUsageFailureType_MAX = 18
};


// Enum Killstreak.EModViewModeStateChangeReason
enum class EModViewModeStateChangeReason : uint8_t
{
	EModViewModeStateChangeReason__Activated = 0,
	EModViewModeStateChangeReason__SpectatorChange = 1,
	EModViewModeStateChangeReason__Timeout = 2,
	EModViewModeStateChangeReason__Death = 3,
	EModViewModeStateChangeReason__EModViewModeStateChangeReason_MAX = 4
};


// Enum Killstreak.EModViewModeState
enum class EModViewModeState : uint8_t
{
	EModViewModeState__Off         = 0,
	EModViewModeState__OnButUnviewed = 1,
	EModViewModeState__OnAndViewed = 2,
	EModViewModeState__EModViewModeState_MAX = 3
};


// Enum Killstreak.EHitLocationType
enum class EHitLocationType : uint8_t
{
	EHitLocationType__Body         = 0,
	EHitLocationType__Head         = 1,
	EHitLocationType__Limb         = 2,
	EHitLocationType__None         = 3,
	EHitLocationType__EHitLocationType_MAX = 4
};


// Enum Killstreak.EKSVoicelineAudience
enum class EKSVoicelineAudience : uint8_t
{
	EKSVoicelineAudience__Self     = 0,
	EKSVoicelineAudience__Nearby   = 1,
	EKSVoicelineAudience__NearbyFriendlies = 2,
	EKSVoicelineAudience__AllFriendlies = 3,
	EKSVoicelineAudience__Enemies  = 4,
	EKSVoicelineAudience__EKSVoicelineAudience_MAX = 5
};


// Enum Killstreak.EAccoladeEventType
enum class EAccoladeEventType : uint8_t
{
	EAccoladeEventType__AccoladeEvent_Unknown = 0,
	EAccoladeEventType__AccoladeEvent_Elim = 1,
	EAccoladeEventType__AccoladeEvent_Downed = 2,
	EAccoladeEventType__AccoladeEvent_Revived = 3,
	EAccoladeEventType__AccoladeEvent_DownAssist = 4,
	EAccoladeEventType__AccoladeEvent_CombatEvent = 5,
	EAccoladeEventType__AccoladeEvent_MAX = 6
};


// Enum Killstreak.EAccoladeCategory
enum class EAccoladeCategory : uint8_t
{
	EAccoladeCategory__AccoladeCategory_DownsElims = 0,
	EAccoladeCategory__AccoladeCategory_MultiKill = 1,
	EAccoladeCategory__AccoladeCategory_Support = 2,
	EAccoladeCategory__AccoladeCategory_MAX = 3
};


// Enum Killstreak.EDisplayType
enum class EDisplayType : uint8_t
{
	EDisplayType__Mini             = 0,
	EDisplayType__Full             = 1,
	EDisplayType__Overlay          = 2,
	EDisplayType__EDisplayType_MAX = 3
};


// Enum Killstreak.ECombatState
enum class ECombatState : uint8_t
{
	ECombatState__Combat           = 0,
	ECombatState__Engaged          = 1,
	ECombatState__NonCombat        = 2,
	ECombatState__ECombatState_MAX = 3
};


// Enum Killstreak.EKSNeutralBombState
enum class EKSNeutralBombState : uint8_t
{
	EKSNeutralBombState__Spawned   = 0,
	EKSNeutralBombState__Reset     = 1,
	EKSNeutralBombState__Held      = 2,
	EKSNeutralBombState__Dropped   = 3,
	EKSNeutralBombState__Arming    = 4,
	EKSNeutralBombState__Armed     = 5,
	EKSNeutralBombState__Disarming = 6,
	EKSNeutralBombState__Disarmed  = 7,
	EKSNeutralBombState__Deactivated = 8,
	EKSNeutralBombState__EKSNeutralBombState_MAX = 9
};


// Enum Killstreak.EPingFailedType
enum class EPingFailedType : uint8_t
{
	EPingFailedType__None          = 0,
	EPingFailedType__Throttled     = 1,
	EPingFailedType__NoTarget      = 2,
	EPingFailedType__InvalidPingType = 3,
	EPingFailedType__EPingFailedType_MAX = 4
};


// Enum Killstreak.EPingMessage
enum class EPingMessage : uint8_t
{
	EPingMessage__None             = 0,
	EPingMessage__GoHere           = 1,
	EPingMessage__EnemyHere        = 2,
	EPingMessage__DefendHere       = 3,
	EPingMessage__HoldPosition     = 4,
	EPingMessage__FallBack         = 5,
	EPingMessage__PushForward      = 6,
	EPingMessage__GroupUp          = 7,
	EPingMessage__HelpMe           = 8,
	EPingMessage__EnemiesMoving    = 9,
	EPingMessage__Understood       = 10,
	EPingMessage__AllClear         = 11,
	EPingMessage__CancelThat       = 12,
	EPingMessage__ReviveMe         = 13,
	EPingMessage__Task1            = 14,
	EPingMessage__Task2            = 15,
	EPingMessage__Task3            = 16,
	EPingMessage__Task4            = 17,
	EPingMessage__Task5            = 18,
	EPingMessage__WatchOut         = 19,
	EPingMessage__EPingMessage_MAX = 20
};


// Enum Killstreak.EPingType
enum class EPingType : uint8_t
{
	EPingType__None                = 0,
	EPingType__PointAlly           = 1,
	EPingType__PointEnemy          = 2,
	EPingType__Self                = 3,
	EPingType__SelfEmergency       = 4,
	EPingType__Target              = 5,
	EPingType__Cancel              = 6,
	EPingType__Task                = 7,
	EPingType__NoPing              = 8,
	EPingType__EPingType_MAX       = 9
};


// Enum Killstreak.ESplineBehaviourType
enum class ESplineBehaviourType : uint8_t
{
	ESplineBehaviourType__OneShot  = 0,
	ESplineBehaviourType__OneShot_Reverse = 1,
	ESplineBehaviourType__Loop_Reset = 2,
	ESplineBehaviourType__PingPong = 3,
	ESplineBehaviourType__ESplineBehaviourType_MAX = 4
};


// Enum Killstreak.EShopItemType
enum class EShopItemType : uint8_t
{
	EShopItemType__None            = 0,
	EShopItemType__PrimaryOne      = 1,
	EShopItemType__PrimaryTwo      = 2,
	EShopItemType__SecondaryOne    = 3,
	EShopItemType__SecondaryTwo    = 4,
	EShopItemType__GadgetOne       = 5,
	EShopItemType__GadgetTwo       = 6,
	EShopItemType__Melee           = 7,
	EShopItemType__PerkOne         = 8,
	EShopItemType__PerkTwo         = 9,
	EShopItemType__PerkThree       = 10,
	EShopItemType__PerkFour        = 11,
	EShopItemType__PerkFive        = 12,
	EShopItemType__PerkSix         = 13,
	EShopItemType__GambitOne       = 14,
	EShopItemType__GambitTwo       = 15,
	EShopItemType__GambitThree     = 16,
	EShopItemType__GlobalPerk1     = 17,
	EShopItemType__GlobalPerk2     = 18,
	EShopItemType__GlobalPerk3     = 19,
	EShopItemType__GlobalPerk4     = 20,
	EShopItemType__GlobalPerk5     = 21,
	EShopItemType__GlobalPerk6     = 22,
	EShopItemType__GlobalPerk7     = 23,
	EShopItemType__GlobalPerk8     = 24,
	EShopItemType__GlobalPerk9     = 25,
	EShopItemType__GlobalPerk10    = 26,
	EShopItemType__GlobalPerk11    = 27,
	EShopItemType__GlobalPerk12    = 28,
	EShopItemType__GlobalPerk13    = 29,
	EShopItemType__GlobalPerk14    = 30,
	EShopItemType__GlobalPerk15    = 31,
	EShopItemType__MAX             = 32
};


// Enum Killstreak.ETrackedActorType
enum class ETrackedActorType : uint8_t
{
	ETrackedActorType__Unknown     = 0,
	ETrackedActorType__ShieldWeapon = 1,
	ETrackedActorType__MagGloveTarget = 2,
	ETrackedActorType__CoopEscapePoint = 3,
	ETrackedActorType__BountyTarget = 4,
	ETrackedActorType__BombDrop    = 5,
	ETrackedActorType__CashDrop    = 6,
	ETrackedActorType__Projectile  = 7,
	ETrackedActorType__HackTablet  = 8,
	ETrackedActorType__ETrackedActorType_MAX = 9
};


// Enum Killstreak.EJobSelectionState
enum class EJobSelectionState : uint8_t
{
	EJobSelectionState__Available  = 0,
	EJobSelectionState__Selected   = 1,
	EJobSelectionState__LockedIn   = 2,
	EJobSelectionState__Unavailable = 3,
	EJobSelectionState__EJobSelectionState_MAX = 4
};


// Enum Killstreak.EKSJobSelectPreviewLoadState
enum class EKSJobSelectPreviewLoadState : uint8_t
{
	EKSJobSelectPreviewLoadState__NoPreview = 0,
	EKSJobSelectPreviewLoadState__PreviewActive = 1,
	EKSJobSelectPreviewLoadState__PreviewLoadingNoVisible = 2,
	EKSJobSelectPreviewLoadState__PreviewLoadingActiveVisible = 3,
	EKSJobSelectPreviewLoadState__EKSJobSelectPreviewLoadState_MAX = 4
};


// Enum Killstreak.ETeamAlignment
enum class ETeamAlignment : uint8_t
{
	ETeamAlignment__TMAL_Neutral   = 0,
	ETeamAlignment__TMAL_Enemy     = 1,
	ETeamAlignment__TMAL_Friendly  = 2,
	ETeamAlignment__TMAL_MAX       = 3
};


// Enum Killstreak.EAnnouncementType
enum class EAnnouncementType : uint8_t
{
	EAnnouncementType__ANMT_Uknown = 0,
	EAnnouncementType__ANMT_ObjectiveMilestone = 1,
	EAnnouncementType__ANMT_PlayersLeft = 2,
	EAnnouncementType__ANMT_LastPlayerStanding = 3,
	EAnnouncementType__ANMT_RoyalePhase = 4,
	EAnnouncementType__ANMT_MAX    = 5
};


// Enum Killstreak.EGameResult
enum class EGameResult : uint8_t
{
	EGameResult__Victory           = 0,
	EGameResult__Defeat            = 1,
	EGameResult__Draw              = 2,
	EGameResult__EGameResult_MAX   = 3
};


// Enum Killstreak.EKSInteractionResult
enum class EKSInteractionResult : uint8_t
{
	EKSInteractionResult__None     = 0,
	EKSInteractionResult__Success  = 1,
	EKSInteractionResult__Interrupted = 2,
	EKSInteractionResult__Failed   = 3,
	EKSInteractionResult__EKSInteractionResult_MAX = 4
};


// Enum Killstreak.EMercCosmeticSlot
enum class EMercCosmeticSlot : uint8_t
{
	EMercCosmeticSlot__EMOTE_SLOT  = 0,
	EMercCosmeticSlot__SKIN_BUNDLE_SLOT = 1,
	EMercCosmeticSlot__WINGSUIT_SLOT = 2,
	EMercCosmeticSlot__WEAPON_WRAP_SLOT = 3,
	EMercCosmeticSlot__QUIP_SLOT   = 4,
	EMercCosmeticSlot__COMMUNICATION_SLOT = 5,
	EMercCosmeticSlot__SPRAY_SLOT  = 6,
	EMercCosmeticSlot__EMercCosmeticSlot_MAX = 7
};


// Enum Killstreak.EKSReviveDroneAbilityState
enum class EKSReviveDroneAbilityState : uint8_t
{
	EKSReviveDroneAbilityState__Unavailable = 0,
	EKSReviveDroneAbilityState__Available = 1,
	EKSReviveDroneAbilityState__Deployed = 2,
	EKSReviveDroneAbilityState__Reviving = 3,
	EKSReviveDroneAbilityState__Success = 4,
	EKSReviveDroneAbilityState__Refunded = 5,
	EKSReviveDroneAbilityState__Destroyed = 6,
	EKSReviveDroneAbilityState__EKSReviveDroneAbilityState_MAX = 7
};


// Enum Killstreak.EKSPingType
enum class EKSPingType : uint8_t
{
	EKSPingType__PING_DEFAULT      = 0,
	EKSPingType__PING_RADAR        = 1,
	EKSPingType__PING_INTEL        = 2,
	EKSPingType__PING_TRACKER      = 3,
	EKSPingType__PING_BOMB_HOLDER  = 4,
	EKSPingType__PING_MAX          = 5
};


// Enum Killstreak.ESurfaceTargetErrorReason
enum class ESurfaceTargetErrorReason : uint8_t
{
	ESurfaceTargetErrorReason__None = 0,
	ESurfaceTargetErrorReason__TooFar = 1,
	ESurfaceTargetErrorReason__TooHigh = 2,
	ESurfaceTargetErrorReason__NoRoomAtOrigin = 3,
	ESurfaceTargetErrorReason__InvalidSurface = 4,
	ESurfaceTargetErrorReason__TooClose = 5,
	ESurfaceTargetErrorReason__AimBlocked = 6,
	ESurfaceTargetErrorReason__ESurfaceTargetErrorReason_MAX = 7
};


// Enum Killstreak.EAimDataMode
enum class EAimDataMode : uint8_t
{
	EAimDataMode__NoEndTrace       = 0,
	EAimDataMode__EndTraceFromStartTrace = 1,
	EAimDataMode__EndTraceFromViewPoint = 2,
	EAimDataMode__Shotgun          = 3,
	EAimDataMode__EAimDataMode_MAX = 4
};


// Enum Killstreak.EKSActivityClientNotifyFrequency
enum class EKSActivityClientNotifyFrequency : uint8_t
{
	EKSActivityClientNotifyFrequency__None = 0,
	EKSActivityClientNotifyFrequency__OnProgressCompleted = 1,
	EKSActivityClientNotifyFrequency__OnProgressTierReached = 2,
	EKSActivityClientNotifyFrequency__OnProgressIncremented = 3,
	EKSActivityClientNotifyFrequency__EKSActivityClientNotifyFrequency_MAX = 4
};


// Enum Killstreak.EKSActivityProgressDisplayType
enum class EKSActivityProgressDisplayType : uint8_t
{
	EKSActivityProgressDisplayType__Default = 0,
	EKSActivityProgressDisplayType__RawProgress = 1,
	EKSActivityProgressDisplayType__PercentToNextTier = 2,
	EKSActivityProgressDisplayType__PercentToMaxTier = 3,
	EKSActivityProgressDisplayType__MinutesAsDuration = 4,
	EKSActivityProgressDisplayType__CurrentTier = 5,
	EKSActivityProgressDisplayType__None = 6,
	EKSActivityProgressDisplayType__EKSActivityProgressDisplayType_MAX = 7
};


// Enum Killstreak.EKSActivityTimeQueryType
enum class EKSActivityTimeQueryType : uint8_t
{
	EKSActivityTimeQueryType__All  = 0,
	EKSActivityTimeQueryType__OnlyFinished = 1,
	EKSActivityTimeQueryType__OnlyUnfinished = 2,
	EKSActivityTimeQueryType__EKSActivityTimeQueryType_MAX = 3
};


// Enum Killstreak.EKSActivityManagerSetupPhase
enum class EKSActivityManagerSetupPhase : uint8_t
{
	EKSActivityManagerSetupPhase__None = 0,
	EKSActivityManagerSetupPhase__InitialAssetScan = 1,
	EKSActivityManagerSetupPhase__RequestStoreVendors = 2,
	EKSActivityManagerSetupPhase__RequestXpTables = 3,
	EKSActivityManagerSetupPhase__LoadActivities = 4,
	EKSActivityManagerSetupPhase__WaitForSelectionPhaseFinished = 5,
	EKSActivityManagerSetupPhase__AttemptInitialActivityCreation = 6,
	EKSActivityManagerSetupPhase__Done = 7,
	EKSActivityManagerSetupPhase__EKSActivityManagerSetupPhase_MAX = 8
};


// Enum Killstreak.EKSActivityInstanceQueryType
enum class EKSActivityInstanceQueryType : uint8_t
{
	EKSActivityInstanceQueryType__LowestProgress = 0,
	EKSActivityInstanceQueryType__HighestProgress = 1,
	EKSActivityInstanceQueryType__LowestTier = 2,
	EKSActivityInstanceQueryType__HighestTier = 3,
	EKSActivityInstanceQueryType__EKSActivityInstanceQueryType_MAX = 4
};


// Enum Killstreak.EReviveDroneFlightPath
enum class EReviveDroneFlightPath : uint8_t
{
	EReviveDroneFlightPath__Drop   = 0,
	EReviveDroneFlightPath__Left   = 1,
	EReviveDroneFlightPath__Right  = 2,
	EReviveDroneFlightPath__EReviveDroneFlightPath_MAX = 3
};


// Enum Killstreak.EReviveDroneState
enum class EReviveDroneState : uint8_t
{
	EReviveDroneState__Release     = 0,
	EReviveDroneState__Transit     = 1,
	EReviveDroneState__Arrival     = 2,
	EReviveDroneState__Hover       = 3,
	EReviveDroneState__Leave       = 4,
	EReviveDroneState__EReviveDroneState_MAX = 5
};


// Enum Killstreak.EAgentRefundMethod
enum class EAgentRefundMethod : uint8_t
{
	EAgentRefundMethod__GiveWeaponAsset = 0,
	EAgentRefundMethod__BroadcastDelegate = 1,
	EAgentRefundMethod__EAgentRefundMethod_MAX = 2
};


// Enum Killstreak.EKSAimAssistInputFlag
enum class EKSAimAssistInputFlag : uint8_t
{
	EKSAimAssistInputFlag__GamepadOnly = 0,
	EKSAimAssistInputFlag__GamepadAndTouch = 1,
	EKSAimAssistInputFlag__AllInputModes = 2,
	EKSAimAssistInputFlag__EKSAimAssistInputFlag_MAX = 3
};


// Enum Killstreak.EKSAimAssistActivationType
enum class EKSAimAssistActivationType : uint8_t
{
	EKSAimAssistActivationType__AIMASSIST_DEFAULT = 0,
	EKSAimAssistActivationType__AIMASSIST_ALWAYSON = 1,
	EKSAimAssistActivationType__AIMASSIST_ALWAYSOFF = 2,
	EKSAimAssistActivationType__AIMASSIST_MAX = 3
};


// Enum Killstreak.EKSAnalogStickType
enum class EKSAnalogStickType : uint8_t
{
	EKSAnalogStickType__Unknown    = 0,
	EKSAnalogStickType__Left       = 1,
	EKSAnalogStickType__Right      = 2,
	EKSAnalogStickType__EKSAnalogStickType_MAX = 3
};


// Enum Killstreak.EGameplayAudioEvent
enum class EGameplayAudioEvent : uint8_t
{
	EGameplayAudioEvent__Unknown   = 0,
	EGameplayAudioEvent__GameStarted = 1,
	EGameplayAudioEvent__LoggedIn  = 2,
	EGameplayAudioEvent__QueueingStarted = 3,
	EGameplayAudioEvent__MatchFound = 4,
	EGameplayAudioEvent__LoadingScreenStarted = 5,
	EGameplayAudioEvent__EndOfMatchLobbyStarted = 6,
	EGameplayAudioEvent__EndOfMatchLobbyEnded = 7,
	EGameplayAudioEvent__RogueSelectionStarted = 8,
	EGameplayAudioEvent__RogueSelectionEnded = 9,
	EGameplayAudioEvent__RogueSelectionFadeOut = 10,
	EGameplayAudioEvent__TeamCinematicStarted = 11,
	EGameplayAudioEvent__EstablishingShotStarted = 12,
	EGameplayAudioEvent__HoldingPenStarted = 13,
	EGameplayAudioEvent__DropshipDoorOpened = 14,
	EGameplayAudioEvent__SkydiveStarted = 15,
	EGameplayAudioEvent__SkydiveEnded = 16,
	EGameplayAudioEvent__ObjectiveArmed = 17,
	EGameplayAudioEvent__ObjectiveTime_30SecondsLeft = 18,
	EGameplayAudioEvent__ObjectiveCaptured = 19,
	EGameplayAudioEvent__LastManStanding = 20,
	EGameplayAudioEvent__SuddenDeath = 21,
	EGameplayAudioEvent__KillcamStarted = 22,
	EGameplayAudioEvent__RoundReset = 23,
	EGameplayAudioEvent__RoundWon  = 24,
	EGameplayAudioEvent__RoundLost = 25,
	EGameplayAudioEvent__MatchWon  = 26,
	EGameplayAudioEvent__MatchLost = 27,
	EGameplayAudioEvent__ReturnToLobby = 28,
	EGameplayAudioEvent__QueueingCanceled = 29,
	EGameplayAudioEvent__EndOfMatchLobbySkipped = 30,
	EGameplayAudioEvent__Max       = 31
};


// Enum Killstreak.EActorFocalPoint
enum class EActorFocalPoint : uint8_t
{
	EActorFocalPoint__ActorFocalPoint_None = 0,
	EActorFocalPoint__ActorFocalPoint_Head = 1,
	EActorFocalPoint__ActorFocalPoint_Body = 2,
	EActorFocalPoint__ActorFocalPoint_LeftShoulder = 3,
	EActorFocalPoint__ActorFocalPoint_RightShoulder = 4,
	EActorFocalPoint__ActorFocalPoint_MAX = 5
};


// Enum Killstreak.EKSArmVisibilityType
enum class EKSArmVisibilityType : uint8_t
{
	EKSArmVisibilityType__HideNothing = 0,
	EKSArmVisibilityType__ArmAndWeapon = 1,
	EKSArmVisibilityType__WeaponOnly = 2,
	EKSArmVisibilityType__EKSArmVisibilityType_MAX = 3
};


// Enum Killstreak.EKSRevealType
enum class EKSRevealType : uint8_t
{
	EKSRevealType__NotRevealed     = 0,
	EKSRevealType__Normal          = 1,
	EKSRevealType__Permanent       = 2,
	EKSRevealType__EKSRevealType_MAX = 3
};


// Enum Killstreak.EKSPlayerHand
enum class EKSPlayerHand : uint8_t
{
	EKSPlayerHand__LeftHand        = 0,
	EKSPlayerHand__RightHand       = 1,
	EKSPlayerHand__EKSPlayerHand_MAX = 2
};


// Enum Killstreak.EKSMaterialHideType
enum class EKSMaterialHideType : uint8_t
{
	EKSMaterialHideType__CastsShadowWhenHidden = 0,
	EKSMaterialHideType__DoesNotCastShadowWhenHidden = 1,
	EKSMaterialHideType__EKSMaterialHideType_MAX = 2
};


// Enum Killstreak.EKSVehicleState
enum class EKSVehicleState : uint8_t
{
	EKSVehicleState__Outside       = 0,
	EKSVehicleState__Entering      = 1,
	EKSVehicleState__Driver        = 2,
	EKSVehicleState__Passenger     = 3,
	EKSVehicleState__Exiting       = 4,
	EKSVehicleState__EKSVehicleState_MAX = 5
};


// Enum Killstreak.EAimDownSightsMode
enum class EAimDownSightsMode : uint8_t
{
	EAimDownSightsMode__Toggle     = 0,
	EAimDownSightsMode__PressAndHold = 1,
	EAimDownSightsMode__EAimDownSightsMode_MAX = 2
};


// Enum Killstreak.EKSQualitySwitch
enum class EKSQualitySwitch : uint8_t
{
	EKSQualitySwitch__LocomotionCached = 0,
	EKSQualitySwitch__SecondLocomotionCached = 1,
	EKSQualitySwitch__PreAimArray  = 2,
	EKSQualitySwitch__PostWingSuit = 3,
	EKSQualitySwitch__Finalized3p  = 4,
	EKSQualitySwitch__PreFacialAnimation = 5,
	EKSQualitySwitch__PostFacialAnimation = 6,
	EKSQualitySwitch__PrePowSlide_SklController = 7,
	EKSQualitySwitch__PreHitReactions = 8,
	EKSQualitySwitch__PostFootIK   = 9,
	EKSQualitySwitch__PostZiplinePullyLocks = 10,
	EKSQualitySwitch__PostZiplineSkeletalControllers = 11,
	EKSQualitySwitch__PreRecoil    = 12,
	EKSQualitySwitch__PostRecoil   = 13,
	EKSQualitySwitch__PreCounterRotate = 14,
	EKSQualitySwitch__SkeletalControllersPostIK = 15,
	EKSQualitySwitch__PreVaulting_SKLController = 16,
	EKSQualitySwitch__PostVaulting_SKLController = 17,
	EKSQualitySwitch__EKSQualitySwitch_MAX = 18
};


// Enum Killstreak.EKSTurnInPlaceAnimationVariant
enum class EKSTurnInPlaceAnimationVariant : uint8_t
{
	EKSTurnInPlaceAnimationVariant__Left90 = 0,
	EKSTurnInPlaceAnimationVariant__Left180 = 1,
	EKSTurnInPlaceAnimationVariant__Right90 = 2,
	EKSTurnInPlaceAnimationVariant__Right180 = 3,
	EKSTurnInPlaceAnimationVariant__EKSTurnInPlaceAnimationVariant_MAX = 4
};


// Enum Killstreak.EKSLocomotionState
enum class EKSLocomotionState : uint8_t
{
	EKSLocomotionState__Idle       = 0,
	EKSLocomotionState__InMotion   = 1,
	EKSLocomotionState__Stopping   = 2,
	EKSLocomotionState__Pivoting   = 3,
	EKSLocomotionState__EKSLocomotionState_MAX = 4
};


// Enum Killstreak.EKSQueuedMovement
enum class EKSQueuedMovement : uint8_t
{
	EKSQueuedMovement__Jump        = 0,
	EKSQueuedMovement__DodgeRoll   = 1,
	EKSQueuedMovement__None        = 2,
	EKSQueuedMovement__EKSQueuedMovement_MAX = 3
};


// Enum Killstreak.EKSDeathState
enum class EKSDeathState : uint8_t
{
	EKSDeathState__NotDead         = 0,
	EKSDeathState__NormalDeath     = 1,
	EKSDeathState__EKSDeathState_MAX = 2
};


// Enum Killstreak.EFlashBangIntensity
enum class EFlashBangIntensity : uint8_t
{
	EFlashBangIntensity__Min       = 0,
	EFlashBangIntensity__Half      = 1,
	EFlashBangIntensity__Max       = 2
};


// Enum Killstreak.EKSBotNameGeneration
enum class EKSBotNameGeneration : uint8_t
{
	EKSBotNameGeneration__None     = 0,
	EKSBotNameGeneration__RandomNames = 1,
	EKSBotNameGeneration__DefaultClassNames = 2,
	EKSBotNameGeneration__EKSBotNameGeneration_MAX = 3
};


// Enum Killstreak.EKSLootRespawnMode
enum class EKSLootRespawnMode : uint8_t
{
	EKSLootRespawnMode__RespawnActiveSites = 0,
	EKSLootRespawnMode__RespawnRandomSites = 1,
	EKSLootRespawnMode__EKSLootRespawnMode_MAX = 2
};


// Enum Killstreak.EKSRewardType
enum class EKSRewardType : uint8_t
{
	EKSRewardType__MatchInProgress = 0,
	EKSRewardType__Winner          = 1,
	EKSRewardType__Loser           = 2,
	EKSRewardType__Draw            = 3,
	EKSRewardType__EKSRewardType_MAX = 4
};


// Enum Killstreak.EKSControlTieBreakerMode
enum class EKSControlTieBreakerMode : uint8_t
{
	EKSControlTieBreakerMode__Overtime = 0,
	EKSControlTieBreakerMode__SuddenDeath = 1,
	EKSControlTieBreakerMode__AllowTie = 2,
	EKSControlTieBreakerMode__EKSControlTieBreakerMode_MAX = 3
};


// Enum Killstreak.EPlayerInfoInventoryRestoreType
enum class EPlayerInfoInventoryRestoreType : uint8_t
{
	EPlayerInfoInventoryRestoreType__ResetToStartingInventory = 0,
	EPlayerInfoInventoryRestoreType__KeepInventory = 1,
	EPlayerInfoInventoryRestoreType__KeepInventoryIfNotDead = 2,
	EPlayerInfoInventoryRestoreType__KeepGunsOnly = 3,
	EPlayerInfoInventoryRestoreType__UseNewMethod = 4,
	EPlayerInfoInventoryRestoreType__EPlayerInfoInventoryRestoreType_MAX = 5
};


// Enum Killstreak.EKillCamStatus
enum class EKillCamStatus : uint8_t
{
	EKillCamStatus__KillCamEnabled = 0,
	EKillCamStatus__KillCamDisabled = 1,
	EKillCamStatus__EKillCamStatus_MAX = 2
};


// Enum Killstreak.EKSGamepadIcons
enum class EKSGamepadIcons : uint8_t
{
	EKSGamepadIcons__XboxOne       = 0,
	EKSGamepadIcons__PlayStation4  = 1,
	EKSGamepadIcons__NintendoSwitch = 2,
	EKSGamepadIcons__EKSGamepadIcons_MAX = 3
};


// Enum Killstreak.ERadialWheelMode
enum class ERadialWheelMode : uint8_t
{
	ERadialWheelMode__Hold         = 0,
	ERadialWheelMode__Toggle       = 1,
	ERadialWheelMode__ERadialWheelMode_MAX = 2
};


// Enum Killstreak.EGyroMode
enum class EGyroMode : uint8_t
{
	EGyroMode__None                = 0,
	EGyroMode__AimOnly             = 1,
	EGyroMode__Always              = 2,
	EGyroMode__EGyroMode_MAX       = 3
};


// Enum Killstreak.EADSMode
enum class EADSMode : uint8_t
{
	EADSMode__Hold                 = 0,
	EADSMode__Toggle               = 1,
	EADSMode__Both                 = 2,
	EADSMode__EADSMode_MAX         = 3
};


// Enum Killstreak.EInMatchStoreError
enum class EInMatchStoreError : uint8_t
{
	EInMatchStoreError__NotEnoughMoney = 0,
	EInMatchStoreError__NullItem   = 1,
	EInMatchStoreError__DeadCharacter = 2,
	EInMatchStoreError__InvalidPlayer = 3,
	EInMatchStoreError__BuyingSameItem = 4,
	EInMatchStoreError__CantEquip  = 5,
	EInMatchStoreError__BadSlot    = 6,
	EInMatchStoreError__EquipFailed = 7,
	EInMatchStoreError__InvalidGameMode = 8,
	EInMatchStoreError__PurchasesLocked = 9,
	EInMatchStoreError__ItemDidNotReplicate = 10,
	EInMatchStoreError__EInMatchStoreError_MAX = 11
};


// Enum Killstreak.EKSLabelAndHighlightState
enum class EKSLabelAndHighlightState : uint8_t
{
	EKSLabelAndHighlightState__NotTargeted = 0,
	EKSLabelAndHighlightState__Targeted = 1,
	EKSLabelAndHighlightState__EKSLabelAndHighlightState_MAX = 2
};


// Enum Killstreak.EJobLoadoutSlot
enum class EJobLoadoutSlot : uint8_t
{
	EJobLoadoutSlot__JobSlot_Unknown = 0,
	EJobLoadoutSlot__JobSlot_JobItem = 1,
	EJobLoadoutSlot__JobSlot_UniqueItem = 2,
	EJobLoadoutSlot__JobSlot_PrimaryWeapon = 3,
	EJobLoadoutSlot__JobSlot_PrimaryWeaponAttachment = 4,
	EJobLoadoutSlot__JobSlot_SecondaryWeapon = 5,
	EJobLoadoutSlot__JobSlot_SecondaryWeaponAttachment = 6,
	EJobLoadoutSlot__JobSlot_Gadget = 7,
	EJobLoadoutSlot__JobSlot_PerkOne = 8,
	EJobLoadoutSlot__JobSlot_PerkTwo = 9,
	EJobLoadoutSlot__JobSlot_PrimaryWeapon_Alt = 10,
	EJobLoadoutSlot__JobSlot_SecondaryWeapon_Alt = 11,
	EJobLoadoutSlot__JobSlot_Gadget_Alt = 12,
	EJobLoadoutSlot__JobSlot_Melee = 13,
	EJobLoadoutSlot__JobSlot_QuickMelee = 14,
	EJobLoadoutSlot__JobSlot_MAX   = 15
};


// Enum Killstreak.EAllowUnownedJobsState
enum class EAllowUnownedJobsState : uint8_t
{
	EAllowUnownedJobsState__Unknown = 0,
	EAllowUnownedJobsState__AllowUnowned = 1,
	EAllowUnownedJobsState__DoNotAllowUnowned = 2,
	EAllowUnownedJobsState__EAllowUnownedJobsState_MAX = 3
};


// Enum Killstreak.EKSLobbyCharacterAnimationPose
enum class EKSLobbyCharacterAnimationPose : uint8_t
{
	EKSLobbyCharacterAnimationPose__Lobby_Idle = 0,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_01 = 1,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_02 = 2,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_03 = 3,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_04 = 4,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_05 = 5,
	EKSLobbyCharacterAnimationPose__Lobby_MAX = 6
};


// Enum Killstreak.ELobbyCharacterIndex
enum class ELobbyCharacterIndex : uint8_t
{
	ELobbyCharacterIndex__LobbyCharacter_Unknown = 0,
	ELobbyCharacterIndex__LobbyCharacter_LocalPlayer = 1,
	ELobbyCharacterIndex__LobbyCharacter_PartyMemberOne = 2,
	ELobbyCharacterIndex__LobbyCharacter_PartyMemberTwo = 3,
	ELobbyCharacterIndex__LobbyCharacter_PartyMemberThree = 4,
	ELobbyCharacterIndex__LobbyCharacter_RogueScreen = 5,
	ELobbyCharacterIndex__LobbyCharacter_PurchaseConfirmation = 6,
	ELobbyCharacterIndex__LobbyCharacter_MAX = 7
};


// Enum Killstreak.ELobbyCharacterAnimState
enum class ELobbyCharacterAnimState : uint8_t
{
	ELobbyCharacterAnimState__LobbyAnim_Unknown = 0,
	ELobbyCharacterAnimState__LobbyAnim_Login = 1,
	ELobbyCharacterAnimState__LobbyAnim_Default = 2,
	ELobbyCharacterAnimState__LobbyAnim_Hidden = 3,
	ELobbyCharacterAnimState__LobbyAnim_Idle = 4,
	ELobbyCharacterAnimState__LobbyAnim_IntroWalk = 5,
	ELobbyCharacterAnimState__LobbyAnim_EmoteOne = 6,
	ELobbyCharacterAnimState__LobbyAnim_EmoteTwo = 7,
	ELobbyCharacterAnimState__LobbyAnim_EmoteThree = 8,
	ELobbyCharacterAnimState__LobbyAnim_EmoteFour = 9,
	ELobbyCharacterAnimState__LobbyAnim_EmoteFive = 10,
	ELobbyCharacterAnimState__LobbyAnim_PreMatchWalk = 11,
	ELobbyCharacterAnimState__LobbyAnim_EOMBackground = 12,
	ELobbyCharacterAnimState__LobbyAnim_PostMatchWalk = 13,
	ELobbyCharacterAnimState__LobbyAnim_MidSequence = 14,
	ELobbyCharacterAnimState__LobbyAnim_MAX = 15
};


// Enum Killstreak.ELobbyPresenceState
enum class ELobbyPresenceState : uint8_t
{
	ELobbyPresenceState__ELobbyPresence_Unknown = 0,
	ELobbyPresenceState__ELobbyPresence_NotPresent = 1,
	ELobbyPresenceState__ELobbyPresence_PendingInvite = 2,
	ELobbyPresenceState__ELobbyPresence_Idle = 3,
	ELobbyPresenceState__ELobbyPresence_MAX = 4
};


// Enum Killstreak.ELobbyLevelSequenceTag
enum class ELobbyLevelSequenceTag : uint8_t
{
	ELobbyLevelSequenceTag__ELobbyLvlSeqTag_Login = 0,
	ELobbyLevelSequenceTag__ELobbyLvlSeqTag_MAX = 1
};


// Enum Killstreak.ELobbyCameraActorTag
enum class ELobbyCameraActorTag : uint8_t
{
	ELobbyCameraActorTag__ELobbyCamTag_Home = 0,
	ELobbyCameraActorTag__ELobbyCamTag_CustomizeLoadout = 1,
	ELobbyCameraActorTag__ELobbyCamTag_LobbyMain = 2,
	ELobbyCameraActorTag__ELobbyCamTag_MAX = 3
};


// Enum Killstreak.ELootSiteAlignment
enum class ELootSiteAlignment : uint8_t
{
	ELootSiteAlignment__Attack     = 0,
	ELootSiteAlignment__Defend     = 1,
	ELootSiteAlignment__Contested  = 2,
	ELootSiteAlignment__ELootSiteAlignment_MAX = 3
};


// Enum Killstreak.EKSMantleScaleType
enum class EKSMantleScaleType : uint8_t
{
	EKSMantleScaleType__ScaleDistOnly = 0,
	EKSMantleScaleType__ScaleDistAndTime = 1,
	EKSMantleScaleType__ShaveIntro = 2,
	EKSMantleScaleType__EKSMantleScaleType_MAX = 3
};


// Enum Killstreak.ETeamRole
enum class ETeamRole : uint8_t
{
	ETeamRole__Roleless            = 0,
	ETeamRole__Attacker            = 1,
	ETeamRole__Defender            = 2,
	ETeamRole__ETeamRole_MAX       = 3
};


// Enum Killstreak.EKSMercMasteryActivityType
enum class EKSMercMasteryActivityType : uint8_t
{
	EKSMercMasteryActivityType__None = 0,
	EKSMercMasteryActivityType__MercXp = 1,
	EKSMercMasteryActivityType__Kills = 2,
	EKSMercMasteryActivityType__Deaths = 3,
	EKSMercMasteryActivityType__Damage = 4,
	EKSMercMasteryActivityType__Downs = 5,
	EKSMercMasteryActivityType__GamesPlayed = 6,
	EKSMercMasteryActivityType__GamesWon = 7,
	EKSMercMasteryActivityType__MinutesPlayed = 8,
	EKSMercMasteryActivityType__Headshots = 9,
	EKSMercMasteryActivityType__Revives = 10,
	EKSMercMasteryActivityType__MAX = 11
};


// Enum Killstreak.EKSRelativeMinimapHeight
enum class EKSRelativeMinimapHeight : uint8_t
{
	EKSRelativeMinimapHeight__Below = 0,
	EKSRelativeMinimapHeight__SameLevel = 1,
	EKSRelativeMinimapHeight__Above = 2,
	EKSRelativeMinimapHeight__EKSRelativeMinimapHeight_MAX = 3
};


// Enum Killstreak.EThrowDirection
enum class EThrowDirection : uint8_t
{
	EThrowDirection__Back          = 0,
	EThrowDirection__Front         = 1,
	EThrowDirection__Left          = 2,
	EThrowDirection__Right         = 3,
	EThrowDirection__EThrowDirection_MAX = 4
};


// Enum Killstreak.EKSReviveDroneEvent
enum class EKSReviveDroneEvent : uint8_t
{
	EKSReviveDroneEvent__ReviveStarted = 0,
	EKSReviveDroneEvent__ReviveFinished = 1,
	EKSReviveDroneEvent__TargetRevived = 2,
	EKSReviveDroneEvent__TargetDied = 3,
	EKSReviveDroneEvent__DroneDestroyed = 4,
	EKSReviveDroneEvent__EKSReviveDroneEvent_MAX = 5
};


// Enum Killstreak.EKSNPEActivityType
enum class EKSNPEActivityType : uint8_t
{
	EKSNPEActivityType__None       = 0,
	EKSNPEActivityType__TutorialCompleted = 1,
	EKSNPEActivityType__TutorialSkipped = 2,
	EKSNPEActivityType__RegionSelected = 3,
	EKSNPEActivityType__MAX        = 4
};


// Enum Killstreak.EObjectiveIconType
enum class EObjectiveIconType : uint8_t
{
	EObjectiveIconType__Hack       = 0,
	EObjectiveIconType__Pickup     = 1,
	EObjectiveIconType__EObjectiveIconType_MAX = 2
};


// Enum Killstreak.EObjectiveType
enum class EObjectiveType : uint8_t
{
	EObjectiveType__None           = 0,
	EObjectiveType__ExtractionPC   = 1,
	EObjectiveType__BombZone       = 2,
	EObjectiveType__ControlPoint   = 3,
	EObjectiveType__EObjectiveType_MAX = 4
};


// Enum Killstreak.EKSNavAreaType
enum class EKSNavAreaType : uint8_t
{
	EKSNavAreaType__UnusedDefault  = 0,
	EKSNavAreaType__Jump           = 1,
	EKSNavAreaType__Hazard         = 2,
	EKSNavAreaType__StartZipline   = 3,
	EKSNavAreaType__TravelZipline  = 4,
	EKSNavAreaType__Swim           = 5,
	EKSNavAreaType__InteractiveObstacle = 6,
	EKSNavAreaType__EKSNavAreaType_MAX = 7
};


// Enum Killstreak.EKSInputType
enum class EKSInputType : uint8_t
{
	EKSInputType__KBM              = 0,
	EKSInputType__GP               = 1,
	EKSInputType__Touch            = 2,
	EKSInputType__EKSInputType_MAX = 3
};


// Enum Killstreak.EKSKeyBindType
enum class EKSKeyBindType : uint8_t
{
	EKSKeyBindType__ActionMapping  = 0,
	EKSKeyBindType__AxisMapping    = 1,
	EKSKeyBindType__EKSKeyBindType_MAX = 2
};


// Enum Killstreak.EModPriorityResolution
enum class EModPriorityResolution : uint8_t
{
	EModPriorityResolution__TakeValue1 = 0,
	EModPriorityResolution__TakeValue2 = 1,
	EModPriorityResolution__Stack  = 2,
	EModPriorityResolution__EModPriorityResolution_MAX = 3
};


// Enum Killstreak.EPlayerModType
enum class EPlayerModType : uint8_t
{
	EPlayerModType__Perk           = 0,
	EPlayerModType__GlobalPerk     = 1,
	EPlayerModType__Activated      = 2,
	EPlayerModType__Passive        = 3,
	EPlayerModType__TemporaryBuff  = 4,
	EPlayerModType__TemporaryDebuff = 5,
	EPlayerModType__Hidden         = 6,
	EPlayerModType__Unknown        = 7,
	EPlayerModType__EPlayerModType_MAX = 8
};


// Enum Killstreak.EModInterferenceType
enum class EModInterferenceType : uint8_t
{
	EModInterferenceType__Defer    = 0,
	EModInterferenceType__Stack    = 1,
	EModInterferenceType__WeakestWins = 2,
	EModInterferenceType__StrongestWins = 3,
	EModInterferenceType__BonusWins = 4,
	EModInterferenceType__PenaltyWins = 5,
	EModInterferenceType__EModInterferenceType_MAX = 6
};


// Enum Killstreak.EEliminationState
enum class EEliminationState : uint8_t
{
	EEliminationState__NotInPlay   = 0,
	EEliminationState__Playing     = 1,
	EEliminationState__Eliminated  = 2,
	EEliminationState__EEliminationState_MAX = 3
};


// Enum Killstreak.EIsPlayer
enum class EIsPlayer : uint8_t
{
	EIsPlayer__Unknown             = 0,
	EIsPlayer__Player              = 1,
	EIsPlayer__NotPlayer           = 2,
	EIsPlayer__EIsPlayer_MAX       = 3
};


// Enum Killstreak.EKSPlayerStatsActivityType
enum class EKSPlayerStatsActivityType : uint8_t
{
	EKSPlayerStatsActivityType__None = 0,
	EKSPlayerStatsActivityType__PlayerXp = 1,
	EKSPlayerStatsActivityType__Kills = 2,
	EKSPlayerStatsActivityType__Deaths = 3,
	EKSPlayerStatsActivityType__Damage = 4,
	EKSPlayerStatsActivityType__Downs = 5,
	EKSPlayerStatsActivityType__GamesPlayed = 6,
	EKSPlayerStatsActivityType__GamesWon = 7,
	EKSPlayerStatsActivityType__MinutesPlayed = 8,
	EKSPlayerStatsActivityType__Headshots = 9,
	EKSPlayerStatsActivityType__Revives = 10,
	EKSPlayerStatsActivityType__MAX = 11
};


// Enum Killstreak.EPollAudience
enum class EPollAudience : uint8_t
{
	EPollAudience__AllPlayerPoll   = 0,
	EPollAudience__TeamPoll        = 1,
	EPollAudience__EPollAudience_MAX = 2
};


// Enum Killstreak.EProjectileReclaimPermission
enum class EProjectileReclaimPermission : uint8_t
{
	EProjectileReclaimPermission__OwnerOnly = 0,
	EProjectileReclaimPermission__TeammatesOnly = 1,
	EProjectileReclaimPermission__Anyone = 2,
	EProjectileReclaimPermission__EProjectileReclaimPermission_MAX = 3
};


// Enum Killstreak.EProjectilePredictionType
enum class EProjectilePredictionType : uint8_t
{
	EProjectilePredictionType__PassThrough = 0,
	EProjectilePredictionType__Bounce = 1,
	EProjectilePredictionType__Stop = 2,
	EProjectilePredictionType__EProjectilePredictionType_MAX = 3
};


// Enum Killstreak.EProjectileVisibilityType
enum class EProjectileVisibilityType : uint8_t
{
	EProjectileVisibilityType__Owner = 0,
	EProjectileVisibilityType__Ally = 1,
	EProjectileVisibilityType__All = 2,
	EProjectileVisibilityType__EProjectileVisibilityType_MAX = 3
};


// Enum Killstreak.EBadBehaviorType
enum class EBadBehaviorType : uint8_t
{
	EBadBehaviorType__None         = 0,
	EBadBehaviorType__QuitEarly    = 1,
	EBadBehaviorType__Disconnected = 2,
	EBadBehaviorType__AFK          = 3,
	EBadBehaviorType__EBadBehaviorType_MAX = 4
};


// Enum Killstreak.ERadialMenuItemInterruptNotifyBehaviorType
enum class ERadialMenuItemInterruptNotifyBehaviorType : uint8_t
{
	ERadialMenuItemInterruptNotifyBehaviorType__NoNotify = 0,
	ERadialMenuItemInterruptNotifyBehaviorType__OnlyIfMarkedPlaying = 1,
	ERadialMenuItemInterruptNotifyBehaviorType__ERadialMenuItemInterruptNotifyBehaviorType_MAX = 2
};


// Enum Killstreak.EKSRadialMenuItemInterruptReason
enum class EKSRadialMenuItemInterruptReason : uint8_t
{
	EKSRadialMenuItemInterruptReason__Unknown = 0,
	EKSRadialMenuItemInterruptReason__NoCharacter = 1,
	EKSRadialMenuItemInterruptReason__Walking = 2,
	EKSRadialMenuItemInterruptReason__Sprinting = 3,
	EKSRadialMenuItemInterruptReason__Crouching = 4,
	EKSRadialMenuItemInterruptReason__Downed = 5,
	EKSRadialMenuItemInterruptReason__Dead = 6,
	EKSRadialMenuItemInterruptReason__Interacting = 7,
	EKSRadialMenuItemInterruptReason__Zipline = 8,
	EKSRadialMenuItemInterruptReason__SkyDiving = 9,
	EKSRadialMenuItemInterruptReason__DodgeRolling = 10,
	EKSRadialMenuItemInterruptReason__Falling = 11,
	EKSRadialMenuItemInterruptReason__NonRadialMenuItemEquipment = 12,
	EKSRadialMenuItemInterruptReason__RadialMenuItemActivated = 13,
	EKSRadialMenuItemInterruptReason__RadialMenuItemCooldown = 14,
	EKSRadialMenuItemInterruptReason__InvalidTargeting = 15,
	EKSRadialMenuItemInterruptReason__EKSRadialMenuItemInterruptReason_MAX = 16
};


// Enum Killstreak.ERecoilStart2
enum class ERecoilStart2 : uint8_t
{
	ERS_Zero2                      = 0,
	ERS_Random2                    = 1,
	ERS_MAX                        = 2
};


// Enum Killstreak.EPlayerStatType
enum class EPlayerStatType : uint8_t
{
	EPlayerStatType__UNKNOWN       = 0,
	EPlayerStatType__Kills         = 1,
	EPlayerStatType__Deaths        = 2,
	EPlayerStatType__Assists       = 3,
	EPlayerStatType__Downs         = 4,
	EPlayerStatType__Revives       = 5,
	EPlayerStatType__Eliminations  = 6,
	EPlayerStatType__RoundsPlayed  = 7,
	EPlayerStatType__Hacks         = 8,
	EPlayerStatType__Dehacks       = 9,
	EPlayerStatType__RawDamageDealt = 10,
	EPlayerStatType__MitigatedDamageDealt = 11,
	EPlayerStatType__RawDamageReceived = 12,
	EPlayerStatType__MitigatedDamageReceived = 13,
	EPlayerStatType__TimeAlive     = 14,
	EPlayerStatType__Rank          = 15,
	EPlayerStatType__TimePlayed    = 16,
	EPlayerStatType__Score         = 17,
	EPlayerStatType__Cash          = 18,
	EPlayerStatType__EPlayerStatType_MAX = 19
};


// Enum Killstreak.ELimitPerRound
enum class ELimitPerRound : uint8_t
{
	ELimitPerRound__None           = 0,
	ELimitPerRound__OneActive      = 1,
	ELimitPerRound__OnePerRound    = 2,
	ELimitPerRound__ELimitPerRound_MAX = 3
};


// Enum Killstreak.ELocalRequirements
enum class ELocalRequirements : uint8_t
{
	ELocalRequirements__None       = 0,
	ELocalRequirements__Controlled = 1,
	ELocalRequirements__Viewed     = 2,
	ELocalRequirements__ControlledOrViewed = 3,
	ELocalRequirements__ELocalRequirements_MAX = 4
};


// Enum Killstreak.EPlayerShopTransactionType
enum class EPlayerShopTransactionType : uint8_t
{
	EPlayerShopTransactionType__Purchase = 0,
	EPlayerShopTransactionType__SetActive = 1,
	EPlayerShopTransactionType__Refund = 2,
	EPlayerShopTransactionType__EPlayerShopTransactionType_MAX = 3
};


// Enum Killstreak.ESpecialtyRoleType
enum class ESpecialtyRoleType : uint8_t
{
	ESpecialtyRoleType__Unknown    = 0,
	ESpecialtyRoleType__Attack     = 1,
	ESpecialtyRoleType__Defense    = 2,
	ESpecialtyRoleType__Support    = 3,
	ESpecialtyRoleType__Movement   = 4,
	ESpecialtyRoleType__ESpecialtyRoleType_MAX = 5
};


// Enum Killstreak.EExtractionTeamType
enum class EExtractionTeamType : uint8_t
{
	EExtractionTeamType__NotSet    = 0,
	EExtractionTeamType__Attacker  = 1,
	EExtractionTeamType__Defender  = 2,
	EExtractionTeamType__EExtractionTeamType_MAX = 3
};


// Enum Killstreak.EWeaponSlot
enum class EWeaponSlot : uint8_t
{
	EWeaponSlot__NONE              = 0,
	EWeaponSlot__PRIMARY_ONE_SLOT  = 1,
	EWeaponSlot__PRIMARY_TWO_SLOT  = 2,
	EWeaponSlot__SECONDARY_SLOT    = 3,
	EWeaponSlot__MELEE_SLOT        = 4,
	EWeaponSlot__EWeaponSlot_MAX   = 5
};


// Enum Killstreak.ECharacterRole
enum class ECharacterRole : uint8_t
{
	ECharacterRole__None           = 0,
	ECharacterRole__Attacker       = 1,
	ECharacterRole__Defender       = 2,
	ECharacterRole__Max            = 3
};


// Enum Killstreak.EKSSocketCrouchHandling
enum class EKSSocketCrouchHandling : uint8_t
{
	EKSSocketCrouchHandling__MaintainCapsuleBottomOffset = 0,
	EKSSocketCrouchHandling__MaintainCapsuleCenterOffset = 1,
	EKSSocketCrouchHandling__ApplyCustomOffset = 2,
	EKSSocketCrouchHandling__EKSSocketCrouchHandling_MAX = 3
};


// Enum Killstreak.EKSSocketOffsetType
enum class EKSSocketOffsetType : uint8_t
{
	EKSSocketOffsetType__KeepRelativeToParent = 0,
	EKSSocketOffsetType__KeepRelativeToMesh = 1,
	EKSSocketOffsetType__KeepRelativeToCylinder = 2,
	EKSSocketOffsetType__EKSSocketOffsetType_MAX = 3
};


// Enum Killstreak.ECameraShoulder
enum class ECameraShoulder : uint8_t
{
	ECameraShoulder__Right         = 0,
	ECameraShoulder__Left          = 1,
	ECameraShoulder__ECameraShoulder_MAX = 2
};


// Enum Killstreak.EInputReleaseType
enum class EInputReleaseType : uint8_t
{
	EInputReleaseType__All         = 0,
	EInputReleaseType__RadialMenu  = 1,
	EInputReleaseType__EscapeMenu  = 2,
	EInputReleaseType__Scoreboard  = 3,
	EInputReleaseType__Map         = 4,
	EInputReleaseType__RadialMenuClose = 5,
	EInputReleaseType__EInputReleaseType_MAX = 6
};


// Enum Killstreak.EKSContextualActionButtonMode
enum class EKSContextualActionButtonMode : uint8_t
{
	EKSContextualActionButtonMode__HoldUse = 0,
	EKSContextualActionButtonMode__HoldReload = 1,
	EKSContextualActionButtonMode__HoldNone = 2,
	EKSContextualActionButtonMode__EKSContextualActionButtonMode_MAX = 3
};


// Enum Killstreak.EKSInputActionType
enum class EKSInputActionType : uint8_t
{
	EKSInputActionType__Press      = 0,
	EKSInputActionType__Hold       = 1,
	EKSInputActionType__Repeat     = 2,
	EKSInputActionType__EKSInputActionType_MAX = 3
};


// Enum Killstreak.EControllerInputType
enum class EControllerInputType : uint8_t
{
	EControllerInputType__None     = 0,
	EControllerInputType__ADSBit   = 1,
	EControllerInputType__KeyboardMouse = 2,
	EControllerInputType__KeyboardMouseADS = 3,
	EControllerInputType__Gamepad  = 4,
	EControllerInputType__GamepadADS = 5,
	EControllerInputType__JoyCon   = 6,
	EControllerInputType__JoyConADS = 7,
	EControllerInputType__Touch    = 8,
	EControllerInputType__TouchADS = 9,
	EControllerInputType__EControllerInputType_MAX = 10
};


// Enum Killstreak.EOcclusionType
enum class EOcclusionType : uint8_t
{
	EOcclusionType__None           = 0,
	EOcclusionType__Simple         = 1,
	EOcclusionType__Advanced       = 2,
	EOcclusionType__EOcclusionType_MAX = 3
};


// Enum Killstreak.EKSPowerSlideEndReason
enum class EKSPowerSlideEndReason : uint8_t
{
	EKSPowerSlideEndReason__Expired = 0,
	EKSPowerSlideEndReason__Collide = 1,
	EKSPowerSlideEndReason__Fall   = 2,
	EKSPowerSlideEndReason__Action = 3,
	EKSPowerSlideEndReason__Interrupted = 4,
	EKSPowerSlideEndReason__FaceAway = 5,
	EKSPowerSlideEndReason__Unknown = 6,
	EKSPowerSlideEndReason__EKSPowerSlideEndReason_MAX = 7
};


// Enum Killstreak.EKSGame_CustomMovement
enum class EKSGame_CustomMovement : uint8_t
{
	KSMOVE_Vaulting                = 0,
	KSMOVE_DiveFreeFall            = 1,
	KSMOVE_DiveParachute           = 2,
	KSMOVE_DodgeRoll               = 3,
	KSMOVE_ZipLine                 = 4,
	KSMOVE_FlightRecovery          = 5,
	KSMOVE_Ability                 = 6,
	KSMOVE_PowerSlide              = 7,
	KSMOVE_Kick                    = 8,
	KSMOVE_MAX                     = 9
};


// Enum Killstreak.EKSRespawnMode
enum class EKSRespawnMode : uint8_t
{
	EKSRespawnMode__NoRespawn      = 0,
	EKSRespawnMode__TicketRespawn  = 1,
	EKSRespawnMode__AlwaysRespawn  = 2,
	EKSRespawnMode__EKSRespawnMode_MAX = 3
};


// Enum Killstreak.EKSPerSecondChargeMode
enum class EKSPerSecondChargeMode : uint8_t
{
	EKSPerSecondChargeMode__OverrideNone = 0,
	EKSPerSecondChargeMode__OverrideChargeable = 1,
	EKSPerSecondChargeMode__OverrideUnchargeable = 2,
	EKSPerSecondChargeMode__OverrideAll = 3,
	EKSPerSecondChargeMode__EKSPerSecondChargeMode_MAX = 4
};


// Enum Killstreak.EKSMovementDirection
enum class EKSMovementDirection : uint8_t
{
	EKSMovementDirection__Forward  = 0,
	EKSMovementDirection__Right    = 1,
	EKSMovementDirection__Back     = 2,
	EKSMovementDirection__Left     = 3,
	EKSMovementDirection__EKSMovementDirection_MAX = 4
};


// Enum Killstreak.EKSApparelGender
enum class EKSApparelGender : uint8_t
{
	EKSApparelGender__Unisex       = 0,
	EKSApparelGender__Male         = 1,
	EKSApparelGender__Female       = 2,
	EKSApparelGender__EKSApparelGender_MAX = 3
};


// Enum Killstreak.EKSCharacterGender
enum class EKSCharacterGender : uint8_t
{
	EKSCharacterGender__Unknown    = 0,
	EKSCharacterGender__Male       = 1,
	EKSCharacterGender__Female     = 2,
	EKSCharacterGender__EKSCharacterGender_MAX = 3
};


// Enum Killstreak.EPlayerSilhouetteType
enum class EPlayerSilhouetteType : uint8_t
{
	EPlayerSilhouetteType__None    = 0,
	EPlayerSilhouetteType__Neutral = 1,
	EPlayerSilhouetteType__Selected = 2,
	EPlayerSilhouetteType__Friendly = 3,
	EPlayerSilhouetteType__Enemy   = 4,
	EPlayerSilhouetteType__EPlayerSilhouetteType_MAX = 5
};


// Enum Killstreak.EDamageCategory
enum class EDamageCategory : uint8_t
{
	EDamageCategory__Default       = 0,
	EDamageCategory__NonDamage     = 1,
	EDamageCategory__Firearm       = 2,
	EDamageCategory__Impact        = 3,
	EDamageCategory__Explosion     = 4,
	EDamageCategory__Melee         = 5,
	EDamageCategory__InstantDeath  = 6,
	EDamageCategory__Environmental = 7,
	EDamageCategory__Bleed         = 8,
	EDamageCategory__Fire          = 9,
	EDamageCategory__EDamageCategory_MAX = 10
};


// Enum Killstreak.ELoadoutSlot
enum class ELoadoutSlot : uint8_t
{
	ELoadoutSlot__LoadoutSlot_None = 0,
	ELoadoutSlot__LoadoutSlot_SpecialtyOne = 1,
	ELoadoutSlot__LoadoutSlot_SpecialtyTwo = 2,
	ELoadoutSlot__LoadoutSlot_PerkOne = 3,
	ELoadoutSlot__LoadoutSlot_PerkTwo = 4,
	ELoadoutSlot__LoadoutSlot_PerkFour = 5,
	ELoadoutSlot__LoadoutSlot_KillstreakOne = 6,
	ELoadoutSlot__LoadoutSlot_KillstreakTwo = 7,
	ELoadoutSlot__LoadoutSlot_Pistol = 8,
	ELoadoutSlot__LoadoutSlot_PistolAttachOne = 9,
	ELoadoutSlot__LoadoutSlot_PistolAttachTwo = 10,
	ELoadoutSlot__LoadoutSlot_PistolAttachThree = 11,
	ELoadoutSlot__LoadoutSlot_PrimaryWeapon = 12,
	ELoadoutSlot__LoadoutSlot_PerkThree = 13,
	ELoadoutSlot__LoadoutSlot_GadgetOne = 14,
	ELoadoutSlot__LoadoutSlot_PassiveOne = 15,
	ELoadoutSlot__LoadoutSlot_PassiveTwo = 16,
	ELoadoutSlot__LoadoutSlot_SecondaryAbilityOne = 17,
	ELoadoutSlot__LoadoutSlot_SecondaryAbilityTwo = 18,
	ELoadoutSlot__LoadoutSlot_LoadoutBundleId = 19,
	ELoadoutSlot__LoadoutSlot_MAX  = 20
};


// Enum Killstreak.TG_EQUIP_POINT
enum class ETG_EQUIP_POINT : uint8_t
{
	EQP_NONE                       = 0,
	EQP_AUTO                       = 1,
	EQP_OFFHAND                    = 2,
	EQP_OFFHAND01                  = 3,
	EQP_OFFHAND02                  = 4,
	EQP_OFFHAND03                  = 5,
	EQP_RECALL                     = 6,
	EQP_PASSIVE                    = 7,
	EQP_ACTIVE                     = 8,
	EQP_ACTIVE01                   = 9,
	EQP_ACTIVE02                   = 10,
	EQP_CONSUMABLE                 = 11,
	EQP_CONSUMABLE01               = 12,
	EQP_UNUSED                     = 13,
	EQP_UNUSED01                   = 14,
	EQP_UNUSED02                   = 15,
	EQP_UNUSED03                   = 16,
	EQP_UNUSED04                   = 17,
	EQP_UNUSED05                   = 18,
	EQP_ITEM_STORE                 = 19,
	EQP_ITEM_STORE01               = 20,
	EQP_ITEM_STORE02               = 21,
	EQP_ITEM_STORE03               = 22,
	EQP_ITEM_STORE04               = 23,
	EQP_OVER_DRAW                  = 24,
	EQP_MAX                        = 25
};


// Enum Killstreak.EKSWeaponDestroyReason
enum class EKSWeaponDestroyReason : uint8_t
{
	EKSWeaponDestroyReason__None   = 0,
	EKSWeaponDestroyReason__RemoveNoReplace = 1,
	EKSWeaponDestroyReason__RemoveWithReplace = 2,
	EKSWeaponDestroyReason__DropNoReplace = 3,
	EKSWeaponDestroyReason__DropWithReplace = 4,
	EKSWeaponDestroyReason__EKSWeaponDestroyReason_MAX = 5
};


// Enum Killstreak.EReloadReplicationFlags
enum class EReloadReplicationFlags : uint8_t
{
	EReloadReplicationFlags__MinimumReplication = 0,
	EReloadReplicationFlags__ReplicateAmmo = 1,
	EReloadReplicationFlags__EReloadReplicationFlags_MAX = 2
};


// Enum Killstreak.EFiredReplicationFlags
enum class EFiredReplicationFlags : uint8_t
{
	EFiredReplicationFlags__MinimumReplication = 0,
	EFiredReplicationFlags__ReplicateAmmo = 1,
	EFiredReplicationFlags__ReplicateAim = 2,
	EFiredReplicationFlags__ReplicateAimAndAmmo = 3,
	EFiredReplicationFlags__ReplicateAllFireParameters = 4,
	EFiredReplicationFlags__EFiredReplicationFlags_MAX = 5
};


// Enum Killstreak.EKSBuildState
enum class EKSBuildState : uint8_t
{
	EKSBuildState__BUILD_PENDING_VALID = 0,
	EKSBuildState__BUILD_PENDING_INVALID = 1,
	EKSBuildState__BUILD_SUCCEEDED = 2,
	EKSBuildState__BUILD_FAILED    = 3,
	EKSBuildState__BUILD_MAX       = 4
};


// Enum Killstreak.EThirdPersonAimOriginType
enum class EThirdPersonAimOriginType : uint8_t
{
	EThirdPersonAimOriginType__ActorEyes = 0,
	EThirdPersonAimOriginType__FixedRelativeLocation = 1,
	EThirdPersonAimOriginType__ComponentByTag = 2,
	EThirdPersonAimOriginType__SocketOnCharacterMesh = 3,
	EThirdPersonAimOriginType__EThirdPersonAimOriginType_MAX = 4
};


// Enum Killstreak.EReticleType
enum class EReticleType : uint8_t
{
	EReticleType__Pistol           = 0,
	EReticleType__Rifle            = 1,
	EReticleType__Shotgun          = 2,
	EReticleType__DualAR           = 3,
	EReticleType__None             = 4,
	EReticleType__EReticleType_MAX = 5
};


// Enum Killstreak.EReloadType
enum class EReloadType : uint8_t
{
	EReloadType__Clip              = 0,
	EReloadType__SingleShot        = 1,
	EReloadType__EReloadType_MAX   = 2
};


// Enum Killstreak.EWeaponCastType
enum class EWeaponCastType : uint8_t
{
	EWeaponCastType__UseSettings   = 0,
	EWeaponCastType__AlwaysQuickCast = 1,
	EWeaponCastType__AlwaysNormalCast = 2,
	EWeaponCastType__EWeaponCastType_MAX = 3
};


// Enum Killstreak.EFireModeType
enum class EFireModeType : uint8_t
{
	EFireModeType__Single          = 0,
	EFireModeType__Burst           = 1,
	EFireModeType__SemiAuto        = 2,
	EFireModeType__EFireModeType_MAX = 3
};


// Enum Killstreak.EExtendedMagazineRounding
enum class EExtendedMagazineRounding : uint8_t
{
	EExtendedMagazineRounding__NearestInteger = 0,
	EExtendedMagazineRounding__RoundUp = 1,
	EExtendedMagazineRounding__RoundDown = 2,
	EExtendedMagazineRounding__EExtendedMagazineRounding_MAX = 3
};


// Enum Killstreak.EKSVariableScopeType
enum class EKSVariableScopeType : uint8_t
{
	EKSVariableScopeType__FixedFOV = 0,
	EKSVariableScopeType__ScopeMultiplier = 1,
	EKSVariableScopeType__EKSVariableScopeType_MAX = 2
};


// Enum Killstreak.EBundledAmmoType
enum class EBundledAmmoType : uint8_t
{
	EBundledAmmoType__FullClip     = 0,
	EBundledAmmoType__DefaultAmmoFromAsset = 1,
	EBundledAmmoType__Override     = 2,
	EBundledAmmoType__EBundledAmmoType_MAX = 3
};


// Enum Killstreak.EWeaponComponentAttachmentType
enum class EWeaponComponentAttachmentType : uint8_t
{
	EWeaponComponentAttachmentType__AttachToCharacter = 0,
	EWeaponComponentAttachmentType__AttachToMesh = 1,
	EWeaponComponentAttachmentType__EWeaponComponentAttachmentType_MAX = 2
};


// Enum Killstreak.ESkinObjectParentingType
enum class ESkinObjectParentingType : uint8_t
{
	ESkinObjectParentingType__Never = 0,
	ESkinObjectParentingType__ActiveAndMainHand = 1,
	ESkinObjectParentingType__Active = 2,
	ESkinObjectParentingType__InAction = 3,
	ESkinObjectParentingType__Always = 4,
	ESkinObjectParentingType__ESkinObjectParentingType_MAX = 5
};


// Enum Killstreak.EWeaponComponentTickType
enum class EWeaponComponentTickType : uint8_t
{
	EWeaponComponentTickType__NeverTick = 0,
	EWeaponComponentTickType__TickWhenPrimary = 1,
	EWeaponComponentTickType__TickWhenActive = 2,
	EWeaponComponentTickType__AlwaysTick = 3,
	EWeaponComponentTickType__EWeaponComponentTickType_MAX = 4
};


// Enum Killstreak.EKSWeaponMasteryActivityType
enum class EKSWeaponMasteryActivityType : uint8_t
{
	EKSWeaponMasteryActivityType__None = 0,
	EKSWeaponMasteryActivityType__Shots = 1,
	EKSWeaponMasteryActivityType__Hits = 2,
	EKSWeaponMasteryActivityType__Damage = 3,
	EKSWeaponMasteryActivityType__Downs = 4,
	EKSWeaponMasteryActivityType__Kills = 5,
	EKSWeaponMasteryActivityType__Headshots = 6,
	EKSWeaponMasteryActivityType__Deaths = 7,
	EKSWeaponMasteryActivityType__MAX = 8
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Killstreak.KSVoicelineEvent
// 0x0030
struct FKSVoicelineEvent
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKSVoicelineAudience                               Audience;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ActivationChance;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAffectedByGlobalCooldown;                                // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CooldownGroup;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CooldownDuration;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VoicelineChangeValue;                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayedByOwnerAlready;                                    // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlaySpecificVoiceLine;                                   // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SpecificAkAudioEvent;                                     // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AccoladeDisplayInfo
// 0x0060
struct FAccoladeDisplayInfo
{
	EAccoladeCategory                                  Category;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAccoladeEventType                                 Type;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  DisplayIcon;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayTitle;                                             // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              DisplayDuration;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Multiplier;                                               // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKSVoicelineEvent                           AccoladeVoiceLine;                                        // 0x0030(0x0030) (Edit, DisableEditOnInstance)
};

// ScriptStruct Killstreak.CombatEventInfo
// 0x0060
struct FCombatEventInfo
{
	TWeakObjectPtr<class APlayerState>                 EventVictim;                                              // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APlayerState>                 EventInstigator;                                          // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AController>                  InstigatorController;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class APlayerState>>         EventAssistants;                                          // 0x0018(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class AActor>                       DamagedActor;                                             // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       DamageCauser;                                             // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset*                              WeaponAsset;                                              // 0x0040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DownEvent;                                                // 0x0048(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillEvent;                                                // 0x0049(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EHitLocationType                                   HitLocationType;                                          // 0x004A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageDealt;                                              // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverkillDamageDealt;                                      // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OriginalDamageDealt;                                      // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsArmorHit;                                               // 0x0058(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDamageResisted;                                          // 0x0059(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDamageReduced;                                           // 0x005A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsRadialDamage;                                           // 0x005B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WasCharacterAlreadyDown;                                  // 0x005C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ActivityAchievementInfo
// 0x0058
struct FActivityAchievementInfo
{
	unsigned char                                      bIsAchievement;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FString>                 AchievementIdByOSSName;                                   // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Killstreak.ActivityReference
// 0x0030
struct FActivityReference
{
	int64_t                                            ReferenceValue1;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReferenceValue2;                                          // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReferenceValue3;                                          // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct Killstreak.ActivityTier
// 0x0020
struct FActivityTier
{
	int                                                Tier;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StartingCount;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UPUMG_StoreItem*>                     RewardItems;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.KSBTDifficultyConfig
// 0x0078
struct FKSBTDifficultyConfig
{
	float                                              AccuracyMultiplierStandard;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccuracyMultiplierThrownMelee;                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccuracyMultiplierWhenBlinded;                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccuracyMultiplierWhenCrosshairHidden;                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NewTargetAccuracyMultiplier;                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NewTargetTime;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMultiplier;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackDelayClipPercentMin;                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackDelayClipPercentMax;                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackDelay;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageDealtMultiplier;                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeadshotDamageDealtMultiplier;                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageTakenMultiplier;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeadshotDamageTakenMultiplier;                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AimForHeadshotProbability;                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DodgeRollProbability;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StrafeProbability;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrowGrenadeProbability;                                  // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrowMeleeProbability;                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PerceptionStrengthMin;                                    // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PerceptionStrengthMax;                                    // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UKSBTAction*>                         AllowedActions;                                           // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<class UKSBTAction*>                         DisallowedActions;                                        // 0x0068(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Killstreak.KSInitialLoadout
// 0x0010
struct FKSInitialLoadout
{
	TArray<class UKSItem*>                             LoadoutItems;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Killstreak.KSBTItemPriorityTableRow
// 0x0038 (0x0040 - 0x0008)
struct FKSBTItemPriorityTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSBTItemPriorityTableRow.ItemAsset
	float                                              Weight;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShopPurchaseWeight;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShopPriorityGroup;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AimAssistActorHealthInfo
// 0x0008
struct FAimAssistActorHealthInfo
{
	float                                              CurrentHealth;                                            // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bKilled;                                                  // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.RankedAimAssistTarget
// 0x0048
struct FRankedAimAssistTarget
{
	class UKSAimAssistAnchorComponent*                 Anchor;                                                   // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UKSAimAssistTargetInterface> Target;                                                   // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeadWeight;                                               // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BodyLocation;                                             // 0x001C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HeadLocation;                                             // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      ScaledProjectionBounds;                                   // 0x002C(0x0014) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              DistanceFromCamera;                                       // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UpdateCount;                                              // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSBTObjectivePriorityTableRow
// 0x0058 (0x0060 - 0x0008)
struct FKSBTObjectivePriorityTableRow : public FTableRowBase
{
	class UKSBTObjective*                              Objective;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSecondsElapsed;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSecondsElapsed;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSecondsRemaining;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSecondsRemaining;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x002C(0x0010) UNKNOWN PROPERTY: ArrayProperty Killstreak.KSBTObjectivePriorityTableRow.RequiredAbilities
	TArray<class UKSBTTargetSelector*>                 ObjectiveValidationArray;                                 // 0x0040(0x0010) (Edit, ZeroConstructor)
	class UDataTable*                                  TargetSelectionTable;                                     // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  OverrideDataTable;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSStimulusEvent
// 0x0048
struct FKSStimulusEvent
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // 0x0008(0x003C) (Edit, EditConst)
};

// ScriptStruct Killstreak.KSAIMapPointStimulusEvent
// 0x0010
struct FKSAIMapPointStimulusEvent
{
	class AActor*                                      Broadcaster;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.AIObjectiveEvent
// 0x0030
struct FAIObjectiveEvent
{
	struct FVector                                     ObjectiveLocation;                                        // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Loudness;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAIPlayerStimulusEvent
// 0x0038
struct FKSAIPlayerStimulusEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class AActor*                                      Broadcaster;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Enemy;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSAITeamStimulusEvent
// 0x0038
struct FKSAITeamStimulusEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class AActor*                                      Broadcaster;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Enemy;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.GiveItemParameters
// 0x000C
struct FGiveItemParameters
{
	EItemSourceType                                    ItemSource;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OriginalOwnerId;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bActivate;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.DropItemParameters
// 0x0008
struct FDropItemParameters
{
	int                                                OriginalOwnerId;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsPlayerDrop;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ItemDisplayStatParams
// 0x0010 (0x0018 - 0x0008)
struct FItemDisplayStatParams : public FTableRowBase
{
	float                                              RangeMin;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShowsBar;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ItemDisplayStat
// 0x0038
struct FItemDisplayStat
{
	struct FText                                       DisplayText;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              Value;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FItemDisplayStatParams                      StatProperties;                                           // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Killstreak.Announcement
// 0x0040
struct FAnnouncement
{
	class UAkAudioEvent*                               AkEvent;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AltAkEvent;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Priority;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lifetime;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ValidUntil;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lockout;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RTPC;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamNum;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSerializedMctsNetId                        PlayerId;                                                 // 0x0030(0x0008) (Edit, DisableEditOnInstance)
	class UAkAudioEvent*                               TargetPlayerAkEvent;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.TimeAnnouncement
// 0x0060
struct FTimeAnnouncement
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAnnouncement                               Announcement;                                             // 0x0008(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FName>                               AnnouncementGroups;                                       // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      Block;                                                    // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.TimeAnnouncementList
// 0x0010
struct FTimeAnnouncementList
{
	TArray<struct FTimeAnnouncement>                   TimeAnnouncements;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Killstreak.SizedArraySerializer
// 0x0000 (0x0070 - 0x0070)
struct FSizedArraySerializer : public FReplicatedLog
{

};

// ScriptStruct Killstreak.AnnouncementItem
// 0x003F (0x0040 - 0x0001)
struct FAnnouncementItem : public FReplicatedLogItem
{
	struct FAnnouncement                               Announcement;                                             // 0x0000(0x0040)
};

// ScriptStruct Killstreak.AnnouncementList
// 0x0018 (0x0088 - 0x0070)
struct FAnnouncementList : public FSizedArraySerializer
{
	TArray<struct FAnnouncementItem>                   Items;                                                    // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.SoftDataTableInfo
// 0x0078
struct FSoftDataTableInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.SoftDataTableInfo.DataTable
	int                                                TablePriority;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           SkinTagQuery;                                             // 0x0030(0x0048) (Edit, BlueprintVisible)
};

// ScriptStruct Killstreak.KSEquipRepInfo
// 0x0014
struct FKSEquipRepInfo
{
	unsigned char                                      NoEquipPoint;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                EquipPoint;                                               // 0x0004(0x0008)
	uint32_t                                           UpdateId;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AuxiliaryWeaponInfo
// 0x0010
struct FAuxiliaryWeaponInfo
{
	struct FName                                       AuxiliarySlot;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AKSWeapon*                                   ParentWeapon;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.WeaponStateChangeRequest
// 0x0010
struct FWeaponStateChangeRequest
{
	uint16_t                                           RequestID;                                                // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bChangeWeaponState;                                       // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	EWeaponStateNew                                    PreviousState;                                            // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	EWeaponStateNew                                    NextState;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bChangeWeaponAimMode;                                     // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	EKSCharacterAimMode                                AimMode;                                                  // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x0008(0x0008) (ZeroConstructor)
};

// ScriptStruct Killstreak.KSActionRestrictor
// 0x0008
struct FKSActionRestrictor
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	unsigned char                                      bRestrictMove;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRestrictFire;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRestrictAltFire;                                         // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRestrictRoll;                                            // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AimData
// 0x0050
struct FAimData
{
	struct FVector                                     StartTrace;                                               // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewPoint;                                                // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAimDataMode                                       AimDataMode;                                              // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTrace;                                                 // 0x0028(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x0034(0x000C) (BlueprintVisible)
	TArray<struct FVector>                             SpreadDirections;                                         // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Killstreak.WeaponStateGraph
// 0x0010
struct FWeaponStateGraph
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Killstreak.PrefireSkipWindow
// 0x0028
struct FPrefireSkipWindow
{
	float                                              WindowDuration;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindowExpiration;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     LungeMontageSequence;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     TargetMontageSequence;                                    // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Killstreak.ADSBlurValues
// 0x0030
struct FADSBlurValues
{
	unsigned char                                      AdsBlurDisabled;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BlurDistance;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MaskExponential;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HardnessOfMask;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SphereMaskRadius;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SphereMaskScaleX;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SphereMaskScaleY;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      EnableCubeMask;                                           // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              CubeMaskPosX;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              CubeMaskPosY;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              CubeMaskScaleX;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              CubeMaskScaleY;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.BundledAmmoInfo
// 0x000C
struct FBundledAmmoInfo
{
	EBundledAmmoType                                   BundleType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ReserveAmmo;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AmmoInClip;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSWeaponDropAttachmentContainerEntry
// 0x002C (0x0038 - 0x000C)
struct FKSWeaponDropAttachmentContainerEntry : public FFastArraySerializerItem
{
	class UKSWeaponAttachment*                         Attachment;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FGameplayTag                                ReplicatedAttachPoint;                                    // 0x0020(0x0008) (Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

// ScriptStruct Killstreak.KSWeaponDropAttachmentContainer
// 0x0020 (0x0128 - 0x0108)
struct FKSWeaponDropAttachmentContainer : public FFastArraySerializer
{
	TArray<struct FKSWeaponDropAttachmentContainerEntry> Attachments;                                              // 0x0108(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	class AKSWeaponAssetDrop*                          Owner;                                                    // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Killstreak.KSEquipmentContainerEntry
// 0x00AC (0x00B8 - 0x000C)
struct FKSEquipmentContainerEntry : public FFastArraySerializerItem
{
	uint16_t                                           EquipmentId;                                              // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ParentEquipmentId;                                        // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                EquipPoint;                                               // 0x0014(0x0008)
	unsigned char                                      UnknownData00[0x8];                                       // 0x001C(0x0008) MISSED OFFSET
	unsigned char                                      bAlwaysReplicateExtraInfo;                                // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ExtraInfo;                                                // 0x0026(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UKSItem*                                     Item;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSItem*                                     LocalItem;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bWeaponComponentIsReplicated;                             // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UKSEquipmentCosmeticComponent> CosmeticComponent;                                        // 0x0044(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UKSWeaponAttachmentCosmeticInst> AttachmentCosmeticComponent;                              // 0x004C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bMarkedStale;                                             // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x3B];                                      // 0x0055(0x003B) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x0055(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSEquipmentContainerEntry.ParentAsset
};

// ScriptStruct Killstreak.KSEquipmentContainer
// 0x00E8 (0x01F0 - 0x0108)
struct FKSEquipmentContainer : public FFastArraySerializer
{
	class AActor*                                      Owner;                                                    // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<uint16_t, struct FKSEquipmentContainerEntry>  PendingEquipment;                                         // 0x0110(0x0050) (ZeroConstructor, Transient)
	TArray<struct FKSEquipmentContainerEntry>          Equipment;                                                // 0x0160(0x0010) (ZeroConstructor)
	uint16_t                                           NextEquipmentId;                                          // 0x0170(0x0002) (ZeroConstructor, IsPlainOldData)
	TArray<struct FKSEquipmentContainerEntry>          StaleEquipment;                                           // 0x0178(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0188(0x0068) MISSED OFFSET
};

// ScriptStruct Killstreak.KSNeutralBombState
// 0x0018
struct FKSNeutralBombState
{
	EKSNeutralBombState                                CurrentState;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKSNeutralBombState                                OldState;                                                 // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BombTeam;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              BombHolder;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AKSNeutralBombZone*                          BombZone;                                                 // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ObjectiveState
// 0x0014
struct FObjectiveState
{
	struct FName                                       CurrentState;                                             // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PreviousState;                                            // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Owner;                                                    // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PlayerCombatInfo
// 0x0020
struct FPlayerCombatInfo
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayerTeamNum;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              PlayerState;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              PlayerVictim;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeLeft;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.SkeletalMeshMaterialToReductionGroup
// 0x0018
struct FSkeletalMeshMaterialToReductionGroup
{
	struct FString                                     NameToMatch;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ReductionGroup;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ShopSubItem
// 0x0010
struct FShopSubItem
{
	class UKSItem*                                     Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Price;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPurchased;                                               // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Killstreak.ShopItem
// 0x0084 (0x0090 - 0x000C)
struct FShopItem : public FFastArraySerializerItem
{
	EShopItemType                                      Type;                                                     // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FShopSubItem>                        SubItemList;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bResetable;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                EquipPoint;                                               // 0x0024(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<EShopItemType>                              ItemsToDeactivate;                                        // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<EShopItemType>                              Prerequisites;                                            // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<EShopItemType>                              Restrictions;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)
	int                                                NextSubItemIndex;                                         // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                CurrentSubItemIndex;                                      // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsActive;                                                // 0x0068(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bStartInactive;                                           // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOneTimePurchase;                                         // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAuthorityIsActive;                                       // 0x006B(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                AuthorityPurchaseIndex;                                   // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AuthorityLatestTransactionId;                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSimulatedIsActive;                                       // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                SimulatedPurchaseIndex;                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                SimulatedLatestTransactionId;                             // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
};

// ScriptStruct Killstreak.KSOutlineParameters
// 0x0030
struct FKSOutlineParameters
{
	EPlayerSilhouetteType                              ColorType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FillColor;                                                // 0x0014(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OutlineThickness;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldFill;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHideWhenOccluded;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsHot;                                                   // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsFriendly;                                              // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCutoutOtherOutlines;                                     // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ItemTableElement
// 0x0028 (0x0030 - 0x0008)
struct FItemTableElement : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.ItemTableElement.Item
};

// ScriptStruct Killstreak.KSCSVRow
// 0x0010
struct FKSCSVRow
{
	TArray<struct FString>                             CSVColumn;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Killstreak.BotSpawnTableRow
// 0x0180 (0x0188 - 0x0008)
struct FBotSpawnTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Killstreak.BotSpawnTableRow.Character
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty Killstreak.BotSpawnTableRow.Controller
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.BotSpawnTableRow.BehaviorTree1
	class UKSBTDifficulty*                             InitialDifficulty;                                        // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DifficultyTable;                                          // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AllowDynamicDifficulty;                                   // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKSBTDifficultyConfig                       SpawnDifficultyConfig;                                    // 0x0098(0x0078) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0110(0x0010) UNKNOWN PROPERTY: ArrayProperty Killstreak.BotSpawnTableRow.ItemLoadoutTables
	class UDataTable*                                  ObjectivePriorityTable;                                   // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  ItemPriorityTable;                                        // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           AllowedJobQuery;                                          // 0x0130(0x0048) (Edit, BlueprintVisible)
	class UDataTable*                                  AbilityTable;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsPlayer;                                                // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseGameModeInventory;                                    // 0x0181(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.RoundInitState
// 0x0010
struct FRoundInitState
{
	unsigned char                                      RoundNumber;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AttackingTeam;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DefendingTeam;                                            // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LastPrepareTriggered;                                     // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      LastRoundStartTriggered;                                  // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Killstreak.KSAffiliationFilter
// 0x0004
struct FKSAffiliationFilter
{
	unsigned char                                      bCountEnemies;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCountAllies;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCountSelf;                                               // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCountUnaffiliated;                                       // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSCharacterStateFilter
// 0x0098
struct FKSCharacterStateFilter
{
	unsigned char                                      bCheckHealth;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EArithmeticKeyOperation>               HealthOperation;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealthPercent;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckDowned;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Downed;                                                   // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckDead;                                               // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Dead;                                                     // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckCrouched;                                           // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Crouched;                                                 // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckFalling;                                            // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Falling;                                                  // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckSprinting;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Sprinting;                                                // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckSwimming;                                           // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Swimming;                                                 // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckRidingZipline;                                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    RidingZipline;                                            // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckIsBot;                                              // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsBot;                                                    // 0x0017(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckBehaviorState;                                      // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    BehaviorOperation;                                        // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECharacterBehaviorState                            BehaviorState;                                            // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckInteracting;                                        // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Interacting;                                              // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckInteractableClass;                                  // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InteractableClass;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinInteractTimeRemaining;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInteractTimeRemaining;                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckADS;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    ADS;                                                      // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckHasReviver;                                         // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    HasReviver;                                               // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckReviverAffiliation;                                 // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKSAffiliationFilter                        ReviverAffiliation;                                       // 0x0035(0x0004) (Edit)
	unsigned char                                      bCheckIsOnFire;                                           // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsOnFire;                                                 // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckIsWeaponEquipped;                                   // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsWeaponEquipped;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EquippedWeaponClass;                                      // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckIsWeaponAssetEquipped;                              // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsWeaponAssetEquipped;                                    // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x004A(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSCharacterStateFilter.EquippedWeaponAsset
	unsigned char                                      bCheckRoles;                                              // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<ECharacterRole>                             RolesToCheck;                                             // 0x0080(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bRequireAllRoles;                                         // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSInteractableStateFilter
// 0x0018
struct FKSInteractableStateFilter
{
	unsigned char                                      bCheckIsInteracting;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsInteracting;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckInteractorAffiliation;                              // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKSAffiliationFilter                        InteractorAffiliation;                                    // 0x0003(0x0004) (Edit)
	unsigned char                                      bCheckCanInteract;                                        // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    CanInteract;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckInteractableClass;                                  // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InteractableClass;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSDestructibleStateFilter
// 0x0002
struct FKSDestructibleStateFilter
{
	unsigned char                                      bCheckIsDestroyed;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Destroyed;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSItemDropStateFilter
// 0x0010
struct FKSItemDropStateFilter
{
	unsigned char                                      bCheckEquipPoint;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                EquipPoint;                                               // 0x0004(0x0008) (Edit)
	unsigned char                                      bCheckHasBeenSeen;                                        // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    HasBeenSeen;                                              // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckIsInActiveState;                                    // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsInActiveState;                                          // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSLootSiteFilter
// 0x0002
struct FKSLootSiteFilter
{
	unsigned char                                      bCheckHasBeenSeen;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    HasBeenSeen;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSDestroyableHazardStateFilter
// 0x0007
struct FKSDestroyableHazardStateFilter
{
	unsigned char                                      bReturnTrueIfNotDestroyableHazard;                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckCanBotDetect;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    CanBotDetect;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckShouldDestroyWithGunfire;                           // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    ShouldDestroyWithGunfire;                                 // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckShouldDestroyWithEMP;                               // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    ShouldDestroyWithEMP;                                     // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSMapPointStateFilter
// 0x0030
struct FKSMapPointStateFilter
{
	unsigned char                                      bCheckMapPointType;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       RequiredMapPointTypes;                                    // 0x0008(0x0020) (Edit)
	unsigned char                                      bCheckIsPointActive;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsPointActive;                                            // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckIsPointAvailable;                                   // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsPointAvailable;                                         // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckIsPointFriendly;                                    // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsPointFriendly;                                          // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSPerceptionFilter
// 0x0158
struct FKSPerceptionFilter
{
	struct FName                                       PerceptionEvent;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKSAffiliationFilter                        AffiliationFilter;                                        // 0x0008(0x0004) (Edit)
	struct FKSCharacterStateFilter                     CharacterStateFilter;                                     // 0x0010(0x0098) (Edit)
	struct FKSInteractableStateFilter                  InteractableStateFilter;                                  // 0x00A8(0x0018) (Edit)
	struct FKSDestructibleStateFilter                  DestructibleStateFilter;                                  // 0x00C0(0x0002) (Edit)
	struct FKSItemDropStateFilter                      ItemDropStateFilter;                                      // 0x00C4(0x0010) (Edit)
	struct FKSLootSiteFilter                           LootSiteFilter;                                           // 0x00D4(0x0002) (Edit)
	struct FKSDestroyableHazardStateFilter             DestroyableHazardStateFilter;                             // 0x00D6(0x0007) (Edit)
	struct FKSMapPointStateFilter                      MapPointStateFilter;                                      // 0x00E0(0x0030) (Edit)
	unsigned char                                      bCheckDistance;                                           // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EArithmeticKeyOperation>               DistanceOperation;                                        // 0x0111(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckDistanceRange;                                      // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckActorClass;                                         // 0x0124(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckActorClassArray;                                    // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ActorClassArray;                                          // 0x0138(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCheckLOS;                                                // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckForward;                                            // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxForwardAngle;                                          // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckIntersectsNavMeshPath;                              // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSPowerSlideInfo
// 0x0002
struct FKSPowerSlideInfo
{
	unsigned char                                      bIsInPowerSlide;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EKSPowerSlideEndReason                             EndReason;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSLungeInfo
// 0x0010
struct FKSLungeInfo
{
	class AActor*                                      LungeTarget;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxLungeDistance;                                         // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxLungeDuration;                                         // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSZipLineInfo
// 0x0010
struct FKSZipLineInfo
{
	class AKSZipLine*                                  Zipline;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bZipLineReverse;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ReplicatedViewInfo
// 0x0008
struct FReplicatedViewInfo
{
	float                                              Pitch;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSDeathInfo
// 0x0028
struct FKSDeathInfo
{
	EKSDeathState                                      DeathState;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageDirection;                                          // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              FinalBlowDamage;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bImmediateRagdoll;                                        // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSMantleInfo
// 0x0044
struct FKSMantleInfo
{
	unsigned char                                      bIsMantling;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bVaultingOver;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              ApproachDist;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MantleHeight;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ForwardDist;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VaultDrop;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MantleUpDuration;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VaultAcrossDuration;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VaultDownDuration;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MantleName;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldSpaceGrabLocation;                                   // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldTowardsWallDir;                                      // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFromStanding;                                            // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSCharacterSocketInfo
// 0x0070
struct FKSCharacterSocketInfo
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeTM;                                               // 0x0010(0x0030) (IsPlainOldData)
	class UKSCharacterSocketComponent*                 SocketComponent;                                          // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ParentComponent;                                          // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ParentSocketName;                                         // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	EKSSocketCrouchHandling                            CrouchHandlingType;                                       // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdditiveCrouchOffset;                                     // 0x005C(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.RevealInfo
// 0x0014
struct FRevealInfo
{
	TWeakObjectPtr<class AKSCharacter>                 Target;                                                   // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AKSCharacter>                 Revealer;                                                 // 0x000C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.CompressedShotgunHitData
// 0x0010
struct FCompressedShotgunHitData
{
	class UKSWeaponAsset_Shotgun*                      ShotgunAsset;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           CompressedHitResults;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSShotgunHitChangeItem
// 0x000F (0x0010 - 0x0001)
struct FKSShotgunHitChangeItem : public FReplicatedLogItem
{
	struct FCompressedShotgunHitData                   ShotgunHitData;                                           // 0x0000(0x0010)
};

// ScriptStruct Killstreak.KSShotgunHitChangeList
// 0x0018 (0x0088 - 0x0070)
struct FKSShotgunHitChangeList : public FReplicatedLog
{
	TArray<struct FKSShotgunHitChangeItem>             Items;                                                    // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.SmoothedComponentInfo
// 0x0030
struct FSmoothedComponentInfo
{
	class USceneComponent*                             Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     InitialTranslationOffset;                                 // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FQuat                                       InitialRotationOffset;                                    // 0x0020(0x0010) (IsPlainOldData)
};

// ScriptStruct Killstreak.KSOutOfBoundsInfo
// 0x0008
struct FKSOutOfBoundsInfo
{
	unsigned char                                      bOutOfBounds;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              WarningLength;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSInitialInventoryItem
// 0x0020
struct FKSInitialInventoryItem
{
	struct FGameplayTag                                EquipPoint;                                               // 0x0000(0x0008) (Edit)
	class UKSItem*                                     ItemAsset;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UKSWeaponAttachment*>                 Attachments;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Killstreak.KSInitialAmmo
// 0x0008
struct FKSInitialAmmo
{
	EAmmoType                                          AmmoType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AmmoCount;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSLootLockerItem
// 0x0020
struct FKSLootLockerItem
{
	class UKSWeaponAsset*                              WeaponAsset;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment*                         Attachment1;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment*                         Attachment2;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment*                         Attachment3;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSWeaponDataUpdateContainer
// 0x0004
struct FKSWeaponDataUpdateContainer
{
	unsigned char                                      bChangeWeaponState;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew                                    WeaponState;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bChangeAimMode;                                           // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EKSCharacterAimMode                                AimMode;                                                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSPendingWeaponStateUpdates
// 0x000C
struct FKSPendingWeaponStateUpdates
{
	uint32_t                                           BroadcastId;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           nEquipmentId;                                             // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	struct FKSWeaponDataUpdateContainer                UpdateData;                                               // 0x0006(0x0004)
};

// ScriptStruct Killstreak.KSAmmoManagerEntry
// 0x0010 (0x001C - 0x000C)
struct FKSAmmoManagerEntry : public FFastArraySerializerItem
{
	EAmmoType                                          AmmoType;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           UpdateId;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AmmoCount;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSAmmoTransactions
// 0x0018
struct FKSAmmoTransactions
{
	uint64_t                                           TransactionId;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           UpdateIdAtTimeOfTransaction;                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	EAmmoType                                          AmmoType;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                AmmoDelta;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSAmmoManager
// 0x0028 (0x0130 - 0x0108)
struct FKSAmmoManager : public FFastArraySerializer
{
	TWeakObjectPtr<class AActor>                       Owner;                                                    // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FKSAmmoManagerEntry>                 AmmoSupply;                                               // 0x0110(0x0010) (ZeroConstructor)
	TArray<struct FKSAmmoTransactions>                 UnverifiedAmmoTransactions;                               // 0x0120(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.AssistTag
// 0x0010
struct FAssistTag
{
	float                                              ExpirationTime;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              Assistant;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ReviveInfo
// 0x0030
struct FReviveInfo
{
	unsigned char                                      bIsBeingRevived;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRemoteRevive;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSelectedToRevive;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReviveGuaranteed;                                        // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              Reviver;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AKSCharacter*                                ReviverCharacter;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       ReviveeOverrideMontage;                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ReviveProgress;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReviveRate;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LocalReviveProgress;                                      // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      RequestID;                                                // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Killstreak.KSInteractableCameraTransition
// 0x0028
struct FKSInteractableCameraTransition
{
	struct FName                                       CameraName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionInTime;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              TransitionInFunction;                                     // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionInExp;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionOutTime;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationLockAngle;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RotationLockout;                                          // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCameraShake;                                             // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.RevealManagerEntry
// 0x001C (0x0028 - 0x000C)
struct FRevealManagerEntry : public FFastArraySerializerItem
{
	class AKSCharacter*                                Target;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	EPlayerSilhouetteType                              Type;                                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFill;                                                    // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMark;                                                    // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD];                                       // 0x001B(0x000D) MISSED OFFSET
};

// ScriptStruct Killstreak.RevealManager
// 0x0060 (0x0168 - 0x0108)
struct FRevealManager : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0108(0x0020) MISSED OFFSET
	TArray<struct FRevealManagerEntry>                 Reveals;                                                  // 0x0128(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0138(0x0010) MISSED OFFSET
	TArray<class AKSCharacter*>                        RequestedLocalReveals;                                    // 0x0148(0x0010) (ZeroConstructor)
	class AKSCharacter*                                Owner;                                                    // 0x0158(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.HaulingInfo
// 0x0010
struct FHaulingInfo
{
	unsigned char                                      bHaulInProgress;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      CarriedActor;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.CarriedInfo
// 0x0010
struct FCarriedInfo
{
	unsigned char                                      bCarryInProgress;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class AKSCharacter*                                Hauler;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSPostProcessFloatCurve
// 0x0010
struct FKSPostProcessFloatCurve
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FloatParameterName;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSPostProcessColorCurve
// 0x0010
struct FKSPostProcessColorCurve
{
	class UCurveLinearColor*                           ColorCurve;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColorParameterName;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSSpecialEffect
// 0x0050
struct FKSSpecialEffect
{
	struct FName                                       FXID;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectEndTime;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoop;                                                    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LoopStartTime;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LoopEndTime;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRemoveOnForwardComplete;                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRemoveOnReverseComplete;                                 // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FKSPostProcessFloatCurve>            FloatCurves;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKSPostProcessColorCurve>            ColorCurves;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      FXCurveClass;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EffectAsset;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.DamageEffect
// 0x0050
struct FDamageEffect
{
	float                                              Damage;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttemptedDamage;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageOrigin;                                             // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bArmorBroke;                                              // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDamageResisted;                                          // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDamageReduced;                                           // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeImpactLocation;                                   // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   RelativeImpactNormal;                                     // 0x0034(0x000C) (Edit, BlueprintVisible)
	struct FName                                       BoneName;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsHeadshot;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ShotgunHitData
// 0x0018
struct FShotgunHitData
{
	class UKSWeaponAsset_Shotgun*                      ShotgunAsset;                                             // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<EShotgunHitResult>                          HitResults;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.FullFireRepData
// 0x0068
struct FFullFireRepData
{
	struct FAimData                                    Aim;                                                      // 0x0000(0x0050) (BlueprintVisible)
	unsigned char                                      bIgnoreExtraData;                                         // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRandomStream                               RandomStream;                                             // 0x0054(0x0008) (BlueprintVisible, ZeroConstructor)
	float                                              Accuracy;                                                 // 0x005C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AmmoAfterThisShot;                                        // 0x0060(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIgnoreAmmo;                                              // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Killstreak.KSParticleSystemAttachment
// 0x0028
struct FKSParticleSystemAttachment
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttachmentOffset;                                         // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.FloatHitSpringState
// 0x0008
struct FFloatHitSpringState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.HitReaction
// 0x0014
struct FHitReaction
{
	struct FVector                                     WorldHitDirection;                                        // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitTime;                                                  // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.MantleConfig
// 0x00A8
struct FMantleConfig
{
	struct FName                                       MantleSequenceName;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DefaultMantleSequence;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKSMantleScaleType                                 DistanceScaleMethod;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdealHeight;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeight;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultMinHeight;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              ShaveCutoffTime;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasDropSegment;                                          // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseOnJump;                                               // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanStartWhileFalling;                                    // 0x0026(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EarlyOutTime;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanEndWithStand;                                         // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanEndWithSlide;                                         // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanEndWithFall;                                          // 0x002E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x49];                                      // 0x002F(0x0049) MISSED OFFSET
	class UAnimSequence*                               CachedSequence;                                           // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0080(0x0028) MISSED OFFSET
};

// ScriptStruct Killstreak.KSChildPhysicsAssetKeywords
// 0x0018
struct FKSChildPhysicsAssetKeywords
{
	struct FName                                       AssetKeyword;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionProfileKeyword;                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SimulatePhysicsKeyword;                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ChildBodyCollisionProfileCache
// 0x000C
struct FChildBodyCollisionProfileCache
{
	int                                                BodyIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionProfileName;                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.CombatEvent
// 0x0014
struct FCombatEvent
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      Fatal;                                                    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Damage;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Killstreak.revive
// 0x000C
struct Frevive
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Killstreak.assist
// 0x000C
struct Fassist
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Killstreak.advcombat
// 0x000C
struct Fadvcombat
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Killstreak.CharacterArray
// 0x0050
struct FCharacterArray
{
	TArray<struct FVector>                             Positions;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FCombatEvent>                        CombatEvents;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct Frevive>                             Revives;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct Fassist>                             Assists;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct Fadvcombat>                          AdvCombats;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct Killstreak.KSRadialMenuItemInterruptRules
// 0x0004
struct FKSRadialMenuItemInterruptRules
{
	unsigned char                                      bUnknown0000_0101 : 1;                                    // 0x0000(0x0001) (Edit, DisableEditOnInstanceMANUAL_ADD_BIT 0101)
	unsigned char                                      Walking : 1;                                              // 0x0000(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0404)
	unsigned char                                      Sprinting : 1;                                            // 0x0000(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0808)
	unsigned char                                      Crouching : 1;                                            // 0x0000(0x0001) (Edit, DisableEditOnInstance BITFIELD: 1010)
	unsigned char                                      Downed : 1;                                               // 0x0000(0x0001) (Edit, DisableEditOnInstance BITFIELD: 2020)
	unsigned char                                      Dead : 1;                                                 // 0x0000(0x0001) (Edit, DisableEditOnInstance BITFIELD: 4040)
	unsigned char                                      Interacting : 1;                                          // 0x0000(0x0001) (Edit, DisableEditOnInstance BITFIELD: 8080)
	unsigned char                                      Zipline : 1;                                              // 0x0001(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0101)
	unsigned char                                      SkyDiving : 1;                                            // 0x0001(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0202)
	unsigned char                                      DodgeRolling : 1;                                         // 0x0001(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0404)
	unsigned char                                      Falling : 1;                                              // 0x0001(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0808)
	unsigned char                                      NonRadialMenuItemEquipment : 1;                           // 0x0001(0x0001) (Edit, DisableEditOnInstance BITFIELD: 1010)
	unsigned char                                      RadialMenuItemActivated : 1;                              // 0x0001(0x0001) (Edit, EditConst BITFIELD: 2020)
	unsigned char                                      Cooldown : 1;                                             // 0x0001(0x0001) (Edit, EditConst BITFIELD: 4040)
};

// ScriptStruct Killstreak.CurrencyImageRow
// 0x0058 (0x0060 - 0x0008)
struct FCurrencyImageRow : public FTableRowBase
{
	int                                                Quantity;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BonusQuantity;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.CurrencyImageRow.Image
	unsigned char                                      UnknownData01[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.CurrencyImageRow.FullSplashImage
};

// ScriptStruct Killstreak.TargetingModuleTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FTargetingModuleTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.WeaponTypeToAntiCheatId
// 0x000C
struct FWeaponTypeToAntiCheatId
{
	struct FGameplayTag                                WeaponType;                                               // 0x0000(0x0008) (Edit)
	uint16_t                                           AntiCheatId;                                              // 0x0008(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSEmoteInterruptTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FKSEmoteInterruptTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.KSEmoteConversionEntry
// 0x000C
struct FKSEmoteConversionEntry
{
	struct FName                                       EmotionName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EKSEmotion                                         EmotionEnum;                                              // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSAnimStats
// 0x0008
struct FKSAnimStats
{
	float                                              PlayTime;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PlayTimeWeighted;                                         // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSRespawnConfig
// 0x0014
struct FKSRespawnConfig
{
	EKSRespawnMode                                     RespawnMode;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalRespawns;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PersonalRespawns;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RespawnTime;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WaveRespawn;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSLootGroupGuarantee
// 0x0018
struct FKSLootGroupGuarantee
{
	int                                                Quantity;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ObjectiveLootGroups;                                      // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.KSLootGroupGuaranteeMap
// 0x0058
struct FKSLootGroupGuaranteeMap
{
	int                                                TotalLootSitesActive;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<unsigned char, struct FKSLootGroupGuarantee>  GuaranteeMap;                                             // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.KSLootRaritySwapInfo
// 0x000C
struct FKSLootRaritySwapInfo
{
	float                                              Chance;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ELootSiteRarity                                    OldRarity;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ELootSiteRarity                                    NewRarity;                                                // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSGameHUDSettings
// 0x0018
struct FKSGameHUDSettings
{
	unsigned char                                      ShouldShowEnemyCaptureProgress;                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GameModeWidget;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ShowRoundEndResults;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.AdvancedCombatEvent
// 0x00A8
struct FAdvancedCombatEvent
{
	TWeakObjectPtr<class APlayerState>                 DamageInstigator;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class APawn>                        DamageInstigatorPawn;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       DamageCauser;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset*                              WeaponAsset;                                              // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VictimId;                                                 // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Victim;                                                   // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector_NetQuantize                         VictimLocation;                                           // 0x0048(0x000C) (BlueprintVisible, BlueprintReadOnly)
	int                                                VictimTeamNum;                                            // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InstigatorId;                                             // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Instigator;                                               // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ECombatEventFriendlyFireType                       FriendlyFireType;                                         // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              GameTimeStamp;                                            // 0x0074(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         HitLocation;                                              // 0x0078(0x000C) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       HitBone;                                                  // 0x0084(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Headshot;                                                 // 0x008C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DowningHit;                                               // 0x008D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FatalHit;                                                 // 0x008E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bResisted;                                                // 0x008F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReduced;                                                 // 0x0090(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0091(0x0017) MISSED OFFSET
};

// ScriptStruct Killstreak.AdvancedCombatSummary
// 0x0020
struct FAdvancedCombatSummary
{
	class APawn*                                       DamageInstigatorPawn;                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FAdvancedCombatEvent>                CombatEvents;                                             // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.KSEventAssistants
// 0x0010
struct FKSEventAssistants
{
	TArray<class APlayerState*>                        Assistants;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.InventoryRestoreInfo
// 0x0010
struct FInventoryRestoreInfo
{
	struct FGameplayTag                                EquipPoint;                                               // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	class UKSItem*                                     Item;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.RoyaleZoneData
// 0x0014
struct FRoyaleZoneData
{
	float                                              ZoneRadius;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToShrink;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeAfterShrink;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamagePerTick;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageTickPeriod;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.CombatEventItem
// 0x005F (0x0060 - 0x0001)
struct FCombatEventItem : public FReplicatedLogItem
{
	struct FCombatEventInfo                            CombatEvent;                                              // 0x0000(0x0060)
};

// ScriptStruct Killstreak.CombatEventList
// 0x0018 (0x0088 - 0x0070)
struct FCombatEventList : public FSizedArraySerializer
{
	TArray<struct FCombatEventItem>                    Items;                                                    // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.AssistInfo
// 0x0028
struct FAssistInfo
{
	TWeakObjectPtr<class AKSPlayerState>               Assistant;                                                // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageContributed;                                        // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ContributionPercent;                                      // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PointsAwarded;                                            // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AKSPlayerState>               Victim;                                                   // 0x0014(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AKSPlayerState>               DownInstigator;                                           // 0x001C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLethal;                                                  // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AssistEventItem
// 0x0027 (0x0028 - 0x0001)
struct FAssistEventItem : public FReplicatedLogItem
{
	struct FAssistInfo                                 AssistInfo;                                               // 0x0000(0x0028)
};

// ScriptStruct Killstreak.AssistEventList
// 0x0018 (0x0088 - 0x0070)
struct FAssistEventList : public FSizedArraySerializer
{
	TArray<struct FAssistEventItem>                    Items;                                                    // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.ReviveEvent
// 0x0014
struct FReviveEvent
{
	TWeakObjectPtr<class AKSPlayerState>               Reviver;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AKSPlayerState>               Revivee;                                                  // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ExpBonus;                                                 // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ReviveEventItem
// 0x0013 (0x0014 - 0x0001)
struct FReviveEventItem : public FReplicatedLogItem
{
	struct FReviveEvent                                ReviveEvent;                                              // 0x0000(0x0014)
};

// ScriptStruct Killstreak.ReviveEventList
// 0x0018 (0x0088 - 0x0070)
struct FReviveEventList : public FSizedArraySerializer
{
	TArray<struct FReviveEventItem>                    Items;                                                    // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.KSLootRarityTimerPair
// 0x0010
struct FKSLootRarityTimerPair
{
	ELootSiteRarity                                    Rarity;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class UKSTimerComponent*                           Timer;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Killstreak.AccoladeEventEntry
// 0x0070
struct FAccoladeEventEntry
{
	TWeakObjectPtr<class AKSPlayerState>               RelevantPlayer;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAccoladeDisplayInfo                        AccoladeDisplayInfo;                                      // 0x0008(0x0060)
	unsigned char                                      IgnoreRelevantPlayerId;                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AccoladeEventItem
// 0x006F (0x0070 - 0x0001)
struct FAccoladeEventItem : public FReplicatedLogItem
{
	struct FAccoladeEventEntry                         AccoladeEventEntry;                                       // 0x0000(0x0070)
};

// ScriptStruct Killstreak.AccoladeEventList
// 0x0018 (0x0088 - 0x0070)
struct FAccoladeEventList : public FSizedArraySerializer
{
	TArray<struct FAccoladeEventItem>                  Items;                                                    // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPersistentMinPlayerData
// 0x0024 (0x0030 - 0x000C)
struct FKSPersistentMinPlayerData : public FFastArraySerializerItem
{
	int                                                EnginePlayerId;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FSerializedMctsNetId                        NetId;                                                    // 0x0010(0x0008)
	int                                                TeamNum;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.KSPersistentMinPlayerDataContainer
// 0x0158 (0x0260 - 0x0108)
struct FKSPersistentMinPlayerDataContainer : public FFastArraySerializer
{
	TArray<struct FKSPersistentMinPlayerData>          ReplicatedPlayerData;                                     // 0x0108(0x0010) (ZeroConstructor)
	TMap<int, class UKSPersistentPlayerData*>          LocalPlayerDataByEngineId;                                // 0x0118(0x0050) (ZeroConstructor, Transient)
	TMap<struct FSerializedMctsNetId, class UKSPersistentPlayerData*> LocalPlayerDataByNetId;                                   // 0x0168(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x50];                                      // 0x01B8(0x0050) UNKNOWN PROPERTY: SetProperty Killstreak.KSPersistentMinPlayerDataContainer.AllLocalPlayerData
	unsigned char                                      UnknownData01[0x50];                                      // 0x0208(0x0050) UNKNOWN PROPERTY: SetProperty Killstreak.KSPersistentMinPlayerDataContainer.KnownDeadEnginePlayerIds
	unsigned char                                      UnknownData02[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.DisplayInfo
// 0x0088
struct FDisplayInfo
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty Killstreak.DisplayInfo.DisplayWidgetMap
	int                                                UniqueId;                                                 // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              CreatingPlayer;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AssociatedActor;                                          // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AssociatedObject;                                         // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultLocation;                                          // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lifespan;                                                 // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x0080(0x0008)
};

// ScriptStruct Killstreak.ReplicatedRoundInfo
// 0x000C
struct FReplicatedRoundInfo
{
	struct FName                                       RoundState;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      RoundNumber;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
};

// ScriptStruct Killstreak.RoundResult
// 0x0020
struct FRoundResult
{
	unsigned char                                      RoundNumber;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AKSTeamState*                                WinningTeam;                                              // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WinnerScore;                                              // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WinByElimination;                                         // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LastTriggeredRound;                                       // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AKSObjectiveBase*                            ObjectiveChosen;                                          // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSTeamCashPair
// 0x0008
struct FKSTeamCashPair
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.SettingConfigPair
// 0x0020
struct FSettingConfigPair
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.KSGlobalShotInfo
// 0x0018
struct FKSGlobalShotInfo
{
	class APlayerState*                                FiringPlayer;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     FiringLocation;                                           // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              AudibleRange;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSGrenadeTargetingStateValidator
// 0x0004
struct FKSGrenadeTargetingStateValidator
{
	unsigned char                                      bAnyWeaponState;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAnyCharacterAimMode;                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew                                    WeaponState;                                              // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EKSCharacterAimMode                                CharacterAimMode;                                         // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PlayerHealthMeterState
// 0x0018
struct FPlayerHealthMeterState
{
	int                                                HealthValue;                                              // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxHealth;                                                // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxHealthBonus;                                           // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmorValue;                                               // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OverhealValue;                                            // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsDowned;                                                 // 0x0014(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSWidgetInfoParams
// 0x0048
struct FKSWidgetInfoParams
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty Killstreak.KSWidgetInfoParams.Widget
	unsigned char                                      bPreloadWidget;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     WidgetParentTarget;                                       // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class AKSWidgetInfoActor*                          InfoActor;                                                // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.InMatchStoreItem
// 0x0010
struct FInMatchStoreItem
{
	class UKSItem*                                     RepresentedItem;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Price;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.InMatchPurchaseInfo
// 0x0020
struct FInMatchPurchaseInfo
{
	struct FInMatchStoreItem                           RequestedItem;                                            // 0x0000(0x0010) (BlueprintVisible)
	struct FGameplayTag                                Slot;                                                     // 0x0010(0x0008) (BlueprintVisible)
	class UObject*                                     PurchasedItem;                                            // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.InMatchStoreFilterInfo
// 0x0030
struct FInMatchStoreFilterInfo
{
	unsigned char                                      LookingForAttachment;                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AKSWeapon*                                   WeaponToAttach;                                           // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AttachmentIndex;                                          // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSItem*                                     ItemAlreadyInSlot;                                        // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                SlotTag;                                                  // 0x0020(0x0008) (BlueprintVisible)
	struct FName                                       ItemCategory;                                             // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSInteractionBlocker
// 0x0008
struct FKSInteractionBlocker
{
	struct FName                                       BlockReason;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.LootSiteState
// 0x0002
struct FLootSiteState
{
	unsigned char                                      bActive;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooted;                                                  // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.LootSiteDropInfo
// 0x0030
struct FLootSiteDropInfo
{
	class UKSItem*                                     Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment*                         Attachment1;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment*                         Attachment2;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment*                         Attachment3;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToSkipAttachment;                                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRandomizeAttachments;                                    // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.SkinnableAudioEvent
// 0x0010
struct FSkinnableAudioEvent
{
	struct FName                                       SoundRowName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DefaultSound;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.JobSelectionEntry
// 0x001C (0x0028 - 0x000C)
struct FJobSelectionEntry : public FFastArraySerializerItem
{
	int                                                JobId;                                                    // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AKSPlayerState>               CurrentPlayerState;                                       // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSerializedMctsNetId                        NetId;                                                    // 0x0018(0x0008)
	int                                                SkinId;                                                   // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSelectedByBot;                                           // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	EJobSelectionState                                 SelectionState;                                           // 0x0025(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.JobSelectionList
// 0x0018 (0x0120 - 0x0108)
struct FJobSelectionList : public FFastArraySerializer
{
	TArray<struct FJobSelectionEntry>                  EntryMap;                                                 // 0x0108(0x0010) (ZeroConstructor)
	class UKSJobSelectionComponent*                    Owner;                                                    // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Killstreak.DeferredViewTargetChangeInfo
// 0x0010
struct FDeferredViewTargetChangeInfo
{
	class AActor*                                      OldTarget;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewTarget;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ClientContext
// 0x0110
struct FClientContext
{
	struct FString                                     BuildVersion;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     EngineVersionCurrent;                                     // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     EngineVersionCompatible;                                  // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     OSVersionLabel;                                           // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     OSSubVersionLabel;                                        // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     OSVersion;                                                // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     CPUBrand;                                                 // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     DeviceMakeAndModel;                                       // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     PrimaryGPUBrand;                                          // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     BuildConfiguration;                                       // 0x0090(0x0010) (ZeroConstructor)
	struct FString                                     BranchName;                                               // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     CompiledWith;                                             // 0x00B0(0x0010) (ZeroConstructor)
	uint64_t                                           AvailablePhysicalMemory;                                  // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           TotalPhysicalMemory;                                      // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           AvailableVirtualMemory;                                   // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           TotalVirtualMemory;                                       // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CPUBenchmarkResults;                                      // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GPUBenchmarkResults;                                      // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResolutionQuality;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ViewDistanceQuality;                                      // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AntiAliasingQuality;                                      // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShadowQuality;                                            // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PostProcessQuality;                                       // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TextureQuality;                                           // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EffectsQuality;                                           // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FoliageQuality;                                           // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShadingQuality;                                           // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ClientStatistics
// 0x0018
struct FClientStatistics
{
	float                                              smoothed;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              average;                                                  // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                SampleCount;                                              // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Killstreak.KickbackPlayback
// 0x0020
struct FKickbackPlayback
{
	float                                              AccumulatedTime;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FInterpCurveVector2D                        KickbackCurve;                                            // 0x0008(0x0018) (ZeroConstructor)
};

// ScriptStruct Killstreak.KSPollData
// 0x0010
struct FKSPollData
{
	int                                                VoterCount;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VotesInFavor;                                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VotesAgainst;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeElapsed;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSPollResults
// 0x0028
struct FKSPollResults
{
	struct FKSPollData                                 PollFinalData;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     PollName;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TeamNum;                                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPollPassed;                                              // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.TeamStats
// 0x0020
struct FTeamStats
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     teamName;                                                 // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                teamScore;                                                // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PlayerMatchStatInfo
// 0x0010
struct FPlayerMatchStatInfo
{
	EPlayerStatType                                    StatType;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StatValue;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StatPlaceTeam;                                            // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StatPlaceAll;                                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PlayerEntryStats
// 0x00A8
struct FPlayerEntryStats
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int64_t                                            netPlayerID;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                TeamNum;                                                  // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSJobItem*                                  PlayerJob;                                                // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPlayerMatchStatInfo                        elimCount;                                                // 0x0030(0x0010) (BlueprintVisible)
	struct FPlayerMatchStatInfo                        downCount;                                                // 0x0040(0x0010) (BlueprintVisible)
	struct FPlayerMatchStatInfo                        deathCount;                                               // 0x0050(0x0010) (BlueprintVisible)
	struct FPlayerMatchStatInfo                        reviveCount;                                              // 0x0060(0x0010) (BlueprintVisible)
	struct FPlayerMatchStatInfo                        DamageDealt;                                              // 0x0070(0x0010) (BlueprintVisible)
	struct FPlayerMatchStatInfo                        hackCount;                                                // 0x0080(0x0010) (BlueprintVisible)
	struct FPlayerMatchStatInfo                        dehackCount;                                              // 0x0090(0x0010) (BlueprintVisible)
	int                                                pointCount;                                               // 0x00A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              timePlayed;                                               // 0x00A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ScoreboardStats
// 0x0040
struct FScoreboardStats
{
	int                                                userPlayerID;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                winTeamNum;                                               // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     mapName;                                                  // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                matchInstanceId;                                          // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GameMode;                                                 // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FTeamStats>                          teams;                                                    // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayerEntryStats>                   playerStats;                                              // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Killstreak.PlayerRewardsSummaryReplicated
// 0x0030
struct FPlayerRewardsSummaryReplicated
{
	TArray<int64_t>                                    ActivityKeys;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        ActivityValues;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FPlayerMatchStatInfo>                BestStats;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.TrackedPlayers
// 0x0018
struct FTrackedPlayers
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              PlayerState;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.LobbySkeletalPropInfo
// 0x0070
struct FLobbySkeletalPropInfo
{
	unsigned char                                      Enable;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachPoint;                                              // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AnimInstance;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TargetLOD;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FTransform                                  TransformOffset;                                          // 0x0030(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                WeaponAnimIndex;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
};

// ScriptStruct Killstreak.LobbyStaticPropInfo
// 0x0050
struct FLobbyStaticPropInfo
{
	unsigned char                                      Enable;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachPoint;                                              // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  TransformOffset;                                          // 0x0020(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.LocationRecord
// 0x000C
struct FLocationRecord
{
	float                                              X;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ObjectiveRecord
// 0x0010
struct FObjectiveRecord
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             Location;                                                 // 0x0004(0x000C)
};

// ScriptStruct Killstreak.MinimapData
// 0x0020
struct FMinimapData
{
	struct FLocationRecord                             northwest_corner;                                         // 0x0000(0x000C)
	float                                              Width;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FObjectiveRecord>                    objectives;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.PlayerRecord
// 0x00B0
struct FPlayerRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hz_player_id;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                team_id;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                class_id;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_type;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                portal_id;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                input_type;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                platform_type;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ranking_id;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ranking;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ranking_variance;                                         // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                task_force_id;                                            // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                group_id;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                party_id;                                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                party_size;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skin_id;                                                  // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                account_level;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                class_level;                                              // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              time_played;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              time_alive;                                               // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kills_single;                                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kills_double;                                             // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kills_triple;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kills_quadra;                                             // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kills_penta;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                deaths;                                                   // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                executes;                                                 // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                downs;                                                    // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Revives;                                                  // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                shots_fired;                                              // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                shots_hit;                                                // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                head_shots;                                               // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_damage;                                       // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_self_damage;                                  // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_friendly_damage;                              // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_reverse_friendly_damage;                      // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                gadget_uses;                                              // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ability_uses;                                             // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_earned;                                             // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_spent;                                              // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.JobSelectionRecord
// 0x0048
struct FJobSelectionRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hz_player_id;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                round_id;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                class_id;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Timestamp;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                skin_id;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                primary_weapon_1_wrap_id;                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                primary_weapon_2_wrap_id;                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                secondary_weapon_wrap_id;                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                melee_weapon_wrap_id;                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        emotes_and_sprays;                                        // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.ClientContextRecord
// 0x0148
struct FClientContextRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hz_player_id;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               strings;                                                  // 0x0008(0x0050) (ZeroConstructor)
	TMap<struct FString, uint64_t>                     uint64_values;                                            // 0x0058(0x0050) (ZeroConstructor)
	TMap<struct FString, float>                        float_values;                                             // 0x00A8(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          int32_values;                                             // 0x00F8(0x0050) (ZeroConstructor)
};

// ScriptStruct Killstreak.TeamSideRecord
// 0x000C
struct FTeamSideRecord
{
	int                                                team_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                side_id;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_role;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.MirrorMatchupRecord
// 0x0014
struct FMirrorMatchupRecord
{
	int                                                hz_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ue_player_id;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_id;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                class_id;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                has_mirror_match;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PlayerStartingCashRecord
// 0x0008
struct FPlayerStartingCashRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PurchasedItemEventRecord
// 0x000C
struct FPurchasedItemEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                cost;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.CashCollectionEventRecord
// 0x0028
struct FCashCollectionEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             Location;                                                 // 0x0004(0x000C)
	struct FString                                     Timestamp;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                Amount;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.DownEventRecord
// 0x0038
struct FDownEventRecord
{
	int                                                instigator_ue_player_id;                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             instigator_location;                                      // 0x0004(0x000C)
	int                                                victim_ue_player_id;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             victim_location;                                          // 0x0014(0x000C)
	int                                                weapon_id;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Timestamp;                                                // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.ExecuteEventRecord
// 0x0038
struct FExecuteEventRecord
{
	int                                                instigator_ue_player_id;                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             instigator_location;                                      // 0x0004(0x000C)
	int                                                victim_ue_player_id;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             victim_location;                                          // 0x0014(0x000C)
	int                                                weapon_id;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Timestamp;                                                // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.ReviveEventRecord
// 0x0030
struct FReviveEventRecord
{
	int                                                reviver_ue_player_id;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             reviver_location;                                         // 0x0004(0x000C)
	int                                                revivee_ue_player_id;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             revivee_location;                                         // 0x0014(0x000C)
	struct FString                                     Timestamp;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.WeaponUseSummaryRecord
// 0x0034
struct FWeaponUseSummaryRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_id;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                shots_fired;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                shots_hit;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                head_shots;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_damage;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_self_damage;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_friendly_damage;                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_reverse_friendly_damage;                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatingDamage;                                       // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingSelfDamage;                                   // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingFriendlyDamage;                               // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingReverseFriendlyDamage;                        // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Killstreak.AbilityUseEventRecord
// 0x0050
struct FAbilityUseEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             Location;                                                 // 0x0004(0x000C)
	int                                                ability_id;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Timestamp;                                                // 0x0018(0x0010) (ZeroConstructor)
	int                                                accumulated_damage;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_self_damage;                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_friendly_damage;                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_reverse_friendly_damage;                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatingDamage;                                       // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingSelfDamage;                                   // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingFriendlyDamage;                               // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingReverseFriendlyDamage;                        // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FireGameTime;                                             // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Killstreak.RotationRecord
// 0x0008
struct FRotationRecord
{
	float                                              Yaw;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.RadialMenuItemUseEventRecord
// 0x0070
struct FRadialMenuItemUseEventRecord
{
	int                                                hz_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ue_player_id;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                round_id;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     cosmetic_type;                                            // 0x0010(0x0010) (ZeroConstructor)
	int                                                item_id;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     item_name;                                                // 0x0028(0x0010) (ZeroConstructor)
	struct FLocationRecord                             Location;                                                 // 0x0038(0x000C)
	struct FRotationRecord                             Rotation;                                                 // 0x0044(0x0008)
	struct FString                                     game_phase;                                               // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     Timestamp;                                                // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.CommunicationUseEventRecord
// 0x0070
struct FCommunicationUseEventRecord
{
	int                                                hz_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ue_player_id;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                round_id;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     cosmetic_type;                                            // 0x0010(0x0010) (ZeroConstructor)
	int                                                item_id;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     item_name;                                                // 0x0028(0x0010) (ZeroConstructor)
	struct FLocationRecord                             Location;                                                 // 0x0038(0x000C)
	struct FRotationRecord                             Rotation;                                                 // 0x0044(0x0008)
	struct FString                                     game_phase;                                               // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     Timestamp;                                                // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.GadgetUseEventRecord
// 0x0050
struct FGadgetUseEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             Location;                                                 // 0x0004(0x000C)
	int                                                gadget_id;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Timestamp;                                                // 0x0018(0x0010) (ZeroConstructor)
	int                                                accumulated_damage;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_self_damage;                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_friendly_damage;                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_reverse_friendly_damage;                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatingDamage;                                       // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingSelfDamage;                                   // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingFriendlyDamage;                               // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingReverseFriendlyDamage;                        // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FireGameTime;                                             // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Killstreak.EliminationStreakEventRecord
// 0x0008
struct FEliminationStreakEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.MultipleKillEventRecord
// 0x0008
struct FMultipleKillEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.BotStartingDifficultyRecord
// 0x0008
struct FBotStartingDifficultyRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                difficulty_index;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.BotDifficultyChangeEventRecord
// 0x0018
struct FBotDifficultyChangeEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                difficulty_index;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Timestamp;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.ClientStatisticsRecord
// 0x0014
struct FClientStatisticsRecord
{
	float                                              smoothed;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              average;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                sample_count;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.OrientationEventRecord
// 0x0088
struct FOrientationEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             Location;                                                 // 0x0004(0x000C)
	struct FRotationRecord                             Rotation;                                                 // 0x0010(0x0008)
	int                                                movement_state;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Timestamp;                                                // 0x0020(0x0010) (ZeroConstructor)
	int                                                ping_ms;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FClientStatisticsRecord> client_statistics;                                        // 0x0038(0x0050) (ZeroConstructor)
};

// ScriptStruct Killstreak.PollEndEventRecord
// 0x0060
struct FPollEndEventRecord
{
	int                                                round_id;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      poll_passed;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FString                                     poll_name;                                                // 0x0008(0x0010) (ZeroConstructor)
	int                                                team_id;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        hz_player_ids_for;                                        // 0x0020(0x0010) (ZeroConstructor)
	TArray<int>                                        hz_player_ids_against;                                    // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     game_phase;                                               // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     Timestamp;                                                // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.RoundEventRecord
// 0x0168
struct FRoundEventRecord
{
	int                                                round_id;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     round_start_time;                                         // 0x0008(0x0010) (ZeroConstructor)
	int                                                Duration;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTeamSideRecord>                     team_sides;                                               // 0x0020(0x0010) (ZeroConstructor)
	int                                                winning_team;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     win_condition;                                            // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FMirrorMatchupRecord>                mirror_matchup_records;                                   // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FPlayerStartingCashRecord>           round_starting_cash;                                      // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FPurchasedItemEventRecord>           purchased_item_events;                                    // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FCashCollectionEventRecord>          cash_collection_events;                                   // 0x0078(0x0010) (ZeroConstructor)
	TArray<struct FDownEventRecord>                    down_events;                                              // 0x0088(0x0010) (ZeroConstructor)
	TArray<struct FExecuteEventRecord>                 execute_events;                                           // 0x0098(0x0010) (ZeroConstructor)
	TArray<struct FReviveEventRecord>                  revive_events;                                            // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FWeaponUseSummaryRecord>             weapon_use_summaries;                                     // 0x00B8(0x0010) (ZeroConstructor)
	TArray<struct FAbilityUseEventRecord>              ability_use_events;                                       // 0x00C8(0x0010) (ZeroConstructor)
	TArray<struct FRadialMenuItemUseEventRecord>       radial_menu_item_use_events;                              // 0x00D8(0x0010) (ZeroConstructor)
	TArray<struct FCommunicationUseEventRecord>        communication_use_events;                                 // 0x00E8(0x0010) (ZeroConstructor)
	TArray<struct FGadgetUseEventRecord>               gadget_use_events;                                        // 0x00F8(0x0010) (ZeroConstructor)
	TArray<struct FEliminationStreakEventRecord>       elimination_streak_events;                                // 0x0108(0x0010) (ZeroConstructor)
	TArray<struct FMultipleKillEventRecord>            multiple_kill_events;                                     // 0x0118(0x0010) (ZeroConstructor)
	TArray<struct FBotStartingDifficultyRecord>        round_starting_bot_difficulties;                          // 0x0128(0x0010) (ZeroConstructor)
	TArray<struct FBotDifficultyChangeEventRecord>     bot_difficulty_change_events;                             // 0x0138(0x0010) (ZeroConstructor)
	TArray<struct FOrientationEventRecord>             orientation_events;                                       // 0x0148(0x0010) (ZeroConstructor)
	TArray<struct FPollEndEventRecord>                 poll_end_events;                                          // 0x0158(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.PlayerConnectionEventRecord
// 0x0020
struct FPlayerConnectionEventRecord
{
	int                                                hz_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ue_player_id;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                round_id;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             is_connected;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Timestamp;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.ObjectiveCaptureEventRecord
// 0x0060
struct FObjectiveCaptureEventRecord
{
	int                                                hz_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ue_player_id;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_id;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     mode_name;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                round_id;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                objective_type;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     capture_action;                                           // 0x0028(0x0010) (ZeroConstructor)
	struct FLocationRecord                             Location;                                                 // 0x0038(0x000C)
	struct FRotationRecord                             Rotation;                                                 // 0x0044(0x0008)
	struct FString                                     Timestamp;                                                // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.MatchRecord
// 0x0140
struct FMatchRecord
{
	int                                                version_major;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                version_minor;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                instance_id;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                match_id;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     map_name;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     mode_name;                                                // 0x0020(0x0010) (ZeroConstructor)
	int                                                map_game_id;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                queue_id;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_size;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                winning_team;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     match_start_time;                                         // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     match_end_time;                                           // 0x0050(0x0010) (ZeroConstructor)
	int                                                Duration;                                                 // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_rounds;                                             // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_players;                                            // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_bots;                                               // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_earned;                                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_spent;                                              // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ended_in_surrender;                                       // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FMinimapData                                Minimap;                                                  // 0x0080(0x0020)
	TArray<struct FPlayerRecord>                       Players;                                                  // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FJobSelectionRecord>                 job_selection_records;                                    // 0x00B0(0x0010) (ZeroConstructor)
	TMap<int, struct FClientContextRecord>             client_context_records;                                   // 0x00C0(0x0050) (ZeroConstructor)
	TArray<struct FRoundEventRecord>                   rounds;                                                   // 0x0110(0x0010) (ZeroConstructor)
	TArray<struct FPlayerConnectionEventRecord>        player_connections;                                       // 0x0120(0x0010) (ZeroConstructor)
	TArray<struct FObjectiveCaptureEventRecord>        objective_capture_events;                                 // 0x0130(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.StateMachineModEntry
// 0x0010
struct FStateMachineModEntry
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSModInst_Activated*                        ModInst;                                                  // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Killstreak.StateMachineObjectEntry
// 0x0018
struct FStateMachineObjectEntry
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Entry;                                                    // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int64_t                                            IntEntry;                                                 // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSTargeterConfig
// 0x000C
struct FKSTargeterConfig
{
	float                                              MaxTargetingRange;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetingConeHalfAngle;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseNearestTarget;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRequiresVisibility;                                      // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.DownedEnemyPingHandle
// 0x0018
struct FDownedEnemyPingHandle
{
	TWeakObjectPtr<class AKSPlayerState>               DownedEnemyPlayer;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                PingTimerHandle;                                          // 0x0008(0x0008)
	int                                                PingsSent;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSModZoneModInfo
// 0x0010
struct FKSModZoneModInfo
{
	class UKSPlayerMod*                                PlayerMod;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUnique;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bRemove;                                                  // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bRemoveAll;                                               // 0x000A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.AccoladeMultiDownTracker
// 0x0068
struct FAccoladeMultiDownTracker
{
	int                                                DownReqAmount;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAccoladeDisplayInfo                        AccoladeReward;                                           // 0x0008(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Killstreak.AccoladePlayerTrackers
// 0x0020
struct FAccoladePlayerTrackers
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              PlayerState;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                downCount;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                elimCount;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeLeft;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AccoladeMultiElimTracker
// 0x0068
struct FAccoladeMultiElimTracker
{
	int                                                ElimReqAmount;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAccoladeDisplayInfo                        AccoladeReward;                                           // 0x0008(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Killstreak.TrackPlayerElim
// 0x0008
struct FTrackPlayerElim
{
	int                                                PlayerInstigatorId;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerVictimId;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ContextualPingTypesRow
// 0x0040 (0x0048 - 0x0008)
struct FContextualPingTypesRow : public FTableRowBase
{
	EPingType                                          PingType;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PingColor;                                                // 0x000C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x001C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.ContextualPingTypesRow.PingIcon
};

// ScriptStruct Killstreak.PingInfo
// 0x0050
struct FPingInfo
{
	EPingType                                          PingType;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPingMessage                                       PingMessage;                                              // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly)
	struct FVector_NetQuantize                         PingIconOffset;                                           // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly)
	class AActor*                                      PingedActor;                                              // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              PingingPlayer;                                            // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class AKSPlayerState*>                      AcknowledgedPlayers;                                      // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FTimerHandle                                ExpirationHandle;                                         // 0x0040(0x0008) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                PingId;                                                   // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PingInfoChangeItem
// 0x0054 (0x0060 - 0x000C)
struct FPingInfoChangeItem : public FFastArraySerializerItem
{
	struct FPingInfo                                   PingInfo;                                                 // 0x0010(0x0050)
};

// ScriptStruct Killstreak.PingInfoChangeList
// 0x0018 (0x0120 - 0x0108)
struct FPingInfoChangeList : public FFastArraySerializer
{
	TArray<struct FPingInfoChangeItem>                 Items;                                                    // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInputActionNameTypePair
// 0x000C
struct FKSInputActionNameTypePair
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EKSInputActionType                                 Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSInputActionTiedNames
// 0x0018
struct FKSInputActionTiedNames
{
	struct FName                                       Press;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Hold;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Repeat;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSCustomInputActionKey
// 0x0014
struct FKSCustomInputActionKey
{
	int                                                propId;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KeyboardName;                                             // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GamepadName;                                              // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.KSCustomInputAxisKey
// 0x001C
struct FKSCustomInputAxisKey
{
	int                                                propId;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KeyboardName;                                             // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KeyboardScale;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GamepadName;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GamepadScale;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.KSInputActionKeyMapping
// 0x0030
struct FKSInputActionKeyMapping
{
	struct FInputActionKeyMapping                      Mapping;                                                  // 0x0000(0x0028)
	EKSInputActionType                                 Type;                                                     // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSCustomInputActionKeyMappings
// 0x0030
struct FKSCustomInputActionKeyMappings
{
	TArray<struct FKSInputActionKeyMapping>            KBM_Mappings;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FKSInputActionKeyMapping>            GP_Mappings;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FKSInputActionKeyMapping>            Touch_Mappings;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.KSInputAxisKeyMappings
// 0x0010
struct FKSInputAxisKeyMappings
{
	TArray<struct FInputAxisKeyMapping>                InputAxisKeyMappings;                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.KSCustomInputAxisKeyMappings
// 0x00F0
struct FKSCustomInputAxisKeyMappings
{
	TMap<float, struct FKSInputAxisKeyMappings>        KBM_Mappings;                                             // 0x0000(0x0050) (ZeroConstructor)
	TMap<float, struct FKSInputAxisKeyMappings>        GP_Mappings;                                              // 0x0050(0x0050) (ZeroConstructor)
	TMap<float, struct FKSInputAxisKeyMappings>        Touch_Mappings;                                           // 0x00A0(0x0050) (ZeroConstructor)
};

// ScriptStruct Killstreak.ShopManifest
// 0x0018 (0x0120 - 0x0108)
struct FShopManifest : public FFastArraySerializer
{
	TArray<struct FShopItem>                           Manifest;                                                 // 0x0108(0x0010) (ZeroConstructor)
	class AKSPlayerShop*                               Owner;                                                    // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Killstreak.PlayerShopTransaction
// 0x0008
struct FPlayerShopTransaction
{
	EPlayerShopTransactionType                         TransactionType;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EShopItemType                                      ItemType;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TransactionRequestId;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSScoreChangeEvent
// 0x0030
struct FKSScoreChangeEvent
{
	int                                                Delta;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Reason;                                                   // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBonus;                                                   // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AKSPlayerState>               Instigator;                                               // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSClientShotInfo
// 0x0018
struct FKSClientShotInfo
{
	struct FVector                                     FiringLocation;                                           // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UniqueId;                                                 // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKSPingType                                        PingType;                                                 // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSScoreChangeItem
// 0x002F (0x0030 - 0x0001)
struct FKSScoreChangeItem : public FReplicatedLogItem
{
	struct FKSScoreChangeEvent                         ScoreChange;                                              // 0x0000(0x0030)
};

// ScriptStruct Killstreak.KSScoreChangeList
// 0x0020 (0x0090 - 0x0070)
struct FKSScoreChangeList : public FSizedArraySerializer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	TArray<struct FKSScoreChangeItem>                  Items;                                                    // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.KSCashChangeList
// 0x0000 (0x0090 - 0x0090)
struct FKSCashChangeList : public FKSScoreChangeList
{

};

// ScriptStruct Killstreak.ProjectileWidgetInfo
// 0x0030
struct FProjectileWidgetInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Killstreak.ProjectileExplosionInfo
// 0x001C
struct FProjectileExplosionInfo
{
	EProjectileExplosionType                           ExplosionType;                                            // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         ImpactPoint;                                              // 0x0004(0x000C) (BlueprintVisible)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x0010(0x000C) (BlueprintVisible)
};

// ScriptStruct Killstreak.LaggedProjectileHit
// 0x0094
struct FLaggedProjectileHit
{
	struct FHitResult                                  HitResult;                                                // 0x0000(0x0088) (IsPlainOldData)
	float                                              ClientHitTimeStamp;                                       // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              AdditionalPredictionTime;                                 // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	EProjectilePredictionType                          PredictionType;                                           // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSSpreadTransform
// 0x0060
struct FKSSpreadTransform
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USphereComponent*                            Sphere;                                                   // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMeshComponent*                              Mesh;                                                     // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CurrentHealth;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSSpreadEntry
// 0x0064 (0x0070 - 0x000C)
struct FKSSpreadEntry : public FFastArraySerializerItem
{
	struct FKSSpreadTransform                          Entry;                                                    // 0x0010(0x0060)
};

// ScriptStruct Killstreak.KSSpreadList
// 0x0018 (0x0120 - 0x0108)
struct FKSSpreadList : public FFastArraySerializer
{
	TArray<struct FKSSpreadEntry>                      List;                                                     // 0x0108(0x0010) (ZeroConstructor)
	class AKSProjectile_GrenadeSpread*                 Owner;                                                    // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSActorProximityInfo
// 0x0018
struct FKSActorProximityInfo
{
	unsigned char                                      bInLOS;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastTimeUpdated;                                          // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UPrimitiveComponent*>                 OverlappedComponents;                                     // 0x0008(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.KSProjectileClusterSegment
// 0x0020
struct FKSProjectileClusterSegment
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset*                              WeaponAsset;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSProximityFilter
// 0x0020
struct FKSProximityFilter
{
	TArray<class UClass*>                              ValidActorClasses;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCountAllies;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCountEnemies;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCountUnaffiliated;                                       // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckLOS;                                                // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LOSTraceStartOffset;                                      // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PunishmentConfigEntry
// 0x0008
struct FPunishmentConfigEntry
{
	int                                                PunishmentLootTableId;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PunishmentQuantity;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.BadBehaviorConfigEntry
// 0x0020
struct FBadBehaviorConfigEntry
{
	EBadBehaviorType                                   BehaviorType;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TimeRequired;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsRepeatable;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsImmediate;                                              // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AppliesDeserterPenalty;                                   // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPunishmentConfigEntry>              Punishments;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Killstreak.EndMatchPunishConfigEntry
// 0x0018
struct FEndMatchPunishConfigEntry
{
	int                                                PointsRequired;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PassThresholdOnDecrease;                                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPunishmentConfigEntry>              Punishments;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Killstreak.PlayerPunishmentTracker
// 0x0028
struct FPlayerPunishmentTracker
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerDamageInfo
// 0x0030
struct FPlayerDamageInfo
{
	int                                                InstigatorPlayerId;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     InstigatorPlayerName;                                     // 0x0008(0x0010) (ZeroConstructor)
	int                                                VictimPlayerId;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     VictimPlayerName;                                         // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.PlayerRewardsSummary
// 0x0060
struct FPlayerRewardsSummary
{
	TMap<int64_t, int>                                 ActivityRewards;                                          // 0x0000(0x0050) (BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayerMatchStatInfo>                BestStats;                                                // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Killstreak.SafeZoneParams
// 0x0010
struct FSafeZoneParams
{
	struct FVector                                     CenterPosition;                                           // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSPlayerEventRecord
// 0x0018
struct FKSPlayerEventRecord
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayerSide;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EventLocation;                                            // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSSpawnSelectorTierRule
// 0x0018
struct FKSSpawnSelectorTierRule
{
	class UClass*                                      KSSpawnRuleClass;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UKSSpawnRule*                                KSSpawnRule;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.KSSpawnSelectorTier
// 0x0018
struct FKSSpawnSelectorTier
{
	float                                              Tolerance;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      AllowsNegativeScores;                                     // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FKSSpawnSelectorTierRule>            KSSpawnSelectorTierRules;                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Killstreak.EquipPointDefinition
// 0x0060
struct FEquipPointDefinition
{
	struct FGameplayTag                                EquipPoint;                                               // 0x0000(0x0008) (Edit)
	struct FGameplayTagQuery                           WeaponTypeQuery;                                          // 0x0008(0x0048) (Edit)
	unsigned char                                      bCanSwapToManually;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       HandlerSubType;                                           // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PlayerTeamTracker
// 0x0018
struct FPlayerTeamTracker
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayerTeamNum;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PlayerElimIds;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.KSRiderSeatPair
// 0x0010
struct FKSRiderSeatPair
{
	class AKSCharacter*                                Rider;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSVehicleSeatComponent*                     Seat;                                                     // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Killstreak.KSVehicleDestructionStage
// 0x0060
struct FKSVehicleDestructionStage
{
	class UParticleSystem*                             StageVFX;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StageSFX;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StageEcho;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  StageEffectTransform;                                     // 0x0020(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              StageDeteriorationRate;                                   // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
};

// ScriptStruct Killstreak.LoadedWeaponAttachmentAnimationData
// 0x00B0
struct FLoadedWeaponAttachmentAnimationData
{
	class USkeletalMesh*                               WeaponAttachmentMesh;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WeaponAttachmentSequence;                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player3PHolsterMontage;                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player3PRetrieveMontage;                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player3PFireMontage;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player3PReloadMontage;                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        Player3PStandingAimOffset;                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        Player3PCrouchedAimOffset;                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Player3PStandingBlendSpace;                               // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Player3PCrouchedBlendSpace;                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Player3PStandingIdleSequence;                             // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Player3PCrouchedIdleSequence;                             // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player1PFireMontage;                                      // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Player1PStandingBlendSpace;                               // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Player1PCrouchedBlendSpace;                               // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        Player1PStandingAimOffset;                                // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player1PRetrieveMontage;                                  // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player1PReloadMontage;                                    // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Player1PCameraShake;                                      // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Player1PADSCameraShake;                                   // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Player1PAdditiveStandGunPose;                             // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Player1PAdditiveCrouchGunPose;                            // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.WeaponAttachmentAnimationData
// 0x03A0 (0x03A8 - 0x0008)
struct FWeaponAttachmentAnimationData : public FTableRowBase
{
	unsigned char                                      bUseDefaultIfNone;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0009(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.WeaponAsset
	unsigned char                                      UnknownData01[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.WeaponAttachmentMesh
	unsigned char                                      UnknownData02[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.WeaponAttachmentSequence
	unsigned char                                      UnknownData03[0x28];                                      // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PHolsterMontage
	unsigned char                                      UnknownData04[0x28];                                      // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PRetrieveMontage
	unsigned char                                      UnknownData05[0x28];                                      // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PFireMontage
	unsigned char                                      UnknownData06[0x28];                                      // 0x0100(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PReloadMontage
	unsigned char                                      UnknownData07[0x28];                                      // 0x0128(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PStandingAimOffset
	unsigned char                                      UnknownData08[0x28];                                      // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PCrouchedAimOffset
	unsigned char                                      UnknownData09[0x28];                                      // 0x0178(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PStandingBlendSpace
	unsigned char                                      UnknownData10[0x28];                                      // 0x01A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PCrouchedBlendSpace
	unsigned char                                      UnknownData11[0x28];                                      // 0x01C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PStandingIdleSequence
	unsigned char                                      UnknownData12[0x28];                                      // 0x01F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PCrouchedIdleSequence
	unsigned char                                      UnknownData13[0x28];                                      // 0x0218(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PFireMontage
	unsigned char                                      UnknownData14[0x28];                                      // 0x0240(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PStandingBlendSpace
	unsigned char                                      UnknownData15[0x28];                                      // 0x0268(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PCrouchedBlendSpace
	unsigned char                                      UnknownData16[0x28];                                      // 0x0290(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PStandingAimOffset
	unsigned char                                      UnknownData17[0x28];                                      // 0x02B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PRetrieveMontage
	unsigned char                                      UnknownData18[0x28];                                      // 0x02E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PReloadMontage
	unsigned char                                      UnknownData19[0x28];                                      // 0x0308(0x0028) UNKNOWN PROPERTY: SoftClassProperty Killstreak.WeaponAttachmentAnimationData.Player1PCameraShake
	unsigned char                                      UnknownData20[0x28];                                      // 0x0330(0x0028) UNKNOWN PROPERTY: SoftClassProperty Killstreak.WeaponAttachmentAnimationData.Player1PADSCameraShake
	unsigned char                                      UnknownData21[0x28];                                      // 0x0358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PAdditiveStandGunPose
	unsigned char                                      UnknownData22[0x28];                                      // 0x0380(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PAdditiveCrouchGunPose
};

// ScriptStruct Killstreak.KSWayPointLink
// 0x0020
struct FKSWayPointLink
{
	TArray<class AKSWayPoint*>                         NextWayPoints;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class AKSWayPoint*>                         PrevWayPoints;                                            // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Killstreak.HitValidationRecoveryInfo
// 0x0060
struct FHitValidationRecoveryInfo
{
	TArray<struct FHitResult>                          Hits;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FAimData                                    AimData;                                                  // 0x0010(0x0050)
};

// ScriptStruct Killstreak.WeaponLeadingInfo
// 0x0010
struct FWeaponLeadingInfo
{
	float                                              fMaxWeaponLeading;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fWeaponLeadingSmoothingFactor;                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fWeaponLeadingInterpSpeed;                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fWeaponLeadingRecoverInterpSpeed;                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.AncillaryWeaponMeshInfo
// 0x0018
struct FAncillaryWeaponMeshInfo
{
	class USkeletalMesh*                               Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DefaultAttachSocket;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DefaultDetachSocket;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.CongregatedShotgunHit
// 0x00B0
struct FCongregatedShotgunHit
{
	struct FHitResult                                  FirstHit;                                                 // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TimesHit;                                                 // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedDamage;                                        // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TimesHitHead;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HeadshotRegistered;                                       // 0x009C(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BackupBodyBone;                                           // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BackupHeadBone;                                           // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.LoadingScreenImageInfo
// 0x0070
struct FLoadingScreenImageInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.LoadingScreenImageInfo.LoadingScreenImage
	struct FText                                       MapDisplayName;                                           // 0x0028(0x0018) (Edit)
	struct FText                                       MapRegion;                                                // 0x0040(0x0018) (Edit)
	struct FText                                       MapDescription;                                           // 0x0058(0x0018) (Edit)
};

// ScriptStruct Killstreak.TimelineSimulationHandler
// 0x0014
struct FTimelineSimulationHandler
{
	float                                              ServerTimeStamp;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ErrorTolerance;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bLooping : 1;                                             // 0x0008(0x0001) ( BITFIELD: 0101)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0008(0x0001) ( BITFIELD: 0202)
	unsigned char                                      bPlaying : 1;                                             // 0x0008(0x0001) ( BITFIELD: 0404)
	float                                              PlayRate;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ActiveThermalPPComponentInfo
// 0x0010
struct FActiveThermalPPComponentInfo
{
	class UThermalScopePPComponent*                    ThermalPPComponent;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AKSPlayerCameraManager*                      PlayerCameraManager;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AnnouncementData
// 0x0038
struct FAnnouncementData
{
	EAnnouncementType                                  Type;                                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       MessageText;                                              // 0x0008(0x0018) (BlueprintVisible)
	ETeamAlignment                                     TeamAlignment;                                            // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamAlignmentNum;                                         // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FriendlyTeamAlive;                                        // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnemyTeamAlive;                                           // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisplayDuration;                                          // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AttachmentData
// 0x0048
struct FAttachmentData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.AttachmentData.SoftObjectPtr
	struct FGameplayTagContainer                       CachedCompatibleWeaponTypes;                              // 0x0028(0x0020) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Killstreak.AccoladeTrackerTableRow
// 0x0028 (0x0030 - 0x0008)
struct FAccoladeTrackerTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Killstreak.AccoladeTrackerTableRow.AccoladeTrackerObject
};

// ScriptStruct Killstreak.PlayerActivityInstances
// 0x0058
struct FPlayerActivityInstances
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TMap<struct FInventoryId, class UKSActivityInstance*> ActivityInstances;                                        // 0x0008(0x0050) (ZeroConstructor)
};

// ScriptStruct Killstreak.BotNameTableRow
// 0x0000 (0x0008 - 0x0008)
struct FBotNameTableRow : public FTableRowBase
{

};

// ScriptStruct Killstreak.KSInitialLoadoutRow
// 0x0010 (0x0018 - 0x0008)
struct FKSInitialLoadoutRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) UNKNOWN PROPERTY: ArrayProperty Killstreak.KSInitialLoadoutRow.LoadoutItems
};

// ScriptStruct Killstreak.KSAnimInstanceProxy
// 0x0060 (0x0790 - 0x0730)
struct FKSAnimInstanceProxy : public FSkinnedAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0730(0x0060) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAudioEventTableRow
// 0x0008 (0x0010 - 0x0008)
struct FKSAudioEventTableRow : public FTableRowBase
{
	class UAkAudioEvent*                               AkEvent;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ArrayAsMapValue
// 0x0010
struct FArrayAsMapValue
{
	TArray<struct FString>                             StringArray;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Killstreak.KSBotAbilityTableRow
// 0x0038 (0x0040 - 0x0008)
struct FKSBotAbilityTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSBotAbilityTableRow.Ability
	TArray<class UKSBTAction*>                         RequiredActions;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Killstreak.KSBotJobConfig
// 0x0058
struct FKSBotJobConfig
{
	unsigned char                                      bAllowJob;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0001(0x0050) UNKNOWN PROPERTY: MapProperty Killstreak.KSBotJobConfig.AllowedAlternateSkins
};

// ScriptStruct Killstreak.KSBTDifficultyTableRow
// 0x0088 (0x0090 - 0x0008)
struct FKSBTDifficultyTableRow : public FTableRowBase
{
	class UKSBTDifficulty*                             Difficulty;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKSBTDifficultyConfig                       DifficultyModifierConfig;                                 // 0x0010(0x0078) (Edit)
	class UDataTable*                                  ObjectivePriorityTable;                                   // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSBTTargetSelectionTableRow
// 0x0008 (0x0010 - 0x0008)
struct FKSBTTargetSelectionTableRow : public FTableRowBase
{
	class UKSBTTargetSelector*                         TargetSelector;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSInputAction
// 0x00C0
struct FKSInputAction
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInputActionMapping
// 0x0030
struct FKSInputActionMapping
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Killstreak.VOTableRow
// 0x0030 (0x0038 - 0x0008)
struct FVOTableRow : public FTableRowBase
{
	struct FGameplayTag                                VOEvent;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.VOTableRow.AudioEvent
};

// ScriptStruct Killstreak.KSFlashBangRecord
// 0x0008
struct FKSFlashBangRecord
{
	EFlashBangIntensity                                FlashBangIntensity;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.EncounterManagedBotInstance
// 0x0048
struct FEncounterManagedBotInstance
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Killstreak.KSEquipmentCommonDummyStruct
// 0x0001
struct FKSEquipmentCommonDummyStruct
{

};

// ScriptStruct Killstreak.LoadingScreenImageRow
// 0x0088 (0x0090 - 0x0008)
struct FLoadingScreenImageRow : public FTableRowBase
{
	struct FSoftObjectPath                             Map;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.LoadingScreenImageRow.LoadingScreenImage
	struct FText                                       MapDisplayName;                                           // 0x0048(0x0018) (Edit, BlueprintVisible)
	struct FText                                       MapRegion;                                                // 0x0060(0x0018) (Edit, BlueprintVisible)
	struct FText                                       MapDescription;                                           // 0x0078(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Killstreak.LoadingScreenTipTextRow
// 0x0020 (0x0028 - 0x0008)
struct FLoadingScreenTipTextRow : public FTableRowBase
{
	struct FText                                       TipText;                                                  // 0x0008(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      IsStaticTip;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSPlayerProfile
// 0x0008 (0x0028 - 0x0020)
struct FKSPlayerProfile : public FPGame_PlayerProfile
{
	int                                                TeamNumber;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSItemMasterTableRow
// 0x0040 (0x0048 - 0x0008)
struct FKSItemMasterTableRow : public FTableRowBase
{
	struct FString                                     ItemDisplayName;                                          // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                ItemId;                                                   // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x001C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSItemMasterTableRow.KSItemSoftObject
};

// ScriptStruct Killstreak.LootSiteTableRow
// 0x00A8 (0x00B0 - 0x0008)
struct FLootSiteTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.LootSiteTableRow.Item
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.LootSiteTableRow.Attachment1
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.LootSiteTableRow.Attachment2
	unsigned char                                      UnknownData03[0x28];                                      // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.LootSiteTableRow.Attachment3
	float                                              Weight;                                                   // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToSkipAttachment;                                   // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AirElimTracker
// 0x0008
struct FAirElimTracker
{
	int                                                InstigatorId;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                downCount;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PingCacher
// 0x0010
struct FPingCacher
{
	class AKSPlayerState*                              PingingPlayer;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PingId;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.InternalPingInfo
// 0x0010
struct FInternalPingInfo
{
	int                                                PingId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DisplayId;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              CreatingPlayer;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSInputActionKey
// 0x0020
struct FKSInputActionKey
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018)
	EKSInputActionType                                 Type;                                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.BadBehaviorTracker
// 0x000C
struct FBadBehaviorTracker
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Killstreak.RecoilParams2
// 0x0003
struct FRecoilParams2
{

};

// ScriptStruct Killstreak.RecoilInfo2
// 0x0070
struct FRecoilInfo2
{
	float                                              TimeToGo;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeDuration;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RotAmplitude;                                             // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RotFrequency;                                             // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0020(0x000C) MISSED OFFSET
	struct FRecoilParams2                              RotParams;                                                // 0x002C(0x0003) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotOffset;                                                // 0x0030(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LocAmplitude;                                             // 0x003C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocFrequency;                                             // 0x0048(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FRecoilParams2                              LocParams;                                                // 0x0060(0x0003) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocOffset;                                                // 0x0064(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Killstreak.RecoilProfile2
// 0x01C0
struct FRecoilProfile2
{
	struct FRecoilInfo2                                PelvisRecoil;                                             // 0x0000(0x0070) (Edit, BlueprintVisible)
	struct FRecoilInfo2                                SpineRecoil;                                              // 0x0070(0x0070) (Edit, BlueprintVisible)
	struct FRecoilInfo2                                NeckRecoil;                                               // 0x00E0(0x0070) (Edit, BlueprintVisible)
	struct FRecoilInfo2                                HandRecoil;                                               // 0x0150(0x0070) (Edit, BlueprintVisible)
};

// ScriptStruct Killstreak.KSSettingsState
// 0x0004
struct FKSSettingsState
{
	unsigned char                                      bIsGamepadAttached;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsMouseAttached;                                         // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsDockedMode;                                            // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsHandheldMode;                                          // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ContextualPingMessagesRow
// 0x0030 (0x0038 - 0x0008)
struct FContextualPingMessagesRow : public FTableRowBase
{
	EPingMessage                                       PingMessage;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0009(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.ContextualPingMessagesRow.PingMessageIcon
};

// ScriptStruct Killstreak.KSInitialInventoryTableEntry
// 0x0040
struct FKSInitialInventoryTableEntry
{
	struct FGameplayTag                                EquipPoint;                                               // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSInitialInventoryTableEntry.ItemAsset
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty Killstreak.KSInitialInventoryTableEntry.Attachments
};

// ScriptStruct Killstreak.ViewModelInfo
// 0x0010
struct FViewModelInfo
{
	class UKSItem*                                     Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EWeaponStateNew                                    DefaultWeaponState;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AttachmentInfo
// 0x0010
struct FAttachmentInfo
{
	class UKSWeaponAttachment*                         Attachment;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Slot;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.WaveBotTableRow
// 0x0010 (0x0198 - 0x0188)
struct FWaveBotTableRow : public FBotSpawnTableRow
{
	float                                              fSelectionWeight;                                         // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fAutoSpawnCostMultiplier;                                 // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                nMaxInstancesPerWave;                                     // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECharacterBehaviorState                            InitialBehaviorState;                                     // 0x0194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPermanentlyRevealed;                                     // 0x0195(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSAssetOverrideTable_TableRow
// 0x00A0 (0x00A8 - 0x0008)
struct FKSAssetOverrideTable_TableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSAssetOverrideTable_TableRow.WeaponAsset
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSAssetOverrideTable_TableRow.WeaponSpecificOverrideTable
	int                                                TablePriority;                                            // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           SkinTagQuery;                                             // 0x0060(0x0048) (Edit, BlueprintVisible)
};

// ScriptStruct Killstreak.WeaponGraphEdge
// 0x0002
struct FWeaponGraphEdge
{
	EWeaponStateNew                                    OldState;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EWeaponStateNew                                    NewState;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.HitDecalInfo
// 0x0028
struct FHitDecalInfo
{
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Size;                                                     // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumScaling;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumScaling;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumAngle;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumAngle;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.TraceCommonEmpty
// 0x0001
struct FTraceCommonEmpty
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
