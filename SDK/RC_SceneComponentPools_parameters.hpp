#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SceneComponentPools.ParticleSystemPoolComponentBase.OnPSCFinished
struct UParticleSystemPoolComponentBase_OnPSCFinished_Params
{
	class UParticleSystemComponent**                   InPSC;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.PoolableDecalComponent.ForceReturnToPool
struct UPoolableDecalComponent_ForceReturnToPool_Params
{
};

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnStaticMeshAttached
struct USceneComponentPoolStatics_SpawnStaticMeshAttached_Params
{
	class UStaticMesh**                                Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPoolAttachmentInfo*                        AttachInfo;                                               // (Parm)
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnSkeletalMeshAttached
struct USceneComponentPoolStatics_SpawnSkeletalMeshAttached_Params
{
	class USkeletalMesh**                              Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     AnimClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPoolAttachmentInfo*                        AttachInfo;                                               // (Parm)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAttached
struct USceneComponentPoolStatics_SpawnEmitterAttached_Params
{
	class UParticleSystem**                            EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAtLocation
struct USceneComponentPoolStatics_SpawnEmitterAtLocation_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem**                            EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAttached
struct USceneComponentPoolStatics_SpawnDecalAttached_Params
{
	class UMaterialInterface**                         DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DecalSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Lifespan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseGunshotDecalPool;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPoolableDecalComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAtLocation
struct USceneComponentPoolStatics_SpawnDecalAtLocation_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DecalSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Lifespan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseGunshotDecalPool;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPoolableDecalComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshes
struct USceneComponentPoolStatics_ReleaseSpawnedStaticMeshes_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshComponent
struct USceneComponentPoolStatics_ReleaseSpawnedStaticMeshComponent_Params
{
	class UStaticMeshComponent**                       StaticMeshComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMesh
struct USceneComponentPoolStatics_ReleaseSpawnedStaticMesh_Params
{
	class UStaticMesh**                                StaticMeshComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPoolAttachmentInfo*                        AttachInfo;                                               // (Parm)
};

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshes
struct USceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshes_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshComponent
struct USceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent**                     SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMesh
struct USceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh_Params
{
	class USkeletalMesh**                              SkeletalMesh;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     AnimClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPoolAttachmentInfo*                        AttachInfo;                                               // (Parm)
};

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedEmitters
struct USceneComponentPoolStatics_ReleaseSpawnedEmitters_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedDecals
struct USceneComponentPoolStatics_ReleaseSpawnedDecals_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
