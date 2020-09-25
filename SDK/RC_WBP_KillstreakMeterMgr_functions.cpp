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

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Set Jammed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsJammed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Initialize                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::Set_Jammed(bool* IsJammed, bool* Initialize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Set Jammed");

	UWBP_KillstreakMeterMgr_C_Set_Jammed_Params params;
	params.IsJammed = IsJammed;
	params.Initialize = Initialize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleEMPLockoutTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TimeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::HandleEMPLockoutTick(float* TimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleEMPLockoutTick");

	UWBP_KillstreakMeterMgr_C_HandleEMPLockoutTick_Params params;
	params.TimeLeft = TimeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.BindToEMPLockout
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::BindToEMPLockout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.BindToEMPLockout");

	UWBP_KillstreakMeterMgr_C_BindToEMPLockout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleEMPLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::HandleEMPLocked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleEMPLocked");

	UWBP_KillstreakMeterMgr_C_HandleEMPLocked_Params params;
	params.IsLocked = IsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.RemoveMeters
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::RemoveMeters()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.RemoveMeters");

	UWBP_KillstreakMeterMgr_C_RemoveMeters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.CreateNewMeter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSModInst_Activated**   KSModInstActivtd               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Reserve                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::CreateNewMeter(class UKSModInst_Activated** KSModInstActivtd, bool* Reserve)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.CreateNewMeter");

	UWBP_KillstreakMeterMgr_C_CreateNewMeter_Params params;
	params.KSModInstActivtd = KSModInstActivtd;
	params.Reserve = Reserve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.PostSetPawn");

	UWBP_KillstreakMeterMgr_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OpenPostSetPawnRetry
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::OpenPostSetPawnRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OpenPostSetPawnRetry");

	UWBP_KillstreakMeterMgr_C_OpenPostSetPawnRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ClosePostSetPawnRetry
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::ClosePostSetPawnRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ClosePostSetPawnRetry");

	UWBP_KillstreakMeterMgr_C_ClosePostSetPawnRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Tick");

	UWBP_KillstreakMeterMgr_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.AttemptPostSetPawnRetry
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::AttemptPostSetPawnRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.AttemptPostSetPawnRetry");

	UWBP_KillstreakMeterMgr_C_AttemptPostSetPawnRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.RetryPostSetPawn
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::RetryPostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.RetryPostSetPawn");

	UWBP_KillstreakMeterMgr_C_RetryPostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleModsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           KSCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::HandleModsUpdated(class AKSCharacter** KSCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleModsUpdated");

	UWBP_KillstreakMeterMgr_C_HandleModsUpdated_Params params;
	params.KSCharacter = KSCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.PreClearPawn");

	UWBP_KillstreakMeterMgr_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleOnPlayerEliminated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::HandleOnPlayerEliminated(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleOnPlayerEliminated");

	UWBP_KillstreakMeterMgr_C_HandleOnPlayerEliminated_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleDownedStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::HandleDownedStateChange(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleDownedStateChange");

	UWBP_KillstreakMeterMgr_C_HandleDownedStateChange_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.InitializeWidget");

	UWBP_KillstreakMeterMgr_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleActivateModsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         KSPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::HandleActivateModsUpdated(class AKSPlayerState** KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleActivateModsUpdated");

	UWBP_KillstreakMeterMgr_C_HandleActivateModsUpdated_Params params;
	params.KSPlayerState = KSPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OpenPromptFailureTimer
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::OpenPromptFailureTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OpenPromptFailureTimer");

	UWBP_KillstreakMeterMgr_C_OpenPromptFailureTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ClosePromptFailureTimer
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::ClosePromptFailureTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ClosePromptFailureTimer");

	UWBP_KillstreakMeterMgr_C_ClosePromptFailureTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.StartPromptFailureTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::StartPromptFailureTimer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.StartPromptFailureTimer");

	UWBP_KillstreakMeterMgr_C_StartPromptFailureTimer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Construct");

	UWBP_KillstreakMeterMgr_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleKillCam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::HandleKillCam(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleKillCam");

	UWBP_KillstreakMeterMgr_C_HandleKillCam_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Handle Mod Failed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSModInst_Activated**   AttemptedMod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EKSAbilityUsageFailureType*    AbilityFailureType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::Handle_Mod_Failed(class UKSModInst_Activated** AttemptedMod, EKSAbilityUsageFailureType* AbilityFailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Handle Mod Failed");

	UWBP_KillstreakMeterMgr_C_Handle_Mod_Failed_Params params;
	params.AttemptedMod = AttemptedMod;
	params.AbilityFailureType = AbilityFailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OnBuildFailed
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::OnBuildFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OnBuildFailed");

	UWBP_KillstreakMeterMgr_C_OnBuildFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OnBruteStrengthActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::OnBruteStrengthActivated(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OnBruteStrengthActivated");

	UWBP_KillstreakMeterMgr_C_OnBruteStrengthActivated_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ExecuteUbergraph_WBP_KillstreakMeterMgr
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakMeterMgr_C::ExecuteUbergraph_WBP_KillstreakMeterMgr(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ExecuteUbergraph_WBP_KillstreakMeterMgr");

	UWBP_KillstreakMeterMgr_C_ExecuteUbergraph_WBP_KillstreakMeterMgr_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
