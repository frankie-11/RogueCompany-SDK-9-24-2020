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

// Class ChaosSolverEngine.ChaosDebugDrawComponent
// 0x0008 (0x00B8 - 0x00B0)
class UChaosDebugDrawComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosDebugDrawComponent");
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosEventListenerComponent
// 0x0008 (0x00B8 - 0x00B0)
class UChaosEventListenerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosEventListenerComponent");
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// 0x01B8 (0x0270 - 0x00B8)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x00B8(0x0110) MISSED OFFSET
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                              // 0x01C8(0x0050) (ZeroConstructor)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                                  // 0x0218(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosGameplayEventDispatcher");
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UChaosNotifyHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosNotifyHandlerInterface");
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary");
		return ptr;
	}


	struct FHitResult STATIC_ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo* PhysicsCollision);
};


// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (0x0028 - 0x0028)
class UChaosSolver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolver");
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosSolverActor
// 0x0088 (0x02A0 - 0x0218)
class AChaosSolverActor : public AActor
{
public:
	float                                              TimeStepMultiplier;                                       // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CollisionIterations;                                      // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PushOutIterations;                                        // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PushOutPairIterations;                                    // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClusterConnectionFactor;                                  // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EClusterConnectionTypeEnum                         ClusterUnionConnectionType;                               // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DoGenerateCollisionData;                                  // 0x022D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSolverCollisionFilterSettings              CollisionFilterSettings;                                  // 0x0230(0x0010) (Edit)
	unsigned char                                      DoGenerateBreakingData;                                   // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSolverBreakingFilterSettings               BreakingFilterSettings;                                   // 0x0244(0x0010) (Edit)
	unsigned char                                      DoGenerateTrailingData;                                   // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSolverTrailingFilterSettings               TrailingFilterSettings;                                   // 0x0258(0x0010) (Edit)
	unsigned char                                      bHasFloor;                                                // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloorHeight;                                              // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MassScale;                                                // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FChaosDebugSubstepControl                   ChaosDebugSubstepControl;                                 // 0x0274(0x0003) (Edit)
	class UBillboardComponent*                         SpriteComponent;                                          // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0280(0x0018) MISSED OFFSET
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                         // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverActor");
		return ptr;
	}


	void SetSolverActive(bool* bActive);
	void SetAsCurrentWorldSolver();
};


// Class ChaosSolverEngine.ChaosSolverSettings
// 0x0020 (0x0058 - 0x0038)
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FSoftClassPath                              DefaultChaosSolverActorClass;                             // 0x0040(0x0018) (Edit, ZeroConstructor, Config, NoClear)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
