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

// Class Landscape.ControlPointMeshActor
// 0x0008 (0x0220 - 0x0218)
class AControlPointMeshActor : public AActor
{
public:
	class UControlPointMeshComponent*                  ControlPointMeshComponent;                                // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshActor");
		return ptr;
	}

};


// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x04B0 - 0x04B0)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeProxy
// 0x02F8 (0x0510 - 0x0218)
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0220(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x023C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x0240(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              ComponentScreenSizeToUseSubSections;                      // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LOD0ScreenSize;                                           // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LOD0DistributionSetting;                                  // 0x024C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistributionSetting;                                   // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TessellationComponentScreenSize;                          // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseTessellationComponentScreenSizeFalloff;                // 0x0258(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TessellationComponentScreenSizeFalloff;                   // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                OccluderGeometryLOD;                                      // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x0280(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeProxyMaterialOverride>     LandscapeMaterialsOverride;                               // 0x0288(0x0010) (Edit, ZeroConstructor)
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                   // 0x0298(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                VirtualTextureNumLods;                                    // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VirtualTextureLodBias;                                    // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                             // 0x02B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x02C0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x02D0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x02E0(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x64];                                      // 0x02F0(0x0064) MISSED OFFSET
	unsigned char                                      bHasLandscapeGrass;                                       // 0x0354(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x035C(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x035C(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x035C(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x0360(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 0101)
	struct FLightingChannels                           LightingChannels;                                         // 0x0361(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x0364(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x0364(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 0202)
	int                                                CustomDepthStencilValue;                                  // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LDMaxDrawDistance;                                        // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x0370(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBodyInstance                               BodyInstance;                                             // 0x0398(0x0110) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x04A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 0101)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x04A8(0x0001) (Edit BITFIELD: 0202)
	int                                                ComponentSizeQuads;                                       // 0x04AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x04B4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x04B8(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	unsigned char                                      bUseDynamicMaterialInstance;                              // 0x04BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                          // 0x04BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseLandscapeForCullingInvisibleHLODVertices;             // 0x04BE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasLayersContent;                                        // 0x04BF(0x0001) (ZeroConstructor, IsPlainOldData)
	TMap<class UTexture2D*, class ULandscapeWeightmapUsage*> WeightmapUsageMap;                                        // 0x04C0(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}


	void SetLandscapeMaterialVectorParameterValue(struct FName* ParameterName, struct FLinearColor* Value);
	void SetLandscapeMaterialTextureParameterValue(struct FName* ParameterName, class UTexture** Value);
	void SetLandscapeMaterialScalarParameterValue(struct FName* ParameterName, float* Value);
	void EditorSetLandscapeMaterial(class UMaterialInterface** NewLandscapeMaterial);
	void EditorApplySpline(class USplineComponent** InSplineComponent, float* StartWidth, float* EndWidth, float* StartSideFalloff, float* EndSideFalloff, float* StartRoll, float* EndRoll, int* NumSubdivisions, bool* bRaiseHeights, bool* bLowerHeights, class ULandscapeLayerInfoObject** PaintLayer);
	void ChangeUseTessellationComponentScreenSizeFalloff(bool* InComponentScreenSizeToUseSubSections);
	void ChangeTessellationComponentScreenSizeFalloff(float* InUseTessellationComponentScreenSizeFalloff);
	void ChangeTessellationComponentScreenSize(float* InTessellationComponentScreenSize);
	void ChangeLODDistanceFactor(float* InLODDistanceFactor);
	void ChangeComponentScreenSizeToUseSubSections(float* InComponentScreenSizeToUseSubSections);
};


// Class Landscape.Landscape
// 0x0000 (0x0510 - 0x0510)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}

};


// Class Landscape.LandscapeBlueprintBrushBase
// 0x0000 (0x0218 - 0x0218)
class ALandscapeBlueprintBrushBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeBlueprintBrushBase");
		return ptr;
	}


	void RequestLandscapeUpdate();
	class UTextureRenderTarget2D* Render(bool* InIsHeightmap, class UTextureRenderTarget2D** InCombinedResult, struct FName* InWeightmapLayerName);
	void Initialize(struct FTransform* InLandscapeTransform, struct FIntPoint* InLandscapeSize, struct FIntPoint* InLandscapeRenderTargetSize);
	void GetBlueprintRenderDependencies(TArray<class UTexture2D*>* OutStreamableAssets);
};


// Class Landscape.LandscapeComponent
// 0x01F0 (0x0600 - 0x0410)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                ComponentSizeQuads;                                       // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0414(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0418(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials;                                        // 0x0430(0x0010) (Edit, ZeroConstructor)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x0440(0x0010) (ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                 // 0x0450(0x0010) (ZeroConstructor, Transient)
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                  // 0x0460(0x0010) (ZeroConstructor)
	TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial;              // 0x0470(0x0010) (ZeroConstructor)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0488(0x0008) MISSED OFFSET
	struct FVector4                                    WeightmapScaleBias;                                       // 0x0490(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x04A4(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x04B0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x04C0(0x001C) (ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x04DC(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x0500(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x0510(0x0010) (ZeroConstructor)
	struct FGuid                                       MapBuildDataId;                                           // 0x0520(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0530(0x0010) (ZeroConstructor, Deprecated)
	int                                                CollisionMipLevel;                                        // 0x0540(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0544(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0548(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x054C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0550(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x0554(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x0558(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x055C(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x056C(0x0010) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x0580(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0588(0x0001) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x0590(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MobileMaterialInterfaces;                                 // 0x0598(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                  // 0x05A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x48];                                      // 0x05B8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}


	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int* InIndex);
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector* InLocation, struct FName* InPaintLayerName);
	float EditorGetPaintLayerWeightAtLocation(struct FVector* InLocation, class ULandscapeLayerInfoObject** PaintLayer);
};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x0218 - 0x0218)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x0268 - 0x0218)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0218(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x0410 - 0x0410)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0038 (0x0060 - 0x0028)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x0038(0x0001) (Edit BITFIELD: 0101)
	class UStaticMesh*                                 GrassMesh;                                                // 0x0040(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0050(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      RandomRotation;                                           // 0x0058(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      AlignToSurface;                                           // 0x0059(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x04F0 - 0x0410)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	int                                                SectionBaseX;                                             // 0x0418(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x041C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x0424(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0430(0x0010) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x0440(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0450(0x001C) (ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x046C(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0488(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x0498(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x48];                                      // 0x04A8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}


	class ULandscapeComponent* GetRenderComponent();
};


// Class Landscape.LandscapeInfo
// 0x01E8 (0x0210 - 0x0028)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0028(0x001C) (IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x006C(0x00A4) MISSED OFFSET
	TArray<class ALandscapeStreamingProxy*>            Proxies;                                                  // 0x0110(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x0120(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0058 (0x0080 - 0x0028)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (0x0050 - 0x0028)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x003C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0008 (0x01E0 - 0x01D8)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x01D8(0x0001) ( BITFIELD: 0101)
	unsigned char                                      bDisableTessellation : 1;                                 // 0x01D8(0x0001) ( BITFIELD: 0202)
	unsigned char                                      bMobile : 1;                                              // 0x01D8(0x0001) ( BITFIELD: 0404)
	unsigned char                                      bEditorToolUsage : 1;                                     // 0x01D8(0x0001) ( BITFIELD: 0808)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0010 (0x0500 - 0x04F0)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x0220 - 0x0218)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0020 (0x04D0 - 0x04B0)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B0(0x0008) MISSED OFFSET
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x04B8(0x0010) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x04C8(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeSettings
// 0x0008 (0x0040 - 0x0038)
class ULandscapeSettings : public UDeveloperSettings
{
public:
	int                                                MaxNumberOfLayers;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSettings");
		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x0440 - 0x0410)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x0418(0x0010) (ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x0428(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}


	TArray<class USplineMeshComponent*> GetSplineMeshComponents();
};


// Class Landscape.LandscapeSplineControlPoint
// 0x0080 (0x00A8 - 0x0028)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LayerWidthRatio;                                          // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftSideFalloffFactor;                                    // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightSideFalloffFactor;                                   // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftSideLayerFalloffFactor;                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightSideLayerFalloffFactor;                              // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (ZeroConstructor, IsPlainOldData)
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B0 - 0x0028)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0028(0x0018) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0058(0x0018) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (ZeroConstructor, IsPlainOldData)
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00A0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x0530 - 0x0510)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0510(0x001C) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return ptr;
	}

};


// Class Landscape.LandscapeWeightmapUsage
// 0x0030 (0x0058 - 0x0028)
class ULandscapeWeightmapUsage : public UObject
{
public:
	class ULandscapeComponent*                         ChannelUsage[0x4];                                        // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LayerGuid;                                                // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeWeightmapUsage");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0050 - 0x0040)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0060 - 0x0040)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingScale;                                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0060 - 0x0040)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0048 (0x0088 - 0x0040)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0040(0x000C)
	unsigned char                                      UnknownData00[0x8];                                       // 0x004C(0x0008) MISSED OFFSET
	struct FExpressionInput                            LayerNotUsed;                                             // 0x0054(0x000C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x0070(0x0001) (Edit BITFIELD: 0101)
	struct FGuid                                       ExpressionGUID;                                           // 0x0074(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0050 (0x0090 - 0x0040)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0040(0x000C)
	unsigned char                                      UnknownData00[0x8];                                       // 0x004C(0x0008) MISSED OFFSET
	struct FExpressionInput                            Layer;                                                    // 0x0054(0x000C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0050 - 0x0040)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
