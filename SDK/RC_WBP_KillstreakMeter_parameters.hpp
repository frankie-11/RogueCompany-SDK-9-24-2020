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

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnTargetAcquired
struct UWBP_KillstreakMeter_C_HandleOnTargetAcquired_Params
{
	TScriptInterface<class UKSTargeter>*               Targeter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.PlayActivationEvent
struct UWBP_KillstreakMeter_C_PlayActivationEvent_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Set Jammed
struct UWBP_KillstreakMeter_C_Set_Jammed_Params
{
	bool*                                              IsJammed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateLockTimer
struct UWBP_KillstreakMeter_C_UpdateLockTimer_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveTrigger
struct UWBP_KillstreakMeter_C_HandleOnReviveTrigger_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveComplete
struct UWBP_KillstreakMeter_C_HandleOnReviveComplete_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveBegin
struct UWBP_KillstreakMeter_C_HandleOnReviveBegin_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateReviveProgressDisplay
struct UWBP_KillstreakMeter_C_UpdateReviveProgressDisplay_Params
{
	float*                                             InProgress;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnTargetDeath
struct UWBP_KillstreakMeter_C_HandleOnTargetDeath_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnDroneDestroyed
struct UWBP_KillstreakMeter_C_HandleOnDroneDestroyed_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.IsReadyToActivate
struct UWBP_KillstreakMeter_C_IsReadyToActivate_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Stop Ready Animations
struct UWBP_KillstreakMeter_C_Stop_Ready_Animations_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Start Ready Animations
struct UWBP_KillstreakMeter_C_Start_Ready_Animations_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.GetDynamicMats
struct UWBP_KillstreakMeter_C_GetDynamicMats_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateFillMeterDisplay
struct UWBP_KillstreakMeter_C_UpdateFillMeterDisplay_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.SetFillValue
struct UWBP_KillstreakMeter_C_SetFillValue_Params
{
	float*                                             FillValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UnbindChanges
struct UWBP_KillstreakMeter_C_UnbindChanges_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CheckForFullCharge
struct UWBP_KillstreakMeter_C_CheckForFullCharge_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateCharge
struct UWBP_KillstreakMeter_C_UpdateCharge_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.BindToChanges
struct UWBP_KillstreakMeter_C_BindToChanges_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.SetupBasicDisplay
struct UWBP_KillstreakMeter_C_SetupBasicDisplay_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Play Ability Ready Sound
struct UWBP_KillstreakMeter_C_Play_Ability_Ready_Sound_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Construct
struct UWBP_KillstreakMeter_C_Construct_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleModChargeChange
struct UWBP_KillstreakMeter_C_HandleModChargeChange_Params
{
	class UKSModInst_Activated**                       KSModInstActivated;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.InitializeWidget
struct UWBP_KillstreakMeter_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenAnimateMeterGate
struct UWBP_KillstreakMeter_C_OpenAnimateMeterGate_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseAnimateMeterGate
struct UWBP_KillstreakMeter_C_CloseAnimateMeterGate_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Tick
struct UWBP_KillstreakMeter_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandlePlayerModCharge
struct UWBP_KillstreakMeter_C_HandlePlayerModCharge_Params
{
	class UKSPlayerMod_Activated**                     KSPlayerModActivated;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleIntroAnimFinish
struct UWBP_KillstreakMeter_C_HandleIntroAnimFinish_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandlePulseAnimFinished
struct UWBP_KillstreakMeter_C_HandlePulseAnimFinished_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Update Player Downed
struct UWBP_KillstreakMeter_C_Update_Player_Downed_Params
{
	bool*                                              IsDowned;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenRetryBasicDisplay
struct UWBP_KillstreakMeter_C_OpenRetryBasicDisplay_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseRetryBasicDisplay
struct UWBP_KillstreakMeter_C_CloseRetryBasicDisplay_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.RetryBasicDisplay
struct UWBP_KillstreakMeter_C_RetryBasicDisplay_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.ReevaluateButtonPrompts
struct UWBP_KillstreakMeter_C_ReevaluateButtonPrompts_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleModActivated
struct UWBP_KillstreakMeter_C_HandleModActivated_Params
{
	bool*                                              InBool;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenReviveProgress
struct UWBP_KillstreakMeter_C_OpenReviveProgress_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.EnterReviveProgress
struct UWBP_KillstreakMeter_C_EnterReviveProgress_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseReviveProgress
struct UWBP_KillstreakMeter_C_CloseReviveProgress_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.DelayedClearOfDroneMessaging
struct UWBP_KillstreakMeter_C_DelayedClearOfDroneMessaging_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.DelayedRefundDroneMessaging
struct UWBP_KillstreakMeter_C_DelayedRefundDroneMessaging_Params
{
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OnModLockedChanged
struct UWBP_KillstreakMeter_C_OnModLockedChanged_Params
{
	bool*                                              bLocked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.StartLockoutTimer
struct UWBP_KillstreakMeter_C_StartLockoutTimer_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.ExecuteUbergraph_WBP_KillstreakMeter
struct UWBP_KillstreakMeter_C_ExecuteUbergraph_WBP_KillstreakMeter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
