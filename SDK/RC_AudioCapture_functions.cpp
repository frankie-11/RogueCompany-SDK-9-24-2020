// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AudioCapture.AudioCapture.StopCapturingAudio
// (Final, Native, Public, BlueprintCallable)

void UAudioCapture::StopCapturingAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StopCapturingAudio");

	UAudioCapture_StopCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioCapture.AudioCapture.StartCapturingAudio
// (Final, Native, Public, BlueprintCallable)

void UAudioCapture::StartCapturingAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StartCapturingAudio");

	UAudioCapture_StartCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioCapture.AudioCapture.IsCapturingAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioCapture::IsCapturingAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.IsCapturingAudio");

	UAudioCapture_IsCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAudioCaptureDeviceInfo OutInfo                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioCapture::GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo");

	UAudioCapture_GetAudioCaptureDeviceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;

	return params.ReturnValue;
}


// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioCapture*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAudioCapture* UAudioCaptureFunctionLibrary::STATIC_CreateAudioCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture");

	UAudioCaptureFunctionLibrary_CreateAudioCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
