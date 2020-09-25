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

// Function CoopTimer.CoopTimer_C.UpdateMatchPointDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UCoopTimer_C::UpdateMatchPointDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.UpdateMatchPointDisplay");

	UCoopTimer_C_UpdateMatchPointDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.UpdateTeamCountDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCoopTimer_C::UpdateTeamCountDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.UpdateTeamCountDisplay");

	UCoopTimer_C_UpdateTeamCountDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.SetRoundTimerSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopTimer_C::SetRoundTimerSize(int* NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.SetRoundTimerSize");

	UCoopTimer_C_SetRoundTimerSize_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCoopTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.Construct");

	UCoopTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.HackInProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSExtractionComputer**  Computer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopTimer_C::HackInProgress(class AKSExtractionComputer** Computer)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.HackInProgress");

	UCoopTimer_C_HackInProgress_Params params;
	params.Computer = Computer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.RoundEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSGameState**           GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRoundResult*           RoundResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCoopTimer_C::RoundEnd(class AKSGameState** GameState, struct FRoundResult* RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.RoundEnd");

	UCoopTimer_C_RoundEnd_Params params;
	params.GameState = GameState;
	params.RoundResult = RoundResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.RoundWarmup
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCoopTimer_C::RoundWarmup(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.RoundWarmup");

	UCoopTimer_C_RoundWarmup_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.RoundStart
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCoopTimer_C::RoundStart(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.RoundStart");

	UCoopTimer_C_RoundStart_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.ComputersUnlock
// (BlueprintCallable, BlueprintEvent)

void UCoopTimer_C::ComputersUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.ComputersUnlock");

	UCoopTimer_C_ComputersUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopTimer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.Tick");

	UCoopTimer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.Player Eliminated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopTimer_C::Player_Eliminated(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.Player Eliminated");

	UCoopTimer_C_Player_Eliminated_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.OpenRetryGameStateBind
// (BlueprintCallable, BlueprintEvent)

void UCoopTimer_C::OpenRetryGameStateBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.OpenRetryGameStateBind");

	UCoopTimer_C_OpenRetryGameStateBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.CloseRetryGameStateBind
// (BlueprintCallable, BlueprintEvent)

void UCoopTimer_C::CloseRetryGameStateBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.CloseRetryGameStateBind");

	UCoopTimer_C_CloseRetryGameStateBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.RetryGameStateBind
// (BlueprintCallable, BlueprintEvent)

void UCoopTimer_C::RetryGameStateBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.RetryGameStateBind");

	UCoopTimer_C_RetryGameStateBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.OnUIRelevantPlayerStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopTimer_C::OnUIRelevantPlayerStateChanged(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.OnUIRelevantPlayerStateChanged");

	UCoopTimer_C_OnUIRelevantPlayerStateChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.OnGameTimerUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewTruncatedSeconds            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopTimer_C::OnGameTimerUpdate(float* NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.OnGameTimerUpdate");

	UCoopTimer_C_OnGameTimerUpdate_Params params;
	params.NewTruncatedSeconds = NewTruncatedSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.InitializeTimer
// (BlueprintCallable, BlueprintEvent)

void UCoopTimer_C::InitializeTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.InitializeTimer");

	UCoopTimer_C_InitializeTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.HandleKillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopTimer_C::HandleKillCamEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.HandleKillCamEnabled");

	UCoopTimer_C_HandleKillCamEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.Unbind OnGameTimerUpdate
// (BlueprintCallable, BlueprintEvent)

void UCoopTimer_C::Unbind_OnGameTimerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.Unbind OnGameTimerUpdate");

	UCoopTimer_C_Unbind_OnGameTimerUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.HandleKillCamViewPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  ViewedPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopTimer_C::HandleKillCamViewPawn(class APawn** ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.HandleKillCamViewPawn");

	UCoopTimer_C_HandleKillCamViewPawn_Params params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.Handle Alarm State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAlarmState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopTimer_C::Handle_Alarm_State_Changed(bool* bAlarmState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.Handle Alarm State Changed");

	UCoopTimer_C_Handle_Alarm_State_Changed_Params params;
	params.bAlarmState = bAlarmState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopTimer.CoopTimer_C.ExecuteUbergraph_CoopTimer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopTimer_C::ExecuteUbergraph_CoopTimer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopTimer.CoopTimer_C.ExecuteUbergraph_CoopTimer");

	UCoopTimer_C_ExecuteUbergraph_CoopTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
