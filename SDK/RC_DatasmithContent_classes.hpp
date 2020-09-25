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

// Class DatasmithContent.DatasmithObjectTemplate
// 0x0008 (0x0030 - 0x0028)
class UDatasmithObjectTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithObjectTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithActorTemplate
// 0x00A0 (0x00D0 - 0x0030)
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty DatasmithContent.DatasmithActorTemplate.Layers
	unsigned char                                      UnknownData01[0x50];                                      // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty DatasmithContent.DatasmithActorTemplate.Tags

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithActorTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAdditionalData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithAdditionalData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAdditionalData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActor
// 0x0058 (0x0270 - 0x0218)
class ADatasmithAreaLightActor : public AActor
{
public:
	EDatasmithAreaLightActorType                       LightType;                                                // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDatasmithAreaLightActorShape                      LightShape;                                               // 0x0219(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Dimensions;                                               // 0x021C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELightUnits                                        IntensityUnits;                                           // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x022C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureLightProfile*                        IESTexture;                                               // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseIESBrightness;                                        // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IESBrightnessScale;                                       // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0250(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceRadius;                                             // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotlightInnerAngle;                                      // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotlightOuterAngle;                                      // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActor");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActorTemplate
// 0x0070 (0x00A0 - 0x0030)
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	EDatasmithAreaLightActorType                       LightType;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	EDatasmithAreaLightActorShape                      LightShape;                                               // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Dimensions;                                               // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x003C(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	ELightUnits                                        IntensityUnits;                                           // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DatasmithContent.DatasmithAreaLightActorTemplate.IESTexture
	unsigned char                                      bUseIESBrightness;                                        // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              IESBrightnessScale;                                       // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0088(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              SourceRadius;                                             // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActorTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithAssetImportData : public UAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshCADImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshCADImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithSceneImportData : public UAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithTranslatedSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithTranslatedSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCADImportSceneData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCADImportSceneData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithMDLSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithMDLSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithGLTFSceneImportData
// 0x0048 (0x0070 - 0x0028)
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
public:
	struct FString                                     Generator;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              Version;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     Author;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     License;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     Source;                                                   // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithGLTFSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// 0x0010 (0x0038 - 0x0028)
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
public:
	struct FString                                     SourceMeshName;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshGLTFImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithFBXSceneImportData
// 0x0020 (0x0048 - 0x0028)
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
public:
	unsigned char                                      bGenerateLightmapUVs;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     TexturesDir;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      IntermediateSerialization;                                // 0x0040(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bColorizeMaterials;                                       // 0x0041(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithFBXSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// 0x0048 (0x0090 - 0x0048)
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	unsigned char                                      bMergeNodes;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bOptimizeDuplicatedNodes;                                 // 0x0049(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bRemoveInvisibleNodes;                                    // 0x004A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bSimplifyNodeHierarchy;                                   // 0x004B(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bImportVar;                                               // 0x004C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     VarPath;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      bImportPos;                                               // 0x0060(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     PosPath;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      bImportTml;                                               // 0x0078(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     TmlPath;                                                  // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithVREDAssetImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithVREDSceneImportData
// 0x0060 (0x00A8 - 0x0048)
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	unsigned char                                      bMergeNodes;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bOptimizeDuplicatedNodes;                                 // 0x0049(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bImportMats;                                              // 0x004A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     MatsPath;                                                 // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      bImportVar;                                               // 0x0060(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bCleanVar;                                                // 0x0061(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     VarPath;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      bImportLightInfo;                                         // 0x0078(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     LightInfoPath;                                            // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      bImportClipInfo;                                          // 0x0090(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     ClipInfoPath;                                             // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithIFCSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithIFCSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// 0x0010 (0x0038 - 0x0028)
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{
public:
	struct FString                                     SourceGlobalId;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshIFCImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetUserData
// 0x0050 (0x0078 - 0x0028)
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	TMap<struct FName, struct FString>                 MetaData;                                                 // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetUserData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCineCameraActorTemplate
// 0x0030 (0x0060 - 0x0030)
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;                                   // 0x0030(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraActorTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// 0x0060 (0x0090 - 0x0030)
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraFilmbackSettingsTemplate    FilmbackSettings;                                         // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDatasmithCameraLensSettingsTemplate        LensSettings;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDatasmithCameraFocusSettingsTemplate       FocusSettings;                                            // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocalLength;                                       // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDatasmithPostProcessSettingsTemplate       PostProcessSettings;                                      // 0x0050(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithContentBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithContentBlueprintLibrary");
		return ptr;
	}


	struct FString STATIC_GetDatasmithUserDataValueForKey(class UObject** Object, struct FName* Key);
	void STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject** Object, struct FString* StringToMatch, TArray<struct FName>* OutKeys, TArray<struct FString>* OutValues);
	class UDatasmithAssetUserData* STATIC_GetDatasmithUserData(class UObject** Object);
};


// Class DatasmithContent.DatasmithCustomActionBase
// 0x0008 (0x0030 - 0x0028)
class UDatasmithCustomActionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCustomActionBase");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithImportedSequencesActor
// 0x0010 (0x0228 - 0x0218)
class ADatasmithImportedSequencesActor : public AActor
{
public:
	TArray<class ULevelSequence*>                      ImportedSequences;                                        // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportedSequencesActor");
		return ptr;
	}


	void PlayLevelSequence(class ULevelSequence** SequenceToPlay);
};


// Class DatasmithContent.DatasmithCommonTessellationOptions
// 0x0010 (0x0038 - 0x0028)
class UDatasmithCommonTessellationOptions : public UObject
{
public:
	struct FDatasmithTessellationOptions               Options;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCommonTessellationOptions");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithImportOptions
// 0x0050 (0x0078 - 0x0028)
class UDatasmithImportOptions : public UObject
{
public:
	EDatasmithImportSearchPackagePolicy                SearchPackagePolicy;                                      // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportAssetConflictPolicy                MaterialConflictPolicy;                                   // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportAssetConflictPolicy                TextureConflictPolicy;                                    // 0x002A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportActorPolicy                        StaticMeshActorImportPolicy;                              // 0x002B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportActorPolicy                        LightImportPolicy;                                        // 0x002C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportActorPolicy                        CameraImportPolicy;                                       // 0x002D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportActorPolicy                        OtherActorImportPolicy;                                   // 0x002E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportMaterialQuality                    MaterialQuality;                                          // 0x002F(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	struct FDatasmithImportBaseOptions                 BaseOptions;                                              // 0x0034(0x0014) (Edit, BlueprintVisible, Config)
	struct FDatasmithReimportOptions                   ReimportOptions;                                          // 0x0048(0x0002) (Edit, BlueprintVisible, Config)
	struct FString                                     Filename;                                                 // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     FilePath;                                                 // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportOptions");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithLandscapeTemplate
// 0x0010 (0x0040 - 0x0030)
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithLandscapeTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithLightComponentTemplate
// 0x0038 (0x0068 - 0x0030)
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      bVisible : 1;                                             // 0x0030(0x0001) ( BITFIELD: 0101)
	unsigned char                                      CastShadows : 1;                                          // 0x0034(0x0001) ( BITFIELD: 0101)
	unsigned char                                      bUseTemperature : 1;                                      // 0x0034(0x0001) ( BITFIELD: 0202)
	unsigned char                                      bUseIESBrightness : 1;                                    // 0x0034(0x0001) ( BITFIELD: 0404)
	float                                              Intensity;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IESBrightnessScale;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LightColor;                                               // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LightFunctionMaterial;                                    // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextureLightProfile*                        IESTexture;                                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// 0x0140 (0x0170 - 0x0030)
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:
	TMap<struct FName, float>                          ScalarParameterValues;                                    // 0x0030(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FLinearColor>            VectorParameterValues;                                    // 0x0080(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00D0(0x0050) UNKNOWN PROPERTY: MapProperty DatasmithContent.DatasmithMaterialInstanceTemplate.TextureParameterValues
	struct FDatasmithStaticParameterSetTemplate        StaticParameters;                                         // 0x0120(0x0050)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithMaterialInstanceTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithPointLightComponentTemplate
// 0x0010 (0x0040 - 0x0030)
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	ELightUnits                                        IntensityUnits;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              SourceRadius;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithPointLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// 0x0050 (0x0080 - 0x0030)
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithPostProcessSettingsTemplate       Settings;                                                 // 0x0030(0x0040)
	unsigned char                                      bEnabled : 1;                                             // 0x0070(0x0001) ( BITFIELD: 0101)
	unsigned char                                      bUnbound : 1;                                             // 0x0070(0x0001) ( BITFIELD: 0202)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0071(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithPostProcessVolumeTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithScene
// 0x0008 (0x0030 - 0x0028)
class UDatasmithScene : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithScene");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneActor
// 0x0058 (0x0270 - 0x0218)
class ADatasmithSceneActor : public AActor
{
public:
	class UDatasmithScene*                             Scene;                                                    // 0x0218(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0220(0x0050) UNKNOWN PROPERTY: MapProperty DatasmithContent.DatasmithSceneActor.RelatedActors

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneActor");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneComponentTemplate
// 0x00B0 (0x00E0 - 0x0030)
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FTransform                                  RelativeTransform;                                        // 0x0030(0x0030) (IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0061(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DatasmithContent.DatasmithSceneComponentTemplate.AttachParent
	unsigned char                                      UnknownData01[0x50];                                      // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty DatasmithContent.DatasmithSceneComponentTemplate.Tags

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// 0x0010 (0x0040 - 0x0030)
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	TEnumAsByte<ESkyLightSourceType>                   SourceType;                                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                CubemapResolution;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	class UTextureCube*                                Cubemap;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSkyLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// 0x0008 (0x0038 - 0x0030)
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	float                                              InnerConeAngle;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OuterConeAngle;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSpotLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// 0x0018 (0x0048 - 0x0030)
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0038(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshTemplate
// 0x0078 (0x00A8 - 0x0030)
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithMeshSectionInfoMapTemplate        SectionInfoMap;                                           // 0x0030(0x0050) (Edit, EditConst)
	int                                                LightMapCoordinateIndex;                                  // 0x0080(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LightMapResolution;                                       // 0x0084(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;                                            // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FDatasmithStaticMaterialTemplate>    StaticMaterials;                                          // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshTemplate");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
