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

// Enum ClothingSystemRuntimeNv.EClothingWindMethod
enum class EClothingWindMethod : uint8_t
{
	EClothingWindMethod__Legacy    = 0,
	EClothingWindMethod__Accurate  = 1,
	EClothingWindMethod__EClothingWindMethod_MAX = 2
};


// Enum ClothingSystemRuntimeNv.MaskTarget_PhysMesh
enum class EMaskTarget_PhysMesh : uint8_t
{
	MaskTarget_PhysMesh__None      = 0,
	MaskTarget_PhysMesh__MaxDistance = 1,
	MaskTarget_PhysMesh__BackstopDistance = 2,
	MaskTarget_PhysMesh__BackstopRadius = 3,
	MaskTarget_PhysMesh__AnimDriveMultiplier = 4,
	MaskTarget_PhysMesh__MaskTarget_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetup
// 0x0010
struct FClothConstraintSetup
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StiffnessMultiplier;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StretchLimit;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CompressionLimit;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeNv.ClothConfig
// 0x00D4
struct FClothConfig
{
	EClothingWindMethod                                WindMethod;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FClothConstraintSetup                       VerticalConstraintConfig;                                 // 0x0004(0x0010) (Edit)
	struct FClothConstraintSetup                       HorizontalConstraintConfig;                               // 0x0014(0x0010) (Edit)
	struct FClothConstraintSetup                       BendConstraintConfig;                                     // 0x0024(0x0010) (Edit)
	struct FClothConstraintSetup                       ShearConstraintConfig;                                    // 0x0034(0x0010) (Edit)
	float                                              SelfCollisionRadius;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionCullScale;                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Damping;                                                  // 0x0050(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindDragCoefficient;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindLiftCoefficient;                                      // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearDrag;                                               // 0x0068(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularDrag;                                              // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearInertiaScale;                                       // 0x0080(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularInertiaScale;                                      // 0x008C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CentrifugalInertiaScale;                                  // 0x0098(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SolverFrequency;                                          // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GravityOverride;                                          // 0x00B0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseGravityOverride;                                      // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TetherStiffness;                                          // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TetherLimit;                                              // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveSpringStiffness;                                 // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveDamperStiffness;                                 // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeNv.ClothPhysicalMeshData
// 0x00A8
struct FClothPhysicalMeshData
{
	TArray<struct FVector>                             Vertices;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<uint32_t>                                   Indices;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      MaxDistances;                                             // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      BackstopDistances;                                        // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      BackstopRadiuses;                                         // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      AnimDriveMultipliers;                                     // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      InverseMasses;                                            // 0x0070(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothVertBoneData>                  BoneData;                                                 // 0x0080(0x0010) (Edit, ZeroConstructor)
	int                                                MaxBoneWeights;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumFixedVerts;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<uint32_t>                                   SelfCollisionIndices;                                     // 0x0098(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ClothingSystemRuntimeNv.ClothLODData
// 0x0108
struct FClothLODData
{
	struct FClothPhysicalMeshData                      PhysicalMeshData;                                         // 0x0000(0x00A8) (Edit)
	struct FClothCollisionData                         CollisionData;                                            // 0x00A8(0x0040) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00E8(0x0020) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeNv.ClothParameterMask_PhysMesh
// 0x0030
struct FClothParameterMask_PhysMesh
{
	struct FName                                       MaskName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EMaskTarget_PhysMesh                               CurrentTarget;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x000C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<float>                                      Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      bEnabled;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
