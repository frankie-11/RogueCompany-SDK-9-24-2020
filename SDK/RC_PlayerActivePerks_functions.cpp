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

// Function PlayerActivePerks.PlayerActivePerks_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UPlayerActivePerks_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.PostSetPawn");

	UPlayerActivePerks_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActivePerks.PlayerActivePerks_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UPlayerActivePerks_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.PreClearPawn");

	UPlayerActivePerks_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActivePerks.PlayerActivePerks_C.HandleModsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           KSCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActivePerks_C::HandleModsUpdated(class AKSCharacter** KSCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.HandleModsUpdated");

	UPlayerActivePerks_C_HandleModsUpdated_Params params;
	params.KSCharacter = KSCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActivePerks.PlayerActivePerks_C.HandleDownedElim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         KSPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActivePerks_C::HandleDownedElim(class AKSPlayerState** KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.HandleDownedElim");

	UPlayerActivePerks_C_HandleDownedElim_Params params;
	params.KSPlayerState = KSPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActivePerks.PlayerActivePerks_C.Bind Callbacks to Player State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         In_Player_State                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActivePerks_C::Bind_Callbacks_to_Player_State(class AKSPlayerState** In_Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.Bind Callbacks to Player State");

	UPlayerActivePerks_C_Bind_Callbacks_to_Player_State_Params params;
	params.In_Player_State = In_Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActivePerks.PlayerActivePerks_C.Unbind Callbacks to Player State
// (BlueprintCallable, BlueprintEvent)

void UPlayerActivePerks_C::Unbind_Callbacks_to_Player_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.Unbind Callbacks to Player State");

	UPlayerActivePerks_C_Unbind_Callbacks_to_Player_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActivePerks.PlayerActivePerks_C.Bind Callbacks to Pawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           In_Pawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActivePerks_C::Bind_Callbacks_to_Pawn(class AKSCharacter** In_Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.Bind Callbacks to Pawn");

	UPlayerActivePerks_C_Bind_Callbacks_to_Pawn_Params params;
	params.In_Pawn = In_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActivePerks.PlayerActivePerks_C.Unbind Callbacks to Pawn
// (BlueprintCallable, BlueprintEvent)

void UPlayerActivePerks_C::Unbind_Callbacks_to_Pawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.Unbind Callbacks to Pawn");

	UPlayerActivePerks_C_Unbind_Callbacks_to_Pawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActivePerks.PlayerActivePerks_C.PreClearPlayerState
// (Event, Protected, BlueprintEvent)

void UPlayerActivePerks_C::PreClearPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.PreClearPlayerState");

	UPlayerActivePerks_C_PreClearPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActivePerks.PlayerActivePerks_C.PostSetPlayerState
// (Event, Protected, BlueprintEvent)

void UPlayerActivePerks_C::PostSetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.PostSetPlayerState");

	UPlayerActivePerks_C_PostSetPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActivePerks.PlayerActivePerks_C.SetPlayerStateUIRelevanceChanged
// (Event, Protected, BlueprintEvent)

void UPlayerActivePerks_C::SetPlayerStateUIRelevanceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.SetPlayerStateUIRelevanceChanged");

	UPlayerActivePerks_C_SetPlayerStateUIRelevanceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActivePerks.PlayerActivePerks_C.Try To Show On UI Relevant
// (BlueprintCallable, BlueprintEvent)

void UPlayerActivePerks_C::Try_To_Show_On_UI_Relevant()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.Try To Show On UI Relevant");

	UPlayerActivePerks_C_Try_To_Show_On_UI_Relevant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActivePerks.PlayerActivePerks_C.ExecuteUbergraph_PlayerActivePerks
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActivePerks_C::ExecuteUbergraph_PlayerActivePerks(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActivePerks.PlayerActivePerks_C.ExecuteUbergraph_PlayerActivePerks");

	UPlayerActivePerks_C_ExecuteUbergraph_PlayerActivePerks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
