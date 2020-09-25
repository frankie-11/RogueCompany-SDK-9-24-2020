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

// Class NavigationSystem.NavArea
// 0x0018 (0x0048 - 0x0030)
class UNavArea : public UNavAreaBase
{
public:
	float                                              DefaultCost;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FixedAreaEnteringCost;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x003C(0x0004) (Edit, Config)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0040(0x0001) (Config BITFIELD: 0101)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0040(0x0001) (Config BITFIELD: 0202)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0040(0x0001) (Config BITFIELD: 0404)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0040(0x0001) (Config BITFIELD: 0808)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0040(0x0001) (Config BITFIELD: 1010)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0040(0x0001) (Config BITFIELD: 2020)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0040(0x0001) (Config BITFIELD: 4040)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0040(0x0001) (Config BITFIELD: 8080)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0041(0x0001) (Config BITFIELD: 0101)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0041(0x0001) (Config BITFIELD: 0202)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0041(0x0001) (Config BITFIELD: 0404)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0041(0x0001) (Config BITFIELD: 0808)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0041(0x0001) (Config BITFIELD: 1010)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0041(0x0001) (Config BITFIELD: 2020)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0041(0x0001) (Config BITFIELD: 4040)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0041(0x0001) (Config BITFIELD: 8080)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		return ptr;
	}

};


// Class NavigationSystem.NavigationQueryFilter
// 0x0020 (0x0048 - 0x0028)
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>               Areas;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FNavigationFilterFlags                      IncludeFlags;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavigationFilterFlags                      ExcludeFlags;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		return ptr;
	}

};


// Class NavigationSystem.NavRelevantComponent
// 0x0030 (0x00E0 - 0x00B0)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00B0(0x0024) MISSED OFFSET
	unsigned char                                      bAttachToOwnersRoot : 1;                                  // 0x00D4(0x0001) ( BITFIELD: 0101)
	class UObject*                                     CachedNavParent;                                          // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		return ptr;
	}


	void SetNavigationRelevancy(bool* bRelevant);
};


// Class NavigationSystem.NavModifierComponent
// 0x0060 (0x0140 - 0x00E0)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	class UClass*                                      AreaClass;                                                // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FailsafeExtent;                                           // 0x00E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeAgentHeight : 1;                                  // 0x00F4(0x0001) (Edit, Config BITFIELD: 0101)
	unsigned char                                      UnknownData00[0x4B];                                      // 0x00F5(0x004B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		return ptr;
	}


	void SetAreaClass(class UClass** NewAreaClass);
};


// Class NavigationSystem.NavModifierVolume
// 0x0010 (0x0260 - 0x0250)
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0250(0x0008) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		return ptr;
	}


	void SetAreaClass(class UClass** NewAreaClass);
};


// Class NavigationSystem.NavigationData
// 0x01E0 (0x03F8 - 0x0218)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         RenderingComp;                                            // 0x0220(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	struct FNavDataConfig                              NavDataConfig;                                            // 0x0228(0x0078)
	unsigned char                                      bEnableDrawing : 1;                                       // 0x02A0(0x0001) (Edit, Transient BITFIELD: 0101)
	unsigned char                                      bForceRebuildOnLoad : 1;                                  // 0x02A0(0x0001) (Edit, Config BITFIELD: 0202)
	unsigned char                                      bAutoDestroyWhenNoNavigation : 1;                         // 0x02A0(0x0001) (Edit, Config BITFIELD: 0404)
	unsigned char                                      bCanBeMainNavData : 1;                                    // 0x02A0(0x0001) (Edit, Config BITFIELD: 0808)
	unsigned char                                      bCanSpawnOnRebuild : 1;                                   // 0x02A0(0x0001) (Edit, Config, EditConst BITFIELD: 1010)
	unsigned char                                      bRebuildAtRuntime : 1;                                    // 0x02A0(0x0001) (Config, Deprecated BITFIELD: 2020)
	ERuntimeGenerationType                             RuntimeGeneration;                                        // 0x02A4(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ObservedPathsTickInterval;                                // 0x02A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           DataVersion;                                              // 0x02AC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE0];                                      // 0x02B0(0x00E0) MISSED OFFSET
	TArray<struct FSupportedAreaData>                  SupportedAreas;                                           // 0x0390(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x58];                                      // 0x03A0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		return ptr;
	}

};


// Class NavigationSystem.AbstractNavData
// 0x0000 (0x03F8 - 0x03F8)
class AAbstractNavData : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		return ptr;
	}

};


// Class NavigationSystem.CrowdManagerBase
// 0x0000 (0x0028 - 0x0028)
class UCrowdManagerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Default
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Default : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_LowHeight
// 0x0000 (0x0048 - 0x0048)
class UNavArea_LowHeight : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Null
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Null : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Obstacle
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Obstacle : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta
// 0x0000 (0x0048 - 0x0048)
class UNavAreaMeta : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00C8 - 0x0048)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	class UClass*                                      Agent0Area;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent1Area;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent2Area;                                               // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent3Area;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent4Area;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent5Area;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent6Area;                                               // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent7Area;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent8Area;                                               // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent9Area;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent10Area;                                              // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent11Area;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent12Area;                                              // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent13Area;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent14Area;                                              // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent15Area;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		return ptr;
	}

};


// Class NavigationSystem.NavCollision
// 0x0068 (0x00D8 - 0x0070)
class UNavCollision : public UNavCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	TArray<struct FNavCollisionCylinder>               CylinderCollision;                                        // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNavCollisionBox>                    BoxCollision;                                             // 0x0090(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      AreaClass;                                                // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGatherConvexGeometry : 1;                                // 0x00A8(0x0001) (Edit, Config BITFIELD: 0101)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x00A8(0x0001) (Edit, Config BITFIELD: 0202)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x00A9(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraph
// 0x0000 (0x03F8 - 0x03F8)
class ANavigationGraph : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNode
// 0x0000 (0x0218 - 0x0218)
class ANavigationGraphNode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNodeComponent
// 0x0020 (0x0230 - 0x0210)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0210(0x0010) MISSED OFFSET
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                        // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                        // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationInvokerComponent
// 0x0008 (0x00B8 - 0x00B0)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                              TileGenerationRadius;                                     // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TileRemovalRadius;                                        // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationPath
// 0x0060 (0x0088 - 0x0028)
class UNavigationPath : public UObject
{
public:
	struct FScriptMulticastDelegate                    PathUpdatedNotifier;                                      // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray<struct FVector>                             PathPoints;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0049(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		return ptr;
	}


	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	struct FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag>* DoRecalculation);
	void EnableDebugDrawing(bool* bShouldDrawDebugData, struct FLinearColor* PathColor);
};


// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (0x0028 - 0x0028)
class UNavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		return ptr;
	}

};


// Class NavigationSystem.NavigationSystemV1
// 0x0510 (0x0538 - 0x0028)
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                             MainNavData;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class ANavigationData*                             AbstractNavData;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       DefaultAgentName;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty NavigationSystem.NavigationSystemV1.CrowdManagerClass
	unsigned char                                      bAutoCreateNavigationData : 1;                            // 0x0068(0x0001) (Edit, Config BITFIELD: 0101)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0068(0x0001) (Edit, Config BITFIELD: 0202)
	unsigned char                                      bAllowClientSideNavigation : 1;                           // 0x0068(0x0001) (Edit, Config BITFIELD: 0404)
	unsigned char                                      bShouldDiscardSubLevelNavData : 1;                        // 0x0068(0x0001) (Edit, Config BITFIELD: 0808)
	unsigned char                                      bTickWhilePaused : 1;                                     // 0x0068(0x0001) (Edit, Config BITFIELD: 1010)
	unsigned char                                      bSupportRebuilding : 1;                                   // 0x0068(0x0001) ( BITFIELD: 2020)
	unsigned char                                      bInitialBuildingLocked : 1;                               // 0x0068(0x0001) (Edit, Config BITFIELD: 4040)
	unsigned char                                      bSkipAgentHeightCheckWhenPickingNavData : 1;              // 0x0069(0x0001) (Edit, Config BITFIELD: 0101)
	ENavDataGatheringModeConfig                        DataGatheringMode;                                        // 0x006C(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bGenerateNavigationOnlyAroundNavigationInvokers : 1;      // 0x0070(0x0001) (Edit, Config, DisableEditOnInstance BITFIELD: 0101)
	float                                              ActiveTilesUpdateInterval;                                // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FNavDataConfig>                      SupportedAgents;                                          // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	struct FNavAgentSelector                           SupportedAgentsMask;                                      // 0x0088(0x0004) (Edit, Config)
	TArray<class ANavigationData*>                     NavDataSet;                                               // 0x0090(0x0010) (ZeroConstructor)
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                 // 0x00A0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNavDataRegisteredEvent;                                 // 0x00C0(0x0001) (ZeroConstructor, Transient, InstancedReference)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00B0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnNavigationGenerationFinishedDelegate;                   // 0x00D0(0x0001) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x00D0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData04[0xDC];                                      // 0x00E0(0x00DC) MISSED OFFSET
	EFNavigationSystemRunMode                          OperationMode;                                            // 0x01BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x357];                                     // 0x01BD(0x0357) MISSED OFFSET
	float                                              DirtyAreasUpdateFreq;                                     // 0x0514(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x20];                                      // 0x0518(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		return ptr;
	}


	void UnregisterNavigationInvoker(class AActor** Invoker);
	void STATIC_SimpleMoveToLocation(class AController** Controller, struct FVector* Goal);
	void STATIC_SimpleMoveToActor(class AController** Controller, class AActor** Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int* MaxNumberOfJobs);
	void SetGeometryGatheringMode(ENavDataGatheringModeConfig* NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AActor** Invoker, float* TileGenerationRadius, float* TileRemovalRadius);
	struct FVector STATIC_ProjectPointToNavigation(class UObject** WorldContextObject, struct FVector* Point, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* QueryExtent);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume** NavVolume);
	bool STATIC_NavigationRaycast(class UObject** WorldContextObject, struct FVector* RayStart, struct FVector* RayEnd, class UClass** FilterClass, class AController** Querier, struct FVector* HitLocation);
	bool K2_ReplaceAreaInOctreeData(class UObject** Object, class UClass** OldArea, class UClass** NewArea);
	bool STATIC_K2_ProjectPointToNavigation(class UObject** WorldContextObject, struct FVector* Point, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* QueryExtent, struct FVector* ProjectedLocation);
	bool STATIC_K2_GetRandomReachablePointInRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* RandomLocation);
	bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* RandomLocation);
	bool STATIC_K2_GetRandomLocationInNavigableRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* RandomLocation);
	bool STATIC_IsNavigationBeingBuiltOrLocked(class UObject** WorldContextObject);
	bool STATIC_IsNavigationBeingBuilt(class UObject** WorldContextObject);
	struct FVector STATIC_GetRandomReachablePointInRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass);
	struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass);
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathLength(class UObject** WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class ANavigationData** NavData, class UClass** FilterClass, float* PathLength);
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathCost(class UObject** WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class ANavigationData** NavData, class UClass** FilterClass, float* PathCost);
	class UNavigationSystemV1* STATIC_GetNavigationSystem(class UObject** WorldContextObject);
	class UNavigationPath* STATIC_FindPathToLocationSynchronously(class UObject** WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class AActor** PathfindingContext, class UClass** FilterClass);
	class UNavigationPath* STATIC_FindPathToActorSynchronously(class UObject** WorldContextObject, struct FVector* PathStart, class AActor** GoalActor, float* TetherDistance, class AActor** PathfindingContext, class UClass** FilterClass);
};


// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (0x0058 - 0x0050)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	unsigned char                                      bStrictlyStatic : 1;                                      // 0x0050(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x0050(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bAutoSpawnMissingNavData : 1;                             // 0x0050(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0050(0x0001) (Edit BITFIELD: 0808)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		return ptr;
	}

};


// Class NavigationSystem.NavigationTestingActor
// 0x00E8 (0x0300 - 0x0218)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0218(0x0010) MISSED OFFSET
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationInvokerComponent*                 InvokerComponent;                                         // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bActAsNavigationInvoker : 1;                              // 0x0238(0x0001) (Edit BITFIELD: 0101)
	struct FNavAgentProperties                         NavAgentProps;                                            // 0x0240(0x0030) (Edit)
	struct FVector                                     QueryingExtent;                                           // 0x0270(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	class ANavigationData*                             MyNavData;                                                // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ProjectedLocation;                                        // 0x0288(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bProjectedLocationValid : 1;                              // 0x0294(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst BITFIELD: 0101)
	unsigned char                                      bSearchStart : 1;                                         // 0x0294(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bBacktracking : 1;                                        // 0x0294(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bUseHierarchicalPathfinding : 1;                          // 0x0294(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bGatherDetailedInfo : 1;                                  // 0x0294(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      bDrawDistanceToWall : 1;                                  // 0x0294(0x0001) (Edit BITFIELD: 2020)
	unsigned char                                      bShowNodePool : 1;                                        // 0x0294(0x0001) (Edit BITFIELD: 4040)
	unsigned char                                      bShowBestPath : 1;                                        // 0x0294(0x0001) (Edit BITFIELD: 8080)
	unsigned char                                      bShowDiffWithPreviousStep : 1;                            // 0x0295(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x0295(0x0001) (Edit BITFIELD: 0202)
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                          // 0x0298(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextCanvasOffset;                                         // 0x029C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPathExist : 1;                                           // 0x02A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst BITFIELD: 0101)
	unsigned char                                      bPathIsPartial : 1;                                       // 0x02A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst BITFIELD: 0202)
	unsigned char                                      bPathSearchOutOfNodes : 1;                                // 0x02A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst BITFIELD: 0404)
	float                                              PathfindingTime;                                          // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              PathCost;                                                 // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                PathfindingSteps;                                         // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class ANavigationTestingActor*                     OtherActor;                                               // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShowStepIndex;                                            // 0x02C8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	float                                              OffsetFromCornersDistance;                                // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x02D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkComponent
// 0x0010 (0x0420 - 0x0410)
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	TArray<struct FNavigationLink>                     Links;                                                    // 0x0410(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomComponent
// 0x00B0 (0x0190 - 0x00E0)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	uint32_t                                           NavLinkUserId;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      EnabledAreaClass;                                         // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DisabledAreaClass;                                        // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0100(0x0004) (Edit)
	struct FVector                                     LinkRelativeStart;                                        // 0x0104(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinkRelativeEnd;                                          // 0x0110(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                            // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLinkEnabled : 1;                                         // 0x0120(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bNotifyWhenEnabled : 1;                                   // 0x0120(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bNotifyWhenDisabled : 1;                                  // 0x0120(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bCreateBoxObstacle : 1;                                   // 0x0120(0x0001) (Edit BITFIELD: 0808)
	struct FVector                                     ObstacleOffset;                                           // 0x0124(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ObstacleExtent;                                           // 0x0130(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObstacleAreaClass;                                        // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastRadius;                                          // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastInterval;                                        // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                         // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0151(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkRenderingComponent
// 0x0000 (0x0410 - 0x0410)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkTrivial
// 0x0000 (0x0050 - 0x0050)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		return ptr;
	}

};


// Class NavigationSystem.NavMeshBoundsVolume
// 0x0008 (0x0258 - 0x0250)
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0250(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		return ptr;
	}

};


// Class NavigationSystem.NavMeshRenderingComponent
// 0x0010 (0x0420 - 0x0410)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UNavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavSystemConfigOverride
// 0x0010 (0x0228 - 0x0218)
class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                   // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	ENavSystemOverridePolicy                           OverridePolicy;                                           // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoadOnClient : 1;                                        // 0x0221(0x0001) (Edit, BlueprintVisible BITFIELD: 0101)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavSystemConfigOverride");
		return ptr;
	}

};


// Class NavigationSystem.NavTestRenderingComponent
// 0x0000 (0x0410 - 0x0410)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0000 (0x0048 - 0x0048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMesh
// 0x00B8 (0x04B0 - 0x03F8)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      bDrawTriangleEdges : 1;                                   // 0x03F8(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bDrawPolyEdges : 1;                                       // 0x03F8(0x0001) (Edit, Config BITFIELD: 0202)
	unsigned char                                      bDrawFilledPolys : 1;                                     // 0x03F8(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bDrawNavMeshEdges : 1;                                    // 0x03F8(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bDrawTileBounds : 1;                                      // 0x03F8(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      bDrawPathCollidingGeometry : 1;                           // 0x03F8(0x0001) (Edit BITFIELD: 2020)
	unsigned char                                      bDrawTileLabels : 1;                                      // 0x03F8(0x0001) (Edit BITFIELD: 4040)
	unsigned char                                      bDrawPolygonLabels : 1;                                   // 0x03F8(0x0001) (Edit BITFIELD: 8080)
	unsigned char                                      bDrawDefaultPolygonCost : 1;                              // 0x03F9(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bDrawLabelsOnPathNodes : 1;                               // 0x03F9(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bDrawNavLinks : 1;                                        // 0x03F9(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bDrawFailedNavLinks : 1;                                  // 0x03F9(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bDrawClusters : 1;                                        // 0x03F9(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      bDrawOctree : 1;                                          // 0x03F9(0x0001) (Edit BITFIELD: 2020)
	unsigned char                                      bDrawOctreeDetails : 1;                                   // 0x03F9(0x0001) (Edit BITFIELD: 4040)
	unsigned char                                      bDrawMarkedForbiddenPolys : 1;                            // 0x03F9(0x0001) (Edit BITFIELD: 8080)
	unsigned char                                      bDistinctlyDrawTilesBeingBuilt : 1;                       // 0x03FA(0x0001) (Config BITFIELD: 0101)
	unsigned char                                      bDrawNavMesh : 1;                                         // 0x03FA(0x0001) (Edit BITFIELD: 0202)
	float                                              DrawOffset;                                               // 0x03FC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bFixedTilePoolSize : 1;                                   // 0x0400(0x0001) (Edit, Config BITFIELD: 0101)
	int                                                TilePoolSize;                                             // 0x0404(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TileSizeUU;                                               // 0x0408(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellSize;                                                 // 0x040C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellHeight;                                               // 0x0410(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x0414(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0418(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxHeight;                                           // 0x041C(0x0004) (Edit, ZeroConstructor, Config, EditConst, IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x0420(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxStepHeight;                                       // 0x0424(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRegionArea;                                            // 0x0428(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MergeRegionSize;                                          // 0x042C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSimplificationError;                                   // 0x0430(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSimultaneousTileGenerationJobsCount;                   // 0x0434(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                TileNumberHardLimit;                                      // 0x0438(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PolyRefTileBits;                                          // 0x043C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefNavPolyBits;                                       // 0x0440(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefSaltBits;                                          // 0x0444(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     NavMeshOriginOffset;                                      // 0x0448(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultDrawDistance;                                      // 0x0454(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxSearchNodes;                                    // 0x0458(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxHierarchicalSearchNodes;                        // 0x045C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                       // 0x0460(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                        // 0x0461(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                RegionChunkSplits;                                        // 0x0464(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                LayerChunkSplits;                                         // 0x0468(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bSortNavigationAreasByCost : 1;                           // 0x046C(0x0001) (Edit, Config BITFIELD: 0101)
	unsigned char                                      bPerformVoxelFiltering : 1;                               // 0x046C(0x0001) (Edit, Config BITFIELD: 0202)
	unsigned char                                      bMarkLowHeightAreas : 1;                                  // 0x046C(0x0001) (Edit, Config BITFIELD: 0404)
	unsigned char                                      bFilterLowSpanSequences : 1;                              // 0x046C(0x0001) (Edit, Config BITFIELD: 0808)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                          // 0x046C(0x0001) (Edit, Config BITFIELD: 1010)
	unsigned char                                      bDoFullyAsyncNavDataGathering : 1;                        // 0x046C(0x0001) (Edit, Config BITFIELD: 2020)
	unsigned char                                      bUseBetterOffsetsFromCorners : 1;                         // 0x046C(0x0001) (Config BITFIELD: 4040)
	unsigned char                                      bStoreEmptyTileLayers : 1;                                // 0x046C(0x0001) (Config BITFIELD: 8080)
	unsigned char                                      bUseVirtualFilters : 1;                                   // 0x046D(0x0001) (Config BITFIELD: 0101)
	unsigned char                                      bAllowNavLinkAsPathEnd : 1;                               // 0x046D(0x0001) (Config BITFIELD: 0202)
	unsigned char                                      bUseVoxelCache : 1;                                       // 0x046D(0x0001) (Config BITFIELD: 0404)
	float                                              TileSetUpdateInterval;                                    // 0x0470(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HeuristicScale;                                           // 0x0474(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VerticalDeviationFromGroundCompensation;                  // 0x0478(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x047C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		return ptr;
	}


	bool K2_ReplaceAreaInTileBounds(struct FBox* Bounds, class UClass** OldArea, class UClass** NewArea, bool* ReplaceLinks);
};


// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0010 (0x0040 - 0x0030)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
