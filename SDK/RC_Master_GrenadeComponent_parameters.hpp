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

// Function Master_GrenadeComponent.Master_GrenadeComponent_C.ShowGadget
struct UMaster_GrenadeComponent_C_ShowGadget_Params
{
};

// Function Master_GrenadeComponent.Master_GrenadeComponent_C.HideGadget
struct UMaster_GrenadeComponent_C_HideGadget_Params
{
};

// Function Master_GrenadeComponent.Master_GrenadeComponent_C.Get Scaled Grenade Fire Playrate
struct UMaster_GrenadeComponent_C_Get_Scaled_Grenade_Fire_Playrate_Params
{
	class UAnimMontage**                               bpp__AnimxMontage__pfT;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__NewParam__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__ScaledxPlayrate__pfT;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_GrenadeComponent.Master_GrenadeComponent_C.ExecuteUbergraph_Master_GrenadeComponent_1
struct UMaster_GrenadeComponent_C_ExecuteUbergraph_Master_GrenadeComponent_1_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
