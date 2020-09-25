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

// Function StatusEffect.StatusEffect_C.StopHideTimer
struct UStatusEffect_C_StopHideTimer_Params
{
};

// Function StatusEffect.StatusEffect_C.StartHideTimer
struct UStatusEffect_C_StartHideTimer_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffect.StatusEffect_C.PreClearPawn
struct UStatusEffect_C_PreClearPawn_Params
{
};

// Function StatusEffect.StatusEffect_C.PostSetPawn
struct UStatusEffect_C_PostSetPawn_Params
{
};

// Function StatusEffect.StatusEffect_C.RevealStatus
struct UStatusEffect_C_RevealStatus_Params
{
	bool*                                              Revealed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Permanent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffect.StatusEffect_C.OnStuck
struct UStatusEffect_C_OnStuck_Params
{
};

// Function StatusEffect.StatusEffect_C.HideTimeExpired
struct UStatusEffect_C_HideTimeExpired_Params
{
};

// Function StatusEffect.StatusEffect_C.UpdateRevealStatus
struct UStatusEffect_C_UpdateRevealStatus_Params
{
	bool*                                              IsRevealed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffect.StatusEffect_C.ExecuteUbergraph_StatusEffect
struct UStatusEffect_C_ExecuteUbergraph_StatusEffect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
