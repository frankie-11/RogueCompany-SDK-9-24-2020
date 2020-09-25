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

// Class AkAudio.AkAcousticPortal
// 0x0090 (0x02E0 - 0x0250)
class AAkAcousticPortal : public AVolume
{
public:
	EAkAcousticPortalState                             InitialState;                                             // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ObstructionRefreshInterval;                               // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ObstructionCollisionChannel;                              // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x87];                                      // 0x0259(0x0087) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAcousticPortal");
		return ptr;
	}


	void OpenPortal();
	EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};


// Class AkAudio.AkPortalComponent
// 0x0000 (0x0210 - 0x0210)
class UAkPortalComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPortalComponent");
		return ptr;
	}

};


// Class AkAudio.AkAcousticTexture
// 0x0000 (0x0080 - 0x0080)
class UAkAcousticTexture : public UPhysicalMaterial
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAcousticTexture");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0040 (0x0258 - 0x0218)
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0218(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      StopWhenOwnerIsDestroyed;                                 // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoPost;                                                 // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ForceNoTickingOnAkComponent;                              // 0x022A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2D];                                      // 0x022B(0x002D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};


// Class AkAudio.AkAudioBank
// 0x0008 (0x0030 - 0x0028)
class UAkAudioBank : public UObject
{
public:
	unsigned char                                      AutoLoad;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioBank");
		return ptr;
	}

};


// Class AkAudio.AkAudioEvent
// 0x0018 (0x0040 - 0x0028)
class UAkAudioEvent : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttenuationRadius;                                     // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsInfinite;                                               // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDuration;                                          // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumDuration;                                          // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioEvent");
		return ptr;
	}


	float GetMaxAttenuationRadius();
};


// Class AkAudio.AkComponent
// 0x01E0 (0x03F0 - 0x0210)
class UAkComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                    // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     EarlyReflectionAuxBusName;                                // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                EarlyReflectionOrder;                                     // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionBusSendGain;                               // 0x022C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionMaxPathLength;                             // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OcclusionCollisionChannel;                                // 0x0234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnableSpotReflectors : 1;                                 // 0x023C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 0101)
	float                                              roomReverbAuxBusGain;                                     // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                diffractionMaxEdges;                                      // 0x0244(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                diffractionMaxPaths;                                      // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              diffractionMaxPathLength;                                 // 0x024C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DrawFirstOrderReflections : 1;                            // 0x0250(0x0001) (Edit, BlueprintVisible BITFIELD: 0101)
	unsigned char                                      DrawSecondOrderReflections : 1;                           // 0x0250(0x0001) (Edit, BlueprintVisible BITFIELD: 0202)
	unsigned char                                      DrawHigherOrderReflections : 1;                           // 0x0250(0x0001) (Edit, BlueprintVisible BITFIELD: 0404)
	unsigned char                                      DrawGeometricDiffraction : 1;                             // 0x0250(0x0001) (Edit, BlueprintVisible BITFIELD: 0808)
	unsigned char                                      DrawSoundPropagation : 1;                                 // 0x0250(0x0001) (Edit, BlueprintVisible BITFIELD: 1010)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	unsigned char                                      StopWhenOwnerDestroyed;                                   // 0x0254(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentMaxAttenuation;                                    // 0x0258(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AttenuationScalingFactor;                                 // 0x025C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionRefreshInterval;                                 // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x170];                                     // 0x0280(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}


	void UseReverbVolumes(bool* inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus** AuxBus, int* Order, float* BusSendGain, float* MaxPathLength, bool* SpotReflectors, struct FString* AuxBusName);
	void Stop();
	void SetUseSpatialAudio(bool* bNewValue);
	void SetSwitch(struct FString* SwitchGroup, struct FString* SwitchState);
	void SetStopWhenOwnerDestroyed(bool* bStopWhenOwnerDestroyed);
	void SetRTPCValue(struct FString* RTPC, float* Value, int* InterpolationTimeMs);
	void SetOutputBusVolume(float* BusVolume);
	void SetListeners(TArray<class UAkComponent*>* Listeners);
	void SetAttenuationScalingFactor(float* Value);
	void PostTrigger(struct FString* Trigger);
	int PostAssociatedAkEventAndWaitForEnd(struct FLatentActionInfo* LatentInfo);
	int PostAssociatedAkEvent(int* CallbackMask, struct FScriptDelegate* PostEventCallback);
	int PostAkEventByName(struct FString* in_EventName);
	int PostAkEventAndWaitForEnd(class UAkAudioEvent** AkEvent, struct FString* in_EventName, struct FLatentActionInfo* LatentInfo);
	int PostAkEvent(class UAkAudioEvent** AkEvent, int* CallbackMask, struct FScriptDelegate* PostEventCallback, struct FString* in_EventName);
	float GetAttenuationRadius();
};


// Class AkAudio.AkAudioInputComponent
// 0x0010 (0x0400 - 0x03F0)
class UAkAudioInputComponent : public UAkComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioInputComponent");
		return ptr;
	}


	int PostAssociatedAudioInputEvent();
};


// Class AkAudio.AkAuxBus
// 0x0010 (0x0038 - 0x0028)
class UAkAuxBus : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAuxBus");
		return ptr;
	}

};


// Class AkAudio.AkCheckBox
// 0x0A88 (0x0BA8 - 0x0120)
class UAkCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x418];                                     // 0x0120(0x0418) MISSED OFFSET
	ECheckBoxState                                     CheckedState;                                             // 0x0538(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x053C(0x0010) (ZeroConstructor, InstancedReference)
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x0550(0x0580) (Edit, BlueprintVisible)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0AD0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsFocusable;                                              // 0x0AD1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FAkBoolPropertyToControl                    ThePropertyToControl;                                     // 0x0AD8(0x0010) (Edit)
	struct FAkWwiseItemToControl                       ItemToControl;                                            // 0x0AE8(0x0040) (Edit, Config, EditConst)
	struct FScriptMulticastDelegate                    AkOnCheckStateChanged;                                    // 0x0B28(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0B28(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnItemDropped;                                            // 0x0B38(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0B38(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                        // 0x0B48(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0B48(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData04[0x50];                                      // 0x0B58(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkCheckBox");
		return ptr;
	}


	void SetIsChecked(bool* InIsChecked);
	void SetCheckedState(ECheckBoxState* InCheckedState);
	void SetAkItemId(struct FGuid* ItemId);
	void SetAkBoolProperty(struct FString* ItemProperty);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
	struct FString GetAkProperty();
	struct FGuid GetAkItemId();
};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return ptr;
	}


	void STATIC_UseReverbVolumes(bool* inUseReverbVolumes, class AActor** Actor);
	void STATIC_UseEarlyReflections(class AActor** Actor, class UAkAuxBus** AuxBus, int* Order, float* BusSendGain, float* MaxPathLength, bool* SpotReflectors, struct FString* AuxBusName);
	void STATIC_UnloadBankByName(struct FString* BankName);
	void STATIC_UnloadBankAsync(class UAkAudioBank** Bank, struct FScriptDelegate* BankUnloadedCallback);
	void STATIC_UnloadBank(class UAkAudioBank** Bank, struct FString* BankName, struct FLatentActionInfo* LatentInfo, class UObject** WorldContextObject);
	void STATIC_StopProfilerCapture();
	void STATIC_StopOutputCapture();
	void STATIC_StopAllAmbientSounds(class UObject** WorldContextObject);
	void STATIC_StopAll();
	void STATIC_StopActor(class AActor** Actor);
	void STATIC_StartProfilerCapture(struct FString* Filename);
	void STATIC_StartOutputCapture(struct FString* Filename);
	void STATIC_StartAllAmbientSounds(class UObject** WorldContextObject);
	class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject** WorldContextObject, class UAkAudioEvent** AkEvent, class UAkAuxBus** EarlyReflectionsBus, struct FVector* Location, struct FRotator* Orientation, bool* AutoPost, struct FString* EventName, struct FString* EarlyReflectionsBusName, bool* AutoDestroy);
	void STATIC_SetSwitch(struct FName* SwitchGroup, struct FName* SwitchState, class AActor** Actor);
	void STATIC_SetState(struct FName* StateGroup, struct FName* State);
	void STATIC_SetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, struct FString* DeviceShareset);
	void STATIC_SetRTPCValueDirect(struct FString* RTPC, float* Value, int* InterpolationTimeMs, class UAkComponent** AkComponent);
	void STATIC_SetRTPCValue(struct FName* RTPC, float* Value, int* InterpolationTimeMs, class AActor** Actor);
	void STATIC_SetPanningRule(EPanningRule* PanRule);
	void STATIC_SetOutputBusVolume(float* BusVolume, class AActor** Actor);
	void STATIC_SetOcclusionScalingFactor(float* ScalingFactor);
	void STATIC_SetOcclusionRefreshInterval(float* RefreshInterval, class AActor** Actor);
	void STATIC_SetMultiplePositions(class UAkComponent** GameObjectAkComponent, TArray<struct FTransform>* Positions, EAkMultiPositionType* MultiPositionType);
	void STATIC_SetMultipleChannelEmitterPositions(class UAkComponent** GameObjectAkComponent, TArray<EAkChannelConfiguration>* ChannelMasks, TArray<struct FTransform>* Positions, EAkMultiPositionType* MultiPositionType);
	void STATIC_SetBusConfig(struct FString* BusName, EAkChannelConfiguration* ChannelConfiguration);
	void STATIC_PostTrigger(struct FName* Trigger, class AActor** Actor);
	void STATIC_PostEventByName(struct FString* EventName, class AActor** Actor, bool* bStopWhenAttachedToDestroyed);
	int STATIC_PostEventAttached(class UAkAudioEvent** AkEvent, class AActor** Actor, struct FName* AttachPointName, bool* bStopWhenAttachedToDestroyed, struct FString* EventName);
	void STATIC_PostEventAtLocationByName(struct FString* EventName, struct FVector* Location, struct FRotator* Orientation, class UObject** WorldContextObject);
	int STATIC_PostEventAtLocation(class UAkAudioEvent** AkEvent, struct FVector* Location, struct FRotator* Orientation, struct FString* EventName, class UObject** WorldContextObject);
	int STATIC_PostEvent(class UAkAudioEvent** AkEvent, class AActor** Actor, int* CallbackMask, struct FScriptDelegate* PostEventCallback, bool* bStopWhenAttachedToDestroyed, struct FString* EventName);
	int STATIC_PostAndWaitForEndOfEvent(class UAkAudioEvent** AkEvent, class AActor** Actor, bool* bStopWhenAttachedToDestroyed, struct FString* EventName, struct FLatentActionInfo* LatentInfo);
	void STATIC_LoadInitBank();
	void STATIC_LoadBanks(TArray<class UAkAudioBank*>* SoundBanks, bool* SynchronizeSoundBanks);
	void STATIC_LoadBankByName(struct FString* BankName);
	void STATIC_LoadBankAsync(class UAkAudioBank** Bank, struct FScriptDelegate* BankLoadedCallback);
	void STATIC_LoadBank(class UAkAudioBank** Bank, struct FString* BankName, struct FLatentActionInfo* LatentInfo, class UObject** WorldContextObject);
	bool STATIC_IsGame(class UObject** WorldContextObject);
	bool STATIC_IsEditor();
	void STATIC_GetSpeakerAngles(struct FString* DeviceShareset, TArray<float>* SpeakerAngles, float* HeightAngle);
	float STATIC_GetOcclusionScalingFactor();
	class UAkComponent* STATIC_GetAkComponent(class USceneComponent** AttachToComponent, struct FName* AttachPointName, struct FVector* Location, TEnumAsByte<EAttachLocation>* LocationType);
	void STATIC_ExecuteActionOnEvent(class UAkAudioEvent** AkEvent, EAkActionOnEventType* ActionType, class AActor** Actor, int* TransitionDuration, EAkCurveInterpolation* FadeCurve, int* PlayingID);
	void STATIC_ClearBanks();
	void STATIC_CancelEventCallback(struct FScriptDelegate* PostEventCallback);
	void STATIC_AddOutputCaptureMarker(struct FString* MarkerText);
};


// Class AkAudio.AkCallbackInfo
// 0x0008 (0x0030 - 0x0028)
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                                AkComponent;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkEventCallbackInfo
// 0x0008 (0x0038 - 0x0030)
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EventID;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkEventCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkMIDIEventCallbackInfo
// 0x0008 (0x0040 - 0x0038)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMIDIEventCallbackInfo");
		return ptr;
	}


	EAkMidiEventType GetType();
	bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
	bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
	bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
	bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
	bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
	unsigned char GetChannel();
	bool GetCc(struct FAkMidiCc* AsCc);
};


// Class AkAudio.AkMarkerCallbackInfo
// 0x0018 (0x0050 - 0x0038)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	int                                                Identifier;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Position;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMarkerCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkDurationCallbackInfo
// 0x0018 (0x0050 - 0x0038)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	float                                              Duration;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EstimatedDuration;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AudioNodeID;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MediaID;                                                  // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bStreaming;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDurationCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkMusicSyncCallbackInfo
// 0x0040 (0x0070 - 0x0030)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FAkSegmentInfo                              SegmentInfo;                                              // 0x0034(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	EAkCallbackType                                    MusicSyncType;                                            // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserCueName;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMusicSyncCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkItemBoolPropertiesConv
// 0x0000 (0x0028 - 0x0028)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemBoolPropertiesConv");
		return ptr;
	}


	struct FText STATIC_Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl* INAkBoolPropertyToControl);
	struct FString STATIC_Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl* INAkBoolPropertyToControl);
};


// Class AkAudio.AkItemBoolProperties
// 0x0040 (0x0148 - 0x0108)
class UAkItemBoolProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0108(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0108(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                        // 0x0118(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0118(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData02[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemBoolProperties");
		return ptr;
	}


	void SetSearchText(struct FString* newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};


// Class AkAudio.AkItemPropertiesConv
// 0x0000 (0x0028 - 0x0028)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemPropertiesConv");
		return ptr;
	}


	struct FText STATIC_Conv_FAkPropertyToControlToText(struct FAkPropertyToControl* INAkPropertyToControl);
	struct FString STATIC_Conv_FAkPropertyToControlToString(struct FAkPropertyToControl* INAkPropertyToControl);
};


// Class AkAudio.AkItemProperties
// 0x0040 (0x0148 - 0x0108)
class UAkItemProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0108(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0108(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                        // 0x0118(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0118(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData02[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemProperties");
		return ptr;
	}


	void SetSearchText(struct FString* newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};


// Class AkAudio.AkLateReverbComponent
// 0x0070 (0x0280 - 0x0210)
class UAkLateReverbComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SendLevel;                                                // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkLateReverbComponent*                      NextLowerPriorityComponent;                               // 0x0238(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0240(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkLateReverbComponent");
		return ptr;
	}

};


// Class AkAudio.AkReverbVolume
// 0x0038 (0x0288 - 0x0250)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0250(0x0001) (Deprecated BITFIELD: 0101)
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0258(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0260(0x0010) (ZeroConstructor, Deprecated)
	float                                              SendLevel;                                                // 0x0270(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x0274(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Priority;                                                 // 0x0278(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAkLateReverbComponent*                      LateReverbComponent;                                      // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkReverbVolume");
		return ptr;
	}

};


// Class AkAudio.AkRoomComponent
// 0x0020 (0x0230 - 0x0210)
class UAkRoomComponent : public USceneComponent
{
public:
	class UAkRoomComponent*                            NextLowerPriorityComponent;                               // 0x0210(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              Priority;                                                 // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallOcclusion;                                            // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkRoomComponent");
		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x0080 (0x00A8 - 0x0028)
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0030(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseSoundBankFolder;                                     // 0x0040(0x0010) (Edit, Config)
	unsigned char                                      bAutoConnectToWAAPI;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bEnableMultiCoreRendering;                                // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DefaultOcclusionCollisionChannel;                         // 0x0052(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0058(0x0010) (Config, Deprecated)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0068(0x0010) (Config, Deprecated)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSettings");
		return ptr;
	}

};


// Class AkAudio.AkSettingsPerUser
// 0x0028 (0x0050 - 0x0028)
class UAkSettingsPerUser : public UObject
{
public:
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0028(0x0010) (Edit, Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0038(0x0010) (Edit, Config)
	unsigned char                                      SuppressWwiseProjectPathWarnings;                         // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSettingsPerUser");
		return ptr;
	}

};


// Class AkAudio.AkSlider
// 0x0428 (0x0530 - 0x0108)
class UAkSlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x010C(0x0010) (ZeroConstructor, InstancedReference)
	struct FSliderStyle                                WidgetStyle;                                              // 0x0120(0x0340) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0460(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderBarColor;                                           // 0x0464(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x0474(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IndentHandle;                                             // 0x0484(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Locked;                                                   // 0x0485(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StepSize;                                                 // 0x0488(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsFocusable;                                              // 0x048C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FAkPropertyToControl                        ThePropertyToControl;                                     // 0x0490(0x0010) (Edit, EditConst)
	struct FAkWwiseItemToControl                       ItemToControl;                                            // 0x04A0(0x0040) (Edit, Config, EditConst)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x04E0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04E0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnItemDropped;                                            // 0x04F0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x04F0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                        // 0x0500(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0500(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData03[0x20];                                      // 0x0510(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSlider");
		return ptr;
	}


	void SetValue(float* InValue);
	void SetStepSize(float* InValue);
	void SetSliderHandleColor(struct FLinearColor* InValue);
	void SetSliderBarColor(struct FLinearColor* InValue);
	void SetLocked(bool* InValue);
	void SetIndentHandle(bool* InValue);
	void SetAkSliderItemProperty(struct FString* ItemProperty);
	void SetAkSliderItemId(struct FGuid* ItemId);
	float GetValue();
	struct FString GetAkSliderItemProperty();
	struct FGuid GetAkSliderItemId();
};


// Class AkAudio.AkSpatialAudioVolume
// 0x0018 (0x0268 - 0x0250)
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                      // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkLateReverbComponent*                      LateReverb;                                               // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkRoomComponent*                            Room;                                                     // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSpatialAudioVolume");
		return ptr;
	}

};


// Class AkAudio.AkSpotReflector
// 0x0030 (0x0248 - 0x0218)
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAkAcousticTexture*                          AcousticTexture;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceScalingFactor;                                    // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSpotReflector");
		return ptr;
	}

};


// Class AkAudio.AkSurfaceReflectorSetComponent
// 0x0030 (0x0240 - 0x0210)
class UAkSurfaceReflectorSetComponent : public USceneComponent
{
public:
	TArray<struct FAkPoly>                             AcousticPolys;                                            // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bEnableDiffraction : 1;                                   // 0x0220(0x0001) (Edit, BlueprintVisible BITFIELD: 0101)
	unsigned char                                      bEnableDiffractionOnBoundaryEdges : 1;                    // 0x0220(0x0001) (Edit, BlueprintVisible BITFIELD: 0202)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0221(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSurfaceReflectorSetComponent");
		return ptr;
	}


	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};


// Class AkAudio.AkWaapiCalls
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWaapiCalls");
		return ptr;
	}


	struct FAKWaapiJsonObject STATIC_Unsubscribe(struct FAkWaapiSubscriptionId* SubscriptionId, bool* UnsubscriptionDone);
	struct FAKWaapiJsonObject STATIC_SubscribeToWaapi(struct FAkWaapiUri* WaapiUri, struct FAKWaapiJsonObject* WaapiOptions, struct FScriptDelegate* Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
	void STATIC_SetSubscriptionID(struct FAkWaapiSubscriptionId* Subscription, int* ID);
	bool STATIC_RegisterWaapiProjectLoadedCallback(struct FScriptDelegate* Callback);
	bool STATIC_RegisterWaapiConnectionLostCallback(struct FScriptDelegate* Callback);
	int STATIC_GetSubscriptionID(struct FAkWaapiSubscriptionId* Subscription);
	struct FText STATIC_Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId* INAkWaapiSubscriptionId);
	struct FString STATIC_Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId* INAkWaapiSubscriptionId);
	struct FAKWaapiJsonObject STATIC_CallWaapi(struct FAkWaapiUri* WaapiUri, struct FAKWaapiJsonObject* WaapiArgs, struct FAKWaapiJsonObject* WaapiOptions);
};


// Class AkAudio.SAkWaapiFieldNamesConv
// 0x0000 (0x0028 - 0x0028)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SAkWaapiFieldNamesConv");
		return ptr;
	}


	struct FText STATIC_Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames* INAkWaapiFieldNames);
	struct FString STATIC_Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames* INAkWaapiFieldNames);
};


// Class AkAudio.AkWaapiJsonManager
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWaapiJsonManager");
		return ptr;
	}


	struct FAKWaapiJsonObject STATIC_SetStringField(struct FAkWaapiFieldNames* FieldName, struct FString* FieldValue, struct FAKWaapiJsonObject* Target);
	struct FAKWaapiJsonObject STATIC_SetObjectField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* FieldValue, struct FAKWaapiJsonObject* Target);
	struct FAKWaapiJsonObject STATIC_SetNumberField(struct FAkWaapiFieldNames* FieldName, float* FieldValue, struct FAKWaapiJsonObject* Target);
	struct FAKWaapiJsonObject STATIC_SetBoolField(struct FAkWaapiFieldNames* FieldName, bool* FieldValue, struct FAKWaapiJsonObject* Target);
	struct FAKWaapiJsonObject STATIC_SetArrayStringFields(struct FAkWaapiFieldNames* FieldName, TArray<struct FString>* FieldStringValues, struct FAKWaapiJsonObject* Target);
	struct FAKWaapiJsonObject STATIC_SetArrayObjectFields(struct FAkWaapiFieldNames* FieldName, TArray<struct FAKWaapiJsonObject>* FieldObjectValues, struct FAKWaapiJsonObject* Target);
	struct FString STATIC_GetStringField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* Target);
	struct FAKWaapiJsonObject STATIC_GetObjectField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* Target);
	float STATIC_GetNumberField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* Target);
	int STATIC_GetIntegerField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* Target);
	bool STATIC_GetBoolField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* Target);
	TArray<struct FAKWaapiJsonObject> STATIC_GetArrayField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* Target);
	struct FText STATIC_Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject* INAKWaapiJsonObject);
	struct FString STATIC_Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject* INAKWaapiJsonObject);
};


// Class AkAudio.AkWaapiUriConv
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWaapiUriConv");
		return ptr;
	}


	struct FText STATIC_Conv_FAkWaapiUriToText(struct FAkWaapiUri* INAkWaapiUri);
	struct FString STATIC_Conv_FAkWaapiUriToString(struct FAkWaapiUri* INAkWaapiUri);
};


// Class AkAudio.AkWwiseTree
// 0x0040 (0x0148 - 0x0108)
class UAkWwiseTree : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0108(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0108(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnItemDragged;                                            // 0x0118(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0118(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData02[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWwiseTree");
		return ptr;
	}


	void SetSearchText(struct FString* newText);
	struct FAkWwiseObjectDetails GetSelectedItem();
	struct FString GetSearchText();
};


// Class AkAudio.AkWwiseTreeSelector
// 0x0060 (0x0168 - 0x0108)
class UAkWwiseTreeSelector : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0108(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0108(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnItemDragged;                                            // 0x0118(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0118(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData02[0x40];                                      // 0x0128(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWwiseTreeSelector");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A0(0x0001) (Edit, BlueprintVisible BITFIELD: 0101)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00A0(0x0001) (Edit, BlueprintVisible BITFIELD: 0101)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00A0(0x0001) (Edit, BlueprintVisible BITFIELD: 0202)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventSection
// 0x00E8 (0x01C8 - 0x00E0)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00E0(0x0040) MISSED OFFSET
	class UAkAudioEvent*                               Event;                                                    // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RetriggerEvent;                                           // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ScrubTailLengthMs;                                        // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      StopAtSectionEnd;                                         // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0138(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0148(0x0020) MISSED OFFSET
	float                                              MaxSourceDuration;                                        // 0x0168(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     MaxDurationSourceID;                                      // 0x0170(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0180(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventSection");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkTrack
// 0x0018 (0x0070 - 0x0058)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x0068(0x0001) ( BITFIELD: 0101)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkTrack");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (0x0070 - 0x0070)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventTrack");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0160 (0x0240 - 0x00E0)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	struct FString                                     Name;                                                     // 0x00E0(0x0010) (Edit, ZeroConstructor)
	struct FRichCurve                                  FloatCurve;                                               // 0x00F0(0x0080)
	struct FMovieSceneFloatChannelSerializationHelper  FloatChannelSerializationHelper;                          // 0x0170(0x0030)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x01A0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCSection");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (0x0070 - 0x0070)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
