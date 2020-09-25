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

// Function WBP_TeamMessage.WBP_TeamMessage_C.AbortCurrentAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TeamMessage_C::AbortCurrentAnnouncement()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.AbortCurrentAnnouncement");

	UWBP_TeamMessage_C_AbortCurrentAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.ShowAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnnouncementData*      Announcement                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_TeamMessage_C::ShowAnnouncement(struct FAnnouncementData* Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.ShowAnnouncement");

	UWBP_TeamMessage_C_ShowAnnouncement_Params params;
	params.Announcement = Announcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.HandleOnAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnnouncementData*      Announcement                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_TeamMessage_C::HandleOnAnnouncement(struct FAnnouncementData* Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.HandleOnAnnouncement");

	UWBP_TeamMessage_C_HandleOnAnnouncement_Params params;
	params.Announcement = Announcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.CheckShouldShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnnouncementData*      AnnouncementData               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_TeamMessage_C::CheckShouldShow(struct FAnnouncementData* AnnouncementData, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.CheckShouldShow");

	UWBP_TeamMessage_C_CheckShouldShow_Params params;
	params.AnnouncementData = AnnouncementData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TeamMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.Construct");

	UWBP_TeamMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.OnAnnouncementFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_TeamMessage_C::OnAnnouncementFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.OnAnnouncementFinished");

	UWBP_TeamMessage_C_OnAnnouncementFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.OnKillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TeamMessage_C::OnKillCamEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.OnKillCamEnabled");

	UWBP_TeamMessage_C_OnKillCamEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.HandleRoundSetup
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_TeamMessage_C::HandleRoundSetup(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.HandleRoundSetup");

	UWBP_TeamMessage_C_HandleRoundSetup_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.HandleQueuedAnnoucements
// (BlueprintCallable, BlueprintEvent)

void UWBP_TeamMessage_C::HandleQueuedAnnoucements()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.HandleQueuedAnnoucements");

	UWBP_TeamMessage_C_HandleQueuedAnnoucements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.ExecuteUbergraph_WBP_TeamMessage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TeamMessage_C::ExecuteUbergraph_WBP_TeamMessage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.ExecuteUbergraph_WBP_TeamMessage");

	UWBP_TeamMessage_C_ExecuteUbergraph_WBP_TeamMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
