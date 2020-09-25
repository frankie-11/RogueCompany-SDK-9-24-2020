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

// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// 0x0018 (0x0040 - 0x0028)
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
public:
	unsigned char                                      bInterpolatePropertyValues;                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0029(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkBasicFrameInterpolationProcessor");
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// 0x0010 (0x0050 - 0x0040)
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor");
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationRoleToTransform
// 0x0018 (0x0040 - 0x0028)
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
public:
	struct FName                                       BoneName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationRoleToTransform");
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationVirtualSubject
// 0x0008 (0x00E0 - 0x00D8)
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationVirtualSubject");
		return ptr;
	}

};


// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// 0x0018 (0x0040 - 0x0028)
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
public:
	ELiveLinkAxis                                      AxisX;                                                    // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ELiveLinkAxis                                      AxisY;                                                    // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ELiveLinkAxis                                      AxisZ;                                                    // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x15];                                      // 0x002B(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor");
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// 0x0000 (0x0040 - 0x0040)
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor");
		return ptr;
	}

};


// Class LiveLink.LiveLinkBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkBlueprintLibrary");
		return ptr;
	}


	void STATIC_TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<struct FName>* TransformNames);
	void STATIC_TransformName(struct FLiveLinkTransform* LiveLinkTransform, struct FName* Name);
	void SetLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey* SubjectKey, bool* bEnabled);
	bool STATIC_RemoveSource(struct FLiveLinkSourceHandle* SourceHandle);
	void STATIC_ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	int STATIC_NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle);
	bool IsSpecificLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey* SubjectKey, bool* bForThisFrame);
	bool STATIC_IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle);
	bool IsLiveLinkSubjectEnabled(struct FLiveLinkSubjectName* SubjectName);
	bool STATIC_HasParent(struct FLiveLinkTransform* LiveLinkTransform);
	void STATIC_GetTransformByName(struct FName* TransformName, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	void STATIC_GetTransformByIndex(int* TransformIndex, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	class UClass* STATIC_GetSpecificLiveLinkSubjectRole(struct FLiveLinkSubjectKey* SubjectKey);
	struct FText STATIC_GetSourceType(struct FLiveLinkSourceHandle* SourceHandle);
	struct FText STATIC_GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle);
	struct FText STATIC_GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle);
	void STATIC_GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	bool STATIC_GetPropertyValue(struct FName* PropertyName, struct FLiveLinkBasicBlueprintData* BasicData, float* Value);
	void STATIC_GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent);
	void STATIC_GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData);
	TArray<struct FLiveLinkSubjectKey> STATIC_GetLiveLinkSubjects(bool* bIncludeDisabledSubject, bool* bIncludeDisal);
	class UClass* STATIC_GetLiveLinkSubjectRole(struct FLiveLinkSubjectName* SubjectName);
	TArray<struct FLiveLinkSubjectName> STATIC_GetLiveLinkEnabledSubjectNames(bool* bIncludeVirtualSubject);
	void STATIC_GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<struct FName, float>* Curves);
	void STATIC_GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
	void STATIC_GetBasicData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData);
	bool STATIC_EvaluateLiveLinkFrameWithSpecificRole(struct FLiveLinkSubjectName* SubjectName, class UClass** Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool STATIC_EvaluateLiveLinkFrameAtWorldTimeOffset(struct FLiveLinkSubjectName* SubjectName, class UClass** Role, float* WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool STATIC_EvaluateLiveLinkFrameAtSceneTime(struct FLiveLinkSubjectName* SubjectName, class UClass** Role, struct FTimecode* SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool STATIC_EvaluateLiveLinkFrame(struct FLiveLinkSubjectRepresentation* SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	void STATIC_ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	int STATIC_ChildCount(struct FLiveLinkTransform* LiveLinkTransform);
};


// Class LiveLink.LiveLinkComponent
// 0x0020 (0x00D0 - 0x00B0)
class ULiveLinkComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnLiveLinkUpdated;                                        // 0x00B0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00B0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkComponent");
		return ptr;
	}


	void GetSubjectDataAtWorldTime(struct FName* SubjectName, float* WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(struct FName* SubjectName, struct FTimecode* SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectData(struct FName* SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetAvailableSubjectNames(TArray<struct FName>* SubjectNames);
};


// Class LiveLink.LiveLinkDrivenComponent
// 0x0020 (0x00D0 - 0x00B0)
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                        SubjectName;                                              // 0x00B0(0x0008) (Edit)
	struct FName                                       ActorTransformBone;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bModifyActorTransform;                                    // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSetRelativeLocation;                                     // 0x00C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x00C2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkDrivenComponent");
		return ptr;
	}

};


// Class LiveLink.LiveLinkInstance
// 0x0000 (0x0270 - 0x0270)
class ULiveLinkInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkInstance");
		return ptr;
	}

};


// Class LiveLink.LiveLinkMessageBusFinder
// 0x0058 (0x0080 - 0x0028)
class ULiveLinkMessageBusFinder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusFinder");
		return ptr;
	}


	void GetAvailableProviders(class UObject** WorldContextObject, struct FLatentActionInfo* LatentInfo, float* Duration, TArray<struct FProviderPollResult>* AvailableProviders);
	class ULiveLinkMessageBusFinder* STATIC_ConstructMessageBusFinder();
	void STATIC_ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle);
};


// Class LiveLink.LiveLinkMessageBusSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusSourceFactory");
		return ptr;
	}

};


// Class LiveLink.LiveLinkPreset
// 0x0020 (0x0048 - 0x0028)
class ULiveLinkPreset : public UObject
{
public:
	TArray<struct FLiveLinkSourcePreset>               Sources;                                                  // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FLiveLinkSubjectPreset>              Subjects;                                                 // 0x0038(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkPreset");
		return ptr;
	}


	void BuildFromClient();
	bool ApplyToClient();
};


// Class LiveLink.LiveLinkRetargetAsset
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkRetargetAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkRetargetAsset");
		return ptr;
	}

};


// Class LiveLink.LiveLinkRemapAsset
// 0x00A0 (0x00C8 - 0x0028)
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkRemapAsset");
		return ptr;
	}


	void RemapCurveElements(TMap<struct FName, float>* CurveItems);
	struct FName GetRemappedCurveName(struct FName* CurveName);
	struct FName GetRemappedBoneName(struct FName* BoneName);
};


// Class LiveLink.LiveLinkSettings
// 0x0078 (0x00A0 - 0x0028)
class ULiveLinkSettings : public UObject
{
public:
	TArray<struct FLiveLinkRoleProjectSetting>         DefaultRoleSettings;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	class UClass*                                      FrameInterpolationProcessor;                              // 0x0038(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FDirectoryPath                              PresetSaveDir;                                            // 0x0040(0x0010) (Edit, Config)
	double                                             MessageBusPingRequestFrequency;                           // 0x0050(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             MessageBusHeartbeatFrequency;                             // 0x0058(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             MessageBusHeartbeatTimeout;                               // 0x0060(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             MessageBusTimeBeforeRemovingInactiveSource;               // 0x0068(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             TimeWithoutFrameToBeConsiderAsInvalid;                    // 0x0070(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FLinearColor                                ValidColor;                                               // 0x0078(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FLinearColor                                InvalidColor;                                             // 0x0088(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      TextSizeSource;                                           // 0x0098(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      TextSizeSubject;                                          // 0x0099(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkSettings");
		return ptr;
	}

};


// Class LiveLink.LiveLinkTimeSynchronizationSource
// 0x0050 (0x0080 - 0x0030)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	struct FLiveLinkSubjectName                        SubjectName;                                              // 0x0030(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkTimeSynchronizationSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
