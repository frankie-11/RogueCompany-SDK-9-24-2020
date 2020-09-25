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

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.DestroyUnusedDurationBars
struct UWBP_KillstreakDurationBars_C_DestroyUnusedDurationBars_Params
{
	TArray<class UKSModInst_Activated*>                PlayerMods;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.GetDurationBarForModInstance
struct UWBP_KillstreakDurationBars_C_GetDurationBarForModInstance_Params
{
	class UKSModInst_Activated**                       Activated_Mod;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWBP_DurationBar_C*                          Duration_Bar;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.PostSetPawn
struct UWBP_KillstreakDurationBars_C_PostSetPawn_Params
{
};

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.CloseGate_PawnRetry
struct UWBP_KillstreakDurationBars_C_CloseGate_PawnRetry_Params
{
};

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleModsUpdated
struct UWBP_KillstreakDurationBars_C_HandleModsUpdated_Params
{
	class AKSCharacter**                               KSCharacterRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandlePlayerDownedOrEliminated
struct UWBP_KillstreakDurationBars_C_HandlePlayerDownedOrEliminated_Params
{
	class AKSPlayerState**                             KSPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.PreClearPawn
struct UWBP_KillstreakDurationBars_C_PreClearPawn_Params
{
};

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.OnKilled
struct UWBP_KillstreakDurationBars_C_OnKilled_Params
{
	class AKSCharacterBase**                           KillerCharacter;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacterBase**                           KilledCharacter;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleOnViewedPawnChanged
struct UWBP_KillstreakDurationBars_C_HandleOnViewedPawnChanged_Params
{
	class AKSPlayerController**                        Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OldViewTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     NewViewTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleProjectileFired
struct UWBP_KillstreakDurationBars_C_HandleProjectileFired_Params
{
	float*                                             DurationTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset**                             WeaponAsset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.CustomEvent_1
struct UWBP_KillstreakDurationBars_C_CustomEvent_1_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.ResetDurationBars
struct UWBP_KillstreakDurationBars_C_ResetDurationBars_Params
{
};

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.ExecuteUbergraph_WBP_KillstreakDurationBars
struct UWBP_KillstreakDurationBars_C_ExecuteUbergraph_WBP_KillstreakDurationBars_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
