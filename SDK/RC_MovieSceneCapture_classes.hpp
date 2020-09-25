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

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// 0x0030 (0x0058 - 0x0028)
class UMovieSceneCaptureProtocolBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	EMovieSceneCaptureProtocolState                    State;                                                    // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolBase");
		return ptr;
	}


	bool IsCapturing();
	EMovieSceneCaptureProtocolState GetState();
};


// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase");
		return ptr;
	}

};


// Class MovieSceneCapture.NullAudioCaptureProtocol
// 0x0000 (0x0058 - 0x0058)
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.NullAudioCaptureProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// 0x0038 (0x0090 - 0x0058)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
	struct FString                                     Filename;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase");
		return ptr;
	}

};


// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// 0x0068 (0x00C0 - 0x0058)
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                      // 0x0058(0x0010) (Edit, BlueprintVisible, Config)
	unsigned char                                      bCaptureFramesInHDR;                                      // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                HDRCompressionQuality;                                    // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                             // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FSoftObjectPath                             PostProcessingMaterial;                                   // 0x0078(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config)
	unsigned char                                      bDisableScreenPercentage;                                 // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	class UMaterialInterface*                          PostProcessingMaterialPtr;                                // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.FrameGrabberProtocol
// 0x0010 (0x0068 - 0x0058)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol
// 0x0070 (0x00D8 - 0x0068)
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0068(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.CompressedImageSequenceProtocol
// 0x0008 (0x00E0 - 0x00D8)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	int                                                CompressionQuality;                                       // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompressedImageSequenceProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// 0x0000 (0x00D8 - 0x00D8)
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_BMP");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// 0x0000 (0x00E0 - 0x00E0)
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_PNG");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// 0x0000 (0x00E0 - 0x00E0)
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_JPG");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// 0x0010 (0x00E8 - 0x00D8)
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
public:
	unsigned char                                      bCompressed;                                              // 0x00D8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                             // 0x00D9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x00DA(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_EXR");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCapture
// 0x01F8 (0x0220 - 0x0028)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FSoftClassPath                              ImageCaptureProtocolType;                                 // 0x0038(0x0018) (Edit, ZeroConstructor, Config, NoClear)
	struct FSoftClassPath                              AudioCaptureProtocolType;                                 // 0x0050(0x0018) (Edit, ZeroConstructor, Config, NoClear)
	class UMovieSceneImageCaptureProtocolBase*         ImageCaptureProtocol;                                     // 0x0068(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UMovieSceneAudioCaptureProtocolBase*         AudioCaptureProtocol;                                     // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	struct FMovieSceneCaptureSettings                  Settings;                                                 // 0x0078(0x0070) (Edit, BlueprintVisible, Config)
	unsigned char                                      bUseSeparateProcess;                                      // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bCloseEditorWhenCaptureStarts;                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     AdditionalCommandLineArguments;                           // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     InheritedCommandLineArguments;                            // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x110];                                     // 0x0110(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}


	void SetImageCaptureProtocolType(class UClass** ProtocolType);
	void SetAudioCaptureProtocolType(class UClass** ProtocolType);
	class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
	class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
};


// Class MovieSceneCapture.LevelCapture
// 0x0020 (0x0240 - 0x0220)
class ULevelCapture : public UMovieSceneCapture
{
public:
	unsigned char                                      bAutoStartCapture;                                        // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0221(0x000B) MISSED OFFSET
	struct FGuid                                       PrerequisiteActorId;                                      // 0x022C(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}


	bool STATIC_IsCaptureInProgress();
	int STATIC_GetCaptureFrameNumber();
	float STATIC_GetCaptureElapsedTime();
	class UMovieSceneImageCaptureProtocolBase* STATIC_FindImageCaptureProtocol();
	class UMovieSceneAudioCaptureProtocolBase* STATIC_FindAudioCaptureProtocol();
};


// Class MovieSceneCapture.UserDefinedCaptureProtocol
// 0x0080 (0x00D8 - 0x0058)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	class UWorld*                                      World;                                                    // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0060(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedCaptureProtocol");
		return ptr;
	}


	void StopCapturingFinalPixels();
	void StartCapturingFinalPixels(struct FCapturedPixelsID* StreamID);
	void ResolveBuffer(class UTexture** Buffer, struct FCapturedPixelsID* BufferID);
	void OnWarmUp();
	void OnTick();
	void OnStartCapture();
	bool OnSetup();
	void OnPreTick();
	void OnPixelsReceived(struct FCapturedPixels* Pixels, struct FCapturedPixelsID* ID, struct FFrameMetrics* FrameMetrics);
	void OnPauseCapture();
	void OnFinalize();
	void OnCaptureFrame();
	bool OnCanFinalize();
	void OnBeginFinalize();
	struct FFrameMetrics GetCurrentFrameMetrics();
	struct FString GenerateFilename(struct FFrameMetrics* InFrameMetrics);
};


// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// 0x0008 (0x00E0 - 0x00D8)
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:
	EDesiredImageFormat                                Format;                                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bEnableCompression;                                       // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                CompressionQuality;                                       // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedImageCaptureProtocol");
		return ptr;
	}


	void WriteImageToDisk(struct FCapturedPixels* PixelData, struct FCapturedPixelsID* StreamID, struct FFrameMetrics* FrameMetrics, bool* bCopyImageData);
	struct FString GenerateFilenameForCurrentFrame();
	struct FString GenerateFilenameForBuffer(class UTexture** Buffer, struct FCapturedPixelsID* StreamID);
};


// Class MovieSceneCapture.VideoCaptureProtocol
// 0x0018 (0x0080 - 0x0068)
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:
	unsigned char                                      bUseCompression;                                          // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CompressionQuality;                                       // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.VideoCaptureProtocol");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
