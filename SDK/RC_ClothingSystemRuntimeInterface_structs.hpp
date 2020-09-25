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

// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
// 0x0034
struct FClothVertBoneData
{
	int                                                NumInfluences;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           BoneIndices[0x8];                                         // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              BoneWeights[0x8];                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// 0x0014
struct FClothCollisionPrim_Sphere
{
	int                                                BoneIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalPosition;                                            // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// 0x0008
struct FClothCollisionPrim_SphereConnection
{
	int                                                SphereIndices[0x2];                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// 0x0018
struct FClothCollisionPrim_Convex
{
	TArray<struct FPlane>                              Planes;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                BoneIndex;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
// 0x001C
struct FClothCollisionPrim_Box
{
	int                                                BoneIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalMin;                                                 // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalMax;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// 0x0040
struct FClothCollisionData
{
	TArray<struct FClothCollisionPrim_Sphere>          Spheres;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothCollisionPrim_Convex>          Convexes;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothCollisionPrim_Box>             Boxes;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ClothingSystemRuntimeInterface.PointWeightMap
// 0x0028
struct FPointWeightMap
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentTarget;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bEnabled;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
