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

// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointScoreProgress
struct UPointObjectiveMarker_C_UpdateControlPointScoreProgress_Params
{
	class AKSControlPoint**                            Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointCaptureProgress
struct UPointObjectiveMarker_C_UpdateControlPointCaptureProgress_Params
{
	class AKSControlPoint**                            Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointState
struct UPointObjectiveMarker_C_UpdateControlPointState_Params
{
	class AKSObjectiveBase**                           Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.SetContestedColor
struct UPointObjectiveMarker_C_SetContestedColor_Params
{
	EPointObjectiveMarkerTeamState*                    ObjectiveState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.GetOwningTeamColor
struct UPointObjectiveMarker_C_GetOwningTeamColor_Params
{
	class AKSObjectiveBase**                           Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OwningTeamColor;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OpposingTeamColor;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.Update
struct UPointObjectiveMarker_C_Update_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.Get Neutral Color
struct UPointObjectiveMarker_C_Get_Neutral_Color_Params
{
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.ViewSetCaptureProgress
struct UPointObjectiveMarker_C_ViewSetCaptureProgress_Params
{
	float*                                             ProgressPercent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.SetView
struct UPointObjectiveMarker_C_SetView_Params
{
	struct FKSPointObjectiveMarkerViewState*           ViewState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.SetScreenRegion
struct UPointObjectiveMarker_C_SetScreenRegion_Params
{
	EIconMarkerScreenRegion*                           ScreenRegion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.SetArrowAngle
struct UPointObjectiveMarker_C_SetArrowAngle_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.ViewApplyTimerValue
struct UPointObjectiveMarker_C_ViewApplyTimerValue_Params
{
	float*                                             TimerSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalTimerSeconds;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateMetersAway
struct UPointObjectiveMarker_C_UpdateMetersAway_Params
{
	int*                                               Meters;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.Construct
struct UPointObjectiveMarker_C_Construct_Params
{
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.ControlPointStateUpdated
struct UPointObjectiveMarker_C_ControlPointStateUpdated_Params
{
	class AKSControlPoint**                            Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.OnControlTeamScoreUpdated
struct UPointObjectiveMarker_C_OnControlTeamScoreUpdated_Params
{
	class AKSTeamState**                               TeamState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMarker.PointObjectiveMarker_C.ExecuteUbergraph_PointObjectiveMarker
struct UPointObjectiveMarker_C_ExecuteUbergraph_PointObjectiveMarker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
