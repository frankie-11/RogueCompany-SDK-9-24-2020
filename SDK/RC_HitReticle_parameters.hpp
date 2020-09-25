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

// Function HitReticle.HitReticle_C.OnHitAnimationFinished
struct UHitReticle_C_OnHitAnimationFinished_Params
{
};

// Function HitReticle.HitReticle_C.ResetHitReticle
struct UHitReticle_C_ResetHitReticle_Params
{
	bool*                                              Headshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Lethal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Down;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitReticle.HitReticle_C.ExecuteUbergraph_HitReticle
struct UHitReticle_C_ExecuteUbergraph_HitReticle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
