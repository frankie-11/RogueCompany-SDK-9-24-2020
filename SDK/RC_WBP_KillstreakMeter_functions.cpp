// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnTargetAcquired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSTargeter>* Targeter                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::HandleOnTargetAcquired(TScriptInterface<class UKSTargeter>* Targeter, class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnTargetAcquired");

	UWBP_KillstreakMeter_C_HandleOnTargetAcquired_Params params;
	params.Targeter = Targeter;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.PlayActivationEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::PlayActivationEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.PlayActivationEvent");

	UWBP_KillstreakMeter_C_PlayActivationEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Set Jammed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsJammed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::Set_Jammed(bool* IsJammed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Set Jammed");

	UWBP_KillstreakMeter_C_Set_Jammed_Params params;
	params.IsJammed = IsJammed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateLockTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::UpdateLockTimer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateLockTimer");

	UWBP_KillstreakMeter_C_UpdateLockTimer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveTrigger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleOnReviveTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveTrigger");

	UWBP_KillstreakMeter_C_HandleOnReviveTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleOnReviveComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveComplete");

	UWBP_KillstreakMeter_C_HandleOnReviveComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveBegin
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleOnReviveBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveBegin");

	UWBP_KillstreakMeter_C_HandleOnReviveBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateReviveProgressDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InProgress                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::UpdateReviveProgressDisplay(float* InProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateReviveProgressDisplay");

	UWBP_KillstreakMeter_C_UpdateReviveProgressDisplay_Params params;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnTargetDeath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleOnTargetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnTargetDeath");

	UWBP_KillstreakMeter_C_HandleOnTargetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnDroneDestroyed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleOnDroneDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnDroneDestroyed");

	UWBP_KillstreakMeter_C_HandleOnDroneDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.IsReadyToActivate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::IsReadyToActivate(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.IsReadyToActivate");

	UWBP_KillstreakMeter_C_IsReadyToActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Stop Ready Animations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::Stop_Ready_Animations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Stop Ready Animations");

	UWBP_KillstreakMeter_C_Stop_Ready_Animations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Start Ready Animations
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::Start_Ready_Animations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Start Ready Animations");

	UWBP_KillstreakMeter_C_Start_Ready_Animations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.GetDynamicMats
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::GetDynamicMats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.GetDynamicMats");

	UWBP_KillstreakMeter_C_GetDynamicMats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateFillMeterDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::UpdateFillMeterDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateFillMeterDisplay");

	UWBP_KillstreakMeter_C_UpdateFillMeterDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.SetFillValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         FillValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::SetFillValue(float* FillValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.SetFillValue");

	UWBP_KillstreakMeter_C_SetFillValue_Params params;
	params.FillValue = FillValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UnbindChanges
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::UnbindChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UnbindChanges");

	UWBP_KillstreakMeter_C_UnbindChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CheckForFullCharge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::CheckForFullCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CheckForFullCharge");

	UWBP_KillstreakMeter_C_CheckForFullCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateCharge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::UpdateCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateCharge");

	UWBP_KillstreakMeter_C_UpdateCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.BindToChanges
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::BindToChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.BindToChanges");

	UWBP_KillstreakMeter_C_BindToChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.SetupBasicDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::SetupBasicDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.SetupBasicDisplay");

	UWBP_KillstreakMeter_C_SetupBasicDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Play Ability Ready Sound
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::Play_Ability_Ready_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Play Ability Ready Sound");

	UWBP_KillstreakMeter_C_Play_Ability_Ready_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_KillstreakMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Construct");

	UWBP_KillstreakMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleModChargeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSModInst_Activated**   KSModInstActivated             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_KillstreakMeter_C::HandleModChargeChange(class UKSModInst_Activated** KSModInstActivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleModChargeChange");

	UWBP_KillstreakMeter_C_HandleModChargeChange_Params params;
	params.KSModInstActivated = KSModInstActivated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.InitializeWidget");

	UWBP_KillstreakMeter_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenAnimateMeterGate
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::OpenAnimateMeterGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenAnimateMeterGate");

	UWBP_KillstreakMeter_C_OpenAnimateMeterGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseAnimateMeterGate
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::CloseAnimateMeterGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseAnimateMeterGate");

	UWBP_KillstreakMeter_C_CloseAnimateMeterGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Tick");

	UWBP_KillstreakMeter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandlePlayerModCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerMod_Activated** KSPlayerModActivated           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::HandlePlayerModCharge(class UKSPlayerMod_Activated** KSPlayerModActivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandlePlayerModCharge");

	UWBP_KillstreakMeter_C_HandlePlayerModCharge_Params params;
	params.KSPlayerModActivated = KSPlayerModActivated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleIntroAnimFinish
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleIntroAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleIntroAnimFinish");

	UWBP_KillstreakMeter_C_HandleIntroAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandlePulseAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::HandlePulseAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandlePulseAnimFinished");

	UWBP_KillstreakMeter_C_HandlePulseAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Update Player Downed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsDowned                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::Update_Player_Downed(bool* IsDowned)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Update Player Downed");

	UWBP_KillstreakMeter_C_Update_Player_Downed_Params params;
	params.IsDowned = IsDowned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenRetryBasicDisplay
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::OpenRetryBasicDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenRetryBasicDisplay");

	UWBP_KillstreakMeter_C_OpenRetryBasicDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseRetryBasicDisplay
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::CloseRetryBasicDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseRetryBasicDisplay");

	UWBP_KillstreakMeter_C_CloseRetryBasicDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.RetryBasicDisplay
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::RetryBasicDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.RetryBasicDisplay");

	UWBP_KillstreakMeter_C_RetryBasicDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.ReevaluateButtonPrompts
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::ReevaluateButtonPrompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.ReevaluateButtonPrompts");

	UWBP_KillstreakMeter_C_ReevaluateButtonPrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleModActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InBool                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::HandleModActivated(bool* InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleModActivated");

	UWBP_KillstreakMeter_C_HandleModActivated_Params params;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenReviveProgress
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::OpenReviveProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenReviveProgress");

	UWBP_KillstreakMeter_C_OpenReviveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.EnterReviveProgress
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::EnterReviveProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.EnterReviveProgress");

	UWBP_KillstreakMeter_C_EnterReviveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseReviveProgress
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::CloseReviveProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseReviveProgress");

	UWBP_KillstreakMeter_C_CloseReviveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.DelayedClearOfDroneMessaging
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::DelayedClearOfDroneMessaging()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.DelayedClearOfDroneMessaging");

	UWBP_KillstreakMeter_C_DelayedClearOfDroneMessaging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.DelayedRefundDroneMessaging
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeter_C::DelayedRefundDroneMessaging()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.DelayedRefundDroneMessaging");

	UWBP_KillstreakMeter_C_DelayedRefundDroneMessaging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OnModLockedChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bLocked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::OnModLockedChanged(bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OnModLockedChanged");

	UWBP_KillstreakMeter_C_OnModLockedChanged_Params params;
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.StartLockoutTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::StartLockoutTimer(float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.StartLockoutTimer");

	UWBP_KillstreakMeter_C_StartLockoutTimer_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.ExecuteUbergraph_WBP_KillstreakMeter
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeter_C::ExecuteUbergraph_WBP_KillstreakMeter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.ExecuteUbergraph_WBP_KillstreakMeter");

	UWBP_KillstreakMeter_C_ExecuteUbergraph_WBP_KillstreakMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
