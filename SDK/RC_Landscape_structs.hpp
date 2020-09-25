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

// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend             = 0,
	LSBM_AlphaBlend                = 1,
	LSBM_MAX                       = 2
};


// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};


// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                = 0,
	Clear_Heightmap                = 1,
	Clear_All                      = 2,
	Clear_MAX                      = 3
};


// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};


// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3
};


// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red = 0,
	ESplineModulationColorMask__Green = 1,
	ESplineModulationColorMask__Blue = 2,
	ESplineModulationColorMask__Alpha = 3,
	ESplineModulationColorMask__ESplineModulationColorMask_MAX = 4
};


// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2
};


// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default = 0,
	ELandscapeLayerDisplayMode__Alphabetical = 1,
	ELandscapeLayerDisplayMode__UserSpecific = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX = 3
};


// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4
};


// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2
};


// Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2
};


// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3
};


// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5
};


// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
// 0x0010
struct FLandscapeProxyMaterialOverride
{
	struct FPerPlatformInt                             LODIndex;                                                 // 0x0000(0x0004) (Edit)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
// 0x0010
struct FLandscapeComponentMaterialOverride
{
	struct FPerPlatformInt                             LODIndex;                                                 // 0x0000(0x0004) (Edit)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0010
struct FWeightmapLayerAllocationInfo
{
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightmapTextureIndex;                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightmapTextureChannel;                                  // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.GrassVariety
// 0x0048
struct FGrassVariety
{
	class UStaticMesh*                                 GrassMesh;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPerPlatformFloat                           GrassDensity;                                             // 0x0008(0x0004) (Edit)
	unsigned char                                      bUseGrid;                                                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPerPlatformInt                             StartCullDistance;                                        // 0x0014(0x0004) (Edit)
	struct FPerPlatformInt                             EndCullDistance;                                          // 0x0018(0x0004) (Edit)
	int                                                MinLOD;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EGrassScaling                                      Scaling;                                                  // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleX;                                                   // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleY;                                                   // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0034(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomRotation;                                           // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AlignToSurface;                                           // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseLandscapeLightmap;                                    // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x003F(0x0001) (Edit)
	unsigned char                                      bReceivesDecals;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastDynamicShadow;                                       // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bKeepInstanceBufferCPUCopy;                               // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0010
struct FLandscapeSplineConnection
{
	class ULandscapeSplineSegment*                     Segment;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      end : 1;                                                  // 0x0008(0x0001) ( BITFIELD: 0101)
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0070
struct FLandscapeSplineInterpPoint
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Left;                                                     // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     FalloffLeft;                                              // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     FalloffRight;                                             // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LayerLeft;                                                // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LayerRight;                                               // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LayerFalloffLeft;                                         // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LayerFalloffRight;                                        // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              StartEndFalloff;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0018
struct FLandscapeSplineSegmentConnection
{
	class ULandscapeSplineControlPoint*                ControlPoint;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TangentLen;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.GrassInput
// 0x0028
struct FGrassInput
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULandscapeGrassType*                         GrassType;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x0010(0x000C)
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
};

// ScriptStruct Landscape.LayerBlendInput
// 0x0048
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeLayerBlendType>              BlendType;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            LayerInput;                                               // 0x000C(0x000C)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FExpressionInput                            HeightInput;                                              // 0x0020(0x000C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x002C(0x0008) MISSED OFFSET
	float                                              PreviewWeight;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstLayerInput;                                          // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstHeightInput;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeLayerBrush
// 0x0001
struct FLandscapeLayerBrush
{

};

// ScriptStruct Landscape.LandscapeLayer
// 0x0088
struct FLandscapeLayer
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bVisible;                                                 // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bLocked;                                                  // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              HeightmapAlpha;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeightmapAlpha;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeBlendMode>                   BlendMode;                                                // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeLayerBrush>                Brushes;                                                  // 0x0028(0x0010) (ZeroConstructor)
	TMap<class ULandscapeLayerInfoObject*, unsigned char> WeightmapLayerAllocationBlend;                            // 0x0038(0x0050) (ZeroConstructor)
};

// ScriptStruct Landscape.HeightmapData
// 0x0008
struct FHeightmapData
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.WeightmapData
// 0x0030
struct FWeightmapData
{
	TArray<class UTexture2D*>                          Textures;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FWeightmapLayerAllocationInfo>       LayerAllocations;                                         // 0x0010(0x0010) (ZeroConstructor)
	TArray<class ULandscapeWeightmapUsage*>            TextureUsages;                                            // 0x0020(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Landscape.LandscapeLayerComponentData
// 0x0038
struct FLandscapeLayerComponentData
{
	struct FHeightmapData                              HeightmapData;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FWeightmapData                              WeightmapData;                                            // 0x0008(0x0030)
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
// 0x0038
struct FLandscapeEditToolRenderData
{
	class UMaterialInterface*                          ToolMaterial;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          GizmoMaterial;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SelectedType;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DebugChannelR;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DebugChannelG;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DebugChannelB;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DataTexture;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LayerContributionTexture;                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DirtyTexture;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.GizmoSelectData
// 0x0050
struct FGizmoSelectData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0010
struct FLandscapeInfoLayerSettings
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LayerName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001
struct FLandscapeImportLayerInfo
{

};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0008
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001
struct FLandscapeEditorLayerSettings
{

};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001
struct FForeignWorldSplineData
{

};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001
struct FForeignSplineSegmentData
{

};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0001
struct FForeignControlPointData
{

};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0038
struct FLandscapeSplineMeshEntry
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCenterH : 1;                                             // 0x0018(0x0001) (Edit BITFIELD: 0101)
	struct FVector2D                                   CenterAdjust;                                             // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bScaleToWidth : 1;                                        // 0x0024(0x0001) (Edit BITFIELD: 0101)
	struct FVector                                     Scale;                                                    // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeSplineMeshOrientation>       Orientation;                                              // 0x0034(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                              // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       UpAxis;                                                   // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
