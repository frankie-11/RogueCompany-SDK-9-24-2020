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

// Function RifleReticle.RifleReticle_C.IsValidWeaponType
struct URifleReticle_C_IsValidWeaponType_Params
{
	class UKSWeaponComponent**                         NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsValidWeaponType;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RifleReticle.RifleReticle_C.ShouldHideAmmoGauge
struct URifleReticle_C_ShouldHideAmmoGauge_Params
{
	class UKSWeaponComponent**                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldHideAmmoGauge;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RifleReticle.RifleReticle_C.ColorSet
struct URifleReticle_C_ColorSet_Params
{
	struct FLinearColor*                               NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RifleReticle.RifleReticle_C.UpdateReticleDisplay
struct URifleReticle_C_UpdateReticleDisplay_Params
{
	float*                                             InOffset;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RifleReticle.RifleReticle_C.Construct
struct URifleReticle_C_Construct_Params
{
};

// Function RifleReticle.RifleReticle_C.UpdateOffset
struct URifleReticle_C_UpdateOffset_Params
{
	float*                                             Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RifleReticle.RifleReticle_C.ChangeADS
struct URifleReticle_C_ChangeADS_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RifleReticle.RifleReticle_C.ForceADS
struct URifleReticle_C_ForceADS_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RifleReticle.RifleReticle_C.HitConfirm
struct URifleReticle_C_HitConfirm_Params
{
};

// Function RifleReticle.RifleReticle_C.Headshot
struct URifleReticle_C_Headshot_Params
{
};

// Function RifleReticle.RifleReticle_C.KillConfirm
struct URifleReticle_C_KillConfirm_Params
{
};

// Function RifleReticle.RifleReticle_C.GrenadeCook
struct URifleReticle_C_GrenadeCook_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TickPeriod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RifleReticle.RifleReticle_C.GrenadeTick
struct URifleReticle_C_GrenadeTick_Params
{
};

// Function RifleReticle.RifleReticle_C.UpdateAmmoGauge
struct URifleReticle_C_UpdateAmmoGauge_Params
{
	class UKSWeaponComponent**                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RifleReticle.RifleReticle_C.UpdateMagazineOffset
struct URifleReticle_C_UpdateMagazineOffset_Params
{
	struct FVector2D*                                  NewOffset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RifleReticle.RifleReticle_C.ExecuteUbergraph_RifleReticle
struct URifleReticle_C_ExecuteUbergraph_RifleReticle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
