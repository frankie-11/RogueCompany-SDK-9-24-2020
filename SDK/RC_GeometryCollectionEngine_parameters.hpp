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

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
struct UChaosDestructionListener_SortTrailingEvents_Params
{
	TArray<struct FChaosTrailingEventData>             TrailingEvents;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	EChaosTrailingSortMethod*                          SortMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
struct UChaosDestructionListener_SortCollisionEvents_Params
{
	TArray<struct FChaosCollisionEventData>            CollisionEvents;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	EChaosCollisionSortMethod*                         SortMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
struct UChaosDestructionListener_SortBreakingEvents_Params
{
	TArray<struct FChaosBreakingEventData>             BreakingEvents;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	EChaosBreakingSortMethod*                          SortMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
struct UChaosDestructionListener_SetTrailingEventRequestSettings_Params
{
	struct FChaosTrailingEventRequestSettings*         InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
struct UChaosDestructionListener_SetTrailingEventEnabled_Params
{
	bool*                                              bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
struct UChaosDestructionListener_SetCollisionEventRequestSettings_Params
{
	struct FChaosCollisionEventRequestSettings*        InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
struct UChaosDestructionListener_SetCollisionEventEnabled_Params
{
	bool*                                              bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
struct UChaosDestructionListener_SetBreakingEventRequestSettings_Params
{
	struct FChaosBreakingEventRequestSettings*         InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
struct UChaosDestructionListener_SetBreakingEventEnabled_Params
{
	bool*                                              bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
struct UChaosDestructionListener_RemoveGeometryCollectionActor_Params
{
	class AGeometryCollectionActor**                   GeometryCollectionActor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
struct UChaosDestructionListener_RemoveChaosSolverActor_Params
{
	class AChaosSolverActor**                          ChaosSolverActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
struct UChaosDestructionListener_IsEventListening_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
struct UChaosDestructionListener_AddGeometryCollectionActor_Params
{
	class AGeometryCollectionActor**                   GeometryCollectionActor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
struct UChaosDestructionListener_AddChaosSolverActor_Params
{
	class AChaosSolverActor**                          ChaosSolverActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
struct AGeometryCollectionActor_RaycastSingle_Params
{
	struct FVector*                                    start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
struct UGeometryCollectionComponent_SetNotifyBreaks_Params
{
	bool*                                              bNewNotifyBreaks;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
struct UGeometryCollectionComponent_ReceivePhysicsCollision_Params
{
	struct FChaosPhysicsCollisionInfo*                 CollisionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params
{
	class UGeometryCollectionComponent**               FracturedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params
{
	class UGeometryCollectionComponent**               FracturedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
struct UGeometryCollectionComponent_ApplyPhysicsField_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGeometryCollectionPhysicsTypeEnum*                Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemMetaData**                       MetaData;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase**                             Field;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
struct UGeometryCollectionComponent_ApplyKinematicField_Params
{
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
struct USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Params
{
	struct FChaosPhysicsCollisionInfo*                 CollisionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
struct UStaticMeshSimulationComponent_ReceivePhysicsCollision_Params
{
	struct FChaosPhysicsCollisionInfo*                 CollisionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
struct UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
