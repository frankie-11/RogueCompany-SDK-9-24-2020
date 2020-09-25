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

// Function Scoreboard.Scoreboard_C.HandleInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.HandleInputModeChanged");

	UScoreboard_C_HandleInputModeChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.GetLocalPlayerJobInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           JobFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem*              JobItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScoreboard_C::GetLocalPlayerJobInfo(bool* JobFound, class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.GetLocalPlayerJobInfo");

	UScoreboard_C_GetLocalPlayerJobInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JobFound != nullptr)
		*JobFound = params.JobFound;
	if (JobItem != nullptr)
		*JobItem = params.JobItem;
}


// Function Scoreboard.Scoreboard_C.UpdateRogueInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScoreboard_C::UpdateRogueInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.UpdateRogueInfo");

	UScoreboard_C_UpdateRogueInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.GetPlayerData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UKSPersistentPlayerData*> OutPlayerData                  (Parm, OutParm, ZeroConstructor)

void UScoreboard_C::GetPlayerData(TArray<class UKSPersistentPlayerData*>* OutPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.GetPlayerData");

	UScoreboard_C_GetPlayerData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayerData != nullptr)
		*OutPlayerData = params.OutPlayerData;
}


// Function Scoreboard.Scoreboard_C.UpdateVoicePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Account                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_C::UpdateVoicePlayer(struct FString* Account, bool* IsTalking, bool* IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.UpdateVoicePlayer");

	UScoreboard_C_UpdateVoicePlayer_Params params;
	params.Account = Account;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScoreboard_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.NavigateBack");

	UScoreboard_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scoreboard.Scoreboard_C.GetPlayers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UScoreboardPlayerEntry_C*> Players                        (Parm, OutParm, ZeroConstructor)

void UScoreboard_C::GetPlayers(TArray<class UScoreboardPlayerEntry_C*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.GetPlayers");

	UScoreboard_C_GetPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function Scoreboard.Scoreboard_C.GetPlayerButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UStandardButtonNoBorder_C*> PlayerButtons                  (Parm, OutParm, ZeroConstructor)

void UScoreboard_C::GetPlayerButtons(TArray<class UStandardButtonNoBorder_C*>* PlayerButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.GetPlayerButtons");

	UScoreboard_C_GetPlayerButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerButtons != nullptr)
		*PlayerButtons = params.PlayerButtons;
}


// Function Scoreboard.Scoreboard_C.UpdateTeamColors
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreboard_C::UpdateTeamColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.UpdateTeamColors");

	UScoreboard_C_UpdateTeamColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.SortKSPlayerStatesByMoney
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UKSPersistentPlayerData*> InKSPlayerData                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          DescOrder                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UKSPersistentPlayerData*> OutKSPlayerData                (Parm, OutParm, ZeroConstructor)

void UScoreboard_C::SortKSPlayerStatesByMoney(bool* DescOrder, TArray<class UKSPersistentPlayerData*>* InKSPlayerData, TArray<class UKSPersistentPlayerData*>* OutKSPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.SortKSPlayerStatesByMoney");

	UScoreboard_C_SortKSPlayerStatesByMoney_Params params;
	params.DescOrder = DescOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InKSPlayerData != nullptr)
		*InKSPlayerData = params.InKSPlayerData;
	if (OutKSPlayerData != nullptr)
		*OutKSPlayerData = params.OutKSPlayerData;
}


// Function Scoreboard.Scoreboard_C.Get KSPlayer Data
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UKSPersistentPlayerData*> KSPlayerData                   (Parm, OutParm, ZeroConstructor)

void UScoreboard_C::Get_KSPlayer_Data(TArray<class UKSPersistentPlayerData*>* KSPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.Get KSPlayer Data");

	UScoreboard_C_Get_KSPlayer_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KSPlayerData != nullptr)
		*KSPlayerData = params.KSPlayerData;
}


// Function Scoreboard.Scoreboard_C.ComparePlayerScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerStateA                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         PlayerStateB                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           After                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScoreboard_C::ComparePlayerScore(class AKSPlayerState** PlayerStateA, class AKSPlayerState** PlayerStateB, bool* After)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.ComparePlayerScore");

	UScoreboard_C_ComparePlayerScore_Params params;
	params.PlayerStateA = PlayerStateA;
	params.PlayerStateB = PlayerStateB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (After != nullptr)
		*After = params.After;
}


// Function Scoreboard.Scoreboard_C.UpdateScores
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreboard_C::UpdateScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.UpdateScores");

	UScoreboard_C_UpdateScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.OnLoaded_4848F73A412C50823EB015A4F7EF3736
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_C::OnLoaded_4848F73A412C50823EB015A4F7EF3736(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.OnLoaded_4848F73A412C50823EB015A4F7EF3736");

	UScoreboard_C_OnLoaded_4848F73A412C50823EB015A4F7EF3736_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.Tick");

	UScoreboard_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.UpdateScoreboard
// (BlueprintCallable, BlueprintEvent)

void UScoreboard_C::UpdateScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.UpdateScoreboard");

	UScoreboard_C_UpdateScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.HandleOnScoreboardEntryAdded
// (BlueprintCallable, BlueprintEvent)

void UScoreboard_C::HandleOnScoreboardEntryAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.HandleOnScoreboardEntryAdded");

	UScoreboard_C_HandleOnScoreboardEntryAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.OnVoiceParticipantUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          bIsTalking                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsMuted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_C::OnVoiceParticipantUpdated(struct FString* AccountId, bool* bIsTalking, bool* bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.OnVoiceParticipantUpdated");

	UScoreboard_C_OnVoiceParticipantUpdated_Params params;
	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.InitializeWidget");

	UScoreboard_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.OnShown
// (Event, Public, BlueprintEvent)

void UScoreboard_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.OnShown");

	UScoreboard_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.LoadAndPopulateFirstPassive
// (BlueprintCallable, BlueprintEvent)

void UScoreboard_C::LoadAndPopulateFirstPassive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.LoadAndPopulateFirstPassive");

	UScoreboard_C_LoadAndPopulateFirstPassive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.ExecuteUbergraph_Scoreboard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_C::ExecuteUbergraph_Scoreboard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.ExecuteUbergraph_Scoreboard");

	UScoreboard_C_ExecuteUbergraph_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.OnScoreboardEntryAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UScoreboard_C::OnScoreboardEntryAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.OnScoreboardEntryAdded__DelegateSignature");

	UScoreboard_C_OnScoreboardEntryAdded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.ScoreboardTabPress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UScoreboard_C::ScoreboardTabPress__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.ScoreboardTabPress__DelegateSignature");

	UScoreboard_C_ScoreboardTabPress__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.Closed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UScoreboard_C::Closed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.Closed__DelegateSignature");

	UScoreboard_C_Closed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard.Scoreboard_C.Opened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UScoreboard_C::Opened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.Opened__DelegateSignature");

	UScoreboard_C_Opened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
