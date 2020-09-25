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

// Function SurrenderPoll.SurrenderPoll_C.CanPlayerProposeThisPoll
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AKSPlayerState**         Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USurrenderPoll_C::CanPlayerProposeThisPoll(class AKSPlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.CanPlayerProposeThisPoll");

	USurrenderPoll_C_CanPlayerProposeThisPoll_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SurrenderPoll.SurrenderPoll_C.OnPollPassed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AKSGameState**           GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TeamNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USurrenderPoll_C::OnPollPassed(class AKSGameState** GameState, int* TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.OnPollPassed");

	USurrenderPoll_C_OnPollPassed_Params params;
	params.GameState = GameState;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurrenderPoll.SurrenderPoll_C.OnPollFailed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AKSGameState**           GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TeamNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USurrenderPoll_C::OnPollFailed(class AKSGameState** GameState, int* TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.OnPollFailed");

	USurrenderPoll_C_OnPollFailed_Params params;
	params.GameState = GameState;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurrenderPoll.SurrenderPoll_C.OnPollStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class AKSGameState**           GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TeamNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USurrenderPoll_C::OnPollStarted(class AKSGameState** GameState, int* TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.OnPollStarted");

	USurrenderPoll_C_OnPollStarted_Params params;
	params.GameState = GameState;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurrenderPoll.SurrenderPoll_C.ExecuteUbergraph_SurrenderPoll
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USurrenderPoll_C::ExecuteUbergraph_SurrenderPoll(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.ExecuteUbergraph_SurrenderPoll");

	USurrenderPoll_C_ExecuteUbergraph_SurrenderPoll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
