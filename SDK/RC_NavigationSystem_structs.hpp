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

// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static = 0,
	ERuntimeGenerationType__DynamicModifiersOnly = 1,
	ERuntimeGenerationType__Dynamic = 2,
	ERuntimeGenerationType__LegacyGeneration = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4
};


// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost     = 0,
	ENavCostDisplay__HeuristicOnly = 1,
	ENavCostDisplay__RealCostOnly  = 2,
	ENavCostDisplay__ENavCostDisplay_MAX = 3
};


// Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override = 0,
	ENavSystemOverridePolicy__Append = 1,
	ENavSystemOverridePolicy__Skip = 2,
	ENavSystemOverridePolicy__ENavSystemOverridePolicy_MAX = 3
};


// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone  = 0,
	ERecastPartitioning__Watershed = 1,
	ERecastPartitioning__ChunkyMonotone = 2,
	ERecastPartitioning__ERecastPartitioning_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0018
struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TravelCostOverride;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnteringCostOverride;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsExcluded : 1;                                          // 0x0010(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bOverrideTravelCost : 1;                                  // 0x0010(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bOverrideEnteringCost : 1;                                // 0x0010(0x0001) (Edit BITFIELD: 0404)
};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                            // 0x0000(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bNavFlag1 : 1;                                            // 0x0000(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bNavFlag2 : 1;                                            // 0x0000(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bNavFlag3 : 1;                                            // 0x0000(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bNavFlag4 : 1;                                            // 0x0000(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      bNavFlag5 : 1;                                            // 0x0000(0x0001) (Edit BITFIELD: 2020)
	unsigned char                                      bNavFlag6 : 1;                                            // 0x0000(0x0001) (Edit BITFIELD: 4040)
	unsigned char                                      bNavFlag7 : 1;                                            // 0x0000(0x0001) (Edit BITFIELD: 8080)
	unsigned char                                      bNavFlag8 : 1;                                            // 0x0001(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bNavFlag9 : 1;                                            // 0x0001(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bNavFlag10 : 1;                                           // 0x0001(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bNavFlag11 : 1;                                           // 0x0001(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bNavFlag12 : 1;                                           // 0x0001(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      bNavFlag13 : 1;                                           // 0x0001(0x0001) (Edit BITFIELD: 2020)
	unsigned char                                      bNavFlag14 : 1;                                           // 0x0001(0x0001) (Edit BITFIELD: 4040)
	unsigned char                                      bNavFlag15 : 1;                                           // 0x0001(0x0001) (Edit BITFIELD: 8080)
};

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0020
struct FSupportedAreaData
{
	struct FString                                     AreaClassName;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                AreaID;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      AreaClass;                                                // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0014
struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0018
struct FNavCollisionBox
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavGraphNode
// 0x0018
struct FNavGraphNode
{
	class UObject*                                     Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0018
struct FNavGraphEdge
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// 0x0008 (0x0060 - 0x0058)
struct FNavLinkCustomInstanceData : public FActorComponentInstanceData
{
	uint32_t                                           NavLinkUserId;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// 0x0040
struct FRecastNavMeshGenerationProperties
{
	int                                                TilePoolSize;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TileSizeUU;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellSize;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellHeight;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentMaxStepHeight;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRegionArea;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MergeRegionSize;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimplificationError;                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TileNumberHardLimit;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                        // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RegionChunkSplits;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LayerChunkSplits;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSortNavigationAreasByCost : 1;                           // 0x003C(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bPerformVoxelFiltering : 1;                               // 0x003C(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bMarkLowHeightAreas : 1;                                  // 0x003C(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bFilterLowSpanSequences : 1;                              // 0x003C(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                          // 0x003C(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      bFixedTilePoolSize : 1;                                   // 0x003C(0x0001) (Edit BITFIELD: 2020)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
