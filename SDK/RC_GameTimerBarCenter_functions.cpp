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

// Function GameTimerBarCenter.GameTimerBarCenter_C.SetContestedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsContested                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::SetContestedState(bool* bIsContested)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.SetContestedState");

	UGameTimerBarCenter_C_SetContestedState_Params params;
	params.bIsContested = bIsContested;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.PlayScoreAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBarCenter_C::PlayScoreAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.PlayScoreAnim");

	UGameTimerBarCenter_C_PlayScoreAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.SetCurrentPhase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  PhaseName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::SetCurrentPhase(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.SetCurrentPhase");

	UGameTimerBarCenter_C_SetCurrentPhase_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.ResetCenterTextStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameTimerBarCenter_C::ResetCenterTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.ResetCenterTextStyle");

	UGameTimerBarCenter_C_ResetCenterTextStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.ResetCenter
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBarCenter_C::ResetCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.ResetCenter");

	UGameTimerBarCenter_C_ResetCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.SetRoundTimers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::SetRoundTimers(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.SetRoundTimers");

	UGameTimerBarCenter_C_SetRoundTimers_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Update Bomb Timer Seconds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::Update_Bomb_Timer_Seconds(float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.Update Bomb Timer Seconds");

	UGameTimerBarCenter_C_Update_Bomb_Timer_Seconds_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Reset Bomb Timer
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBarCenter_C::Reset_Bomb_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.Reset Bomb Timer");

	UGameTimerBarCenter_C_Reset_Bomb_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Set Hack Seconds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HackTimeLeft                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::Set_Hack_Seconds(float* HackTimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.Set Hack Seconds");

	UGameTimerBarCenter_C_Set_Hack_Seconds_Params params;
	params.HackTimeLeft = HackTimeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Set Countdown Seconds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CountdownTimeLeft              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CountdownTimeTotal             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::Set_Countdown_Seconds(float* CountdownTimeLeft, float* CountdownTimeTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.Set Countdown Seconds");

	UGameTimerBarCenter_C_Set_Countdown_Seconds_Params params;
	params.CountdownTimeLeft = CountdownTimeLeft;
	params.CountdownTimeTotal = CountdownTimeTotal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Set View By Objective State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameTimerBarCenterState>* Center_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::Set_View_By_Objective_State(TEnumAsByte<EGameTimerBarCenterState>* Center_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.Set View By Objective State");

	UGameTimerBarCenter_C_Set_View_By_Objective_State_Params params;
	params.Center_State = Center_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.PreConstruct");

	UGameTimerBarCenter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.Tick");

	UGameTimerBarCenter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.PlayFlipTime
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBarCenter_C::PlayFlipTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.PlayFlipTime");

	UGameTimerBarCenter_C_PlayFlipTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::SetProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.SetProgress");

	UGameTimerBarCenter_C_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.SetTeamProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::SetTeamProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.SetTeamProgress");

	UGameTimerBarCenter_C_SetTeamProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Tick Countdown Time
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::Tick_Countdown_Time(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.Tick Countdown Time");

	UGameTimerBarCenter_C_Tick_Countdown_Time_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Circle Progress Close
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBarCenter_C::Circle_Progress_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.Circle Progress Close");

	UGameTimerBarCenter_C_Circle_Progress_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Circle Progress Open
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBarCenter_C::Circle_Progress_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.Circle Progress Open");

	UGameTimerBarCenter_C_Circle_Progress_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.ExecuteUbergraph_GameTimerBarCenter
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarCenter_C::ExecuteUbergraph_GameTimerBarCenter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarCenter.GameTimerBarCenter_C.ExecuteUbergraph_GameTimerBarCenter");

	UGameTimerBarCenter_C_ExecuteUbergraph_GameTimerBarCenter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
