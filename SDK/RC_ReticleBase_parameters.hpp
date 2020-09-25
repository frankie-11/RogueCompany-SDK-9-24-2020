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

// Function ReticleBase.ReticleBase_C.GetAmmoState
struct UReticleBase_C_GetAmmoState_Params
{
	class UKSWeaponComponent**                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAmmoState                                         Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ReticleBase.ReticleBase_C.HitConfirm
struct UReticleBase_C_HitConfirm_Params
{
};

// Function ReticleBase.ReticleBase_C.ForceADS
struct UReticleBase_C_ForceADS_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticleBase.ReticleBase_C.GrenadeCook
struct UReticleBase_C_GrenadeCook_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TickPeriod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticleBase.ReticleBase_C.ChangeADS
struct UReticleBase_C_ChangeADS_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticleBase.ReticleBase_C.KillConfirm
struct UReticleBase_C_KillConfirm_Params
{
};

// Function ReticleBase.ReticleBase_C.Headshot
struct UReticleBase_C_Headshot_Params
{
};

// Function ReticleBase.ReticleBase_C.UpdateOffset
struct UReticleBase_C_UpdateOffset_Params
{
	float*                                             Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
