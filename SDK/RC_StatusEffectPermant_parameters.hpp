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

// Function StatusEffectPermant.StatusEffectPermant_C.CustomEvent_1
struct UStatusEffectPermant_C_CustomEvent_1_Params
{
	class AKSPlayerController**                        Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OldViewTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     NewViewTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffectPermant.StatusEffectPermant_C.PreClearPawn
struct UStatusEffectPermant_C_PreClearPawn_Params
{
};

// Function StatusEffectPermant.StatusEffectPermant_C.RevealStatus
struct UStatusEffectPermant_C_RevealStatus_Params
{
	bool*                                              Revealed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Permanent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffectPermant.StatusEffectPermant_C.PostSetPawn
struct UStatusEffectPermant_C_PostSetPawn_Params
{
};

// Function StatusEffectPermant.StatusEffectPermant_C.CustomEvent_2
struct UStatusEffectPermant_C_CustomEvent_2_Params
{
	bool*                                              IsSpectating;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffectPermant.StatusEffectPermant_C.Construct
struct UStatusEffectPermant_C_Construct_Params
{
};

// Function StatusEffectPermant.StatusEffectPermant_C.ExecuteUbergraph_StatusEffectPermant
struct UStatusEffectPermant_C_ExecuteUbergraph_StatusEffectPermant_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
