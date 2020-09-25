#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// 0x0000 (0x0028 - 0x0028)
class UClothingAssetCustomData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCustomData");
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// 0x0060 (0x00A8 - 0x0048)
class UClothingAssetCommon : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClothConfigBase*                            ClothSimConfig;                                           // 0x0050(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
	TArray<class UClothLODDataBase*>                   ClothLODData;                                             // 0x0058(0x0010) (ZeroConstructor)
	TArray<int>                                        LodMap;                                                   // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FName>                               UsedBoneNames;                                            // 0x0078(0x0010) (ZeroConstructor)
	TArray<int>                                        UsedBoneIndices;                                          // 0x0088(0x0010) (ZeroConstructor)
	int                                                ReferenceBoneIndex;                                       // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClothingAssetCustomData*                    CustomData;                                               // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCommon");
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothLODDataBase
// 0x0068 (0x0090 - 0x0028)
class UClothLODDataBase : public UObject
{
public:
	class UClothPhysicalMeshDataBase*                  PhysicalMeshData;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FClothCollisionData                         CollisionData;                                            // 0x0030(0x0040) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothLODDataBase");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
