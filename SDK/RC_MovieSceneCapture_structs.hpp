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

// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_Linear                    = 5,
	HCGM_MAX                       = 6
};


// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t
{
	EMovieSceneCaptureProtocolState__Idle = 0,
	EMovieSceneCaptureProtocolState__Initialized = 1,
	EMovieSceneCaptureProtocolState__Capturing = 2,
	EMovieSceneCaptureProtocolState__Finalizing = 3,
	EMovieSceneCaptureProtocolState__EMovieSceneCaptureProtocolState_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x0010
struct FCompositionGraphCapturePasses
{
	TArray<struct FString>                             Value;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008
struct FCaptureResolution
{
	int                                                ResX;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                ResY;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0070
struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath                              OutputDirectory;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, Config)
	class UClass*                                      GameModeOverride;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     OutputFormat;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	unsigned char                                      bOverwriteExisting;                                       // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bUseRelativeFrameNumbers;                                 // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                HandleFrames;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     MovieExtension;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	unsigned char                                      ZeroPadFrameNumbers;                                      // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FFrameRate                                  FrameRate;                                                // 0x0044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bUseCustomFrameRate;                                      // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FFrameRate                                  CustomFrameRate;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FCaptureResolution                          Resolution;                                               // 0x0058(0x0008) (Edit, BlueprintVisible, Config)
	unsigned char                                      bEnableTextureStreaming;                                  // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bCinematicEngineScalability;                              // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bCinematicMode;                                           // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bAllowMovement;                                           // 0x0063(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bAllowTurning;                                            // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bShowPlayer;                                              // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bShowHUD;                                                 // 0x0066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bUsePathTracer;                                           // 0x0067(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                PathTracerSamplePerPixel;                                 // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct MovieSceneCapture.CapturedPixelsID
// 0x0050
struct FCapturedPixelsID
{
	TMap<struct FName, struct FName>                   Identifiers;                                              // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MovieSceneCapture.CapturedPixels
// 0x0010
struct FCapturedPixels
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.FrameMetrics
// 0x0010
struct FFrameMetrics
{
	float                                              TotalElapsedTime;                                         // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FrameDelta;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FrameNumber;                                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumDroppedFrames;                                         // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
