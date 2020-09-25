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

// Function PlayersRemaining.PlayersRemaining_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayersRemaining_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayersRemaining.PlayersRemaining_C.Construct");

	UPlayersRemaining_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayersRemaining.PlayersRemaining_C.RefreshPlayerCount
// (BlueprintCallable, BlueprintEvent)

void UPlayersRemaining_C::RefreshPlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayersRemaining.PlayersRemaining_C.RefreshPlayerCount");

	UPlayersRemaining_C_RefreshPlayerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayersRemaining.PlayersRemaining_C.HandlePlayerEliminated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayersRemaining_C::HandlePlayerEliminated(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayersRemaining.PlayersRemaining_C.HandlePlayerEliminated");

	UPlayersRemaining_C_HandlePlayerEliminated_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayersRemaining.PlayersRemaining_C.HandlePlayerSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase**       NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayersRemaining_C::HandlePlayerSpawn(class AKSCharacterBase** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayersRemaining.PlayersRemaining_C.HandlePlayerSpawn");

	UPlayersRemaining_C_HandlePlayerSpawn_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayersRemaining.PlayersRemaining_C.HandlePhaseChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NewPhaseName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousPhaseName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayersRemaining_C::HandlePhaseChange(struct FName* NewPhaseName, struct FName* PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayersRemaining.PlayersRemaining_C.HandlePhaseChange");

	UPlayersRemaining_C_HandlePhaseChange_Params params;
	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayersRemaining.PlayersRemaining_C.ExecuteUbergraph_PlayersRemaining
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayersRemaining_C::ExecuteUbergraph_PlayersRemaining(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayersRemaining.PlayersRemaining_C.ExecuteUbergraph_PlayersRemaining");

	UPlayersRemaining_C_ExecuteUbergraph_PlayersRemaining_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
