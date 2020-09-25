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

// Function HitIndicatorSub.HitIndicatorSub_C.Tick
struct UHitIndicatorSub_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitIndicatorSub.HitIndicatorSub_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1
struct UHitIndicatorSub_C_WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function HitIndicatorSub.HitIndicatorSub_C.StartDamageAnim
struct UHitIndicatorSub_C_StartDamageAnim_Params
{
	struct FVector*                                    InHitLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInIsArmorHit;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitIndicatorSub.HitIndicatorSub_C.ExecuteUbergraph_HitIndicatorSub
struct UHitIndicatorSub_C_ExecuteUbergraph_HitIndicatorSub_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
