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

// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateMenuBlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerController**    PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::UpdateMenuBlock(class AKSPlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateMenuBlock");

	UWBP_VoteWidget_C_UpdateMenuBlock_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateVotePipStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewInFavorCount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewAgainstCount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IgnoreCached                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::UpdateVotePipStates(int* NewInFavorCount, int* NewAgainstCount, bool* IgnoreCached)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateVotePipStates");

	UWBP_VoteWidget_C_UpdateVotePipStates_Params params;
	params.NewInFavorCount = NewInFavorCount;
	params.NewAgainstCount = NewAgainstCount;
	params.IgnoreCached = IgnoreCached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateVotePipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewVoteCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::UpdateVotePipCount(int* NewVoteCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateVotePipCount");

	UWBP_VoteWidget_C_UpdateVotePipCount_Params params;
	params.NewVoteCount = NewVoteCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.CastVote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InFavor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::CastVote(bool* InFavor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.CastVote");

	UWBP_VoteWidget_C_CastVote_Params params;
	params.InFavor = InFavor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.ResetTimerBar
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VoteWidget_C::ResetTimerBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.ResetTimerBar");

	UWBP_VoteWidget_C_ResetTimerBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateRightChoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         In_Delta_Time                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShouldReset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IgnoreHold                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::UpdateRightChoice(float* In_Delta_Time, bool* ShouldReset, bool* IgnoreHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateRightChoice");

	UWBP_VoteWidget_C_UpdateRightChoice_Params params;
	params.In_Delta_Time = In_Delta_Time;
	params.ShouldReset = ShouldReset;
	params.IgnoreHold = IgnoreHold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateLeftChoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         In_Delta_Time                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShouldReset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IgnoreHold                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::UpdateLeftChoice(float* In_Delta_Time, bool* ShouldReset, bool* IgnoreHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateLeftChoice");

	UWBP_VoteWidget_C_UpdateLeftChoice_Params params;
	params.In_Delta_Time = In_Delta_Time;
	params.ShouldReset = ShouldReset;
	params.IgnoreHold = IgnoreHold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateTimerBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         In_Delta_Time                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::UpdateTimerBar(float* In_Delta_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateTimerBar");

	UWBP_VoteWidget_C_UpdateTimerBar_Params params;
	params.In_Delta_Time = In_Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.Finished_B57E4A0043F84951AB8468824D8B8B03
// (BlueprintCallable, BlueprintEvent)

void UWBP_VoteWidget_C::Finished_B57E4A0043F84951AB8468824D8B8B03()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.Finished_B57E4A0043F84951AB8468824D8B8B03");

	UWBP_VoteWidget_C_Finished_B57E4A0043F84951AB8468824D8B8B03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.Tick");

	UWBP_VoteWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.OnNewPollCalled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 PollType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::OnNewPollCalled(class UClass** PollType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.OnNewPollCalled");

	UWBP_VoteWidget_C_OnNewPollCalled_Params params;
	params.PollType = PollType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.OnLocalPlayerHasVoted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bInFavor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::OnLocalPlayerHasVoted(bool* bInFavor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.OnLocalPlayerHasVoted");

	UWBP_VoteWidget_C_OnLocalPlayerHasVoted_Params params;
	params.bInFavor = bInFavor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.OnPollCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSPollResults*         PollResults                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_VoteWidget_C::OnPollCompleted(struct FKSPollResults* PollResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.OnPollCompleted");

	UWBP_VoteWidget_C_OnPollCompleted_Params params;
	params.PollResults = PollResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.OnPollStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsPaused                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::OnPollStateChanged(bool* bIsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.OnPollStateChanged");

	UWBP_VoteWidget_C_OnPollStateChanged_Params params;
	params.bIsPaused = bIsPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.SetupPollInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::SetupPollInfo(class UClass** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.SetupPollInfo");

	UWBP_VoteWidget_C_SetupPollInfo_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.InitializeWidget");

	UWBP_VoteWidget_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.OnVoteCountUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSPollData*            NewVoteData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_VoteWidget_C::OnVoteCountUpdated(struct FKSPollData* NewVoteData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.OnVoteCountUpdated");

	UWBP_VoteWidget_C_OnVoteCountUpdated_Params params;
	params.NewVoteData = NewVoteData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.OnInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.OnInputStateChanged");

	UWBP_VoteWidget_C_OnInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.ExecuteUbergraph_WBP_VoteWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteWidget_C::ExecuteUbergraph_WBP_VoteWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.ExecuteUbergraph_WBP_VoteWidget");

	UWBP_VoteWidget_C_ExecuteUbergraph_WBP_VoteWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
