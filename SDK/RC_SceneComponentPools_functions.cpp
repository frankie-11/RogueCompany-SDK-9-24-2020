// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SceneComponentPools.ParticleSystemPoolComponentBase.OnPSCFinished
// (Native, Protected)
// Parameters:
// class UParticleSystemComponent** InPSC                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParticleSystemPoolComponentBase::OnPSCFinished(class UParticleSystemComponent** InPSC)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.ParticleSystemPoolComponentBase.OnPSCFinished");

	UParticleSystemPoolComponentBase_OnPSCFinished_Params params;
	params.InPSC = InPSC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneComponentPools.PoolableDecalComponent.ForceReturnToPool
// (Final, Native, Public, BlueprintCallable)

void UPoolableDecalComponent::ForceReturnToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.PoolableDecalComponent.ForceReturnToPool");

	UPoolableDecalComponent_ForceReturnToPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnStaticMeshAttached
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh**            Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FPoolAttachmentInfo*    AttachInfo                     (Parm)
// class UStaticMeshComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStaticMeshComponent* USceneComponentPoolStatics::STATIC_SpawnStaticMeshAttached(class UStaticMesh** Mesh, class USceneComponent** AttachToComponent, struct FPoolAttachmentInfo* AttachInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnStaticMeshAttached");

	USceneComponentPoolStatics_SpawnStaticMeshAttached_Params params;
	params.Mesh = Mesh;
	params.AttachToComponent = AttachToComponent;
	params.AttachInfo = AttachInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnSkeletalMeshAttached
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh**          Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 AnimClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FPoolAttachmentInfo*    AttachInfo                     (Parm)
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* USceneComponentPoolStatics::STATIC_SpawnSkeletalMeshAttached(class USkeletalMesh** Mesh, class UClass** AnimClass, class USceneComponent** AttachToComponent, struct FPoolAttachmentInfo* AttachInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnSkeletalMeshAttached");

	USceneComponentPoolStatics_SpawnSkeletalMeshAttached_Params params;
	params.Mesh = Mesh;
	params.AnimClass = AnimClass;
	params.AttachToComponent = AttachToComponent;
	params.AttachInfo = AttachInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UParticleSystem**        EmitterTemplate                (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* USceneComponentPoolStatics::STATIC_SpawnEmitterAttached(class UParticleSystem** EmitterTemplate, class USceneComponent** AttachToComponent, struct FName* AttachPointName, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale, TEnumAsByte<EAttachLocation>* LocationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAttached");

	USceneComponentPoolStatics_SpawnEmitterAttached_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.LocationType = LocationType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem**        EmitterTemplate                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* USceneComponentPoolStatics::STATIC_SpawnEmitterAtLocation(class UObject** WorldContextObject, class UParticleSystem** EmitterTemplate, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAtLocation");

	USceneComponentPoolStatics_SpawnEmitterAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EmitterTemplate = EmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     DecalMaterial                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DecalSize                      (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Lifespan                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseGunshotDecalPool           (Parm, ZeroConstructor, IsPlainOldData)
// class UPoolableDecalComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPoolableDecalComponent* USceneComponentPoolStatics::STATIC_SpawnDecalAttached(class UMaterialInterface** DecalMaterial, struct FVector* DecalSize, class USceneComponent** AttachToComponent, struct FName* AttachPointName, struct FVector* Location, struct FRotator* Rotation, TEnumAsByte<EAttachLocation>* LocationType, float* Lifespan, bool* bUseGunshotDecalPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAttached");

	USceneComponentPoolStatics_SpawnDecalAttached_Params params;
	params.DecalMaterial = DecalMaterial;
	params.DecalSize = DecalSize;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.Lifespan = Lifespan;
	params.bUseGunshotDecalPool = bUseGunshotDecalPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     DecalMaterial                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DecalSize                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Lifespan                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseGunshotDecalPool           (Parm, ZeroConstructor, IsPlainOldData)
// class UPoolableDecalComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPoolableDecalComponent* USceneComponentPoolStatics::STATIC_SpawnDecalAtLocation(class UObject** WorldContextObject, class UMaterialInterface** DecalMaterial, struct FVector* DecalSize, struct FVector* Location, struct FRotator* Rotation, float* Lifespan, bool* bUseGunshotDecalPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAtLocation");

	USceneComponentPoolStatics_SpawnDecalAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DecalMaterial = DecalMaterial;
	params.DecalSize = DecalSize;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Lifespan = Lifespan;
	params.bUseGunshotDecalPool = bUseGunshotDecalPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USceneComponentPoolStatics::STATIC_ReleaseSpawnedStaticMeshes(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshes");

	USceneComponentPoolStatics_ReleaseSpawnedStaticMeshes_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent**   StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USceneComponentPoolStatics::STATIC_ReleaseSpawnedStaticMeshComponent(class UStaticMeshComponent** StaticMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshComponent");

	USceneComponentPoolStatics_ReleaseSpawnedStaticMeshComponent_Params params;
	params.StaticMeshComponent = StaticMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh**            StaticMeshComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FPoolAttachmentInfo*    AttachInfo                     (Parm)

void USceneComponentPoolStatics::STATIC_ReleaseSpawnedStaticMesh(class UStaticMesh** StaticMeshComponent, class USceneComponent** AttachToComponent, struct FPoolAttachmentInfo* AttachInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMesh");

	USceneComponentPoolStatics_ReleaseSpawnedStaticMesh_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.AttachToComponent = AttachToComponent;
	params.AttachInfo = AttachInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USceneComponentPoolStatics::STATIC_ReleaseSpawnedSkeletalMeshes(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshes");

	USceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshes_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent** SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USceneComponentPoolStatics::STATIC_ReleaseSpawnedSkeletalMeshComponent(class USkeletalMeshComponent** SkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshComponent");

	USceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshComponent_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh**          SkeletalMesh                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 AnimClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FPoolAttachmentInfo*    AttachInfo                     (Parm)

void USceneComponentPoolStatics::STATIC_ReleaseSpawnedSkeletalMesh(class USkeletalMesh** SkeletalMesh, class UClass** AnimClass, class USceneComponent** AttachToComponent, struct FPoolAttachmentInfo* AttachInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMesh");

	USceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.AnimClass = AnimClass;
	params.AttachToComponent = AttachToComponent;
	params.AttachInfo = AttachInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedEmitters
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USceneComponentPoolStatics::STATIC_ReleaseSpawnedEmitters(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedEmitters");

	USceneComponentPoolStatics_ReleaseSpawnedEmitters_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedDecals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USceneComponentPoolStatics::STATIC_ReleaseSpawnedDecals(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedDecals");

	USceneComponentPoolStatics_ReleaseSpawnedDecals_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
