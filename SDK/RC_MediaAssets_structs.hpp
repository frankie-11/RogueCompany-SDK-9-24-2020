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

// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	EMediaWebcamCaptureDeviceFilter__None = 0,
	EMediaWebcamCaptureDeviceFilter__DepthSensor = 1,
	EMediaWebcamCaptureDeviceFilter__Front = 2,
	EMediaWebcamCaptureDeviceFilter__Rear = 3,
	EMediaWebcamCaptureDeviceFilter__Unknown = 4,
	EMediaWebcamCaptureDeviceFilter__EMediaWebcamCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	EMediaVideoCaptureDeviceFilter__None = 0,
	EMediaVideoCaptureDeviceFilter__Card = 1,
	EMediaVideoCaptureDeviceFilter__Software = 2,
	EMediaVideoCaptureDeviceFilter__Unknown = 3,
	EMediaVideoCaptureDeviceFilter__Webcam = 4,
	EMediaVideoCaptureDeviceFilter__EMediaVideoCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	EMediaAudioCaptureDeviceFilter__None = 0,
	EMediaAudioCaptureDeviceFilter__Card = 1,
	EMediaAudioCaptureDeviceFilter__Microphone = 2,
	EMediaAudioCaptureDeviceFilter__Software = 3,
	EMediaAudioCaptureDeviceFilter__Unknown = 4,
	EMediaAudioCaptureDeviceFilter__EMediaAudioCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio       = 0,
	EMediaPlayerTrack__Caption     = 1,
	EMediaPlayerTrack__Metadata    = 2,
	EMediaPlayerTrack__Script      = 3,
	EMediaPlayerTrack__Subtitle    = 4,
	EMediaPlayerTrack__Text        = 5,
	EMediaPlayerTrack__Video       = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX = 7
};


// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t
{
	EMediaSoundComponentFFTSize__Min = 0,
	EMediaSoundComponentFFTSize__Small = 1,
	EMediaSoundComponentFFTSize__Medium = 2,
	EMediaSoundComponentFFTSize__Large = 3,
	EMediaSoundComponentFFTSize__EMediaSoundComponentFFTSize_MAX = 4
};


// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t
{
	EMediaSoundChannels__Mono      = 0,
	EMediaSoundChannels__Stereo    = 1,
	EMediaSoundChannels__Surround  = 2,
	EMediaSoundChannels__EMediaSoundChannels_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaCaptureDevice
// 0x0028
struct FMediaCaptureDevice
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FString                                     URL;                                                      // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// 0x0008
struct FMediaSoundComponentSpectralData
{
	float                                              FrequencyHz;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
