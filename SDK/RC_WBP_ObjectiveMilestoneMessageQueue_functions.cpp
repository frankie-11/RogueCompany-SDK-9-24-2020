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

// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.WrapUpCurrentMessages
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ObjectiveMilestoneMessageQueue_C::WrapUpCurrentMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.WrapUpCurrentMessages");

	UWBP_ObjectiveMilestoneMessageQueue_C_WrapUpCurrentMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ObjectiveMilestoneMessageQueue_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.Construct");

	UWBP_ObjectiveMilestoneMessageQueue_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnAnnouncementReady
// (BlueprintCallable, BlueprintEvent)

void UWBP_ObjectiveMilestoneMessageQueue_C::OnAnnouncementReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnAnnouncementReady");

	UWBP_ObjectiveMilestoneMessageQueue_C_OnAnnouncementReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.SetToNotBusy
// (BlueprintCallable, BlueprintEvent)

void UWBP_ObjectiveMilestoneMessageQueue_C::SetToNotBusy()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.SetToNotBusy");

	UWBP_ObjectiveMilestoneMessageQueue_C_SetToNotBusy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnKillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ObjectiveMilestoneMessageQueue_C::OnKillCamEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnKillCamEnabled");

	UWBP_ObjectiveMilestoneMessageQueue_C_OnKillCamEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.HandleRoundSetup
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ObjectiveMilestoneMessageQueue_C::HandleRoundSetup(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.HandleRoundSetup");

	UWBP_ObjectiveMilestoneMessageQueue_C_HandleRoundSetup_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnRoundOverDel_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSGameState**           GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRoundResult*           RoundResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ObjectiveMilestoneMessageQueue_C::OnRoundOverDel_Event_1(class AKSGameState** GameState, struct FRoundResult* RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnRoundOverDel_Event_1");

	UWBP_ObjectiveMilestoneMessageQueue_C_OnRoundOverDel_Event_1_Params params;
	params.GameState = GameState;
	params.RoundResult = RoundResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.ResetDisplay
// (BlueprintCallable, BlueprintEvent)

void UWBP_ObjectiveMilestoneMessageQueue_C::ResetDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.ResetDisplay");

	UWBP_ObjectiveMilestoneMessageQueue_C_ResetDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.ExecuteUbergraph_WBP_ObjectiveMilestoneMessageQueue
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ObjectiveMilestoneMessageQueue_C::ExecuteUbergraph_WBP_ObjectiveMilestoneMessageQueue(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.ExecuteUbergraph_WBP_ObjectiveMilestoneMessageQueue");

	UWBP_ObjectiveMilestoneMessageQueue_C_ExecuteUbergraph_WBP_ObjectiveMilestoneMessageQueue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
