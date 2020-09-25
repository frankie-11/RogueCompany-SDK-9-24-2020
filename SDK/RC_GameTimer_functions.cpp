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

// Function GameTimer.GameTimer_C.ShouldPlayCountdownSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ShouldPlay                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameTimer_C::ShouldPlayCountdownSound(bool* ShouldPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.ShouldPlayCountdownSound");

	UGameTimer_C_ShouldPlayCountdownSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldPlay != nullptr)
		*ShouldPlay = params.ShouldPlay;
}


// Function GameTimer.GameTimer_C.PlayFinalCountdownSound
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimer_C::PlayFinalCountdownSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.PlayFinalCountdownSound");

	UGameTimer_C_PlayFinalCountdownSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.DebugIssues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameTimer_C::DebugIssues(struct FString* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.DebugIssues");

	UGameTimer_C_DebugIssues_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.UpdateRoundDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameTimer_C::UpdateRoundDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.UpdateRoundDisplay");

	UGameTimer_C_UpdateRoundDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.UpdateMatchPointDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimer_C::UpdateMatchPointDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.UpdateMatchPointDisplay");

	UGameTimer_C_UpdateMatchPointDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.UpdateTeamCountDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameTimer_C::UpdateTeamCountDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.UpdateTeamCountDisplay");

	UGameTimer_C_UpdateTeamCountDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.SetRoundTimerSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimer_C::SetRoundTimerSize(int* NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.SetRoundTimerSize");

	UGameTimer_C_SetRoundTimerSize_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.Construct");

	UGameTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.HackInProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSExtractionComputer**  Computer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimer_C::HackInProgress(class AKSExtractionComputer** Computer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.HackInProgress");

	UGameTimer_C_HackInProgress_Params params;
	params.Computer = Computer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.RoundEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSGameState**           GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRoundResult*           RoundResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGameTimer_C::RoundEnd(class AKSGameState** GameState, struct FRoundResult* RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.RoundEnd");

	UGameTimer_C_RoundEnd_Params params;
	params.GameState = GameState;
	params.RoundResult = RoundResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.RoundWarmup
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGameTimer_C::RoundWarmup(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.RoundWarmup");

	UGameTimer_C_RoundWarmup_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.RoundStart
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGameTimer_C::RoundStart(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.RoundStart");

	UGameTimer_C_RoundStart_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.ComputersUnlock
// (BlueprintCallable, BlueprintEvent)

void UGameTimer_C::ComputersUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.ComputersUnlock");

	UGameTimer_C_ComputersUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.Tick");

	UGameTimer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.Player Eliminated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimer_C::Player_Eliminated(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.Player Eliminated");

	UGameTimer_C_Player_Eliminated_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.OpenRetryGameStateBind
// (BlueprintCallable, BlueprintEvent)

void UGameTimer_C::OpenRetryGameStateBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.OpenRetryGameStateBind");

	UGameTimer_C_OpenRetryGameStateBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.CloseRetryGameStateBind
// (BlueprintCallable, BlueprintEvent)

void UGameTimer_C::CloseRetryGameStateBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.CloseRetryGameStateBind");

	UGameTimer_C_CloseRetryGameStateBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.RetryGameStateBind
// (BlueprintCallable, BlueprintEvent)

void UGameTimer_C::RetryGameStateBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.RetryGameStateBind");

	UGameTimer_C_RetryGameStateBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.OnUIRelevantPlayerStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimer_C::OnUIRelevantPlayerStateChanged(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.OnUIRelevantPlayerStateChanged");

	UGameTimer_C_OnUIRelevantPlayerStateChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.OnGameTimerUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewTruncatedSeconds            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimer_C::OnGameTimerUpdate(float* NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.OnGameTimerUpdate");

	UGameTimer_C_OnGameTimerUpdate_Params params;
	params.NewTruncatedSeconds = NewTruncatedSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.InitializeTimer
// (BlueprintCallable, BlueprintEvent)

void UGameTimer_C::InitializeTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.InitializeTimer");

	UGameTimer_C_InitializeTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.HandleKillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimer_C::HandleKillCamEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.HandleKillCamEnabled");

	UGameTimer_C_HandleKillCamEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.Unbind OnGameTimerUpdate
// (BlueprintCallable, BlueprintEvent)

void UGameTimer_C::Unbind_OnGameTimerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.Unbind OnGameTimerUpdate");

	UGameTimer_C_Unbind_OnGameTimerUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.HandleKillCamViewPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  ViewedPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimer_C::HandleKillCamViewPawn(class APawn** ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.HandleKillCamViewPawn");

	UGameTimer_C_HandleKillCamViewPawn_Params params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.BombTimerActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimer_C::BombTimerActive(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.BombTimerActive");

	UGameTimer_C_BombTimerActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.BombTimerTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimer_C::BombTimerTick(float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.BombTimerTick");

	UGameTimer_C_BombTimerTick_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimer.GameTimer_C.ExecuteUbergraph_GameTimer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimer_C::ExecuteUbergraph_GameTimer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.ExecuteUbergraph_GameTimer");

	UGameTimer_C_ExecuteUbergraph_GameTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
