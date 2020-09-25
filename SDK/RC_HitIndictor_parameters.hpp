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

// Function HitIndictor.HitIndictor_C.ReturnToPool
struct UHitIndictor_C_ReturnToPool_Params
{
	class UHitIndicatorSub_C**                         HitIndicatorSub;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HitIndictor.HitIndictor_C.Init Indicator Pool
struct UHitIndictor_C_Init_Indicator_Pool_Params
{
};

// Function HitIndictor.HitIndictor_C.CreateHitIndicator
struct UHitIndictor_C_CreateHitIndicator_Params
{
	class UClass**                                     DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageOrigin;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HitArmor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitIndictor.HitIndictor_C.Construct
struct UHitIndictor_C_Construct_Params
{
};

// Function HitIndictor.HitIndictor_C.On Viewed Pawn Take Damage
struct UHitIndictor_C_On_Viewed_Pawn_Take_Damage_Params
{
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageOrigin;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitIndictor.HitIndictor_C.HandleViewedPawnTakeArmorDamage
struct UHitIndictor_C_HandleViewedPawnTakeArmorDamage_Params
{
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageOrigin;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitIndictor.HitIndictor_C.ExecuteUbergraph_HitIndictor
struct UHitIndictor_C_ExecuteUbergraph_HitIndictor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
