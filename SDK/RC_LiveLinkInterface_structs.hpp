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

// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8_t
{
	ELiveLinkCameraProjectionMode__Perspective = 0,
	ELiveLinkCameraProjectionMode__Orthographic = 1,
	ELiveLinkCameraProjectionMode__ELiveLinkCameraProjectionMode_MAX = 2
};


// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8_t
{
	ELiveLinkSourceMode__Latest    = 0,
	ELiveLinkSourceMode__EngineTime = 1,
	ELiveLinkSourceMode__Timecode  = 2,
	ELiveLinkSourceMode__ELiveLinkSourceMode_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// 0x0008
struct FLiveLinkSubjectName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// 0x0030
struct FLiveLinkSourceBufferManagementSettings
{
	float                                              ValidEngineTime;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineTimeOffset;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  TimecodeFrameRate;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGenerateSubFrame;                                        // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  SourceTimecodeFrameRate;                                  // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ValidTimecodeFrame;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TimecodeFrameOffset;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LatestOffset;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfFrameToBuffered;                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bKeepAtLeastOneFrame;                                     // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// 0x0050
struct FLiveLinkCurveConversionSettings
{
	TMap<struct FString, struct FSoftObjectPath>       CurveConversionAssetMap;                                  // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// 0x0018
struct FLiveLinkSubjectKey
{
	struct FGuid                                       Source;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkSubjectName                        SubjectName;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// 0x0038
struct FLiveLinkSubjectPreset
{
	struct FLiveLinkSubjectKey                         Key;                                                      // 0x0000(0x0018)
	class UClass*                                      Role;                                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULiveLinkSubjectSettings*                    Settings;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULiveLinkVirtualSubject*                     VirtualSubject;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnabled;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// 0x0018
struct FLiveLinkSourceHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// 0x0008
struct FLiveLinkBaseBlueprintData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.SubjectFrameHandle
// 0x0010 (0x0018 - 0x0008)
struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkTransform
// 0x0020
struct FLiveLinkTransform
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.CachedSubjectFrame
// 0x0140
struct FCachedSubjectFrame
{
	unsigned char                                      UnknownData00[0x140];                                     // 0x0000(0x0140) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.SubjectMetadata
// 0x0070
struct FSubjectMetadata
{
	TMap<struct FName, struct FString>                 StringMetadata;                                           // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTimecode                                   SceneTimecode;                                            // 0x0050(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  SceneFramerate;                                           // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// 0x0010
struct FLiveLinkWorldTime
{
	double                                             Time;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             Offset;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// 0x0060
struct FLiveLinkMetaData
{
	TMap<struct FName, struct FString>                 StringMetadata;                                           // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FQualifiedFrameTime                         SceneTime;                                                // 0x0050(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// 0x0080
struct FLiveLinkBaseFrameData
{
	struct FLiveLinkWorldTime                          WorldTime;                                                // 0x0000(0x0010) (Edit, EditConst)
	struct FLiveLinkMetaData                           MetaData;                                                 // 0x0010(0x0060) (Edit, BlueprintVisible)
	TArray<float>                                      PropertyValues;                                           // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// 0x0010 (0x0090 - 0x0080)
struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// 0x0010
struct FLiveLinkBaseStaticData
{
	TArray<struct FName>                               PropertyNames;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// 0x0020 (0x0030 - 0x0010)
struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{
	TArray<struct FName>                               BoneNames;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BoneParents;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// 0x0090 (0x0098 - 0x0008)
struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkBaseStaticData                     StaticData;                                               // 0x0008(0x0010) (Edit, BlueprintVisible)
	struct FLiveLinkBaseFrameData                      FrameData;                                                // 0x0018(0x0080) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// 0x0000 (0x0010 - 0x0010)
struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// 0x0010 (0x0020 - 0x0010)
struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
	unsigned char                                      bIsFieldOfViewSupported;                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsAspectRatioSupported;                                  // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsFocalLengthSupported;                                  // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsProjectionModeSupported;                               // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBackWidth;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBackHeight;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsApertureSupported;                                     // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsFocusDistanceSupported;                                // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// 0x0030 (0x00B0 - 0x0080)
struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
	struct FTransform                                  Transform;                                                // 0x0080(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// 0x0020 (0x00D0 - 0x00B0)
struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{
	float                                              FieldOfView;                                              // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocalLength;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Aperture;                                                 // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusDistance;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELiveLinkCameraProjectionMode                      ProjectionMode;                                           // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00C5(0x000B) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// 0x00F8 (0x0100 - 0x0008)
struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkCameraStaticData                   StaticData;                                               // 0x0008(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FLiveLinkCameraFrameData                    FrameData;                                                // 0x0030(0x00D0) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// 0x0010 (0x0020 - 0x0010)
struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
	unsigned char                                      bIsTemperatureSupported;                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsIntensitySupported;                                    // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsLightColorSupported;                                   // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsInnerConeAngleSupported;                               // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsOuterConeAngleSupported;                               // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsAttenuationRadiusSupported;                            // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsSourceLenghtSupported;                                 // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsSourceRadiusSupported;                                 // 0x0017(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsSoftSourceRadiusSupported;                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// 0x0030 (0x00E0 - 0x00B0)
struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
	float                                              Temperature;                                              // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      LightColor;                                               // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerConeAngle;                                           // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterConeAngle;                                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceRadius;                                             // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoftSourceRadius;                                         // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// 0x0108 (0x0110 - 0x0008)
struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkLightStaticData                    StaticData;                                               // 0x0008(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FLiveLinkLightFrameData                     FrameData;                                                // 0x0030(0x00E0) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// 0x0018
struct FLiveLinkSourcePreset
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class ULiveLinkSourceSettings*                     Settings;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// 0x0020
struct FLiveLinkRefSkeleton
{
	TArray<struct FName>                               BoneNames;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        BoneParents;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// 0x0010
struct FLiveLinkSubjectRepresentation
{
	struct FLiveLinkSubjectName                        Subject;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible)
	class UClass*                                      Role;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// 0x0008
struct FLiveLinkInterpolationSettings
{
	unsigned char                                      bUseInterpolation;                                        // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              InterpolationOffset;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// 0x000C
struct FLiveLinkTimeSynchronizationSettings
{
	struct FFrameRate                                  FrameRate;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                FrameOffset;                                              // 0x0008(0x0004) (Edit)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// 0x0010
struct FLiveLinkSourceDebugInfo
{
	struct FLiveLinkSubjectName                        SubjectName;                                              // 0x0000(0x0008) (Edit, EditConst)
	int                                                SnapshotIndex;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumberOfBufferAtSnapshot;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// 0x00C8 (0x00D0 - 0x0008)
struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkTransformStaticData                StaticData;                                               // 0x0008(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FLiveLinkTransformFrameData                 FrameData;                                                // 0x0020(0x00B0) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// 0x000C
struct FLiveLinkCurveElement
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CurveValue;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// 0x0090
struct FLiveLinkFrameData
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FLiveLinkCurveElement>               CurveElements;                                            // 0x0010(0x0010) (ZeroConstructor)
	struct FLiveLinkWorldTime                          WorldTime;                                                // 0x0020(0x0010)
	struct FLiveLinkMetaData                           MetaData;                                                 // 0x0030(0x0060)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// 0x0000 (0x0008 - 0x0008)
struct FLiveLinkFrameRate : public FFrameRate
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// 0x0010
struct FLiveLinkTimeCode_Base_DEPRECATED
{
	int                                                Seconds;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Frames;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLiveLinkFrameRate                          FrameRate;                                                // 0x0008(0x0008)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// 0x0000 (0x0010 - 0x0010)
struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTime
// 0x0018
struct FLiveLinkTime
{
	double                                             WorldTime;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQualifiedFrameTime                         SceneTime;                                                // 0x0008(0x0010) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
