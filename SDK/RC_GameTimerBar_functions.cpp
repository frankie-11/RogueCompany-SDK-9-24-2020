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

// Function GameTimerBar.GameTimerBar_C.CheckTeamSides
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::CheckTeamSides()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.CheckTeamSides");

	UGameTimerBar_C_CheckTeamSides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Bind Player State
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::Bind_Player_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Bind Player State");

	UGameTimerBar_C_Bind_Player_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.ResetPlayerStates
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::ResetPlayerStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.ResetPlayerStates");

	UGameTimerBar_C_ResetPlayerStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.OnTeamChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         KSPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::OnTeamChanged(class AKSPlayerState** KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnTeamChanged");

	UGameTimerBar_C_OnTeamChanged_Params params;
	params.KSPlayerState = KSPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.UpdateRoundNumberText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::UpdateRoundNumberText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.UpdateRoundNumberText");

	UGameTimerBar_C_UpdateRoundNumberText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.OnTotalRoundsSet
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::OnTotalRoundsSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnTotalRoundsSet");

	UGameTimerBar_C_OnTotalRoundsSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.OnRoundsToWinSet
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::OnRoundsToWinSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnRoundsToWinSet");

	UGameTimerBar_C_OnRoundsToWinSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.BindRoundEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::BindRoundEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.BindRoundEvents");

	UGameTimerBar_C_BindRoundEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.OnTeamScoreChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSTeamState**           KSTeamState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::OnTeamScoreChanged(class AKSTeamState** KSTeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnTeamScoreChanged");

	UGameTimerBar_C_OnTeamScoreChanged_Params params;
	params.KSTeamState = KSTeamState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.On Team Respawns Changed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSTeamState**           KSTeamState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::On_Team_Respawns_Changed(class AKSTeamState** KSTeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.On Team Respawns Changed");

	UGameTimerBar_C_On_Team_Respawns_Changed_Params params;
	params.KSTeamState = KSTeamState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.OnMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         KSPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::OnMemberRemoved(class AKSPlayerState** KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnMemberRemoved");

	UGameTimerBar_C_OnMemberRemoved_Params params;
	params.KSPlayerState = KSPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.OnMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         KSPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::OnMemberAdded(class AKSPlayerState** KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnMemberAdded");

	UGameTimerBar_C_OnMemberAdded_Params params;
	params.KSPlayerState = KSPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.OnTeamAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSTeamState**           KSTeamState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::OnTeamAdded(class AKSTeamState** KSTeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnTeamAdded");

	UGameTimerBar_C_OnTeamAdded_Params params;
	params.KSTeamState = KSTeamState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Bind Team Events
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::Bind_Team_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Bind Team Events");

	UGameTimerBar_C_Bind_Team_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.GetRoundInProgressText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGameTimerBar_C::GetRoundInProgressText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.GetRoundInProgressText");

	UGameTimerBar_C_GetRoundInProgressText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameTimerBar.GameTimerBar_C.SetAttackDefendIcons
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::SetAttackDefendIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.SetAttackDefendIcons");

	UGameTimerBar_C_SetAttackDefendIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.HandlePhaseChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NewPhase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousPhase                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::HandlePhaseChanged(struct FName* NewPhase, struct FName* PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.HandlePhaseChanged");

	UGameTimerBar_C_HandlePhaseChanged_Params params;
	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.PlayBombCountdownSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::PlayBombCountdownSFX(float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.PlayBombCountdownSFX");

	UGameTimerBar_C_PlayBombCountdownSFX_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.ShouldPlayCountdownSFX
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ShouldPlay                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::ShouldPlayCountdownSFX(bool* ShouldPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.ShouldPlayCountdownSFX");

	UGameTimerBar_C_ShouldPlayCountdownSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldPlay != nullptr)
		*ShouldPlay = params.ShouldPlay;
}


// Function GameTimerBar.GameTimerBar_C.PlayFinalCountdownSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Current_Second                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::PlayFinalCountdownSFX(float* Current_Second)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.PlayFinalCountdownSFX");

	UGameTimerBar_C_PlayFinalCountdownSFX_Params params;
	params.Current_Second = Current_Second;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Set Timer Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::Set_Timer_Text(float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Set Timer Text");

	UGameTimerBar_C_Set_Timer_Text_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Handle Neutral Bomb State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSNeutralBombState*    BombState                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameTimerBar_C::Handle_Neutral_Bomb_State_Changed(struct FKSNeutralBombState* BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Neutral Bomb State Changed");

	UGameTimerBar_C_Handle_Neutral_Bomb_State_Changed_Params params;
	params.BombState = BombState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameTimerBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Construct");

	UGameTimerBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Tick");

	UGameTimerBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Handle Timer Second Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds_Remaining              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::Handle_Timer_Second_Tick(float* Seconds_Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Timer Second Tick");

	UGameTimerBar_C_Handle_Timer_Second_Tick_Params params;
	params.Seconds_Remaining = Seconds_Remaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Handle Round Info Changed
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::Handle_Round_Info_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Round Info Changed");

	UGameTimerBar_C_Handle_Round_Info_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Handle Computers Unlocked
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::Handle_Computers_Unlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Computers Unlocked");

	UGameTimerBar_C_Handle_Computers_Unlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Handle Round Start
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        Round_Init_State               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGameTimerBar_C::Handle_Round_Start(struct FRoundInitState* Round_Init_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Round Start");

	UGameTimerBar_C_Handle_Round_Start_Params params;
	params.Round_Init_State = Round_Init_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Handle Computer Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSObjectiveBase**       Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::Handle_Computer_Update(class AKSObjectiveBase** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Computer Update");

	UGameTimerBar_C_Handle_Computer_Update_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Handle Round End
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSGameState**           GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRoundResult*           RoundResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGameTimerBar_C::Handle_Round_End(class AKSGameState** GameState, struct FRoundResult* RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Round End");

	UGameTimerBar_C_Handle_Round_End_Params params;
	params.GameState = GameState;
	params.RoundResult = RoundResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.InitializeWidget");

	UGameTimerBar_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.HandleKillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::HandleKillCamEnabled(bool* bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.HandleKillCamEnabled");

	UGameTimerBar_C_HandleKillCamEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.HandleFadeAnimEnd
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::HandleFadeAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.HandleFadeAnimEnd");

	UGameTimerBar_C_HandleFadeAnimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.OnUIRelevantPlayerStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::OnUIRelevantPlayerStateChanged(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnUIRelevantPlayerStateChanged");

	UGameTimerBar_C_OnUIRelevantPlayerStateChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.OnControlPointUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSObjectiveBase**       Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::OnControlPointUpdate(class AKSObjectiveBase** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnControlPointUpdate");

	UGameTimerBar_C_OnControlPointUpdate_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.OnControlPointScored
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSTeamState**           TeamState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSControlPoint**        ControlPoint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::OnControlPointScored(class AKSTeamState** TeamState, class AKSControlPoint** ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnControlPointScored");

	UGameTimerBar_C_OnControlPointScored_Params params;
	params.TeamState = TeamState;
	params.ControlPoint = ControlPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Handle Attacking Team Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSTeamState**           NewTeam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::Handle_Attacking_Team_Updated(class AKSTeamState** NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Attacking Team Updated");

	UGameTimerBar_C_Handle_Attacking_Team_Updated_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Handle Bomb State Timer Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::Handle_Bomb_State_Timer_Tick(float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Bomb State Timer Tick");

	UGameTimerBar_C_Handle_Bomb_State_Timer_Tick_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Handle Bomb State Timer Active
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::Handle_Bomb_State_Timer_Active(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Bomb State Timer Active");

	UGameTimerBar_C_Handle_Bomb_State_Timer_Active_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Deferred Game State Open
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::Deferred_Game_State_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Deferred Game State Open");

	UGameTimerBar_C_Deferred_Game_State_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.Deferred Bind Computer Open
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::Deferred_Bind_Computer_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Deferred Bind Computer Open");

	UGameTimerBar_C_Deferred_Bind_Computer_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.DeferredPlayerStateOpen
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::DeferredPlayerStateOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.DeferredPlayerStateOpen");

	UGameTimerBar_C_DeferredPlayerStateOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.StopTickCaptureProgress
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::StopTickCaptureProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.StopTickCaptureProgress");

	UGameTimerBar_C_StopTickCaptureProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.TickCaptureProgress
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::TickCaptureProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.TickCaptureProgress");

	UGameTimerBar_C_TickCaptureProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.DeferredBindControlPointOpen
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBar_C::DeferredBindControlPointOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.DeferredBindControlPointOpen");

	UGameTimerBar_C_DeferredBindControlPointOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBar.GameTimerBar_C.ExecuteUbergraph_GameTimerBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBar_C::ExecuteUbergraph_GameTimerBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.ExecuteUbergraph_GameTimerBar");

	UGameTimerBar_C_ExecuteUbergraph_GameTimerBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
