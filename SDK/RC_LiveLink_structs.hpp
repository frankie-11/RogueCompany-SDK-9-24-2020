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

// Enum LiveLink.ELiveLinkAxis
enum class ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X               = 0,
	ELiveLinkAxis__Y               = 1,
	ELiveLinkAxis__Z               = 2,
	ELiveLinkAxis__XNeg            = 3,
	ELiveLinkAxis__YNeg            = 4,
	ELiveLinkAxis__ZNeg            = 5,
	ELiveLinkAxis__ELiveLinkAxis_MAX = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLink.ProviderPollResult
// 0x0038
struct FProviderPollResult
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MachineName;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	double                                             MachineTimeOffset;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLink.LiveLinkRoleProjectSetting
// 0x0028
struct FLiveLinkRoleProjectSetting
{
	class UClass*                                      Role;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class UClass*                                      SettingClass;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class UClass*                                      FrameInterpolationProcessor;                              // 0x0010(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<class UClass*>                              FramePreProcessors;                                       // 0x0018(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct LiveLink.AnimNode_LiveLinkPose
// 0x0040 (0x0050 - 0x0010)
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FLiveLinkSubjectName                        LiveLinkSubjectName;                                      // 0x0020(0x0008) (Edit, BlueprintVisible)
	class UClass*                                      RetargetAsset;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData)
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                     // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkInstanceProxy
// 0x0050 (0x0730 - 0x06E0)
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
	struct FAnimNode_LiveLinkPose                      PoseNode;                                                 // 0x06E0(0x0050) (Edit)
};

// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// 0x0001
struct FLiveLinkRetargetAssetReference
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
