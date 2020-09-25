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

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.UpdateViewNextTeammate
// (Public, BlueprintCallable, BlueprintEvent)

void UDeathSpectateOverlay_C::UpdateViewNextTeammate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.UpdateViewNextTeammate");

	UDeathSpectateOverlay_C_UpdateViewNextTeammate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDeathSpectateOverlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.Construct");

	UDeathSpectateOverlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Viewed Pawn Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerController**    InPC                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 InActorOne                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 InActorTwo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathSpectateOverlay_C::Handle_Viewed_Pawn_Changed(class AKSPlayerController** InPC, class AActor** InActorOne, class AActor** InActorTwo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Viewed Pawn Changed");

	UDeathSpectateOverlay_C_Handle_Viewed_Pawn_Changed_Params params;
	params.InPC = InPC;
	params.InActorOne = InActorOne;
	params.InActorTwo = InActorTwo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathSpectateOverlay_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.InitializeWidget");

	UDeathSpectateOverlay_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathSpectateOverlay_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Input State Changed");

	UDeathSpectateOverlay_C_Handle_Input_State_Changed_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Spectate State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSpectating                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathSpectateOverlay_C::Handle_Spectate_State_Changed(bool* IsSpectating)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Spectate State Changed");

	UDeathSpectateOverlay_C_Handle_Spectate_State_Changed_Params params;
	params.IsSpectating = IsSpectating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.TeamMemberEliminated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathSpectateOverlay_C::TeamMemberEliminated(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.TeamMemberEliminated");

	UDeathSpectateOverlay_C_TeamMemberEliminated_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.DetermineLocalPlayerControlled
// (BlueprintCallable, BlueprintEvent)

void UDeathSpectateOverlay_C::DetermineLocalPlayerControlled()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.DetermineLocalPlayerControlled");

	UDeathSpectateOverlay_C_DetermineLocalPlayerControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.CustomEvent_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDeathSpectateOverlay_C::CustomEvent_1(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.CustomEvent_1");

	UDeathSpectateOverlay_C_CustomEvent_1_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.HandleKillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathSpectateOverlay_C::HandleKillCamEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.HandleKillCamEnabled");

	UDeathSpectateOverlay_C_HandleKillCamEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.HandleNameChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         InKSPlayerState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathSpectateOverlay_C::HandleNameChange(class AKSPlayerState** InKSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.HandleNameChange");

	UDeathSpectateOverlay_C_HandleNameChange_Params params;
	params.InKSPlayerState = InKSPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.ExecuteUbergraph_DeathSpectateOverlay
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathSpectateOverlay_C::ExecuteUbergraph_DeathSpectateOverlay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.ExecuteUbergraph_DeathSpectateOverlay");

	UDeathSpectateOverlay_C_ExecuteUbergraph_DeathSpectateOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
