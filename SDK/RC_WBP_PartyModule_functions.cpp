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

// Function WBP_PartyModule.WBP_PartyModule_C.GetPrimaryFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PartyModuleCardSlot_C* PrimaryFocus                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PartyModule_C::GetPrimaryFocus(class UWBP_PartyModuleCardSlot_C** PrimaryFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.GetPrimaryFocus");

	UWBP_PartyModule_C_GetPrimaryFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrimaryFocus != nullptr)
		*PrimaryFocus = params.PrimaryFocus;
}


// Function WBP_PartyModule.WBP_PartyModule_C.FindPlayerCardByVoiceId
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                VoiceId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWBP_player_card_module_C* PlayerCard                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PartyModule_C::FindPlayerCardByVoiceId(struct FString* VoiceId, class UWBP_player_card_module_C** PlayerCard)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.FindPlayerCardByVoiceId");

	UWBP_PartyModule_C_FindPlayerCardByVoiceId_Params params;
	params.VoiceId = VoiceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerCard != nullptr)
		*PlayerCard = params.PlayerCard;
}


// Function WBP_PartyModule.WBP_PartyModule_C.Get Navigation Widgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Return_Value                   (Parm, OutParm, ZeroConstructor)

void UWBP_PartyModule_C::Get_Navigation_Widgets(TArray<class UPUMG_Widget*>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.Get Navigation Widgets");

	UWBP_PartyModule_C_Get_Navigation_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_PartyModule.WBP_PartyModule_C.Get Other Party Members
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPUMG_PartyMemberData> Party_Members                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPUMG_PartyMemberData> Return_Value                   (Parm, OutParm, ZeroConstructor)

void UWBP_PartyModule_C::Get_Other_Party_Members(TArray<struct FPUMG_PartyMemberData>* Party_Members, TArray<struct FPUMG_PartyMemberData>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.Get Other Party Members");

	UWBP_PartyModule_C_Get_Other_Party_Members_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Party_Members != nullptr)
		*Party_Members = params.Party_Members;
	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_PartyModule.WBP_PartyModule_C.ApplyPartyData
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPUMG_PartyMemberData>* PartyMembers                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_PartyModule_C::ApplyPartyData(TArray<struct FPUMG_PartyMemberData>* PartyMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.ApplyPartyData");

	UWBP_PartyModule_C_ApplyPartyData_Params params;
	params.PartyMembers = PartyMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModule.WBP_PartyModule_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyModule_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.InitializeWidget");

	UWBP_PartyModule_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_PartyModule_C::VoiceParticipantAdded(struct FString* AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantAdded");

	UWBP_PartyModule_C_VoiceParticipantAdded_Params params;
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_PartyModule_C::VoiceParticipantRemoved(struct FString* AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantRemoved");

	UWBP_PartyModule_C_VoiceParticipantRemoved_Params params;
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyModule_C::VoiceParticipantUpdated(struct FString* AccountId, bool* IsTalking, bool* IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantUpdated");

	UWBP_PartyModule_C_VoiceParticipantUpdated_Params params;
	params.AccountId = AccountId;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModule.WBP_PartyModule_C.VoiceStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EKSVoiceActivityAudioState*    State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyModule_C::VoiceStateChange(EKSVoiceActivityAudioState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.VoiceStateChange");

	UWBP_PartyModule_C_VoiceStateChange_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C** Selected_Player_Card           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PartyModule_C::Handle_Player_Card_Clicked(class UWBP_player_card_module_C** Selected_Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Clicked");

	UWBP_PartyModule_C_Handle_Player_Card_Clicked_Params params;
	params.Selected_Player_Card = Selected_Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Back
// (BlueprintCallable, BlueprintEvent)

void UWBP_PartyModule_C::Handle_Player_Card_Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Back");

	UWBP_PartyModule_C_Handle_Player_Card_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModule.WBP_PartyModule_C.HandlePartyLeaveVisibilityChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyModule_C::HandlePartyLeaveVisibilityChange(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.HandlePartyLeaveVisibilityChange");

	UWBP_PartyModule_C_HandlePartyLeaveVisibilityChange_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModule.WBP_PartyModule_C.ExecuteUbergraph_WBP_PartyModule
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyModule_C::ExecuteUbergraph_WBP_PartyModule(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.ExecuteUbergraph_WBP_PartyModule");

	UWBP_PartyModule_C_ExecuteUbergraph_WBP_PartyModule_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModule.WBP_PartyModule_C.OnPartyLeaveVisibilityChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyModule_C::OnPartyLeaveVisibilityChange__DelegateSignature(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.OnPartyLeaveVisibilityChange__DelegateSignature");

	UWBP_PartyModule_C_OnPartyLeaveVisibilityChange__DelegateSignature_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardBackButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PartyModule_C::OnPlayerCardBackButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardBackButton__DelegateSignature");

	UWBP_PartyModule_C_OnPlayerCardBackButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C** Selected_Player_Card           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PartyModule_C::OnPlayerCardSelected__DelegateSignature(class UWBP_player_card_module_C** Selected_Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardSelected__DelegateSignature");

	UWBP_PartyModule_C_OnPlayerCardSelected__DelegateSignature_Params params;
	params.Selected_Player_Card = Selected_Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
