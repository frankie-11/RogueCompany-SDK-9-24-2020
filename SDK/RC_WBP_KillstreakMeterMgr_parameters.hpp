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

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Set Jammed
struct UWBP_KillstreakMeterMgr_C_Set_Jammed_Params
{
	bool*                                              IsJammed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Initialize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleEMPLockoutTick
struct UWBP_KillstreakMeterMgr_C_HandleEMPLockoutTick_Params
{
	float*                                             TimeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.BindToEMPLockout
struct UWBP_KillstreakMeterMgr_C_BindToEMPLockout_Params
{
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleEMPLocked
struct UWBP_KillstreakMeterMgr_C_HandleEMPLocked_Params
{
	bool*                                              IsLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.RemoveMeters
struct UWBP_KillstreakMeterMgr_C_RemoveMeters_Params
{
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.CreateNewMeter
struct UWBP_KillstreakMeterMgr_C_CreateNewMeter_Params
{
	class UKSModInst_Activated**                       KSModInstActivtd;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Reserve;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.PostSetPawn
struct UWBP_KillstreakMeterMgr_C_PostSetPawn_Params
{
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OpenPostSetPawnRetry
struct UWBP_KillstreakMeterMgr_C_OpenPostSetPawnRetry_Params
{
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ClosePostSetPawnRetry
struct UWBP_KillstreakMeterMgr_C_ClosePostSetPawnRetry_Params
{
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Tick
struct UWBP_KillstreakMeterMgr_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.AttemptPostSetPawnRetry
struct UWBP_KillstreakMeterMgr_C_AttemptPostSetPawnRetry_Params
{
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.RetryPostSetPawn
struct UWBP_KillstreakMeterMgr_C_RetryPostSetPawn_Params
{
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleModsUpdated
struct UWBP_KillstreakMeterMgr_C_HandleModsUpdated_Params
{
	class AKSCharacter**                               KSCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.PreClearPawn
struct UWBP_KillstreakMeterMgr_C_PreClearPawn_Params
{
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleOnPlayerEliminated
struct UWBP_KillstreakMeterMgr_C_HandleOnPlayerEliminated_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleDownedStateChange
struct UWBP_KillstreakMeterMgr_C_HandleDownedStateChange_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.InitializeWidget
struct UWBP_KillstreakMeterMgr_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleActivateModsUpdated
struct UWBP_KillstreakMeterMgr_C_HandleActivateModsUpdated_Params
{
	class AKSPlayerState**                             KSPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OpenPromptFailureTimer
struct UWBP_KillstreakMeterMgr_C_OpenPromptFailureTimer_Params
{
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ClosePromptFailureTimer
struct UWBP_KillstreakMeterMgr_C_ClosePromptFailureTimer_Params
{
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.StartPromptFailureTimer
struct UWBP_KillstreakMeterMgr_C_StartPromptFailureTimer_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Construct
struct UWBP_KillstreakMeterMgr_C_Construct_Params
{
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleKillCam
struct UWBP_KillstreakMeterMgr_C_HandleKillCam_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Handle Mod Failed
struct UWBP_KillstreakMeterMgr_C_Handle_Mod_Failed_Params
{
	class UKSModInst_Activated**                       AttemptedMod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EKSAbilityUsageFailureType*                        AbilityFailureType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OnBuildFailed
struct UWBP_KillstreakMeterMgr_C_OnBuildFailed_Params
{
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OnBruteStrengthActivated
struct UWBP_KillstreakMeterMgr_C_OnBruteStrengthActivated_Params
{
	bool*                                              bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ExecuteUbergraph_WBP_KillstreakMeterMgr
struct UWBP_KillstreakMeterMgr_C_ExecuteUbergraph_WBP_KillstreakMeterMgr_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
