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

// Function CoopProgressOverlay.CoopProgressOverlay_C.Refresh Appearance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCoopProgressOverlay_C::Refresh_Appearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopProgressOverlay.CoopProgressOverlay_C.Refresh Appearance");

	UCoopProgressOverlay_C_Refresh_Appearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopProgressOverlay_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopProgressOverlay.CoopProgressOverlay_C.InitializeWidget");

	UCoopProgressOverlay_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Round Start
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCoopProgressOverlay_C::Handle_Round_Start(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Round Start");

	UCoopProgressOverlay_C_Handle_Round_Start_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Coop Pickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSObjectiveBase**       Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PickupsUsed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PickupsLeft                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopProgressOverlay_C::Handle_Coop_Pickup(class AKSObjectiveBase** Pickup, int* PickupsUsed, int* PickupsLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Coop Pickup");

	UCoopProgressOverlay_C_Handle_Coop_Pickup_Params params;
	params.Pickup = Pickup;
	params.PickupsUsed = PickupsUsed;
	params.PickupsLeft = PickupsLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Computers Unlocked
// (BlueprintCallable, BlueprintEvent)

void UCoopProgressOverlay_C::Handle_Computers_Unlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Computers Unlocked");

	UCoopProgressOverlay_C_Handle_Computers_Unlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Successful Hack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSExtractionComputer**  Computer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopProgressOverlay_C::Handle_Successful_Hack(class AKSExtractionComputer** Computer)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Successful Hack");

	UCoopProgressOverlay_C_Handle_Successful_Hack_Params params;
	params.Computer = Computer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Escape Point Changed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AKSPlayerState*>* ContainedPlayers               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCoopProgressOverlay_C::Handle_Escape_Point_Changed(TArray<class AKSPlayerState*>* ContainedPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Escape Point Changed");

	UCoopProgressOverlay_C_Handle_Escape_Point_Changed_Params params;
	params.ContainedPlayers = ContainedPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Phase Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  CurrentPhaseName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousPhaseName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopProgressOverlay_C::Handle_Phase_Change(struct FName* CurrentPhaseName, struct FName* PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Phase Change");

	UCoopProgressOverlay_C_Handle_Phase_Change_Params params;
	params.CurrentPhaseName = CurrentPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Timer Second Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewTruncatedSeconds            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopProgressOverlay_C::Handle_Timer_Second_Tick(float* NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Timer Second Tick");

	UCoopProgressOverlay_C_Handle_Timer_Second_Tick_Params params;
	params.NewTruncatedSeconds = NewTruncatedSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Player Downed Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopProgressOverlay_C::Handle_Player_Downed_Changed(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Player Downed Changed");

	UCoopProgressOverlay_C_Handle_Player_Downed_Changed_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Player Death
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCombatEventInfo*       EventInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCoopProgressOverlay_C::Handle_Player_Death(struct FCombatEventInfo* EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Player Death");

	UCoopProgressOverlay_C_Handle_Player_Death_Params params;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.ExecuteUbergraph_CoopProgressOverlay
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCoopProgressOverlay_C::ExecuteUbergraph_CoopProgressOverlay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoopProgressOverlay.CoopProgressOverlay_C.ExecuteUbergraph_CoopProgressOverlay");

	UCoopProgressOverlay_C_ExecuteUbergraph_CoopProgressOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
