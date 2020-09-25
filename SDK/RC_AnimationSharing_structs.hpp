#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationSharing.AnimationSetup
// 0x0018
struct FAnimationSetup
{
	class UAnimSequence*                               AnimSequence;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimBlueprint;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPerPlatformInt                             NumRandomizedInstances;                                   // 0x0010(0x0004) (Edit)
	struct FPerPlatformBool                            Enabled;                                                  // 0x0014(0x0001) (Edit)
};

// ScriptStruct AnimationSharing.AnimationStateEntry
// 0x0030
struct FAnimationStateEntry
{
	unsigned char                                      State;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimationSetup>                     AnimationSetups;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bOnDemand;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAdditive;                                                // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReturnToPreviousState;                                   // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSetNextState;                                            // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NextState;                                                // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPerPlatformInt                             MaximumNumberOfConcurrentInstances;                       // 0x0024(0x0004) (Edit)
	float                                              WiggleTimePercentage;                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRequiresCurves;                                          // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// 0x0038
struct FPerSkeletonAnimationSharingSetup
{
	class USkeleton*                                   Skeleton;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BlendAnimBlueprint;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AdditiveAnimBlueprint;                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StateProcessorClass;                                      // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimationStateEntry>                AnimationStates;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AnimationSharing.AnimationSharingScalability
// 0x0010
struct FAnimationSharingScalability
{
	struct FPerPlatformBool                            UseBlendTransitions;                                      // 0x0000(0x0001) (Edit)
	struct FPerPlatformFloat                           BlendSignificanceValue;                                   // 0x0004(0x0004) (Edit)
	struct FPerPlatformInt                             MaximumNumberConcurrentBlends;                            // 0x0008(0x0004) (Edit)
	struct FPerPlatformFloat                           TickSignificanceValue;                                    // 0x000C(0x0004) (Edit)
};

// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// 0x0008 (0x0030 - 0x0028)
struct FTickAnimationSharingFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
