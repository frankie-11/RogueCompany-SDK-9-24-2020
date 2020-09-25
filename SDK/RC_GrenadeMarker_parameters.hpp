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

// Function GrenadeMarker.GrenadeMarker_C.ShouldUpdate
struct UGrenadeMarker_C_ShouldUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrenadeMarker.GrenadeMarker_C.Get Weapon Asset or Secondary
struct UGrenadeMarker_C_Get_Weapon_Asset_or_Secondary_Params
{
	class UKSWeaponAsset*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrenadeMarker.GrenadeMarker_C.Update
struct UGrenadeMarker_C_Update_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrenadeMarker.GrenadeMarker_C.Tick
struct UGrenadeMarker_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeMarker.GrenadeMarker_C.PreConstruct
struct UGrenadeMarker_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeMarker.GrenadeMarker_C.OnWeaponAssetSet
struct UGrenadeMarker_C_OnWeaponAssetSet_Params
{
	class AKSProjectile**                              Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset**                             WeaponAsset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeMarker.GrenadeMarker_C.Construct
struct UGrenadeMarker_C_Construct_Params
{
};

// Function GrenadeMarker.GrenadeMarker_C.ExecuteUbergraph_GrenadeMarker
struct UGrenadeMarker_C_ExecuteUbergraph_GrenadeMarker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
