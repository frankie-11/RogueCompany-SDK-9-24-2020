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

// Class LevelSequence.LevelSequenceActor
// 0x0090 (0x02A8 - 0x0218)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0218(0x0010) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0228(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FSoftObjectPath                             LevelSequence;                                            // 0x0248(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AActor*>                              AdditionalEventReceivers;                                 // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLevelSequenceCameraSettings                CameraSettings;                                           // 0x0270(0x0002) (Edit, BlueprintVisible)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                         // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bAutoPlay : 1;                                            // 0x0288(0x0001) (Deprecated BITFIELD: 0101)
	unsigned char                                      bOverrideInstanceData : 1;                                // 0x0288(0x0001) (Edit, BlueprintVisible BITFIELD: 0202)
	unsigned char                                      bReplicatePlayback : 1;                                   // 0x0288(0x0001) (Edit, BlueprintVisible BITFIELD: 0404)
	class UObject*                                     DefaultInstanceData;                                      // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                           // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bShowBurnin;                                              // 0x02A0(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}


	void ShowBurnin();
	void SetSequence(class ULevelSequence** InSequence);
	void SetReplicatePlayback(bool* ReplicatePlayback);
	void SetEventReceivers(TArray<class AActor*>* AdditionalReceivers);
	void SetBindingByTag(struct FName* BindingTag, TArray<class AActor*>* Actors, bool* bAllowBindingsFromAsset);
	void SetBinding(struct FMovieSceneObjectBindingID* Binding, TArray<class AActor*>* Actors, bool* bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(struct FMovieSceneObjectBindingID* Binding);
	void RemoveBindingByTag(struct FName* Tag, class AActor** Actor);
	void RemoveBinding(struct FMovieSceneObjectBindingID* Binding, class AActor** Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	class ULevelSequence* LoadSequence();
	void HideBurnin();
	class ULevelSequencePlayer* GetSequencePlayer();
	class ULevelSequence* GetSequence();
	TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName* Tag);
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName* Tag);
	void AddBindingByTag(struct FName* BindingTag, class AActor** Actor, bool* bAllowBindingsFromAsset);
	void AddBinding(struct FMovieSceneObjectBindingID* Binding, class AActor** Actor, bool* bAllowBindingsFromAsset);
};


// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0048 (0x0070 - 0x0028)
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class AActor*                                      TransformOriginActor;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  TransformOrigin;                                          // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceMetaData
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceMetaData : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceMetaData");
		return ptr;
	}

};


// Class LevelSequence.LevelSequence
// 0x0150 (0x0498 - 0x0348)
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0350(0x0050)
	struct FLevelSequenceBindingReferences             BindingReferences;                                        // 0x03A0(0x00A0)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                         // 0x0440(0x0050) (ZeroConstructor, Deprecated)
	class UClass*                                      DirectorClass;                                            // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}


	void RemoveMetaDataByClass(class UClass** InClass);
	class UObject* FindOrAddMetaDataByClass(class UClass** InClass);
	class UObject* FindMetaDataByClass(class UClass** InClass);
	class UObject* CopyMetaData(class UObject** InMetaData);
};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0028 (0x0050 - 0x0028)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	unsigned char                                      bUseBurnIn;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FSoftClassPath                              BurnInClass;                                              // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}


	void SetBurnIn(struct FSoftClassPath* InBurnInClass);
};


// Class LevelSequence.LevelSequenceBurnIn
// 0x00C0 (0x02F0 - 0x0230)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                         // 0x0230(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}


	void SetSettings(class UObject** InSettings);
	class UClass* GetSettingsClass();
};


// Class LevelSequence.LevelSequenceDirector
// 0x0008 (0x0030 - 0x0028)
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                        Player;                                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		return ptr;
	}


	void OnCreated();
};


// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0000 (0x00A0 - 0x00A0)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x0118 (0x0988 - 0x0870)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	struct FScriptMulticastDelegate                    OnCameraCut;                                              // 0x0870(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0870(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x108];                                     // 0x0880(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}


	class UCameraComponent* GetActiveCameraComponent();
	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject** WorldContextObject, class ULevelSequence** LevelSequence, struct FMovieSceneSequencePlaybackSettings* Settings, class ALevelSequenceActor** OutActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
