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

// Function PistolReticle.PistolReticle_C.UpdateOffset
struct UPistolReticle_C_UpdateOffset_Params
{
	float*                                             Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolReticle.PistolReticle_C.ChangeADS
struct UPistolReticle_C_ChangeADS_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolReticle.PistolReticle_C.ForceADS
struct UPistolReticle_C_ForceADS_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolReticle.PistolReticle_C.HitConfirm
struct UPistolReticle_C_HitConfirm_Params
{
};

// Function PistolReticle.PistolReticle_C.Headshot
struct UPistolReticle_C_Headshot_Params
{
};

// Function PistolReticle.PistolReticle_C.KillConfirm
struct UPistolReticle_C_KillConfirm_Params
{
};

// Function PistolReticle.PistolReticle_C.GrenadeTick
struct UPistolReticle_C_GrenadeTick_Params
{
};

// Function PistolReticle.PistolReticle_C.GrenadeCook
struct UPistolReticle_C_GrenadeCook_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TickPeriod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolReticle.PistolReticle_C.ExecuteUbergraph_PistolReticle
struct UPistolReticle_C_ExecuteUbergraph_PistolReticle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
