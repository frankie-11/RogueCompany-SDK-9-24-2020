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

// Class Niagara.MovieSceneNiagaraTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraParameterTrack
// 0x0030 (0x0098 - 0x0068)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                            Parameter;                                                // 0x0068(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraColorParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemTrack
// 0x0000 (0x0068 - 0x0068)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// 0x0008 (0x00A0 - 0x0098)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	int                                                ChannelsUsed;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		return ptr;
	}

};


// Class Niagara.NiagaraActor
// 0x0008 (0x0220 - 0x0218)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x01B0 (0x05C0 - 0x0410)
class UNiagaraComponent : public UFXSystemComponent
{
public:
	ENiagaraTickBehavior                               TickBehavior;                                             // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserRedirectionParameterStore       OverrideParameters;                                       // 0x0418(0x0108) (Edit)
	unsigned char                                      bForceSolo : 1;                                           // 0x0520(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0521(0x0027) MISSED OFFSET
	unsigned char                                      bAutoDestroy : 1;                                         // 0x0548(0x0001) ( BITFIELD: 0101)
	unsigned char                                      bRenderingEnabled : 1;                                    // 0x0548(0x0001) ( BITFIELD: 0202)
	unsigned char                                      bAutoManageAttachment : 1;                                // 0x0548(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly BITFIELD: 0404)
	float                                              MaxTimeBeforeForceUpdateTransform;                        // 0x054C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0550(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSystemFinished;                                         // 0x0558(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0550(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TWeakObjectPtr<class USceneComponent>              AutoAttachParent;                                         // 0x0568(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       AutoAttachSocketName;                                     // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachLocationRule;                                   // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachRotationRule;                                   // 0x0579(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachScaleRule;                                      // 0x057A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PreviewDetailLevel;                                       // 0x057C(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PreviewLODDistance;                                       // 0x0580(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bEnablePreviewDetailLevel : 1;                            // 0x0584(0x0001) (Edit, Transient BITFIELD: 0101)
	unsigned char                                      bEnablePreviewLODDistance : 1;                            // 0x0584(0x0001) (Edit, Transient BITFIELD: 0202)
	unsigned char                                      UnknownData03[0x3B];                                      // 0x0585(0x003B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}


	void SetVariableVec4(struct FName* InVariableName, struct FVector4* InValue);
	void SetVariableVec3(struct FName* InVariableName, struct FVector* InValue);
	void SetVariableVec2(struct FName* InVariableName, struct FVector2D* InValue);
	void SetVariableQuat(struct FName* InVariableName, struct FQuat* InValue);
	void SetVariableObject(struct FName* InVariableName, class UObject** Object);
	void SetVariableMaterial(struct FName* InVariableName, class UMaterialInterface** Object);
	void SetVariableLinearColor(struct FName* InVariableName, struct FLinearColor* InValue);
	void SetVariableInt(struct FName* InVariableName, int* InValue);
	void SetVariableFloat(struct FName* InVariableName, float* InValue);
	void SetVariableBool(struct FName* InVariableName, bool* InValue);
	void SetVariableActor(struct FName* InVariableName, class AActor** Actor);
	void SetSeekDelta(float* InSeekDelta);
	void SetRenderingEnabled(bool* bInRenderingEnabled);
	void SetPreviewLODDistance(bool* bEnablePreviewLODDistance, float* PreviewLODDistance);
	void SetPreviewDetailLevel(bool* bEnablePreviewDetailLevel, int* PreviewDetailLevel);
	void SetPaused(bool* bInPaused);
	void SetNiagaraVariableVec4(struct FString* InVariableName, struct FVector4* InValue);
	void SetNiagaraVariableVec3(struct FString* InVariableName, struct FVector* InValue);
	void SetNiagaraVariableVec2(struct FString* InVariableName, struct FVector2D* InValue);
	void SetNiagaraVariableQuat(struct FString* InVariableName, struct FQuat* InValue);
	void SetNiagaraVariableObject(struct FString* InVariableName, class UObject** Object);
	void SetNiagaraVariableLinearColor(struct FString* InVariableName, struct FLinearColor* InValue);
	void SetNiagaraVariableInt(struct FString* InVariableName, int* InValue);
	void SetNiagaraVariableFloat(struct FString* InVariableName, float* InValue);
	void SetNiagaraVariableBool(struct FString* InVariableName, bool* InValue);
	void SetNiagaraVariableActor(struct FString* InVariableName, class AActor** Actor);
	void SetMaxSimTime(float* InMaxTime);
	void SetForceSolo(bool* bInForceSolo);
	void SetDesiredAge(float* InDesiredAge);
	void SetCanRenderWhileSeeking(bool* bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool* bInAutoDestroy);
	void SetAsset(class UNiagaraSystem** InAsset);
	void SetAgeUpdateMode(ENiagaraAgeUpdateMode* InAgeUpdateMode);
	void SeekToDesiredAge(float* InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	float GetSeekDelta();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString* InEmitterName, struct FString* InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString* InEmitterName, struct FString* InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString* InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagaraDataInterface* GetDataInterface(struct FString* Name);
	class UNiagaraSystem* GetAsset();
	ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float* SimulateTime, float* TickDeltaSeconds);
	void AdvanceSimulation(int* TickCount, float* TickDeltaSeconds);
};


// Class Niagara.NiagaraComponentPool
// 0x0058 (0x0080 - 0x0028)
class UNiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct FNCPool>        WorldParticleSystemPools;                                 // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponentPool");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterface
// 0x0010 (0x0038 - 0x0028)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0020 (0x0058 - 0x0038)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                      ShaderLUT;                                                // 0x0038(0x0010) (ZeroConstructor)
	float                                              LUTMinTime;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTMaxTime;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTInvTimeRange;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseLUT : 1;                                              // 0x0054(0x0001) (Edit BITFIELD: 0101)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCollisionQuery
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x0200 (0x0258 - 0x0058)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x0058(0x0080) (Edit)
	struct FRichCurve                                  GreenCurve;                                               // 0x00D8(0x0080) (Edit)
	struct FRichCurve                                  BlueCurve;                                                // 0x0158(0x0080) (Edit)
	struct FRichCurve                                  AlphaCurve;                                               // 0x01D8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32_t                                           Seed;                                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurve
// 0x0080 (0x00D8 - 0x0058)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                    // 0x0058(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraParticleCallbackHandler
// 0x0000 (0x0028 - 0x0028)
class UNiagaraParticleCallbackHandler : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParticleCallbackHandler");
		return ptr;
	}


	void ReceiveParticleData(TArray<struct FBasicParticleData>* Data, class UNiagaraSystem** NiagaraSystem);
};


// Class Niagara.NiagaraDataInterfaceExport
// 0x0030 (0x0068 - 0x0038)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding                CallbackHandlerParameter;                                 // 0x0038(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceExport");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceRWBase
// 0x00A8 (0x00E0 - 0x0038)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty Niagara.NiagaraDataInterfaceRWBase.OutputShaderStages
	unsigned char                                      UnknownData01[0x50];                                      // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty Niagara.NiagaraDataInterfaceRWBase.IterationShaderStages
	unsigned char                                      UnknownData02[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRWBase");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGrid2D
// 0x0028 (0x0108 - 0x00E0)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	int                                                NumCellsX;                                                // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCellsY;                                                // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellSize;                                                 // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumAttributes;                                            // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SetGridFromCellSize;                                      // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldBBoxMin;                                             // 0x00F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WorldBBoxSize;                                            // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2D");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// 0x0000 (0x0108 - 0x0108)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2DCollection");
		return ptr;
	}


	void FillTexture2D(class UNiagaraComponent** Component, class UTextureRenderTarget2D** dest, int* AttributeIndex);
};


// Class Niagara.NiagaraDataInterfaceGrid3D
// 0x0030 (0x0110 - 0x00E0)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  NumVoxels;                                                // 0x00E0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VoxelSize;                                                // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SetGridFromVoxelSize;                                     // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldBBoxMin;                                             // 0x00F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldBBoxSize;                                            // 0x0100(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid3D");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// 0x0008 (0x0118 - 0x0110)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32_t                                           MaxNeighborsPerVoxel;                                     // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceNeighborGrid3D");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceParticleRead
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterface
{
public:
	struct FString                                     EmitterName;                                              // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceParticleRead");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSimpleCounter
// 0x0000 (0x0038 - 0x0038)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// 0x0088 (0x00C0 - 0x0038)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                MeshUserParameter;                                        // 0x0040(0x0030) (Edit)
	class USkeletalMeshComponent*                      SourceComponent;                                          // 0x0070(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                             // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SamplingRegions;                                          // 0x0080(0x0010) (Edit, ZeroConstructor)
	int                                                WholeMeshLOD;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SpecificBones;                                            // 0x0098(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               SpecificSockets;                                          // 0x00A8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSpline
// 0x0008 (0x0040 - 0x0038)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x0030 (0x0068 - 0x0038)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class UStaticMesh*                                 DefaultMesh;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SourceComponent;                                          // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                            // 0x0050(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceTexture
// 0x0008 (0x0040 - 0x0038)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                                    Texture;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector2DCurve
// 0x0100 (0x0158 - 0x0058)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0058(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00D8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector4Curve
// 0x0200 (0x0258 - 0x0058)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0058(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00D8(0x0080) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0158(0x0080) (Edit)
	struct FRichCurve                                  WCurve;                                                   // 0x01D8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0180 (0x01D8 - 0x0058)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0058(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00D8(0x0080) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0158(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorField
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                                Field;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTileX;                                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTileY;                                                   // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTileZ;                                                   // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		return ptr;
	}

};


// Class Niagara.NiagaraEditorDataBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEditorDataBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		return ptr;
	}

};


// Class Niagara.NiagaraEmitter
// 0x0280 (0x02A8 - 0x0028)
class UNiagaraEmitter : public UObject
{
public:
	unsigned char                                      bLocalSpace;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDeterminism;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RandomSeed;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PreAllocationCount;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0038(0x0028)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x0060(0x0028)
	struct FNiagaraEmitterScriptProperties             EmitterSpawnScriptProps;                                  // 0x0088(0x0028)
	struct FNiagaraEmitterScriptProperties             EmitterUpdateScriptProps;                                 // 0x00B0(0x0028)
	ENiagaraSimTarget                                  SimTarget;                                                // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBox                                        FixedBounds;                                              // 0x00DC(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinDetailLevel;                                           // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxDetailLevel;                                           // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraDetailsLevelScaleOverrides          GlobalSpawnCountScaleOverrides;                           // 0x0100(0x0014) (Edit)
	unsigned char                                      bInterpolatedSpawning : 1;                                // 0x0114(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bFixedBounds : 1;                                         // 0x0114(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bUseMinDetailLevel : 1;                                   // 0x0114(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bUseMaxDetailLevel : 1;                                   // 0x0114(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bOverrideGlobalSpawnCountScale : 1;                       // 0x0114(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      bRequiresPersistentIDs : 1;                               // 0x0114(0x0001) (Edit BITFIELD: 2020)
	float                                              MaxDeltaTimePerTick;                                      // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxUpdateIterations;                                      // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0120(0x0050) UNKNOWN PROPERTY: SetProperty Niagara.NiagaraEmitter.SpawnStages
	unsigned char                                      bLimitDeltaTime : 1;                                      // 0x0170(0x0001) (Edit BITFIELD: 0101)
	struct FNiagaraFastPath_Module_EmitterScalability  EmitterScalability;                                       // 0x0174(0x002C) (Edit)
	struct FNiagaraFastPath_Module_EmitterLifeCycle    EmitterLifeCycle;                                         // 0x01A0(0x0010) (Edit)
	TArray<struct FNiagaraFastPath_Module_SpawnRate>   SpawnRate;                                                // 0x01B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNiagaraFastPath_Module_SpawnPerUnit> SpawnPerUnit;                                             // 0x01C0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNiagaraFastPath_Module_SpawnBurstInstantaneous> SpawnBurstInstantaneous;                                  // 0x01D0(0x0010) (Edit, ZeroConstructor)
	struct FNiagaraFastPathAttributeNames              SpawnFastPathAttributeNames;                              // 0x01E0(0x0040)
	struct FNiagaraFastPathAttributeNames              UpdateFastPathAttributeNames;                             // 0x0220(0x0040)
	struct FString                                     UniqueEmitterName;                                        // 0x0260(0x0010) (ZeroConstructor)
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                       // 0x0270(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraEventScriptProperties>       EventHandlerScriptProps;                                  // 0x0280(0x0010) (Edit, ZeroConstructor)
	class UNiagaraScript*                              GPUComputeScript;                                         // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SharedEventGeneratorIds;                                  // 0x0298(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEmitter");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (0x0030 - 0x0028)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}


	class UNiagaraComponent* STATIC_SpawnSystemAttached(class UNiagaraSystem** SystemTemplate, class USceneComponent** AttachToComponent, struct FName* AttachPointName, struct FVector* Location, struct FRotator* Rotation, TEnumAsByte<EAttachLocation>* LocationType, bool* bAutoDestroy, bool* bAutoActivate, ENCPoolMethod* PoolingMethod);
	class UNiagaraComponent* STATIC_SpawnSystemAtLocation(class UObject** WorldContextObject, class UNiagaraSystem** SystemTemplate, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale, bool* bAutoDestroy, bool* bAutoActivate, ENCPoolMethod* PoolingMethod);
	void STATIC_OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent** NiagaraSystem, struct FString* OverrideName, class UStaticMeshComponent** StaticMeshComponent);
	void STATIC_OverrideSystemUserVariableStaticMesh(class UNiagaraComponent** NiagaraSystem, struct FString* OverrideName, class UStaticMesh** StaticMesh);
	void STATIC_OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent** NiagaraSystem, struct FString* OverrideName, class USkeletalMeshComponent** SkeletalMeshComponent);
	class UNiagaraParameterCollectionInstance* STATIC_GetNiagaraParameterCollection(class UObject** WorldContextObject, class UNiagaraParameterCollection** Collection);
};


// Class Niagara.NiagaraRendererProperties
// 0x0008 (0x0030 - 0x0028)
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	int                                                SortOrderHint;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsEnabled;                                               // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraLightRendererProperties
// 0x0378 (0x03A8 - 0x0030)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	unsigned char                                      bUseInverseSquaredFalloff : 1;                            // 0x0030(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bAffectsTranslucency : 1;                                 // 0x0030(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bOverrideRenderingEnabled : 1;                            // 0x0030(0x0001) (Edit BITFIELD: 0404)
	float                                              RadiusScale;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorAdd;                                                 // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariableAttributeBinding            LightRenderingEnabledBinding;                             // 0x0048(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            LightExponentBinding;                                     // 0x00D8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0168(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x01F8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            RadiusBinding;                                            // 0x0288(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            VolumetricScatteringBinding;                              // 0x0318(0x0090) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x06E8 (0x0718 - 0x0030)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSortMode                                   SortMode;                                                 // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideMaterials : 1;                                   // 0x003C(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x003C(0x0001) (Edit BITFIELD: 0202)
	TArray<struct FNiagaraMeshMaterialOverride>        OverrideMaterials;                                        // 0x0040(0x0010) (Edit, ZeroConstructor)
	ENiagaraMeshFacingMode                             FacingMode;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0058(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x00E8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0178(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            MeshOrientationBinding;                                   // 0x0208(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            ScaleBinding;                                             // 0x0298(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0328(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x03B8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0448(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x04D8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0568(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x05F8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0688(0x0090) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraParameterCollectionInstance
// 0x00D0 (0x00F8 - 0x0028)
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*                 Collection;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    OverridenParameters;                                      // 0x0030(0x0010) (ZeroConstructor)
	struct FNiagaraParameterStore                      ParameterStorage;                                         // 0x0040(0x00B8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		return ptr;
	}


	void SetVectorParameter(struct FString* InVariableName, struct FVector* InValue);
	void SetVector4Parameter(struct FString* InVariableName, struct FVector4* InValue);
	void SetVector2DParameter(struct FString* InVariableName, struct FVector2D* InValue);
	void SetQuatParameter(struct FString* InVariableName, struct FQuat* InValue);
	void SetIntParameter(struct FString* InVariableName, int* InValue);
	void SetFloatParameter(struct FString* InVariableName, float* InValue);
	void SetColorParameter(struct FString* InVariableName, struct FLinearColor* InValue);
	void SetBoolParameter(struct FString* InVariableName, bool* InValue);
	struct FVector GetVectorParameter(struct FString* InVariableName);
	struct FVector4 GetVector4Parameter(struct FString* InVariableName);
	struct FVector2D GetVector2DParameter(struct FString* InVariableName);
	struct FQuat GetQuatParameter(struct FString* InVariableName);
	int GetIntParameter(struct FString* InVariableName);
	float GetFloatParameter(struct FString* InVariableName);
	struct FLinearColor GetColorParameter(struct FString* InVariableName);
	bool GetBoolParameter(struct FString* InVariableName);
};


// Class Niagara.NiagaraParameterCollection
// 0x0030 (0x0058 - 0x0028)
class UNiagaraParameterCollection : public UObject
{
public:
	struct FName                                       Namespace;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0030(0x0010) (ZeroConstructor)
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompileId;                                                // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewBase
// 0x0000 (0x0218 - 0x0218)
class ANiagaraPreviewBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewBase");
		return ptr;
	}


	void SetSystem(class UNiagaraSystem** InSystem);
	void SetLabelText(struct FText* InXAxisText, struct FText* InYAxisText);
};


// Class Niagara.NiagaraPreviewAxis
// 0x0000 (0x0028 - 0x0028)
class UNiagaraPreviewAxis : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis");
		return ptr;
	}


	int Num();
	void ApplyToPreview(class UNiagaraComponent** PreviewComponent, int* PreviewIndex, bool* bIsXAxis, struct FString* OutLabelText);
};


// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// 0x0010 (0x0038 - 0x0028)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	struct FName                                       Param;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamBase");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// 0x0008 (0x0040 - 0x0038)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int                                                Min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamInt32");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// 0x0008 (0x0040 - 0x0038)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                              Min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamFloat");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// 0x0010 (0x0048 - 0x0038)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                                   Min;                                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// 0x0018 (0x0050 - 0x0038)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                                     Min;                                                      // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// 0x0028 (0x0060 - 0x0038)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FVector4                                    Min;                                                      // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Max;                                                      // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector4");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// 0x0020 (0x0058 - 0x0038)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                                Min;                                                      // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Max;                                                      // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewGrid
// 0x0050 (0x0268 - 0x0218)
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                              System;                                                   // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraPreviewGridResetMode                       ResetMode;                                                // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                             // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                             // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PreviewClass;                                             // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingX;                                                 // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingY;                                                 // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumX;                                                     // 0x0248(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumY;                                                     // 0x024C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UChildActorComponent*>                PreviewComponents;                                        // 0x0250(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewGrid");
		return ptr;
	}


	void DeactivatePreviews();
	void ActivatePreviews(bool* bReset);
};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x0838 (0x0868 - 0x0030)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonFacingMode                           FacingMode;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UV0TilingDistance;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0Scale;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0Offset;                                                // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonAgeOffsetMode                        UV0AgeOffsetMode;                                         // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UV1TilingDistance;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1Scale;                                                 // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1Offset;                                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonAgeOffsetMode                        UV1AgeOffsetMode;                                         // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonDrawDirection                        DrawDirection;                                            // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurveTension;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonTessellationMode                     TessellationMode;                                         // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TessellationFactor;                                       // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseConstantFactor;                                       // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TessellationAngle;                                        // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bScreenSpaceTessellation;                                 // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0088(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0118(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x01A8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0238(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonTwistBinding;                                       // 0x02C8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonWidthBinding;                                       // 0x0358(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonFacingBinding;                                      // 0x03E8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonIdBinding;                                          // 0x0478(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonLinkOrderBinding;                                   // 0x0508(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0598(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0628(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x06B8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0748(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x07D8(0x0090) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x0528 (0x0550 - 0x0028)
class UNiagaraScript : public UObject
{
public:
	ENiagaraScriptUsage                                Usage;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                UsageIndex;                                               // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FGuid                                       UsageId;                                                  // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraParameterStore                      RapidIterationParameters;                                 // 0x0040(0x00B8)
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStore;                                // 0x00F8(0x00D8)
	TArray<struct FNiagaraBoundParameter>              ScriptExecutionBoundParameters;                           // 0x01D0(0x0010) (ZeroConstructor)
	struct FNiagaraVMExecutableDataId                  CachedScriptVMId;                                         // 0x01E0(0x0050)
	struct FNiagaraVMExecutableDataId                  LastGeneratedVMId;                                        // 0x0230(0x0050)
	unsigned char                                      UnknownData00[0x198];                                     // 0x0280(0x0198) MISSED OFFSET
	struct FNiagaraVMExecutableData                    CachedScriptVM;                                           // 0x0418(0x0118)
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                      // 0x0530(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     CachedDefaultDataInterfaces;                              // 0x0540(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}


	void OnCompilationComplete();
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}

};


// Class Niagara.NiagaraSettings
// 0x0030 (0x0068 - 0x0038)
class UNiagaraSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                     AdditionalParameterTypes;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     AdditionalPayloadTypes;                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     AdditionalParameterEnums;                                 // 0x0058(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		return ptr;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x09D8 (0x0A08 - 0x0030)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSpriteAlignment                            Alignment;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSpriteFacingMode                           FacingMode;                                               // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CustomFacingVectorMask;                                   // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PivotInUVSpace;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSortMode                                   SortMode;                                                 // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SubImageSize;                                             // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSubImageBlend : 1;                                       // 0x005C(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bRemoveHMDRollInVR : 1;                                   // 0x005C(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x005C(0x0001) (Edit BITFIELD: 0404)
	float                                              MinFacingCameraBlendDistance;                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0068(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x00F8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0188(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteRotationBinding;                                    // 0x0218(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteSizeBinding;                                        // 0x02A8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteFacingBinding;                                      // 0x0338(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteAlignmentBinding;                                   // 0x03C8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                     // 0x0458(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x04E8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x0578(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0608(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x0698(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                      // 0x0728(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            UVScaleBinding;                                           // 0x07B8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0848(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x08D8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0968(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x09F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraSystem
// 0x0350 (0x0380 - 0x0030)
class UNiagaraSystem : public UFXSystemAsset
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) MISSED OFFSET
	unsigned char                                      bDumpDebugSystemInfo;                                     // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDumpDebugEmitterInfo;                                    // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFixedBounds : 1;                                         // 0x0034(0x0001) (Edit BITFIELD: 0101)
	ENiagaraFastPathMode                               FastPathMode;                                             // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FNiagaraFastPath_Module_SystemScalability   SystemScalability;                                        // 0x003C(0x0010) (Edit)
	struct FNiagaraFastPath_Module_SystemLifeCycle     SystemLifeCycle;                                          // 0x004C(0x0001) (Edit)
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                           // 0x0050(0x0010) (ZeroConstructor)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                             // 0x0060(0x0010) (Edit, ZeroConstructor)
	class UNiagaraScript*                              SystemSpawnScript;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraScript*                              SystemUpdateScript;                                       // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	struct FNiagaraSystemCompiledData                  SystemCompiledData;                                       // 0x0090(0x01A8)
	struct FNiagaraUserRedirectionParameterStore       ExposedParameters;                                        // 0x0238(0x0108)
	struct FBox                                        FixedBounds;                                              // 0x0340(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoDeactivate;                                          // 0x035C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarmupTime;                                               // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WarmupTickCount;                                          // 0x0364(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarmupTickDelta;                                          // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasSystemScriptDIsWithPerInstanceData;                   // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               UserDINamesReadInSystemScripts;                           // 0x0370(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSystem");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
