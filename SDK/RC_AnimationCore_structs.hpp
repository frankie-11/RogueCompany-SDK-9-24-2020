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

// Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t
{
	ETransformConstraintType__Translation = 0,
	ETransformConstraintType__Rotation = 1,
	ETransformConstraintType__Scale = 2,
	ETransformConstraintType__Parent = 3,
	ETransformConstraintType__ETransformConstraintType_MAX = 4
};


// Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8_t
{
	EConstraintType__Transform     = 0,
	EConstraintType__Aim           = 1,
	EConstraintType__MAX           = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationCore.CCDIKChainLink
// 0x0080
struct FCCDIKChainLink
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct AnimationCore.Axis
// 0x0010
struct FAxis
{
	struct FVector                                     Axis;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInLocalSpace;                                            // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationCore.ConstraintDescriptor
// 0x0010
struct FConstraintDescriptor
{
	EConstraintType                                    Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintData
// 0x0080
struct FConstraintData
{
	struct FConstraintDescriptor                       Constraint;                                               // 0x0000(0x0010)
	float                                              Weight;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMaintainOffset;                                          // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0015(0x000B) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0020(0x0030) (IsPlainOldData)
	struct FTransform                                  CurrentTransform;                                         // 0x0050(0x0030) (Transient, IsPlainOldData)
};

// ScriptStruct AnimationCore.FilterOptionPerAxis
// 0x0003
struct FFilterOptionPerAxis
{
	unsigned char                                      bX;                                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bY;                                                       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bZ;                                                       // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
// 0x0010
struct FConstraintDescriptionEx
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FFilterOptionPerAxis                        AxesFilterOption;                                         // 0x0008(0x0003) (Edit)
};

// ScriptStruct AnimationCore.AimConstraintDescription
// 0x0030 (0x0040 - 0x0010)
struct FAimConstraintDescription : public FConstraintDescriptionEx
{
	struct FAxis                                       LookAt_Axis;                                              // 0x0010(0x0010) (Edit)
	struct FAxis                                       LookUp_Axis;                                              // 0x0020(0x0010) (Edit)
	unsigned char                                      bUseLookUp;                                               // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookUpTarget;                                             // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationCore.TransformConstraintDescription
// 0x0008 (0x0018 - 0x0010)
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
	ETransformConstraintType                           TransformType;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationCore.ConstraintDescription
// 0x000D
struct FConstraintDescription
{
	unsigned char                                      bTranslation;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRotation;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bScale;                                                   // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bParent;                                                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFilterOptionPerAxis                        TranslationAxes;                                          // 0x0004(0x0003) (Edit, BlueprintVisible)
	struct FFilterOptionPerAxis                        RotationAxes;                                             // 0x0007(0x0003) (Edit, BlueprintVisible)
	struct FFilterOptionPerAxis                        ScaleAxes;                                                // 0x000A(0x0003) (Edit, BlueprintVisible)
};

// ScriptStruct AnimationCore.TransformConstraint
// 0x0028
struct FTransformConstraint
{
	struct FConstraintDescription                      Operator;                                                 // 0x0000(0x000D) (Edit, BlueprintVisible)
	struct FName                                       SourceNode;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetNode;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMaintainOffset;                                          // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationCore.ConstraintOffset
// 0x0060
struct FConstraintOffset
{
	struct FVector                                     Translation;                                              // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // 0x0010(0x0010) (IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Parent;                                                   // 0x0030(0x0030) (IsPlainOldData)
};

// ScriptStruct AnimationCore.TransformFilter
// 0x0009
struct FTransformFilter
{
	struct FFilterOptionPerAxis                        TranslationFilter;                                        // 0x0000(0x0003) (Edit, BlueprintVisible)
	struct FFilterOptionPerAxis                        RotationFilter;                                           // 0x0003(0x0003) (Edit, BlueprintVisible)
	struct FFilterOptionPerAxis                        ScaleFilter;                                              // 0x0006(0x0003) (Edit, BlueprintVisible)
};

// ScriptStruct AnimationCore.EulerTransform
// 0x0024
struct FEulerTransform
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationCore.FABRIKChainLink
// 0x0038
struct FFABRIKChainLink
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AnimationCore.NodeChain
// 0x0010
struct FNodeChain
{
	TArray<struct FName>                               Nodes;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AnimationCore.NodeObject
// 0x0010
struct FNodeObject
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationCore.NodeHierarchyData
// 0x0070
struct FNodeHierarchyData
{
	TArray<struct FNodeObject>                         Nodes;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          Transforms;                                               // 0x0010(0x0010) (ZeroConstructor)
	TMap<struct FName, int>                            NodeNameToIndexMapping;                                   // 0x0020(0x0050) (ZeroConstructor)
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// 0x0078
struct FNodeHierarchyWithUserData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FNodeHierarchyData                          Hierarchy;                                                // 0x0008(0x0070)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
