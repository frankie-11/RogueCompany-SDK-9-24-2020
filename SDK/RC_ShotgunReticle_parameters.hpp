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

// Function ShotgunReticle.ShotgunReticle_C.IsValidWeaponType
struct UShotgunReticle_C_IsValidWeaponType_Params
{
	class UKSWeaponComponent**                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsValidWeaponType;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShotgunReticle.ShotgunReticle_C.ShouldHideAmmoGauge
struct UShotgunReticle_C_ShouldHideAmmoGauge_Params
{
	class UKSWeaponComponent**                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldHideAmmoGauge;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShotgunReticle.ShotgunReticle_C.UpdateReloadBarPosition
struct UShotgunReticle_C_UpdateReloadBarPosition_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.UpdateCrosshairDisplay
struct UShotgunReticle_C_UpdateCrosshairDisplay_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.ColorSet
struct UShotgunReticle_C_ColorSet_Params
{
	struct FLinearColor*                               NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShotgunReticle.ShotgunReticle_C.FadeClipMeter
struct UShotgunReticle_C_FadeClipMeter_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.UpdateOffset
struct UShotgunReticle_C_UpdateOffset_Params
{
	float*                                             Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShotgunReticle.ShotgunReticle_C.ChangeADS
struct UShotgunReticle_C_ChangeADS_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShotgunReticle.ShotgunReticle_C.ForceADS
struct UShotgunReticle_C_ForceADS_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShotgunReticle.ShotgunReticle_C.HitConfirm
struct UShotgunReticle_C_HitConfirm_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.Headshot
struct UShotgunReticle_C_Headshot_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.KillConfirm
struct UShotgunReticle_C_KillConfirm_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.GrenadeCook
struct UShotgunReticle_C_GrenadeCook_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TickPeriod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShotgunReticle.ShotgunReticle_C.GrenadeTick
struct UShotgunReticle_C_GrenadeTick_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.UpdateAmmoGauge
struct UShotgunReticle_C_UpdateAmmoGauge_Params
{
	class UKSWeaponComponent**                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShotgunReticle.ShotgunReticle_C.ExecuteUbergraph_ShotgunReticle
struct UShotgunReticle_C_ExecuteUbergraph_ShotgunReticle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
