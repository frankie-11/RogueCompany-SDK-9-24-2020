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

// Class AudioCapture.AudioCapture
// 0x0008 (0x00B0 - 0x00A8)
class UAudioCapture : public UAudioGenerator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCapture");
		return ptr;
	}


	void StopCapturingAudio();
	void StartCapturingAudio();
	bool IsCapturingAudio();
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo);
};


// Class AudioCapture.AudioCaptureFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCaptureFunctionLibrary");
		return ptr;
	}


	class UAudioCapture* STATIC_CreateAudioCapture();
};


// Class AudioCapture.AudioCaptureComponent
// 0x00B0 (0x06E0 - 0x0630)
class UAudioCaptureComponent : public USynthComponent
{
public:
	int                                                JitterLatencyFrames;                                      // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xAC];                                      // 0x0634(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCaptureComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
