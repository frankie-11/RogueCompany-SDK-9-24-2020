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

// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Update
struct UPointObjectiveMinimapIcon_C_Update_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.ShouldUpdate
struct UPointObjectiveMinimapIcon_C_ShouldUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Update From Objective
struct UPointObjectiveMinimapIcon_C_Update_From_Objective_Params
{
	class AKSObjectiveBase**                           Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Construct
struct UPointObjectiveMinimapIcon_C_Construct_Params
{
};

// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.UpdateMeetsHeightThreshold
struct UPointObjectiveMinimapIcon_C_UpdateMeetsHeightThreshold_Params
{
	bool*                                              bHeight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDepth;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.ExecuteUbergraph_PointObjectiveMinimapIcon
struct UPointObjectiveMinimapIcon_C_ExecuteUbergraph_PointObjectiveMinimapIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
