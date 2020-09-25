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

// Class SceneComponentPools.BasePoolComponent
// 0x0020 (0x00D0 - 0x00B0)
class UBasePoolComponent : public UActorComponent
{
public:
	int                                                MaxPoolSize;                                              // 0x00B0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                StartingPoolSize;                                         // 0x00B4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ComponentClassName;                                       // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	EPoolOverflowHandling                              OverflowType;                                             // 0x00C8(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.BasePoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.DecalPoolComponent
// 0x0078 (0x0148 - 0x00D0)
class UDecalPoolComponent : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	class UClass*                                      PooledDecalComponentClass;                                // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UPoolableDecalComponent*>             UnusedComponentsArray;                                    // 0x00E0(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty SceneComponentPools.DecalPoolComponent.UsedComponentsSet
	class UPoolableDecalComponent*                     PeekedDecalComponent;                                     // 0x0140(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.DecalPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.GunshotDecalPoolComponent
// 0x0000 (0x0148 - 0x0148)
class UGunshotDecalPoolComponent : public UDecalPoolComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.GunshotDecalPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.ParticleSystemPoolComponentBase
// 0x0080 (0x0150 - 0x00D0)
class UParticleSystemPoolComponentBase : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	class UClass*                                      PooledParticleSystemComponentClass;                       // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            UnusedComponentsArray;                                    // 0x00E0(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty SceneComponentPools.ParticleSystemPoolComponentBase.UsedComponentsSet
	class UParticleSystemComponent*                    PeekedParticleSystemComponent;                            // 0x0140(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bClearTemplateWhenReturnedToPool;                         // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.ParticleSystemPoolComponentBase");
		return ptr;
	}


	void OnPSCFinished(class UParticleSystemComponent** InPSC);
};


// Class SceneComponentPools.ParticleSystemPoolComponent
// 0x0000 (0x0150 - 0x0150)
class UParticleSystemPoolComponent : public UParticleSystemPoolComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.ParticleSystemPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.PoolableDecalComponent
// 0x0030 (0x0280 - 0x0250)
class UPoolableDecalComponent : public UDecalComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDecalReturnedToPoolDelegate;                            // 0x0260(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0250(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      bInUse;                                                   // 0x0270(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0271(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.PoolableDecalComponent");
		return ptr;
	}


	void ForceReturnToPool();
};


// Class SceneComponentPools.SceneComponentPoolStatics
// 0x0000 (0x0028 - 0x0028)
class USceneComponentPoolStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.SceneComponentPoolStatics");
		return ptr;
	}


	class UStaticMeshComponent* STATIC_SpawnStaticMeshAttached(class UStaticMesh** Mesh, class USceneComponent** AttachToComponent, struct FPoolAttachmentInfo* AttachInfo);
	class USkeletalMeshComponent* STATIC_SpawnSkeletalMeshAttached(class USkeletalMesh** Mesh, class UClass** AnimClass, class USceneComponent** AttachToComponent, struct FPoolAttachmentInfo* AttachInfo);
	class UParticleSystemComponent* STATIC_SpawnEmitterAttached(class UParticleSystem** EmitterTemplate, class USceneComponent** AttachToComponent, struct FName* AttachPointName, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale, TEnumAsByte<EAttachLocation>* LocationType);
	class UParticleSystemComponent* STATIC_SpawnEmitterAtLocation(class UObject** WorldContextObject, class UParticleSystem** EmitterTemplate, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale);
	class UPoolableDecalComponent* STATIC_SpawnDecalAttached(class UMaterialInterface** DecalMaterial, struct FVector* DecalSize, class USceneComponent** AttachToComponent, struct FName* AttachPointName, struct FVector* Location, struct FRotator* Rotation, TEnumAsByte<EAttachLocation>* LocationType, float* Lifespan, bool* bUseGunshotDecalPool);
	class UPoolableDecalComponent* STATIC_SpawnDecalAtLocation(class UObject** WorldContextObject, class UMaterialInterface** DecalMaterial, struct FVector* DecalSize, struct FVector* Location, struct FRotator* Rotation, float* Lifespan, bool* bUseGunshotDecalPool);
	void STATIC_ReleaseSpawnedStaticMeshes(class UObject** WorldContextObject);
	void STATIC_ReleaseSpawnedStaticMeshComponent(class UStaticMeshComponent** StaticMeshComponent);
	void STATIC_ReleaseSpawnedStaticMesh(class UStaticMesh** StaticMeshComponent, class USceneComponent** AttachToComponent, struct FPoolAttachmentInfo* AttachInfo);
	void STATIC_ReleaseSpawnedSkeletalMeshes(class UObject** WorldContextObject);
	void STATIC_ReleaseSpawnedSkeletalMeshComponent(class USkeletalMeshComponent** SkeletalMeshComponent);
	void STATIC_ReleaseSpawnedSkeletalMesh(class USkeletalMesh** SkeletalMesh, class UClass** AnimClass, class USceneComponent** AttachToComponent, struct FPoolAttachmentInfo* AttachInfo);
	void STATIC_ReleaseSpawnedEmitters(class UObject** WorldContextObject);
	void STATIC_ReleaseSpawnedDecals(class UObject** WorldContextObject);
};


// Class SceneComponentPools.SkeletalMeshPoolComponent
// 0x0078 (0x0148 - 0x00D0)
class USkeletalMeshPoolComponent : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              UnusedComponentsArray;                                    // 0x00D8(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00E8(0x0050) UNKNOWN PROPERTY: SetProperty SceneComponentPools.SkeletalMeshPoolComponent.UsedComponentsSet
	class USkeletalMeshComponent*                      PeekedSkeletalMeshComponent;                              // 0x0138(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PooledSkeletalMeshComponentClass;                         // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.SkeletalMeshPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.StaticMeshPoolComponent
// 0x0078 (0x0148 - 0x00D0)
class UStaticMeshPoolComponent : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                UnusedComponentsArray;                                    // 0x00D8(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00E8(0x0050) UNKNOWN PROPERTY: SetProperty SceneComponentPools.StaticMeshPoolComponent.UsedComponentsSet
	class UStaticMeshComponent*                        PeekedStaticMeshComponent;                                // 0x0138(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PooledStaticMeshComponentClass;                           // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.StaticMeshPoolComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
