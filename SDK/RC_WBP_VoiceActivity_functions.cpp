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

// Function WBP_VoiceActivity.WBP_VoiceActivity_C.GetNameForMctsId
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64_t*                       MctsId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm, OutParm)

void UWBP_VoiceActivity_C::GetNameForMctsId(int64_t* MctsId, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.GetNameForMctsId");

	UWBP_VoiceActivity_C_GetNameForMctsId_Params params;
	params.MctsId = MctsId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.Voice Participant Updated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Account                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoiceActivity_C::Voice_Participant_Updated(struct FString* Account, bool* IsTalking, bool* IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.Voice Participant Updated");

	UWBP_VoiceActivity_C_Voice_Participant_Updated_Params params;
	params.Account = Account;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.AddVoiceParticipant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Account                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_VoiceActivity_C::AddVoiceParticipant(struct FString* Account)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.AddVoiceParticipant");

	UWBP_VoiceActivity_C_AddVoiceParticipant_Params params;
	params.Account = Account;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.RemoveVoiceParticipant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Account                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_VoiceActivity_C::RemoveVoiceParticipant(struct FString* Account)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.RemoveVoiceParticipant");

	UWBP_VoiceActivity_C_RemoveVoiceParticipant_Params params;
	params.Account = Account;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoiceActivity_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.InitializeWidget");

	UWBP_VoiceActivity_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantRemoved
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_VoiceActivity_C::OnVoiceParticipantRemoved(struct FString* AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantRemoved");

	UWBP_VoiceActivity_C_OnVoiceParticipantRemoved_Params params;
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_VoiceActivity_C::OnVoiceParticipantAdded(struct FString* AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantAdded");

	UWBP_VoiceActivity_C_OnVoiceParticipantAdded_Params params;
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          bIsTalking                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsMuted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoiceActivity_C::OnVoiceParticipantUpdated(struct FString* AccountId, bool* bIsTalking, bool* bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantUpdated");

	UWBP_VoiceActivity_C_OnVoiceParticipantUpdated_Params params;
	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.ExecuteUbergraph_WBP_VoiceActivity
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoiceActivity_C::ExecuteUbergraph_WBP_VoiceActivity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.ExecuteUbergraph_WBP_VoiceActivity");

	UWBP_VoiceActivity_C_ExecuteUbergraph_WBP_VoiceActivity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
