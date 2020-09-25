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

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0028 - 0x0028)
class UMeshReconstructorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return ptr;
	}


	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMeshComponent** Mesh);
};


// Class MRMesh.MockDataMeshTrackerComponent
// 0x0070 (0x0280 - 0x0210)
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	unsigned char                                      ScanWorld;                                                // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RequestNormals;                                           // 0x0219(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RequestVertexConfidence;                                  // 0x021A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMeshTrackerVertexColorMode                        VertexColorMode;                                          // 0x021B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FColor>                              BlockVertexColors;                                        // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                VertexColorFromConfidenceZero;                            // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VertexColorFromConfidenceOne;                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateInterval;                                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMRMeshComponent*                            MRMesh;                                                   // 0x0258(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0260(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MockDataMeshTrackerComponent");
		return ptr;
	}


	void OnMockDataMeshTrackerUpdated__DelegateSignature(int* Index, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<float>* Confidence);
	void DisconnectMRMesh(class UMRMeshComponent** InMRMeshPtr);
	void ConnectMRMesh(class UMRMeshComponent** InMRMeshPtr);
};


// Class MRMesh.MRMeshComponent
// 0x0070 (0x0480 - 0x0410)
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCreateMeshProxySections;                                 // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUpdateNavMeshOnMeshUpdate;                               // 0x0419(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNeverCreateCollisionMesh;                                // 0x041A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0420(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UBodySetup*>                          BodySetups;                                               // 0x0428(0x0010) (ZeroConstructor, Transient)
	class UMaterialInterface*                          WireframeMaterial;                                        // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0440(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return ptr;
	}


	bool IsConnected();
	void ForceNavMeshUpdate();
	void Clear();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
