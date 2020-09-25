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

// Function CenterScreenMessage.CenterScreenMessage_C.ResetVisualState
// (Public, BlueprintCallable, BlueprintEvent)

void UCenterScreenMessage_C::ResetVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterScreenMessage.CenterScreenMessage_C.ResetVisualState");

	UCenterScreenMessage_C_ResetVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterScreenMessage.CenterScreenMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCenterScreenMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterScreenMessage.CenterScreenMessage_C.Construct");

	UCenterScreenMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterScreenMessage.CenterScreenMessage_C.DisplayMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEliminationMessage*    Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UCenterScreenMessage_C::DisplayMessage(struct FEliminationMessage* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterScreenMessage.CenterScreenMessage_C.DisplayMessage");

	UCenterScreenMessage_C_DisplayMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterScreenMessage.CenterScreenMessage_C.MessageDisplayFinished
// (BlueprintCallable, BlueprintEvent)

void UCenterScreenMessage_C::MessageDisplayFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterScreenMessage.CenterScreenMessage_C.MessageDisplayFinished");

	UCenterScreenMessage_C_MessageDisplayFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterScreenMessage.CenterScreenMessage_C.DeathReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCombatEventInfo*       EventInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCenterScreenMessage_C::DeathReceived(struct FCombatEventInfo* EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterScreenMessage.CenterScreenMessage_C.DeathReceived");

	UCenterScreenMessage_C_DeathReceived_Params params;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterScreenMessage.CenterScreenMessage_C.DownRecieved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCombatEventInfo*       EventInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           ExpBonus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCenterScreenMessage_C::DownRecieved(struct FCombatEventInfo* EventInfo, int* ExpBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterScreenMessage.CenterScreenMessage_C.DownRecieved");

	UCenterScreenMessage_C_DownRecieved_Params params;
	params.EventInfo = EventInfo;
	params.ExpBonus = ExpBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterScreenMessage.CenterScreenMessage_C.AssistRecieved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAssistInfo*            EventInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCenterScreenMessage_C::AssistRecieved(struct FAssistInfo* EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterScreenMessage.CenterScreenMessage_C.AssistRecieved");

	UCenterScreenMessage_C_AssistRecieved_Params params;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterScreenMessage.CenterScreenMessage_C.OnKillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCenterScreenMessage_C::OnKillCamEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterScreenMessage.CenterScreenMessage_C.OnKillCamEnabled");

	UCenterScreenMessage_C_OnKillCamEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterScreenMessage.CenterScreenMessage_C.OnKillCamViewedPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCenterScreenMessage_C::OnKillCamViewedPawn(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterScreenMessage.CenterScreenMessage_C.OnKillCamViewedPawn");

	UCenterScreenMessage_C_OnKillCamViewedPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterScreenMessage.CenterScreenMessage_C.HandleOnReceivedMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEliminationMessage*    Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UCenterScreenMessage_C::HandleOnReceivedMessage(struct FEliminationMessage* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterScreenMessage.CenterScreenMessage_C.HandleOnReceivedMessage");

	UCenterScreenMessage_C_HandleOnReceivedMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterScreenMessage.CenterScreenMessage_C.OnRoundStart
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCenterScreenMessage_C::OnRoundStart(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterScreenMessage.CenterScreenMessage_C.OnRoundStart");

	UCenterScreenMessage_C_OnRoundStart_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterScreenMessage.CenterScreenMessage_C.ExecuteUbergraph_CenterScreenMessage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCenterScreenMessage_C::ExecuteUbergraph_CenterScreenMessage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterScreenMessage.CenterScreenMessage_C.ExecuteUbergraph_CenterScreenMessage");

	UCenterScreenMessage_C_ExecuteUbergraph_CenterScreenMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
