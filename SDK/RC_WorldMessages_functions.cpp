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

// Function WorldMessages.WorldMessages_C.GetPooledMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCombatLogElement_C*     Message                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWorldMessages_C::GetPooledMessage(class UCombatLogElement_C** Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.GetPooledMessage");

	UWorldMessages_C_GetPooledMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
}


// Function WorldMessages.WorldMessages_C.ReturnPooledMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCombatLogElement_C**    Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWorldMessages_C::ReturnPooledMessage(class UCombatLogElement_C** Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.ReturnPooledMessage");

	UWorldMessages_C_ReturnPooledMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMessages.WorldMessages_C.SFXKillFeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWorldMessages_C::SFXKillFeed(class AActor** Victim, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.SFXKillFeed");

	UWorldMessages_C_SFXKillFeed_Params params;
	params.Victim = Victim;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMessages.WorldMessages_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWorldMessages_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.Construct");

	UWorldMessages_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMessages.WorldMessages_C.DeathMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCombatEventInfo*       EventInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWorldMessages_C::DeathMessage(struct FCombatEventInfo* EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.DeathMessage");

	UWorldMessages_C_DeathMessage_Params params;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMessages.WorldMessages_C.DownMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCombatEventInfo*       EventInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           ExpBonus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWorldMessages_C::DownMessage(struct FCombatEventInfo* EventInfo, int* ExpBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.DownMessage");

	UWorldMessages_C_DownMessage_Params params;
	params.EventInfo = EventInfo;
	params.ExpBonus = ExpBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMessages.WorldMessages_C.ResetMessages
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWorldMessages_C::ResetMessages(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.ResetMessages");

	UWorldMessages_C_ResetMessages_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMessages.WorldMessages_C.OnRoundOver
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSGameState**           GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRoundResult*           RoundResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWorldMessages_C::OnRoundOver(class AKSGameState** GameState, struct FRoundResult* RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.OnRoundOver");

	UWorldMessages_C_OnRoundOver_Params params;
	params.GameState = GameState;
	params.RoundResult = RoundResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMessages.WorldMessages_C.OnKillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWorldMessages_C::OnKillCamEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.OnKillCamEnabled");

	UWorldMessages_C_OnKillCamEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMessages.WorldMessages_C.OnKillCamViewedPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWorldMessages_C::OnKillCamViewedPawn(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.OnKillCamViewedPawn");

	UWorldMessages_C_OnKillCamViewedPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMessages.WorldMessages_C.HandleQueuedMessage
// (BlueprintCallable, BlueprintEvent)

void UWorldMessages_C::HandleQueuedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.HandleQueuedMessage");

	UWorldMessages_C_HandleQueuedMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMessages.WorldMessages_C.ExecuteUbergraph_WorldMessages
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWorldMessages_C::ExecuteUbergraph_WorldMessages(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.ExecuteUbergraph_WorldMessages");

	UWorldMessages_C_ExecuteUbergraph_WorldMessages_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
