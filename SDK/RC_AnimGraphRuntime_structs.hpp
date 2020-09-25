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

// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner     = 0,
	ESphericalLimitType__Outer     = 1,
	ESphericalLimitType__ESphericalLimitType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor    = 1,
	AnimPhysSimSpaceType__World    = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend = 0,
	EBlendListTransitionType__Inertialization = 1,
	EBlendListTransitionType__EBlendListTransitionType_MAX = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone   = 0,
	EDrivenDestinationMode__MorphTarget = 1,
	EDrivenDestinationMode__MaterialParameter = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None  = 0,
	EConstraintOffsetOption__Offset_RefPose = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX = 2
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate  = 0,
	CopyBoneDeltaMode__Copy        = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add     = 0,
	EModifyCurveApplyMode__Scale   = 1,
	EModifyCurveApplyMode__Blend   = 2,
	EModifyCurveApplyMode__WeightedMovingAverage = 3,
	EModifyCurveApplyMode__RemapCurve = 4,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX = 5
};


// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses  = 0,
	EPoseDriverOutput__DriveCurves = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX = 2
};


// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation    = 0,
	EPoseDriverSource__Translation = 1,
	EPoseDriverSource__EPoseDriverSource_MAX = 2
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist = 0,
	EPoseDriverType__SwingOnly     = 1,
	EPoseDriverType__Translation   = 2,
	EPoseDriverType__EPoseDriverType_MAX = 3
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot = 0,
	ESnapshotSourceMode__SnapshotPin = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2
};


// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace = 0,
	ESimulationSpace__WorldSpace   = 1,
	ESimulationSpace__BaseBoneSpace = 2,
	ESimulationSpace__ESimulationSpace_MAX = 3
};


// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue = 0,
	EScaleChainInitialLength__Distance = 1,
	EScaleChainInitialLength__ChainLength = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX = 3
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset   = 0,
	ESequenceEvalReinit__StartPosition = 1,
	ESequenceEvalReinit__ExplicitTime = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3
};


// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None          = 0,
	ESplineBoneAxis__X             = 1,
	ESplineBoneAxis__Y             = 2,
	ESplineBoneAxis__Z             = 3,
	ESplineBoneAxis__ESplineBoneAxis_MAX = 4
};


// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
	ERotationComponent__EulerX     = 0,
	ERotationComponent__EulerY     = 1,
	ERotationComponent__EulerZ     = 2,
	ERotationComponent__QuaternionAngle = 3,
	ERotationComponent__SwingAngle = 4,
	ERotationComponent__TwistAngle = 5,
	ERotationComponent__ERotationComponent_MAX = 6
};


// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
	EEasingFuncType__Linear        = 0,
	EEasingFuncType__Sinusoidal    = 1,
	EEasingFuncType__Cubic         = 2,
	EEasingFuncType__QuadraticInOut = 3,
	EEasingFuncType__CubicInOut    = 4,
	EEasingFuncType__HermiteCubic  = 5,
	EEasingFuncType__QuarticInOut  = 6,
	EEasingFuncType__QuinticInOut  = 7,
	EEasingFuncType__CircularIn    = 8,
	EEasingFuncType__CircularOut   = 9,
	EEasingFuncType__CircularInOut = 10,
	EEasingFuncType__ExpIn         = 11,
	EEasingFuncType__ExpOut        = 12,
	EEasingFuncType__ExpInOut      = 13,
	EEasingFuncType__CustomCurve   = 14,
	EEasingFuncType__EEasingFuncType_MAX = 15
};


// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne = 0,
	ERBFNormalizeMethod__AlwaysNormalize = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian = 2,
	ERBFNormalizeMethod__ERBFNormalizeMethod_MAX = 3
};


// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean  = 0,
	ERBFDistanceMethod__Quaternion = 1,
	ERBFDistanceMethod__SwingAngle = 2,
	ERBFDistanceMethod__DefaultMethod = 3,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX = 4
};


// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian     = 0,
	ERBFFunctionType__Exponential  = 1,
	ERBFFunctionType__Linear       = 2,
	ERBFFunctionType__Cubic        = 3,
	ERBFFunctionType__Quintic      = 4,
	ERBFFunctionType__DefaultFunction = 5,
	ERBFFunctionType__ERBFFunctionType_MAX = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.PositionHistory
// 0x0030
struct FPositionHistory
{
	TArray<struct FVector>                             Positions;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Range;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0014(0x001C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x00B0 (0x00E0 - 0x0030)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoop;                                                    // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bResetPlayTimeWhenBlendSpaceChanges;                      // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0050(0x0088) MISSED OFFSET
	class UBlendSpaceBase*                             PreviousBlendSpace;                                       // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x00A8 (0x0188 - 0x00E0)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x00E0(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x00F8(0x0008) (Edit, BlueprintVisible)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0100(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0150(0x0030) (Edit, BlueprintVisible)
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x0184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlphaBoolEnabled;                                        // 0x0185(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	class UPoseAsset*                                  PoseAsset;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0020 (0x0098 - 0x0078)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, EditFixedSize)
	EAlphaBlendOption                                  BlendOption;                                              // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CustomCurve;                                              // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x00E8 - 0x00E0)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitTime;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldLoop;                                              // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTeleportToExplicitTime;                                  // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                 // 0x003E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0088 (0x0098 - 0x0010)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendTime;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	EBlendListTransitionType                           TransitionType;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  BlendType;                                                // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bResetChildOnActivation;                                  // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0010(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlphaBoolEnabled;                                        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0030(0x0008) (Edit, BlueprintVisible)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0038(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0088(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// 0x0498 (0x0560 - 0x00C8)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x98];                                      // 0x00D0(0x0098) MISSED OFFSET
	struct FVector                                     OverrideWorldGravity;                                     // 0x0168(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x0174(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0180(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x018C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x0198(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CachedBoundsScale;                                        // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BaseBoneRef;                                              // 0x01A8(0x0010) (Edit)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESimulationSpace                                   SimulationSpace;                                          // 0x01B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceDisableCollisionBetweenConstraintBodies;            // 0x01BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableWorldGeometry : 1;                                 // 0x01BC(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bOverrideWorldGravity : 1;                                // 0x01BC(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bTransferBoneVelocities : 1;                              // 0x01BC(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bFreezeIncomingPoseOnStart : 1;                           // 0x01BC(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bClampLinearTranslationLimitToRefPose : 1;                // 0x01BC(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      UnknownData01[0x3A3];                                     // 0x01BD(0x03A3) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x00D0 (0x01B0 - 0x00E0)
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x00E0(0x0060) MISSED OFFSET
	struct FPoseLink                                   BasePose;                                                 // 0x0140(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSocketName;                                         // 0x0154(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PivotSocketName;                                          // 0x015C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtLocation;                                           // 0x0164(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketAxis;                                               // 0x0170(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0180(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x0048
struct FAnimPhysConstraintSetup
{
	EAnimPhysLinearConstraintType                      LinearXLimitType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysLinearConstraintType                      LinearYLimitType;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysLinearConstraintType                      LinearZLimitType;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearAxesMin;                                            // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearAxesMax;                                            // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysAngularConstraintType                     AngularConstraintType;                                    // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysTwistAxis                                 TwistAxis;                                                // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysTwistAxis                                 AngularTargetAxis;                                        // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConeAngle;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularLimitsMin;                                         // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularLimitsMax;                                         // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularTarget;                                            // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0024
struct FAnimPhysSphericalLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0010) (Edit)
	struct FVector                                     SphereLocalOffset;                                        // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LimitRadius;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESphericalLimitType                                LimitType;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0040
struct FAnimPhysPlanarLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0010) (Edit)
	struct FTransform                                  PlaneTransform;                                           // 0x0010(0x0030) (Edit, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// 0x0130
struct FRotationRetargetingInfo
{
	unsigned char                                      bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Source;                                                   // 0x0010(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  Target;                                                   // 0x0040(0x0030) (Edit, IsPlainOldData)
	ERotationComponent                                 RotationComponent;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TwistAxis;                                                // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAbsoluteAngle;                                        // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SourceMinimum;                                            // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SourceMaximum;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetMinimum;                                            // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetMaximum;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EEasingFuncType                                    EasingType;                                               // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          CustomCurve;                                              // 0x0098(0x0088) (Edit)
	unsigned char                                      bFlipEasing;                                              // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EasingWeight;                                             // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClamp;                                                   // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x0378 (0x0440 - 0x00C8)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	float                                              LinearDampingOverride;                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDampingOverride;                                   // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x00D0(0x0060) MISSED OFFSET
	struct FBoneReference                              RelativeSpaceBone;                                        // 0x0130(0x0010) (Edit)
	struct FBoneReference                              BoundBone;                                                // 0x0140(0x0010) (Edit)
	struct FBoneReference                              ChainEnd;                                                 // 0x0150(0x0010) (Edit)
	struct FVector                                     BoxExtents;                                               // 0x0160(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalJointOffset;                                         // 0x016C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GravityOverride;                                          // 0x017C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearSpringConstant;                                     // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpringConstant;                                    // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindScale;                                                // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0194(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x01A0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x01AC(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularBiasOverride;                                      // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSolverIterationsPreUpdate;                             // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSolverIterationsPostUpdate;                            // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimPhysConstraintSetup                    ConstraintSetup;                                          // 0x01C4(0x0048) (Edit)
	TArray<struct FAnimPhysSphericalLimit>             SphericalLimits;                                          // 0x0210(0x0010) (Edit, ZeroConstructor)
	float                                              SphereCollisionRadius;                                    // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x0224(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                             // 0x0230(0x0010) (Edit, ZeroConstructor)
	EAnimPhysCollisionType                             CollisionType;                                            // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysSimSpaceType                              SimulationSpace;                                          // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseSphericalLimits : 1;                                  // 0x0244(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bUsePlanarLimit : 1;                                      // 0x0244(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bDoUpdate : 1;                                            // 0x0244(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bDoEval : 1;                                              // 0x0244(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bOverrideLinearDamping : 1;                               // 0x0244(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      bOverrideAngularBias : 1;                                 // 0x0244(0x0001) (Edit BITFIELD: 2020)
	unsigned char                                      bOverrideAngularDamping : 1;                              // 0x0244(0x0001) (Edit BITFIELD: 4040)
	unsigned char                                      bEnableWind : 1;                                          // 0x0244(0x0001) (Edit BITFIELD: 8080)
	unsigned char                                      bUnknown0245_0101 : 1;                                    // 0x0245(0x0001) (Edit, BlueprintVisibleMANUAL_ADD_BIT 0101)
	unsigned char                                      bUseGravityOverride : 1;                                  // 0x0245(0x0001) (Edit, BlueprintVisible BITFIELD: 0202)
	unsigned char                                      bLinearSpring : 1;                                        // 0x0245(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bAngularSpring : 1;                                       // 0x0245(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bChain : 1;                                               // 0x0245(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      UnknownData01[0xA];                                       // 0x0246(0x000A) MISSED OFFSET
	struct FRotationRetargetingInfo                    RetargetingSettings;                                      // 0x0250(0x0130) (Edit)
	unsigned char                                      UnknownData02[0xC0];                                      // 0x0380(0x00C0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0034(0x0008) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0040(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0090(0x0030) (Edit, BlueprintVisible)
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlphaBoolEnabled;                                        // 0x00C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// 0x0028
struct FAngularRangeLimit
{
	struct FVector                                     LimitMin;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LimitMax;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              Bone;                                                     // 0x0018(0x0010) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// 0x0020 (0x00E8 - 0x00C8)
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
	TArray<struct FAngularRangeLimit>                  AngularRangeLimits;                                       // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             AngularOffsets;                                           // 0x00D8(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// 0x0024
struct FBlendBoneByChannelEntry
{
	struct FBoneReference                              SourceBone;                                               // 0x0000(0x0010) (Edit)
	struct FBoneReference                              TargetBone;                                               // 0x0010(0x0010) (Edit)
	unsigned char                                      bBlendTranslation;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBlendRotation;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBlendScale;                                              // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// 0x0058 (0x0068 - 0x0010)
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x0020(0x0010) (Edit, BlueprintVisible)
	TArray<struct FBlendBoneByChannelEntry>            BoneDefinitions;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0058(0x0008) (Edit, BlueprintVisible)
	TEnumAsByte<EBoneControlSpace>                     TransformsSpace;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0008 (0x00A0 - 0x0098)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	unsigned char                                      bActiveValue;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0018 (0x00B0 - 0x0098)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                          // 0x0098(0x0010) (ZeroConstructor)
	unsigned char                                      ActiveEnumValue;                                          // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0008 (0x00A0 - 0x0098)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                         // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0050 (0x0118 - 0x00C8)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00C8(0x0010) (Edit)
	class UCurveFloat*                                 DrivingCurve;                                             // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMin;                                                 // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // 0x00F4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              TargetBone;                                               // 0x00FC(0x0010) (Edit)
	EDrivenDestinationMode                             DestinationMode;                                          // 0x010C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDrivenBoneModificationMode                        ModificationMode;                                         // 0x010D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComponentType>                        SourceComponent;                                          // 0x010E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseRange : 1;                                            // 0x010F(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bAffectTargetTranslationX : 1;                            // 0x010F(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bAffectTargetTranslationY : 1;                            // 0x010F(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bAffectTargetTranslationZ : 1;                            // 0x010F(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bAffectTargetRotationX : 1;                               // 0x010F(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      bAffectTargetRotationY : 1;                               // 0x010F(0x0001) (Edit BITFIELD: 2020)
	unsigned char                                      bAffectTargetRotationZ : 1;                               // 0x010F(0x0001) (Edit BITFIELD: 4040)
	unsigned char                                      bAffectTargetScaleX : 1;                                  // 0x010F(0x0001) (Edit BITFIELD: 8080)
	unsigned char                                      bAffectTargetScaleY : 1;                                  // 0x0110(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bAffectTargetScaleZ : 1;                                  // 0x0110(0x0001) (Edit BITFIELD: 0202)
};

// ScriptStruct AnimGraphRuntime.SocketReference
// 0x0040
struct FSocketReference
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// 0x0060
struct FBoneSocketTarget
{
	unsigned char                                      bUseSocket;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BoneReference;                                            // 0x0004(0x0010) (Edit)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FSocketReference                            SocketReference;                                          // 0x0020(0x0040) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// 0x00B8 (0x0180 - 0x00C8)
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     EffectorLocation;                                         // 0x00C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x00D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00D5(0x000B) MISSED OFFSET
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x00E0(0x0060) (Edit)
	struct FBoneReference                              TipBone;                                                  // 0x0140(0x0010) (Edit)
	struct FBoneReference                              RootBone;                                                 // 0x0150(0x0010) (Edit)
	float                                              precision;                                                // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bStartFromTail;                                           // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableRotationLimit;                                     // 0x0169(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      RotationLimitPerJoints;                                   // 0x0170(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.Constraint
// 0x001C
struct FConstraint
{
	struct FBoneReference                              TargetBone;                                               // 0x0000(0x0010) (Edit)
	EConstraintOffsetOption                            OffsetOption;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETransformConstraintType                           TransformType;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFilterOptionPerAxis                        PerAxis;                                                  // 0x0012(0x0003) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// 0x0040 (0x0108 - 0x00C8)
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x00C8(0x0010) (Edit)
	TArray<struct FConstraint>                         ConstraintSetup;                                          // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ConstraintWeights;                                        // 0x00E8(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0028 (0x00F0 - 0x00C8)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              TargetBone;                                               // 0x00D8(0x0010) (Edit)
	unsigned char                                      bCopyTranslation;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCopyRotation;                                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCopyScale;                                               // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ControlSpace;                                             // 0x00EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0030 (0x00F8 - 0x00C8)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              TargetBone;                                               // 0x00D8(0x0010) (Edit)
	unsigned char                                      bCopyTranslation;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCopyRotation;                                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCopyScale;                                               // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECopyBoneDeltaMode                                 CopyMode;                                                 // 0x00EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TranslationMultiplier;                                    // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationMultiplier;                                       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0130 (0x0140 - 0x0010)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	TWeakObjectPtr<class USkeletalMeshComponent>       SourceMeshComponent;                                      // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      bUseAttachedParent;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCopyCurves;                                              // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x126];                                     // 0x001A(0x0126) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x0030 (0x0040 - 0x0010)
struct FAnimNode_CurveSource : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SourceBinding;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UCurveSourceInterface>      CurveSource;                                              // 0x0030(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x00C8 (0x0190 - 0x00C8)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FTransform                                  EffectorTransform;                                        // 0x00D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x0100(0x0060) (Edit)
	struct FBoneReference                              TipBone;                                                  // 0x0160(0x0010) (Edit)
	struct FBoneReference                              RootBone;                                                 // 0x0170(0x0010) (Edit)
	float                                              precision;                                                // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                   // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                   // 0x0189(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0058 (0x0120 - 0x00C8)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                              // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              LeftHandFK;                                               // 0x00D8(0x0010) (Edit)
	struct FBoneReference                              RightHandIK;                                              // 0x00E8(0x0010) (Edit)
	struct FBoneReference                              LeftHandIK;                                               // 0x00F8(0x0010) (Edit)
	TArray<struct FBoneReference>                      IKBonesToMove;                                            // 0x0108(0x0010) (Edit, ZeroConstructor)
	float                                              HandFKWeight;                                             // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x00B0 (0x00C0 - 0x0010)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<struct FPoseLink>                           BlendPoses;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FInputBlendPose>                     LayerSetup;                                               // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	unsigned char                                      bMeshSpaceRotationBlend;                                  // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMeshSpaceScaleBlend;                                     // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBlendRootMotionBasedOnRootBone;                          // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LODThreshold;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPerBoneBlendWeight>                 PerBoneBlendWeights;                                      // 0x0060(0x0010) (ZeroConstructor)
	struct FGuid                                       SkeletonGuid;                                             // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VirtualBoneGuid;                                          // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x002C
struct FAnimLegIKDefinition
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0010) (Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0010(0x0010) (Edit)
	int                                                NumBonesInLimb;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRotationAngle;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 FootBoneForwardAxis;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableRotationLimit;                                     // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableKneeTwistCorrection;                               // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x0030 (0x00F8 - 0x00C8)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
	float                                              ReachPrecision;                                           // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimLegIKDefinition>                LegsDefinition;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x00A0
struct FAnimLegIKData
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0038
struct FIKChain
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x003C
struct FIKChainLink
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x00E8 (0x01B0 - 0x00C8)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x00C8(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FBoneSocketTarget                           LookAtTarget;                                             // 0x00E0(0x0060) (Edit)
	struct FVector                                     LookAtLocation;                                           // 0x0140(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAxis                                       LookAt_Axis;                                              // 0x014C(0x0010) (Edit)
	unsigned char                                      bUseLookUpAxis;                                           // 0x015C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        // 0x015D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAxis                                       LookUp_Axis;                                              // 0x0160(0x0010) (Edit)
	float                                              LookAtClamp;                                              // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x017C(0x0034) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// 0x0028 (0x0038 - 0x0010)
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      bMeshSpaceAdditive;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0040 (0x0108 - 0x00C8)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x00C8(0x0010) (Edit)
	struct FVector                                     Translation;                                              // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x00F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x00FD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x00FE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x00FF(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x0048 (0x0058 - 0x0010)
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize)
	TArray<float>                                      CurveValues;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FName>                               CurveNames;                                               // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EModifyCurveApplyMode                              ApplyMode;                                                // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x0040 (0x0050 - 0x0010)
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           Poses;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DesiredAlphas;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0040(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      bAdditiveNode;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNormalizeAlpha;                                          // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0038 (0x0100 - 0x00C8)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                            // 0x00C8(0x0010) (Edit)
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                             // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRelativeToRefPose;                                       // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x00DC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x00E8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x00F4(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0018 (0x0090 - 0x0078)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	struct FName                                       PoseName;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PoseWeight;                                               // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x0018
struct FPoseDriverTransform
{
	struct FVector                                     TargetTranslation;                                        // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x00C0
struct FPoseDriverTarget
{
	TArray<struct FPoseDriverTransform>                BoneTransforms;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FRotator                                    TargetRotation;                                           // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetScale;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ERBFDistanceMethod                                 DistanceMethod;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ERBFFunctionType                                   FunctionType;                                             // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyCustomCurve;                                        // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRichCurve                                  CustomCurve;                                              // 0x0028(0x0080) (Edit)
	struct FName                                       DrivenName;                                               // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	unsigned char                                      bIsHidden;                                                // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.RBFParams
// 0x0028
struct FRBFParams
{
	int                                                TargetDimensions;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ERBFFunctionType                                   Function;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ERBFDistanceMethod                                 DistanceMethod;                                           // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeightThreshold;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ERBFNormalizeMethod                                NormalizeMethod;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MedianReference;                                          // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MedianMin;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MedianMax;                                                // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x00B0 (0x0128 - 0x0078)
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, EditFixedSize)
	TArray<struct FBoneReference>                      SourceBones;                                              // 0x0088(0x0010) (Edit, ZeroConstructor)
	TArray<struct FBoneReference>                      OnlyDriveBones;                                           // 0x0098(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPoseDriverTarget>                   PoseTargets;                                              // 0x00A8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B8(0x0030) MISSED OFFSET
	struct FBoneReference                              EvalSpaceBone;                                            // 0x00E8(0x0010) (Edit)
	struct FRBFParams                                  RBFParams;                                                // 0x00F8(0x0028) (Edit)
	EPoseDriverSource                                  DriveSource;                                              // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPoseDriverOutput                                  DriveOutput;                                              // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOnlyDriveSelectedBones : 1;                              // 0x0122(0x0001) (Edit BITFIELD: 0101)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x0080 (0x0090 - 0x0010)
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
	struct FName                                       SnapshotName;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPoseSnapshot                               Snapshot;                                                 // 0x0018(0x0038) (Edit, BlueprintVisible)
	ESnapshotSourceMode                                Mode;                                                     // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0051(0x003F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0050
struct FRandomPlayerSequenceEntry
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToPlay;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinLoopCount;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoopCount;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 BlendIn;                                                  // 0x0020(0x0030) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0058 (0x0068 - 0x0010)
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	TArray<struct FRandomPlayerSequenceEntry>          Entries;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0020(0x0044) MISSED OFFSET
	unsigned char                                      bShuffleMode;                                             // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0010 - 0x0010)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0008 (0x0018 - 0x0010)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<ERefPoseType>                          RefPoseType;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// 0x0010 (0x00D8 - 0x00C8)
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
// 0x0498 (0x0560 - 0x00C8)
struct FAnimNode_RigidBody_Chaos : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideWorldGravity;                                     // 0x00D0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x00DC(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x00E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x00F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x0100(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CachedBoundsScale;                                        // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BaseBoneRef;                                              // 0x0110(0x0010) (Edit)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESimulationSpace                                   SimulationSpace;                                          // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceDisableCollisionBetweenConstraintBodies;            // 0x0122(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableWorldGeometry : 1;                                 // 0x0123(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bOverrideWorldGravity : 1;                                // 0x0123(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bTransferBoneVelocities : 1;                              // 0x0123(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bFreezeIncomingPoseOnStart : 1;                           // 0x0123(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bClampLinearTranslationLimitToRefPose : 1;                // 0x0123(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      UnknownData00[0x43C];                                     // 0x0124(0x043C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0090 (0x00A0 - 0x0010)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible)
	float                                              Pitch;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        PitchScaleBiasClamp;                                      // 0x0028(0x0030) (Edit, BlueprintVisible)
	struct FInputScaleBiasClamp                        YawScaleBiasClamp;                                        // 0x0058(0x0030) (Edit, BlueprintVisible)
	struct FRotator                                    MeshToComponent;                                          // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0028 (0x00F0 - 0x00C8)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                               // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              SourceBone;                                               // 0x00D8(0x0010) (Edit)
	float                                              Multiplier;                                               // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                      // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsAdditive;                                              // 0x00ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// 0x0068 (0x0078 - 0x0010)
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0010(0x0010) (Edit)
	float                                              DefaultChainLength;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              ChainStartBone;                                           // 0x0024(0x0010) (Edit)
	struct FBoneReference                              ChainEndBone;                                             // 0x0034(0x0010) (Edit)
	struct FVector                                     TargetLocation;                                           // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0058(0x0008) (Edit)
	EScaleChainInitialLength                           ChainInitialLength;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0061(0x0017) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0038 (0x0048 - 0x0010)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SlotName;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlwaysUpdateSourcePose;                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0029(0x001F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x0198 (0x0260 - 0x00C8)
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              StartBone;                                                // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              EndBone;                                                  // 0x00D8(0x0010) (Edit)
	ESplineBoneAxis                                    BoneAxis;                                                 // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoCalculateSpline;                                     // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                pointCount;                                               // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ControlPoints;                                            // 0x00F0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	float                                              Roll;                                                     // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TwistStart;                                               // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TwistEnd;                                                 // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 TwistBlend;                                               // 0x0110(0x0030) (Edit)
	float                                              Stretch;                                                  // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x118];                                     // 0x0148(0x0118) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0014
struct FSplineIKCachedBoneData
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0010)
	int                                                RefSkeletonIndex;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0060 (0x0128 - 0x00C8)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                               // 0x00C8(0x0010) (Edit)
	float                                              MaxDisplacement;                                          // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorResetThresh;                                         // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00E8(0x003C) MISSED OFFSET
	unsigned char                                      bLimitDisplacement : 1;                                   // 0x0124(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bTranslateX : 1;                                          // 0x0124(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bTranslateY : 1;                                          // 0x0124(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bTranslateZ : 1;                                          // 0x0124(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bRotateX : 1;                                             // 0x0124(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      bRotateY : 1;                                             // 0x0124(0x0001) (Edit BITFIELD: 2020)
	unsigned char                                      bRotateZ : 1;                                             // 0x0124(0x0001) (Edit BITFIELD: 4040)
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// 0x0000 (0x0030 - 0x0030)
struct FAnimNode_StateResult : public FAnimNode_Root
{

};

// ScriptStruct AnimGraphRuntime.RotationLimit
// 0x0018
struct FRotationLimit
{
	struct FVector                                     LimitMin;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LimitMax;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0198 (0x0260 - 0x00C8)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C8(0x0038) MISSED OFFSET
	struct FBoneReference                              TrailBone;                                                // 0x0100(0x0010) (Edit)
	int                                                ChainLength;                                              // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                            // 0x0114(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInvertChainBoneAxis : 1;                                 // 0x0115(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bLimitStretch : 1;                                        // 0x0115(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bLimitRotation : 1;                                       // 0x0115(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bUsePlanarLimit : 1;                                      // 0x0115(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bActorSpaceFakeVel : 1;                                   // 0x0115(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      bReorientParentToChild : 1;                               // 0x0115(0x0001) (Edit BITFIELD: 2020)
	float                                              MaxDeltaTime;                                             // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RelaxationSpeedScale;                                     // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          TrailRelaxationSpeed;                                     // 0x0120(0x0088) (Edit)
	struct FInputScaleBiasClamp                        RelaxationSpeedScaleInputProcessor;                       // 0x01A8(0x0030) (Edit, BlueprintVisible)
	TArray<struct FRotationLimit>                      RotationLimits;                                           // 0x01D8(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FVector>                             RotationOffsets;                                          // 0x01E8(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                             // 0x01F8(0x0010) (Edit, ZeroConstructor)
	float                                              StretchLimit;                                             // 0x0208(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FakeVelocity;                                             // 0x020C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BaseJoint;                                                // 0x0218(0x0010) (Edit)
	float                                              LastBoneRotationAnimAlphaBlend;                           // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x022C(0x0034) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0020
struct FReferenceBoneFrame
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0010) (Edit)
	struct FAxis                                       Axis;                                                     // 0x0010(0x0010) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x0070 (0x0138 - 0x00C8)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame                         BaseFrame;                                                // 0x00C8(0x0020) (Edit)
	struct FReferenceBoneFrame                         TwistFrame;                                               // 0x00E8(0x0020) (Edit)
	struct FAxis                                       TwistPlaneNormalAxis;                                     // 0x0108(0x0010) (Edit)
	float                                              RangeMax;                                                 // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimCurveParam                             Curve;                                                    // 0x0124(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0118 (0x01E0 - 0x00C8)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                   // 0x00C8(0x0010) (Edit)
	float                                              StartStretchRatio;                                        // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxStretchScale;                                          // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffectorLocation;                                         // 0x00E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x00F0(0x0060) (Edit)
	struct FVector                                     JointTargetLocation;                                      // 0x0150(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneSocketTarget                           JointTarget;                                              // 0x0160(0x0060) (Edit)
	struct FAxis                                       TwistAxis;                                                // 0x01C0(0x0010) (Edit)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x01D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                 // 0x01D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStretching : 1;                                     // 0x01D2(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                       // 0x01D2(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bMaintainEffectorRelRot : 1;                              // 0x01D2(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bAllowTwist : 1;                                          // 0x01D2(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      UnknownData00[0xD];                                       // 0x01D3(0x000D) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x0020(0x0010) (Edit, BlueprintVisible)
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlphaBoolEnabled : 1;                                    // 0x0031(0x0001) (Edit, BlueprintVisible BITFIELD: 0101)
	unsigned char                                      bUnknown0031_0404 : 1;                                    // 0x0031(0x0001) (EditMANUAL_ADD_BIT 0404)
	unsigned char                                      bResetChildOnActivation : 1;                              // 0x0031(0x0001) (Edit BITFIELD: 0808)
	float                                              Alpha;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0038(0x0008) (Edit, BlueprintVisible)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0040(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0090(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x0250 (0x0930 - 0x06E0)
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x250];                                     // 0x06E0(0x0250) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x0010
struct FRBFEntry
{
	TArray<float>                                      Values;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// 0x0090 (0x00A0 - 0x0010)
struct FRBFTarget : public FRBFEntry
{
	float                                              ScaleFactor;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyCustomCurve;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRichCurve                                  CustomCurve;                                              // 0x0018(0x0080) (Edit)
	ERBFDistanceMethod                                 DistanceMethod;                                           // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ERBFFunctionType                                   FunctionType;                                             // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
