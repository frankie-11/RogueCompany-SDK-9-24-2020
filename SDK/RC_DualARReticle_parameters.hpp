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

// Function DualARReticle.DualARReticle_C.ChangeADS
struct UDualARReticle_C_ChangeADS_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DualARReticle.DualARReticle_C.ForceADS
struct UDualARReticle_C_ForceADS_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DualARReticle.DualARReticle_C.HitConfirm
struct UDualARReticle_C_HitConfirm_Params
{
};

// Function DualARReticle.DualARReticle_C.Headshot
struct UDualARReticle_C_Headshot_Params
{
};

// Function DualARReticle.DualARReticle_C.KillConfirm
struct UDualARReticle_C_KillConfirm_Params
{
};

// Function DualARReticle.DualARReticle_C.GrenadeCook
struct UDualARReticle_C_GrenadeCook_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TickPeriod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DualARReticle.DualARReticle_C.GrenadeTick
struct UDualARReticle_C_GrenadeTick_Params
{
};

// Function DualARReticle.DualARReticle_C.UpdateOffset
struct UDualARReticle_C_UpdateOffset_Params
{
	float*                                             Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DualARReticle.DualARReticle_C.ExecuteUbergraph_DualARReticle
struct UDualARReticle_C_ExecuteUbergraph_DualARReticle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
