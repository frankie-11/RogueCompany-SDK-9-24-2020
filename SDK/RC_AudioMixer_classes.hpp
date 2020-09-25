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

// Class AudioMixer.SynthComponent
// 0x0420 (0x0630 - 0x0210)
class USynthComponent : public USceneComponent
{
public:
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                     // 0x0218(0x02F0) (Edit, BlueprintVisible)
	class USoundConcurrency*                           ConcurrencySettings;                                      // 0x0508(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0510(0x0050) UNKNOWN PROPERTY: SetProperty AudioMixer.SynthComponent.ConcurrencySet
	class USoundClass*                                 SoundClass;                                               // 0x0560(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x0568(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SoundSubmix;                                              // 0x0570(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                         // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSoundSourceBusSendInfo>             BusSends;                                                 // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSoundModulation                            Modulation;                                               // 0x0598(0x0010) (Edit)
	TArray<struct FSoundSourceBusSendInfo>             PreEffectBusSends;                                        // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bIsUISound : 1;                                           // 0x05B8(0x0001) (Edit, BlueprintVisible BITFIELD: 0101)
	unsigned char                                      bIsPreviewSound : 1;                                      // 0x05B8(0x0001) ( BITFIELD: 0202)
	int                                                EnvelopeFollowerAttackTime;                               // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnvelopeFollowerReleaseTime;                              // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAudioEnvelopeValue;                                     // 0x05C8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x05C4(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData02[0x20];                                      // 0x05D8(0x0020) MISSED OFFSET
	class USynthSound*                                 Synth;                                                    // 0x05F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x0600(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0608(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}


	void Stop();
	void start();
	void SetVolumeMultiplier(float* VolumeMultiplier);
	void SetSubmixSend(class USoundSubmix** Submix, float* SendLevel);
	bool IsPlaying();
};


// Class AudioMixer.AudioGenerator
// 0x0080 (0x00A8 - 0x0028)
class UAudioGenerator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioGenerator");
		return ptr;
	}

};


// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}


	float STATIC_TrimAudioCache(float* InMegabytesToFree);
	class USoundWave* STATIC_StopRecordingOutput(class UObject** WorldContextObject, EAudioRecordingExportType* ExportType, struct FString* Name, struct FString* Path, class USoundSubmix** SubmixToRecord, class USoundWave** ExistingSoundWaveToOverwrite);
	void STATIC_StopAnalyzingOutput(class UObject** WorldContextObject, class USoundSubmix** SubmixToStopAnalyzing);
	void STATIC_StartRecordingOutput(class UObject** WorldContextObject, float* ExpectedDuration, class USoundSubmix** SubmixToRecord);
	void STATIC_StartAnalyzingOutput(class UObject** WorldContextObject, class USoundSubmix** SubmixToAnalyze, EFFTSize* FFTSize, EFFTPeakInterpolationMethod* InterpolationMethod, EFFTWindowType* WindowType, float* HopSize);
	void STATIC_SetBypassSourceEffectChainEntry(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain, int* EntryIndex, bool* bBypassed);
	void STATIC_ResumeRecordingOutput(class UObject** WorldContextObject, class USoundSubmix** SubmixToPause);
	void STATIC_RemoveSourceEffectFromPresetChain(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain, int* EntryIndex);
	void STATIC_RemoveMasterSubmixEffect(class UObject** WorldContextObject, class USoundEffectSubmixPreset** SubmixEffectPreset);
	void STATIC_PrimeSoundForPlayback(class USoundWave** SoundWave, struct FScriptDelegate* OnLoadCompletion);
	void STATIC_PrimeSoundCueForPlayback(class USoundCue** SoundCue);
	void STATIC_PauseRecordingOutput(class UObject** WorldContextObject, class USoundSubmix** SubmixToPause);
	void STATIC_GetPhaseForFrequencies(class UObject** WorldContextObject, TArray<float>* Frequencies, class USoundSubmix** SubmixToAnalyze, TArray<float>* Phases);
	int STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain);
	void STATIC_GetMagnitudeForFrequencies(class UObject** WorldContextObject, TArray<float>* Frequencies, class USoundSubmix** SubmixToAnalyze, TArray<float>* Magnitudes);
	void STATIC_ClearMasterSubmixEffects(class UObject** WorldContextObject);
	void STATIC_AddSourceEffectToPresetChain(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain, struct FSourceEffectChainEntry* Entry);
	void STATIC_AddMasterSubmixEffect(class UObject** WorldContextObject, class USoundEffectSubmixPreset** SubmixEffectPreset);
};


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x0078 (0x00B8 - 0x0040)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                 // 0x0090(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}


	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings* InSettings);
};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x0088 - 0x0040)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}


	void SetSettings(struct FSubmixEffectSubmixEQSettings* InSettings);
};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x0090 (0x00D0 - 0x0040)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0040(0x005C) MISSED OFFSET
	struct FSubmixEffectReverbSettings                 Settings;                                                 // 0x009C(0x0034) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect** InReverbEffect, float* WetLevel, float* DryLevel);
	void SetSettings(struct FSubmixEffectReverbSettings* InSettings);
};


// Class AudioMixer.SubmixEffectReverbFastPreset
// 0x0090 (0x00D0 - 0x0040)
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0040(0x005C) MISSED OFFSET
	struct FSubmixEffectReverbFastSettings             Settings;                                                 // 0x009C(0x0034) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbFastPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect** InReverbEffect, float* WetLevel, float* DryLevel);
	void SetSettings(struct FSubmixEffectReverbFastSettings* InSettings);
};


// Class AudioMixer.SynthSound
// 0x0020 (0x03F0 - 0x03D0)
class USynthSound : public USoundWaveProcedural
{
public:
	class USynthComponent*                             OwningSynthComponent;                                     // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
