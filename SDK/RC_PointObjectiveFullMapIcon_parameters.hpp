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

// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.ShouldUpdate
struct UPointObjectiveFullMapIcon_C_ShouldUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.DoCaptureAnimation
struct UPointObjectiveFullMapIcon_C_DoCaptureAnimation_Params
{
};

// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.SetProgressValue
struct UPointObjectiveFullMapIcon_C_SetProgressValue_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.SetProgressColors
struct UPointObjectiveFullMapIcon_C_SetProgressColors_Params
{
	struct FLinearColor*                               OffColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               OnColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Tick
struct UPointObjectiveFullMapIcon_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Objective State Change
struct UPointObjectiveFullMapIcon_C_Objective_State_Change_Params
{
	class AKSObjectiveBase**                           Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Construct
struct UPointObjectiveFullMapIcon_C_Construct_Params
{
};

// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.OnCaptureAnimFinished
struct UPointObjectiveFullMapIcon_C_OnCaptureAnimFinished_Params
{
};

// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.ExecuteUbergraph_PointObjectiveFullMapIcon
struct UPointObjectiveFullMapIcon_C_ExecuteUbergraph_PointObjectiveFullMapIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
