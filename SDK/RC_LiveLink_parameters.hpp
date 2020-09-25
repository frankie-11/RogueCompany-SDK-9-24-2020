#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
struct ULiveLinkBlueprintLibrary_TransformNames_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	TArray<struct FName>                               TransformNames;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
struct ULiveLinkBlueprintLibrary_TransformName_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
struct ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params
{
	struct FLiveLinkSubjectKey*                        SubjectKey;                                               // (ConstParm, Parm)
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
struct ULiveLinkBlueprintLibrary_RemoveSource_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
struct ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
struct ULiveLinkBlueprintLibrary_NumberOfTransforms_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
struct ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params
{
	struct FLiveLinkSubjectKey*                        SubjectKey;                                               // (ConstParm, Parm)
	bool*                                              bForThisFrame;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
struct ULiveLinkBlueprintLibrary_IsSourceStillValid_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
struct ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params
{
	struct FLiveLinkSubjectName*                       SubjectName;                                              // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
struct ULiveLinkBlueprintLibrary_HasParent_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
struct ULiveLinkBlueprintLibrary_GetTransformByName_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	struct FName*                                      TransformName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
struct ULiveLinkBlueprintLibrary_GetTransformByIndex_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	int*                                               TransformIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
struct ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params
{
	struct FLiveLinkSubjectKey*                        SubjectKey;                                               // (ConstParm, Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
struct ULiveLinkBlueprintLibrary_GetSourceType_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
struct ULiveLinkBlueprintLibrary_GetSourceStatus_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
struct ULiveLinkBlueprintLibrary_GetSourceMachineName_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
struct ULiveLinkBlueprintLibrary_GetRootTransform_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
struct ULiveLinkBlueprintLibrary_GetPropertyValue_Params
{
	struct FLiveLinkBasicBlueprintData                 BasicData;                                                // (Parm, OutParm, ReferenceParm)
	struct FName*                                      PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
struct ULiveLinkBlueprintLibrary_GetParent_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	struct FLiveLinkTransform                          Parent;                                                   // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
struct ULiveLinkBlueprintLibrary_GetMetadata_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	struct FSubjectMetadata                            MetaData;                                                 // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
struct ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params
{
	bool*                                              bIncludeDisabledSubject;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncludeDisal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLiveLinkSubjectKey>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
struct ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params
{
	struct FLiveLinkSubjectName*                       SubjectName;                                              // (ConstParm, Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
struct ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params
{
	bool*                                              bIncludeVirtualSubject;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLiveLinkSubjectName>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
struct ULiveLinkBlueprintLibrary_GetCurves_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	TMap<struct FName, float>                          Curves;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
struct ULiveLinkBlueprintLibrary_GetChildren_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	TArray<struct FLiveLinkTransform>                  Children;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
struct ULiveLinkBlueprintLibrary_GetBasicData_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	struct FLiveLinkBasicBlueprintData                 BasicBlueprintData;                                       // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params
{
	struct FLiveLinkSubjectName*                       SubjectName;                                              // (Parm)
	class UClass**                                     Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkBaseBlueprintData                  OutBlueprintData;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params
{
	struct FLiveLinkSubjectName*                       SubjectName;                                              // (Parm)
	class UClass**                                     Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WorldTimeOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkBaseBlueprintData                  OutBlueprintData;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params
{
	struct FLiveLinkSubjectName*                       SubjectName;                                              // (Parm)
	class UClass**                                     Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimecode*                                  SceneTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkBaseBlueprintData                  OutBlueprintData;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params
{
	struct FLiveLinkSubjectRepresentation*             SubjectRepresentation;                                    // (Parm)
	struct FLiveLinkBaseBlueprintData                  OutBlueprintData;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
struct ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
struct ULiveLinkBlueprintLibrary_ChildCount_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
struct ULiveLinkComponent_GetSubjectDataAtWorldTime_Params
{
	struct FName*                                      SubjectName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WorldTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm)
};

// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
struct ULiveLinkComponent_GetSubjectDataAtSceneTime_Params
{
	struct FName*                                      SubjectName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTimecode*                                  SceneTime;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm)
};

// Function LiveLink.LiveLinkComponent.GetSubjectData
struct ULiveLinkComponent_GetSubjectData_Params
{
	struct FName*                                      SubjectName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm)
};

// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
struct ULiveLinkComponent_GetAvailableSubjectNames_Params
{
	TArray<struct FName>                               SubjectNames;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
struct ULiveLinkMessageBusFinder_GetAvailableProviders_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo*                          LatentInfo;                                               // (Parm)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FProviderPollResult>                 AvailableProviders;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
struct ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params
{
	class ULiveLinkMessageBusFinder*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
struct ULiveLinkMessageBusFinder_ConnectToProvider_Params
{
	struct FProviderPollResult                         Provider;                                                 // (Parm, OutParm, ReferenceParm)
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm)
};

// Function LiveLink.LiveLinkPreset.BuildFromClient
struct ULiveLinkPreset_BuildFromClient_Params
{
};

// Function LiveLink.LiveLinkPreset.ApplyToClient
struct ULiveLinkPreset_ApplyToClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
struct ULiveLinkRemapAsset_RemapCurveElements_Params
{
	TMap<struct FName, float>                          CurveItems;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
struct ULiveLinkRemapAsset_GetRemappedCurveName_Params
{
	struct FName*                                      CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
struct ULiveLinkRemapAsset_GetRemappedBoneName_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
