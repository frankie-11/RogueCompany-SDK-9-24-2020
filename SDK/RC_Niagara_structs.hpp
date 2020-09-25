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

// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None    = 0,
	ENiagaraCollisionMode__SceneGeometry = 1,
	ENiagaraCollisionMode__DepthBuffer = 2,
	ENiagaraCollisionMode__DistanceField = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX = 4
};


// Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond = 2,
	ENiagaraLegacyTrailWidthMode__ENiagaraLegacyTrailWidthMode_MAX = 3
};


// Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle  = 0,
	ENiagaraScriptGroup__Emitter   = 1,
	ENiagaraScriptGroup__System    = 2,
	ENiagaraScriptGroup__Max       = 3
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function  = 0,
	ENiagaraScriptUsage__Module    = 1,
	ENiagaraScriptUsage__DynamicInput = 2,
	ENiagaraScriptUsage__ParticleSpawnScript = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated = 4,
	ENiagaraScriptUsage__ParticleUpdateScript = 5,
	ENiagaraScriptUsage__ParticleEventScript = 6,
	ENiagaraScriptUsage__ParticleGPUComputeScript = 7,
	ENiagaraScriptUsage__EmitterSpawnScript = 8,
	ENiagaraScriptUsage__EmitterUpdateScript = 9,
	ENiagaraScriptUsage__SystemSpawnScript = 10,
	ENiagaraScriptUsage__SystemUpdateScript = 11,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX = 12
};


// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty = 1,
	ENiagaraScriptCompileStatus__NCS_Error = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings = 6,
	ENiagaraScriptCompileStatus__NCS_MAX = 7
};


// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined = 0,
	ENiagaraInputNodeUsage__Parameter = 1,
	ENiagaraInputNodeUsage__Attribute = 2,
	ENiagaraInputNodeUsage__SystemConstant = 3,
	ENiagaraInputNodeUsage__TranslatorConstant = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter = 5,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX = 6
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData = 0,
	ENiagaraDataSetType__Shared    = 1,
	ENiagaraDataSetType__Event     = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3
};


// Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime = 0,
	ENiagaraAgeUpdateMode__DesiredAge = 1,
	ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX = 2
};


// Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim      = 0,
	ENiagaraSimTarget__GPUComputeSim = 1,
	ENiagaraSimTarget__ENiagaraSimTarget_MAX = 2
};


// Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs = 0,
	ENiagaraTickBehavior__UseComponentTickGroup = 1,
	ENiagaraTickBehavior__ForceTickFirst = 2,
	ENiagaraTickBehavior__ForceTickLast = 3,
	ENiagaraTickBehavior__ENiagaraTickBehavior_MAX = 4
};


// Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None            = 0,
	ENCPoolMethod__AutoRelease     = 1,
	ENCPoolMethod__ManualRelease   = 2,
	ENCPoolMethod__ManualRelease_OnComplete = 3,
	ENCPoolMethod__FreeInPool      = 4,
	ENCPoolMethod__ENCPoolMethod_MAX = 5
};


// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__None = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin = 2,
	ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX = 3
};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle = 0,
	EScriptExecutionMode__SpawnedParticles = 1,
	EScriptExecutionMode__SingleParticle = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX = 3
};


// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None         = 0,
	ENiagaraSortMode__ViewDepth    = 1,
	ENiagaraSortMode__ViewDistance = 2,
	ENiagaraSortMode__CustomAscending = 3,
	ENiagaraSortMode__CustomDecending = 4,
	ENiagaraSortMode__ENiagaraSortMode_MAX = 5
};


// Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default = 0,
	ENiagaraMeshFacingMode__Velocity = 1,
	ENiagaraMeshFacingMode__CameraPosition = 2,
	ENiagaraMeshFacingMode__CameraPlane = 3,
	ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX = 4
};


// Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never = 0,
	ENiagaraPreviewGridResetMode__Individual = 1,
	ENiagaraPreviewGridResetMode__All = 2,
	ENiagaraPreviewGridResetMode__ENiagaraPreviewGridResetMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic = 0,
	ENiagaraRibbonTessellationMode__Custom = 1,
	ENiagaraRibbonTessellationMode__Disabled = 2,
	ENiagaraRibbonTessellationMode__ENiagaraRibbonTessellationMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack = 0,
	ENiagaraRibbonDrawDirection__BackToFront = 1,
	ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX = 2
};


// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale = 0,
	ENiagaraRibbonAgeOffsetMode__Clip = 1,
	ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX = 2
};


// Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen = 0,
	ENiagaraRibbonFacingMode__Custom = 1,
	ENiagaraRibbonFacingMode__CustomSideVector = 2,
	ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX = 3
};


// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX = 2
};


// Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency = 0,
	ENiagaraModuleDependencyType__PostDependency = 1,
	ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX = 2
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy = 0,
	EUnusedAttributeBehaviour__Zero = 1,
	EUnusedAttributeBehaviour__None = 2,
	EUnusedAttributeBehaviour__MarkInvalid = 3,
	EUnusedAttributeBehaviour__PassThrough = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5
};


// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX = 5
};


// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned = 0,
	ENiagaraSpriteAlignment__VelocityAligned = 1,
	ENiagaraSpriteAlignment__CustomAlignment = 2,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX = 3
};


// Enum Niagara.ENiagaraFastPathInputType
enum class ENiagaraFastPathInputType : uint8_t
{
	ENiagaraFastPathInputType__Local = 0,
	ENiagaraFastPathInputType__RangedSpawn = 1,
	ENiagaraFastPathInputType__RangedUpdate = 2,
	ENiagaraFastPathInputType__User = 3,
	ENiagaraFastPathInputType__ENiagaraFastPathInputType_MAX = 4
};


// Enum Niagara.ENiagaraFastPathMode
enum class ENiagaraFastPathMode : uint8_t
{
	ENiagaraFastPathMode__ScriptVMOnly = 0,
	ENiagaraFastPathMode__FastPathOnly = 1,
	ENiagaraFastPathMode__ScrptVMAndFastPath = 2,
	ENiagaraFastPathMode__ENiagaraFastPathMode_MAX = 3
};


// Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
	ENiagaraExecutionState__Active = 0,
	ENiagaraExecutionState__Inactive = 1,
	ENiagaraExecutionState__InactiveClear = 2,
	ENiagaraExecutionState__Complete = 3,
	ENiagaraExecutionState__Disabled = 4,
	ENiagaraExecutionState__Num    = 5,
	ENiagaraExecutionState__ENiagaraExecutionState_MAX = 6
};


// Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability = 0,
	ENiagaraExecutionStateSource__Internal = 1,
	ENiagaraExecutionStateSource__Owner = 2,
	ENiagaraExecutionStateSource__InternalCompletion = 3,
	ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX = 4
};


// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraTypeDefinition
// 0x0018
struct FNiagaraTypeDefinition
{
	class UStruct*                                     Struct;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEnum*                                       Enum;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariable
// 0x0030
struct FNiagaraVariable
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraTypeDefinition                      TypeDef;                                                  // 0x0008(0x0018) (Edit)
	TArray<unsigned char>                              VarData;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraVariableWithOffset
// 0x0008 (0x0038 - 0x0030)
struct FNiagaraVariableWithOffset : public FNiagaraVariable
{
	int                                                Offset;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameterStore
// 0x00B8
struct FNiagaraParameterStore
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FNiagaraVariableWithOffset>          SortedParameterOffsets;                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              ParameterData;                                            // 0x0020(0x0010) (ZeroConstructor)
	TArray<class UNiagaraDataInterface*>               DataInterfaces;                                           // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             UObjects;                                                 // 0x0040(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0050(0x0068) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// 0x0050 (0x0108 - 0x00B8)
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
	TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;                                   // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct Niagara.NCPoolElement
// 0x0010
struct FNCPoolElement
{
	class UNiagaraComponent*                           Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.NCPool
// 0x0038
struct FNCPool
{
	TArray<struct FNCPoolElement>                      FreeElements;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<class UNiagaraComponent*>                   InUseComponents_Auto;                                     // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UNiagaraComponent*>                   InUseComponents_Manual;                                   // 0x0020(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.BasicParticleData
// 0x001C
struct FBasicParticleData
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraUserParameterBinding
// 0x0030
struct FNiagaraUserParameterBinding
{
	struct FNiagaraVariable                            Parameter;                                                // 0x0000(0x0030) (Edit)
};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
// 0x0010
struct FNDIStaticMeshSectionFilter
{
	TArray<int>                                        AllowedMaterialSlots;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x0018
struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEventGenerator;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEmitter;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTypeLayoutInfo
// 0x0040
struct FNiagaraTypeLayoutInfo
{
	TArray<uint32_t>                                   FloatComponentByteOffsets;                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   FloatComponentRegisterOffsets;                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Int32ComponentByteOffsets;                                // 0x0020(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Int32ComponentRegisterOffsets;                            // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraVariableLayoutInfo
// 0x0048
struct FNiagaraVariableLayoutInfo
{
	uint32_t                                           FloatComponentStart;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Int32ComponentStart;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraTypeLayoutInfo                      LayoutInfo;                                               // 0x0008(0x0040)
};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x000C
struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraDataSetType                                Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraDataSetCompiledData
// 0x0040
struct FNiagaraDataSetCompiledData
{
	TArray<struct FNiagaraVariable>                    Variables;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraVariableLayoutInfo>          VariableLayouts;                                          // 0x0010(0x0010) (ZeroConstructor)
	uint32_t                                           TotalFloatComponents;                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalInt32Components;                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNeedsPersistentIDs : 1;                                  // 0x0028(0x0001) ( BITFIELD: 0101)
	struct FNiagaraDataSetID                           ID;                                                       // 0x002C(0x000C)
	ENiagaraSimTarget                                  SimTarget;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x0050
struct FNiagaraEventGeneratorProperties
{
	int                                                MaxEventsPerFrame;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraDataSetCompiledData                 DataSetCompiledData;                                      // 0x0010(0x0040)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0028
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraEventReceiverProperties>     EventReceivers;                                           // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraEventGeneratorProperties>    EventGenerators;                                          // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
// 0x0014
struct FNiagaraDetailsLevelScaleOverrides
{
	float                                              Low;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Medium;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              High;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Epic;                                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Cine;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFastPath_Module_EmitterScalability
// 0x002C
struct FNiagaraFastPath_Module_EmitterScalability
{
	unsigned char                                      bUseEmitterScalability;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseMaxDistance;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraExecutionState                             MaxCulledState;                                           // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0002(0x0003) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              MaxDistance;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseMinDistance;                                          // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraExecutionState                             MinCulledState;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              MinDistance;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplySpawnCountScale;                                    // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnCountScale;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplySpawnCountScaleByDistanceFraction;                  // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScaleForMinFraction;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScaleForMaxFraction;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFastPath_Module_EmitterLifeCycle
// 0x0010
struct FNiagaraFastPath_Module_EmitterLifeCycle
{
	unsigned char                                      bAutoComplete;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCompleteOnInactive;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDelayFirstLoopOnly;                                      // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDurationRecalcEachLoop;                                  // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoopCount;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NextLoopDelay;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NextLoopDuration;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFastPathFloatInput
// 0x0018
struct FNiagaraFastPathFloatInput
{
	ENiagaraFastPathInputType                          Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              Local;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMin;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       UserParameterName;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFastPath_Module_SpawnRate
// 0x001C
struct FNiagaraFastPath_Module_SpawnRate
{
	struct FNiagaraFastPathFloatInput                  SpawnRate;                                                // 0x0000(0x0018) (Edit)
	int                                                SpawnGroup;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFastPath_Module_SpawnPerUnit
// 0x002C
struct FNiagaraFastPath_Module_SpawnPerUnit
{
	struct FNiagaraFastPathFloatInput                  SpawnPerUnit;                                             // 0x0000(0x0018) (Edit)
	unsigned char                                      bUseMovementTolerance;                                    // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MovementTolerance;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseMaxMovementThreshold;                                 // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxMovementThreshold;                                     // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpawnGroup;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFastPathIntInput
// 0x0018
struct FNiagaraFastPathIntInput
{
	ENiagaraFastPathInputType                          Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	int                                                Local;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RangeMin;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RangeMax;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       UserParameterName;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFastPath_Module_SpawnBurstInstantaneous
// 0x0034
struct FNiagaraFastPath_Module_SpawnBurstInstantaneous
{
	struct FNiagaraFastPathIntInput                    SpawnCount;                                               // 0x0000(0x0018) (Edit)
	struct FNiagaraFastPathFloatInput                  SpawnTime;                                                // 0x0018(0x0018) (Edit)
	int                                                SpawnGroup;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFastPathAttributeNames
// 0x0040
struct FNiagaraFastPathAttributeNames
{
	TArray<struct FName>                               System;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               SystemFullNames;                                          // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FName>                               Emitter;                                                  // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FName>                               EmitterFullNames;                                         // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// 0x0030 (0x0058 - 0x0028)
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
	EScriptExecutionMode                               ExecutionMode;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           SpawnNumber;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxEventsPerFrame;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SourceEmitterID;                                          // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEventName;                                          // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRandomSpawnNumber;                                       // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MinSpawnNumber;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariableAttributeBinding
// 0x0090
struct FNiagaraVariableAttributeBinding
{
	struct FNiagaraVariable                            BoundVariable;                                            // 0x0000(0x0030)
	struct FNiagaraVariable                            DataSetVariable;                                          // 0x0030(0x0030)
	struct FNiagaraVariable                            DefaultValueIfNonExistent;                                // 0x0060(0x0030)
};

// ScriptStruct Niagara.NiagaraMeshMaterialOverride
// 0x0038
struct FNiagaraMeshMaterialOverride
{
	class UMaterialInterface*                          ExplicitMat;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                UserParamBinding;                                         // 0x0008(0x0030) (Edit)
};

// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// 0x0010
struct FNiagaraScriptExecutionPaddingInfo
{
	uint32_t                                           SrcOffset;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DestOffset;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SrcSize;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DestSize;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// 0x0020 (0x00D8 - 0x00B8)
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
	int                                                ParameterSize;                                            // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PaddedParameterSize;                                      // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraScriptExecutionPaddingInfo>  PaddingInfo;                                              // 0x00C0(0x0010) (ZeroConstructor)
	unsigned char                                      bInitialized : 1;                                         // 0x00D0(0x0001) ( BITFIELD: 0101)
};

// ScriptStruct Niagara.NiagaraBoundParameter
// 0x0038
struct FNiagaraBoundParameter
{
	struct FNiagaraVariable                            Parameter;                                                // 0x0000(0x0030)
	int                                                SrcOffset;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DestOffset;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVMExecutableDataId
// 0x0050
struct FNiagaraVMExecutableDataId
{
	struct FGuid                                       CompilerVersionID;                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	ENiagaraScriptUsage                                ScriptUsageType;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ScriptUsageTypeID;                                        // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             AdditionalDefines;                                        // 0x0028(0x0010) (ZeroConstructor)
	uint32_t                                           DetailLevelMask;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsesRapidIterationParams;                                // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       BaseScriptID;                                             // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameters
// 0x0010
struct FNiagaraParameters
{
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// 0x0001
struct FNiagaraScriptDataUsageInfo
{
	unsigned char                                      bReadsAttributeData;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFunctionSignature
// 0x0088
struct FNiagaraFunctionSignature
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Inputs;                                                   // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraVariable>                    Outputs;                                                  // 0x0018(0x0010) (ZeroConstructor)
	struct FName                                       OwnerName;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRequiresContext;                                         // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMemberFunction;                                          // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FName>                   FunctionSpecifiers;                                       // 0x0038(0x0050) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// 0x0050
struct FNiagaraScriptDataInterfaceCompileInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                UserPtrIdx;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraTypeDefinition                      Type;                                                     // 0x0010(0x0018)
	TArray<struct FNiagaraFunctionSignature>           RegisteredFunctions;                                      // 0x0028(0x0010) (ZeroConstructor)
	struct FName                                       RegisteredParameterMapRead;                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       RegisteredParameterMapWrite;                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsPlaceholder;                                           // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
// 0x0078
struct FVMExternalFunctionBindingInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OwnerName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              InputParamLocations;                                      // 0x0010(0x0010) (ZeroConstructor)
	int                                                NumOutputs;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FName>                   Specifiers;                                               // 0x0028(0x0050) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x0020
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           ID;                                                       // 0x0000(0x000C) (Edit, EditConst)
	TArray<struct FNiagaraVariable>                    Variables;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraStatScope
// 0x0010
struct FNiagaraStatScope
{
	struct FName                                       FullName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FriendlyName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVMExecutableData
// 0x0118
struct FNiagaraVMExecutableData
{
	TArray<unsigned char>                              ByteCode;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                NumTempRegisters;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumUserPtrs;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraParameters                          Parameters;                                               // 0x0018(0x0010)
	struct FNiagaraParameters                          InternalParameters;                                       // 0x0028(0x0010)
	TMap<struct FName, struct FNiagaraParameters>      DataSetToParameters;                                      // 0x0038(0x0050) (ZeroConstructor)
	TArray<struct FNiagaraVariable>                    Attributes;                                               // 0x0088(0x0010) (ZeroConstructor)
	struct FNiagaraScriptDataUsageInfo                 DataUsage;                                                // 0x0098(0x0001)
	TArray<struct FNiagaraFunctionSignature>           AdditionalExternalFunctions;                              // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                                        // 0x00B0(0x0010) (ZeroConstructor)
	TArray<struct FVMExternalFunctionBindingInfo>      CalledVMExternalFunctions;                                // 0x00C0(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataSetID>                   ReadDataSets;                                             // 0x00D0(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           WriteDataSets;                                            // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraStatScope>                   StatScopes;                                               // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataInterfaceGPUParamInfo>   DIParamInfo;                                              // 0x0100(0x0010) (ZeroConstructor)
	ENiagaraScriptCompileStatus                        LastCompileStatus;                                        // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// 0x0040
struct FNiagaraScriptDataInterfaceInfo
{
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                UserPtrIdx;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraTypeDefinition                      Type;                                                     // 0x0018(0x0018)
	struct FName                                       RegisteredParameterMapRead;                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       RegisteredParameterMapWrite;                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFastPath_Module_SystemScalability
// 0x0010
struct FNiagaraFastPath_Module_SystemScalability
{
	unsigned char                                      bUseSystemScalability;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraExecutionState                             CulledState;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      bEnableVisibilityCulling;                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VisibilityCullDelay;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFastPath_Module_SystemLifeCycle
// 0x0001
struct FNiagaraFastPath_Module_SystemLifeCycle
{
	unsigned char                                      bCompleteOnInactive;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEmitterHandle
// 0x0030
struct FNiagaraEmitterHandle
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       IdName;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bIsEnabled;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraEmitter*                             Instance;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraSystemCompiledData
// 0x01A8
struct FNiagaraSystemCompiledData
{
	TArray<struct FNiagaraVariable>                    NumParticleVars;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraVariable>                    TotalSpawnedParticlesVars;                                // 0x0010(0x0010) (ZeroConstructor)
	struct FNiagaraParameterStore                      InstanceParamStore;                                       // 0x0020(0x00B8)
	TArray<struct FNiagaraVariable>                    SpawnCountScaleVars;                                      // 0x00D8(0x0010) (ZeroConstructor)
	struct FNiagaraDataSetCompiledData                 DataSetCompiledData;                                      // 0x00E8(0x0040)
	struct FNiagaraDataSetCompiledData                 SpawnInstanceParamsDataSetCompiledData;                   // 0x0128(0x0040)
	struct FNiagaraDataSetCompiledData                 UpdateInstanceParamsDataSetCompiledData;                  // 0x0168(0x0040)
};

// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FNiagaraVariable                            Parameter;                                                // 0x0020(0x0030)
};

// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// 0x0090 (0x00E0 - 0x0050)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneBoolChannel                      BoolChannel;                                              // 0x0050(0x0090)
};

// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// 0x0280 (0x02D0 - 0x0050)
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     RedChannel;                                               // 0x0050(0x00A0)
	struct FMovieSceneFloatChannel                     GreenChannel;                                             // 0x00F0(0x00A0)
	struct FMovieSceneFloatChannel                     BlueChannel;                                              // 0x0190(0x00A0)
	struct FMovieSceneFloatChannel                     AlphaChannel;                                             // 0x0230(0x00A0)
};

// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// 0x00A0 (0x00F0 - 0x0050)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     FloatChannel;                                             // 0x0050(0x00A0)
};

// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// 0x0090 (0x00E0 - 0x0050)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneIntegerChannel                   IntegerChannel;                                           // 0x0050(0x0090)
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// 0x0008 (0x0018 - 0x0010)
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
	struct FFrameNumber                                SpawnSectionStartFrame;                                   // 0x0010(0x0004)
	struct FFrameNumber                                SpawnSectionEndFrame;                                     // 0x0014(0x0004)
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// 0x0000 (0x0020 - 0x0020)
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// 0x0288 (0x02D8 - 0x0050)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     VectorChannels[0x4];                                      // 0x0050(0x00A0)
	int                                                ChannelsUsed;                                             // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraRandInfo
// 0x000C
struct FNiagaraRandInfo
{
	int                                                Seed1;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Seed2;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Seed3;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// 0x0030
struct FNiagaraVariableDataInterfaceBinding
{
	struct FNiagaraVariable                            BoundVariable;                                            // 0x0000(0x0030)
};

// ScriptStruct Niagara.NiagaraVariableInfo
// 0x0050
struct FNiagaraVariableInfo
{
	struct FNiagaraVariable                            Variable;                                                 // 0x0000(0x0030)
	struct FText                                       Definition;                                               // 0x0030(0x0018)
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.MeshTriCoordinate
// 0x0010
struct FMeshTriCoordinate
{
	int                                                Tri;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaryCoord;                                                // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraGraphViewSettings
// 0x0010
struct FNiagaraGraphViewSettings
{
	struct FVector2D                                   Location;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Zoom;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsValid;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// 0x002C
struct FNiagaraCollisionEventPayload
{
	struct FVector                                     CollisionPos;                                             // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CollisionNormal;                                          // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CollisionVelocity;                                        // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PhysicalMaterialIndex;                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraModuleDependency
// 0x0028
struct FNiagaraModuleDependency
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraModuleDependencyType                       Type;                                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                         // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0010(0x0018) (Edit)
};

// ScriptStruct Niagara.NiagaraSystemCompileRequest
// 0x0078
struct FNiagaraSystemCompileRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UObject*>                             RootObjects;                                              // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0018(0x0060) MISSED OFFSET
};

// ScriptStruct Niagara.EmitterCompiledScriptPair
// 0x0080
struct FEmitterCompiledScriptPair
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterCompiledData
// 0x0170
struct FNiagaraEmitterCompiledData
{
	TArray<struct FName>                               SpawnAttributes;                                          // 0x0000(0x0010) (ZeroConstructor)
	struct FNiagaraVariable                            EmitterSpawnIntervalVar;                                  // 0x0010(0x0030)
	struct FNiagaraVariable                            EmitterInterpSpawnStartDTVar;                             // 0x0040(0x0030)
	struct FNiagaraVariable                            EmitterSpawnGroupVar;                                     // 0x0070(0x0030)
	struct FNiagaraVariable                            EmitterAgeVar;                                            // 0x00A0(0x0030)
	struct FNiagaraVariable                            EmitterRandomSeedVar;                                     // 0x00D0(0x0030)
	struct FNiagaraVariable                            EmitterTotalSpawnedParticlesVar;                          // 0x0100(0x0030)
	struct FNiagaraDataSetCompiledData                 DataSetCompiledData;                                      // 0x0130(0x0040)
};

// ScriptStruct Niagara.NiagaraInputConditionMetadata
// 0x0018
struct FNiagaraInputConditionMetadata
{
	struct FName                                       InputName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             TargetValues;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraVariableMetaData
// 0x00C8
struct FNiagaraVariableMetaData
{
	struct FText                                       Description;                                              // 0x0000(0x0018) (Edit)
	struct FText                                       CategoryName;                                             // 0x0018(0x0018) (Edit)
	unsigned char                                      bAdvancedDisplay;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EditorSortPriority;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInlineEditConditionToggle;                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraInputConditionMetadata              EditCondition;                                            // 0x0040(0x0018) (Edit)
	struct FNiagaraInputConditionMetadata              VisibleCondition;                                         // 0x0058(0x0018) (Edit)
	TMap<struct FName, struct FString>                 PropertyMetaData;                                         // 0x0070(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      bIsStaticSwitch;                                          // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                StaticSwitchDefaultValue;                                 // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraID
// 0x0008
struct FNiagaraID
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AcquireTag;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraSpawnInfo
// 0x0010
struct FNiagaraSpawnInfo
{
	int                                                Count;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterpStartDt;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IntervalDt;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpawnGroup;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraMatrix
// 0x0040
struct FNiagaraMatrix
{
	struct FVector4                                    Row0;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row1;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row2;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row3;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTestStructInner
// 0x0018
struct FNiagaraTestStructInner
{
	struct FVector                                     InnerVector1;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InnerVector2;                                             // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTestStruct
// 0x0048
struct FNiagaraTestStruct
{
	struct FVector                                     Vector1;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector2;                                                  // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraTestStructInner                     InnerStruct1;                                             // 0x0018(0x0018) (Edit)
	struct FNiagaraTestStructInner                     InnerStruct2;                                             // 0x0030(0x0018) (Edit)
};

// ScriptStruct Niagara.NiagaraParameterMap
// 0x0001
struct FNiagaraParameterMap
{

};

// ScriptStruct Niagara.NiagaraNumeric
// 0x0001
struct FNiagaraNumeric
{

};

// ScriptStruct Niagara.NiagaraBool
// 0x0004
struct FNiagaraBool
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraInt32
// 0x0004
struct FNiagaraInt32
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFloat
// 0x0004
struct FNiagaraFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
