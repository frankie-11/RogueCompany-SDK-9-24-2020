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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0020 (0x0650 - 0x0630)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0630(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInstanceTakeRadialDamage;                               // 0x0638(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0630(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData02[0x8];                                       // 0x0648(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Foliage.FoliageStatistics
// 0x0000 (0x0028 - 0x0028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}


	int STATIC_FoliageOverlappingSphereCount(class UObject** WorldContextObject, class UStaticMesh** StaticMesh, struct FVector* CenterPosition, float* Radius);
	int STATIC_FoliageOverlappingBoxCount(class UObject** WorldContextObject, class UStaticMesh** StaticMesh, struct FBox* Box);
};


// Class Foliage.FoliageType
// 0x0338 (0x0360 - 0x0028)
class UFoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                               // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityAdjustmentFactor;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSingleInstanceModeOverrideRadius;                        // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SingleInstanceModeRadius;                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EFoliageScaling                                    Scaling;                                                  // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleX;                                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleY;                                                   // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFoliageVertexColorChannelMask              VertexColorMaskByChannel[0x4];                            // 0x0068(0x000C) (Edit)
	TEnumAsByte<EFoliageVertexColorMask>               VertexColorMask;                                          // 0x0098(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              VertexColorMaskThreshold;                                 // 0x009C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      VertexColorMaskInvert : 1;                                // 0x00A0(0x0001) (Deprecated BITFIELD: 0101)
	struct FFloatInterval                              ZOffset;                                                  // 0x00A4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AlignToNormal : 1;                                        // 0x00AC(0x0001) (Edit BITFIELD: 0101)
	float                                              AlignMaxAngle;                                            // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomYaw : 1;                                            // 0x00B4(0x0001) (Edit BITFIELD: 0101)
	float                                              RandomPitchAngle;                                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              GroundSlopeAngle;                                         // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              Height;                                                   // 0x00C4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LandscapeLayers;                                          // 0x00D0(0x0010) (Edit, ZeroConstructor)
	float                                              MinimumLayerWeight;                                       // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ExclusionLandscapeLayers;                                 // 0x00E8(0x0010) (Edit, ZeroConstructor)
	float                                              MinimumExclusionLayerWeight;                              // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LandscapeLayer;                                           // 0x00FC(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      CollisionWithWorld : 1;                                   // 0x0104(0x0001) (Edit BITFIELD: 0101)
	struct FVector                                     CollisionScale;                                           // 0x0108(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            MeshBounds;                                               // 0x0114(0x001C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LowBoundOriginRadius;                                     // 0x0130(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x013C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FInt32Interval                              CullDistance;                                             // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableStaticLighting : 1;                                // 0x0148(0x0001) (Deprecated BITFIELD: 0101)
	unsigned char                                      CastShadow : 1;                                           // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 0202)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 0404)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 0808)
	unsigned char                                      bCastDynamicShadow : 1;                                   // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 1010)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 2020)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 4040)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 8080)
	unsigned char                                      bOverrideLightMapRes : 1;                                 // 0x0149(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 0101)
	int                                                OverriddenLightMapRes;                                    // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ELightmapType                                      LightmapType;                                             // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAsOccluder : 1;                                       // 0x0154(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 0101)
	struct FBodyInstance                               BodyInstance;                                             // 0x0158(0x0110) (Edit)
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                  // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x0269(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x026C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 0101)
	int                                                CustomDepthStencilValue;                                  // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TranslucencySortPriority;                                 // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadeRadius;                                              // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSteps;                                                 // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialSeedDensity;                                       // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AverageSpreadDistance;                                    // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpreadVariance;                                           // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SeedsPerStep;                                             // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DistributionSeed;                                         // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInitialSeedOffset;                                     // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanGrowInShade;                                          // 0x029C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSpawnsInShade;                                           // 0x029D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInitialAge;                                            // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverlapPriority;                                          // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ProceduralScale;                                          // 0x02AC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          ScaleCurve;                                               // 0x02B8(0x0088) (Edit)
	int                                                ChangeCount;                                              // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReapplyDensity : 1;                                       // 0x0344(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0101)
	unsigned char                                      ReapplyRadius : 1;                                        // 0x0344(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0202)
	unsigned char                                      ReapplyAlignToNormal : 1;                                 // 0x0344(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0404)
	unsigned char                                      ReapplyRandomYaw : 1;                                     // 0x0344(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0808)
	unsigned char                                      ReapplyScaling : 1;                                       // 0x0344(0x0001) (Edit, DisableEditOnInstance BITFIELD: 1010)
	unsigned char                                      ReapplyScaleX : 1;                                        // 0x0344(0x0001) (Edit, DisableEditOnInstance BITFIELD: 2020)
	unsigned char                                      ReapplyScaleY : 1;                                        // 0x0344(0x0001) (Edit, DisableEditOnInstance BITFIELD: 4040)
	unsigned char                                      ReapplyScaleZ : 1;                                        // 0x0344(0x0001) (Edit, DisableEditOnInstance BITFIELD: 8080)
	unsigned char                                      ReapplyRandomPitchAngle : 1;                              // 0x0345(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0101)
	unsigned char                                      ReapplyGroundSlope : 1;                                   // 0x0345(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0202)
	unsigned char                                      ReapplyHeight : 1;                                        // 0x0345(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0404)
	unsigned char                                      ReapplyLandscapeLayers : 1;                               // 0x0345(0x0001) (Edit, DisableEditOnInstance BITFIELD: 0808)
	unsigned char                                      ReapplyZOffset : 1;                                       // 0x0345(0x0001) (Edit, DisableEditOnInstance BITFIELD: 1010)
	unsigned char                                      ReapplyCollisionWithWorld : 1;                            // 0x0345(0x0001) (Edit, DisableEditOnInstance BITFIELD: 2020)
	unsigned char                                      ReapplyVertexColorMask : 1;                               // 0x0345(0x0001) (Edit, DisableEditOnInstance BITFIELD: 4040)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x0345(0x0001) (Edit BITFIELD: 8080)
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                   // 0x0348(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                VirtualTextureCullMips;                                   // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                             // 0x035C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}

};


// Class Foliage.FoliageType_Actor
// 0x0010 (0x0370 - 0x0360)
class UFoliageType_Actor : public UFoliageType
{
public:
	class UClass*                                      ActorClass;                                               // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldAttachToBaseComponent;                             // 0x0368(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_Actor");
		return ptr;
	}

};


// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0020 (0x0380 - 0x0360)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                                 Mesh;                                                     // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0368(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ComponentClass;                                           // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}

};


// Class Foliage.InstancedFoliageActor
// 0x0050 (0x0268 - 0x0218)
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0218(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}

};


// Class Foliage.InteractiveFoliageActor
// 0x0060 (0x0288 - 0x0228)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TouchingActorEntryPosition;                               // 0x0230(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliageVelocity;                                          // 0x023C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliageForce;                                             // 0x0248(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliagePosition;                                          // 0x0254(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FoliageDamageImpulseScale;                                // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageTouchImpulseScale;                                 // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffness;                                         // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffnessQuadratic;                                // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageDamping;                                           // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDamageImpulse;                                         // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTouchImpulse;                                          // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}


	void CapsuleTouched(class UPrimitiveComponent** OverlappedComp, class AActor** Other, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* OverlapInfo);
};


// Class Foliage.InteractiveFoliageComponent
// 0x0000 (0x04B0 - 0x04B0)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (0x0258 - 0x0250)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                  // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageComponent
// 0x0028 (0x00D8 - 0x00B0)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TileOverlap;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AVolume*                                     SpawningVolume;                                           // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ProceduralGuid;                                           // 0x00C8(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageSpawner
// 0x0048 (0x0070 - 0x0028)
class UProceduralFoliageSpawner : public UObject
{
public:
	int                                                RandomSeed;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileSize;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumUniqueTiles;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumQuadTreeSize;                                      // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bNeedsSimulation;                                         // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0051(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}


	void Simulate(int* NumSteps);
};


// Class Foliage.ProceduralFoliageTile
// 0x0130 (0x0158 - 0x0028)
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET
	TArray<struct FProceduralFoliageInstance>          InstancesArray;                                           // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x78];                                      // 0x00E0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageVolume
// 0x0008 (0x0258 - 0x0250)
class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                      // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
