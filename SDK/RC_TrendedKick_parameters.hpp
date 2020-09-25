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

// Function TrendedKick.TrendedKick_C.GetMaximumHorizontalKick
struct UTrendedKick_C_GetMaximumHorizontalKick_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrendedKick.TrendedKick_C.GetMaximumVerticalKick
struct UTrendedKick_C_GetMaximumVerticalKick_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrendedKick.TrendedKick_C.GetCurrentTrendProfile
struct UTrendedKick_C_GetCurrentTrendProfile_Params
{
	int*                                               ShotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKickTrendProfile                           TrendProfile;                                             // (Parm, OutParm)
};

// Function TrendedKick.TrendedKick_C.MakeKickbackInstance
struct UTrendedKick_C_MakeKickbackInstance_Params
{
	int*                                               ShotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AbsoluteMaxDuration;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInterpCurveVector2D                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
