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

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
struct UGizmoBaseComponent_UpdateWorldLocalState_Params
{
	bool*                                              bWorldIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
struct UGizmoBaseComponent_UpdateHoverState_Params
{
	bool*                                              bHoveringIn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
struct UGizmoTransformSource_SetTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
struct UGizmoTransformSource_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
struct UGizmoAxisSource_HasTangentVectors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
struct UGizmoAxisSource_GetTangentVectors_Params
{
	struct FVector                                     TangentXOut;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TangentYOut;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
struct UGizmoAxisSource_GetOrigin_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
struct UGizmoAxisSource_GetDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
struct UGizmoClickTarget_UpdateHoverState_Params
{
	bool*                                              bHovering;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
struct UGizmoStateTarget_EndUpdate_Params
{
};

// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
struct UGizmoStateTarget_BeginUpdate_Params
{
};

// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
struct UGizmoFloatParameterSource_SetParameter_Params
{
	float*                                             NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
struct UGizmoFloatParameterSource_GetParameter_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
struct UGizmoFloatParameterSource_EndModify_Params
{
};

// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
struct UGizmoFloatParameterSource_BeginModify_Params
{
};

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
struct UGizmoVec2ParameterSource_SetParameter_Params
{
	struct FVector2D*                                  NewValue;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
struct UGizmoVec2ParameterSource_GetParameter_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
struct UGizmoVec2ParameterSource_EndModify_Params
{
};

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
struct UGizmoVec2ParameterSource_BeginModify_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
