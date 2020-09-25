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

// Enum PlatformGameFramework.EGameLocalizationType
enum class EGameLocalizationType : uint8_t
{
	EGameLocalizationType__Unknown = 0,
	EGameLocalizationType__PC      = 1,
	EGameLocalizationType__XboxOne = 2,
	EGameLocalizationType__PS4_SIEA = 3,
	EGameLocalizationType__PS4_SIEE = 4,
	EGameLocalizationType__Switch  = 5,
	EGameLocalizationType__Mobile  = 6,
	EGameLocalizationType__EGameLocalizationType_MAX = 7
};


// Enum PlatformGameFramework.EGameBits
enum class EGameBits : uint8_t
{
	EGameBits__NoStoreUI           = 0,
	EGameBits__UseAltUI            = 1,
	EGameBits__UseAltQueueUI       = 2,
	EGameBits__UseSpectator        = 3,
	EGameBits__EGameBits_MAX       = 4
};


// Enum PlatformGameFramework.EPGame_CustomMovement
enum class EPGame_CustomMovement : uint8_t
{
	PLATMOVE_Tween                 = 0,
	PLATMOVE_Charge                = 1,
	PLATMOVE_MAX                   = 2
};


// Enum PlatformGameFramework.ECombatLogType
enum class ECombatLogType : uint8_t
{
	ECombatLogType__JSON           = 0,
	ECombatLogType__AWS            = 1,
	ECombatLogType__DEFAULT        = 2,
	ECombatLogType__ECombatLogType_MAX = 3
};


// Enum PlatformGameFramework.EEffectGroupApplicationRule
enum class EEffectGroupApplicationRule : uint8_t
{
	EEffectGroupApplicationRule__STACKABLE = 0,
	EEffectGroupApplicationRule__NEWEST = 1,
	EEffectGroupApplicationRule__STRONGEST = 2,
	EEffectGroupApplicationRule__REFRESH = 3,
	EEffectGroupApplicationRule__STACK_IN_PLACE = 4,
	EEffectGroupApplicationRule__STACK_IN_PLACE_INSTIGATOR = 5,
	EEffectGroupApplicationRule__STRONGEST_BEFORE_NEWEST = 6,
	EEffectGroupApplicationRule__EEffectGroupApplicationRule_MAX = 7
};


// Enum PlatformGameFramework.EPGame_EPropertyType
enum class EPGame_EPropertyType : uint8_t
{
	PROPTYPE_Modifier              = 0,
	PROPTYPE_Percent               = 1,
	PROPTYPE_Value                 = 2,
	PROPTYPE_Delta                 = 3,
	PROPTYPE_MAX                   = 4
};


// Enum PlatformGameFramework.PGAME_INPUT_STATE
enum class EPGAME_INPUT_STATE : uint8_t
{
	PIS_KEYMOUSE                   = 0,
	PIS_GAMEPAD                    = 1,
	PIS_TOUCH                      = 2,
	PIS_UNKNOWN                    = 3,
	PIS_MAX                        = 4
};


// Enum PlatformGameFramework.EPositionHistoryRecordMode
enum class EPositionHistoryRecordMode : uint8_t
{
	EPositionHistoryRecordMode__OnTick = 0,
	EPositionHistoryRecordMode__Manual = 1,
	EPositionHistoryRecordMode__EPositionHistoryRecordMode_MAX = 2
};


// Enum PlatformGameFramework.EPGame_ReplicateTimerState
enum class EPGame_ReplicateTimerState : uint8_t
{
	EPGame_ReplicateTimerState__Inactive = 0,
	EPGame_ReplicateTimerState__Active = 1,
	EPGame_ReplicateTimerState__Overtime = 2,
	EPGame_ReplicateTimerState__Unlimited = 3,
	EPGame_ReplicateTimerState__Paused = 4,
	EPGame_ReplicateTimerState__EPGame_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlatformGameFramework.PlatformPropertyId
// 0x0002
struct FPlatformPropertyId
{
	uint16_t                                           ID;                                                       // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.PGame_Property
// 0x0018 (0x0024 - 0x000C)
struct FPGame_Property : public FFastArraySerializerItem
{
	struct FPlatformPropertyId                         PropertyId;                                               // 0x000C(0x0002) (Edit, DisableEditOnInstance)
	TEnumAsByte<EPGame_EPropertyType>                  Type;                                                     // 0x000E(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Base;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RawFlat;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RawPercent;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Minimum;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.PGame_BlueprintableLightingChannels
// 0x0003
struct FPGame_BlueprintableLightingChannels
{
	unsigned char                                      bChannel0;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bChannel1;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bChannel2;                                                // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.TweenInfo
// 0x0014
struct FTweenInfo
{
	unsigned char                                      TweenType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     TweenDestination;                                         // 0x0004(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TweenTime;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.ChargeInfo
// 0x001C
struct FChargeInfo
{
	struct FVector                                     ChargeInitialLocation;                                    // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ChargeInitialYaw;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ChargeSpeed;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ChargeRange;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      ChargeType;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.PGame_PersistentEffectRepData
// 0x004C (0x0058 - 0x000C)
struct FPGame_PersistentEffectRepData : public FFastArraySerializerItem
{
	class UPGame_EffectGroup*                          EffectGroupBlueprint;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	class UClass*                                      AttachmentBlueprint;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	uint16_t                                           EffectGroupId;                                            // 0x0020(0x0002) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              fTimeRemainingInitial;                                    // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      nNumStacks;                                               // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	uint32_t                                           ReplicatedEffectFlags;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	uint16_t                                           SkinId;                                                   // 0x003C(0x0002) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x12];                                      // 0x003E(0x0012) MISSED OFFSET
	class UPGame_EffectAttachment*                     pAttachment;                                              // 0x0050(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct PlatformGameFramework.PGame_PersistentEffectRepDataContainer
// 0x0018 (0x0120 - 0x0108)
struct FPGame_PersistentEffectRepDataContainer : public FFastArraySerializer
{
	TArray<struct FPGame_PersistentEffectRepData>      Items;                                                    // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_EffectManagerPropertyContainer
// 0x0068 (0x0170 - 0x0108)
struct FPGame_EffectManagerPropertyContainer : public FFastArraySerializer
{
	TArray<struct FPGame_Property>                     Properties;                                               // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0118(0x0058) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_InstantEffectRepData
// 0x0040
struct FPGame_InstantEffectRepData
{
	class UPGame_EffectGroup*                          EffectGroupBlueprint;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	class UClass*                                      AttachmentBlueprint;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	uint16_t                                           EffectGroupId;                                            // 0x0010(0x0002) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x002C(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	uint32_t                                           ReplicatedEffectFlags;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	uint16_t                                           SkinId;                                                   // 0x003C(0x0002) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.PGame_InactivePlayerStateEntry
// 0x0010
struct FPGame_InactivePlayerStateEntry
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class APlayerState*                                PlayerState;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.PGame_PerformanceCaptureProfile
// 0x001C
struct FPGame_PerformanceCaptureProfile
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ScalabilityBucket;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ResolutionX;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ResolutionY;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VsyncInterval;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFullScreen;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.SerializedMctsNetId
// 0x0008
struct FSerializedMctsNetId
{
	uint64_t                                           A;                                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.PrimitivePriority
// 0x0020
struct FPrimitivePriority
{
	class UPrimitiveComponent*                         Primitive;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Priority;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_EffectManagerCurrentProperty
// 0x0008
struct FPGame_EffectManagerCurrentProperty
{
	struct FPlatformPropertyId                         propId;                                                   // 0x0000(0x0002) (Edit, EditConst)
	float                                              propValue;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.PGame_PlayerProfile
// 0x0020
struct FPGame_PlayerProfile
{
	struct FSerializedMctsNetId                        MctsPlayerId;                                             // 0x0000(0x0008)
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (ZeroConstructor)
	uint16_t                                           AccessFlags;                                              // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSpectator;                                               // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDebugPlayer;                                             // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.CollisionDebugInfo
// 0x0040
struct FCollisionDebugInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_ReplicatedTimer
// 0x0038
struct FPGame_ReplicatedTimer
{
	EPGame_ReplicateTimerState                         TimerState;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              InitialTime;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              TimeRemaining;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x000C(0x002C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
