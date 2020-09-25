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

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_CustomGameLobby_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnKeyUp");

	UWBP_CustomGameLobby_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TogglePlayerCardFor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_CustomLobbyPlayer_C** PlayerWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomGameLobby_C::TogglePlayerCardFor(class UKSPlayerInfo** playerinfo, class UWBP_CustomLobbyPlayer_C** PlayerWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TogglePlayerCardFor");

	UWBP_CustomGameLobby_C_TogglePlayerCardFor_Params params;
	params.playerinfo = playerinfo;
	params.PlayerWidget = PlayerWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          bIsTalking                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsMuted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::HandleVoiceMemberUpdate(struct FString* AccountId, bool* bIsTalking, bool* bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberUpdate");

	UWBP_CustomGameLobby_C_HandleVoiceMemberUpdate_Params params;
	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_CustomGameLobby_C::HandleVoiceMemberRemoved(struct FString* AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberRemoved");

	UWBP_CustomGameLobby_C_HandleVoiceMemberRemoved_Params params;
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_CustomGameLobby_C::HandleVoiceMemberAdded(struct FString* AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberAdded");

	UWBP_CustomGameLobby_C_HandleVoiceMemberAdded_Params params;
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetMemberWidgetForVoice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString*                VoiceId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWBP_CustomLobbyPlayer_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomGameLobby_C::GetMemberWidgetForVoice(struct FString* VoiceId, class UWBP_CustomLobbyPlayer_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetMemberWidgetForVoice");

	UWBP_CustomGameLobby_C_GetMemberWidgetForVoice_Params params;
	params.VoiceId = VoiceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupExistingPlayers
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::SetupExistingPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupExistingPlayers");

	UWBP_CustomGameLobby_C_SetupExistingPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupQueueFactoryEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::SetupQueueFactoryEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupQueueFactoryEvents");

	UWBP_CustomGameLobby_C_SetupQueueFactoryEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_MatchStatus*             MatchStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::OnQueueStateUpdated(EPUMG_MatchStatus* MatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueStateUpdated");

	UWBP_CustomGameLobby_C_OnQueueStateUpdated_Params params;
	params.MatchStatus = MatchStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UKSWidget*>       TeamButtons                    (Parm, OutParm, ZeroConstructor)

void UWBP_CustomGameLobby_C::GetTeamButtons(TArray<class UKSWidget*>* TeamButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamButtons");

	UWBP_CustomGameLobby_C_GetTeamButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamButtons != nullptr)
		*TeamButtons = params.TeamButtons;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_CustomGameLobby_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnKeyDown");

	UWBP_CustomGameLobby_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Close
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::MassInvite_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Close");

	UWBP_CustomGameLobby_C_MassInvite_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Select
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EKSInviteSelectResult          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EKSInviteSelectResult UWBP_CustomGameLobby_C::MassInvite_Select(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Select");

	UWBP_CustomGameLobby_C_MassInvite_Select_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_IsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_CustomGameLobby_C::MassInvite_IsSelected(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_IsSelected");

	UWBP_CustomGameLobby_C_MassInvite_IsSelected_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_ShouldShowPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_CustomGameLobby_C::MassInvite_ShouldShowPlayer(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_ShouldShowPlayer");

	UWBP_CustomGameLobby_C_MassInvite_ShouldShowPlayer_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnReceiveHostName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::OnReceiveHostName()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnReceiveHostName");

	UWBP_CustomGameLobby_C_OnReceiveHostName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.CheckQueueState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::CheckQueueState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.CheckQueueState");

	UWBP_CustomGameLobby_C_CheckQueueState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.FinalizeLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPUMG_PlayerInfo**       playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::FinalizeLog(struct FText* Text, class UPUMG_PlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.FinalizeLog");

	UWBP_CustomGameLobby_C_FinalizeLog_Params params;
	params.Text = Text;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.LogPermissionChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPUMG_CustomMatchPermission*   NewPermissions                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPUMG_CustomMatchPermission*   OldPermissions                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::LogPermissionChange(class UPUMG_PlayerInfo** playerinfo, EPUMG_CustomMatchPermission* NewPermissions, EPUMG_CustomMatchPermission* OldPermissions)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.LogPermissionChange");

	UWBP_CustomGameLobby_C_LogPermissionChange_Params params;
	params.playerinfo = playerinfo;
	params.NewPermissions = NewPermissions;
	params.OldPermissions = OldPermissions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleReceivePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::HandleReceivePlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleReceivePlayerName");

	UWBP_CustomGameLobby_C_HandleReceivePlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPUMG_CustomMatchMember* PUMG_CustomMatchMember         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_CustomGameLobby_C::GetTeamName(struct FPUMG_CustomMatchMember* PUMG_CustomMatchMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamName");

	UWBP_CustomGameLobby_C_GetTeamName_Params params;
	params.PUMG_CustomMatchMember = PUMG_CustomMatchMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPUMG_PlayerInfo**       playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::AddLog(struct FText* Text, class UPUMG_PlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddLog");

	UWBP_CustomGameLobby_C_AddLog_Params params;
	params.Text = Text;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.RemoveMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_CustomMatchMember FormerMember                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::RemoveMember(struct FPUMG_CustomMatchMember* FormerMember, bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.RemoveMember");

	UWBP_CustomGameLobby_C_RemoveMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FormerMember != nullptr)
		*FormerMember = params.FormerMember;
	if (Removed != nullptr)
		*Removed = params.Removed;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_CustomMatchMember* MatchMember                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Added                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::AddMember(struct FPUMG_CustomMatchMember* MatchMember, bool* Added)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddMember");

	UWBP_CustomGameLobby_C_AddMember_Params params;
	params.MatchMember = MatchMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Added != nullptr)
		*Added = params.Added;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_CustomGameLobby_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.NavigateBack");

	UWBP_CustomGameLobby_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TEST_InviteNextAvailablePlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::TEST_InviteNextAvailablePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TEST_InviteNextAvailablePlayer");

	UWBP_CustomGameLobby_C_TEST_InviteNextAvailablePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupTeamNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::SetupTeamNavigation(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupTeamNavigation");

	UWBP_CustomGameLobby_C_SetupTeamNavigation_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateWidgetsWithData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFBP_CustomMatchTeam    Team                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CustomGameLobby_C::UpdateWidgetsWithData(struct FFBP_CustomMatchTeam* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateWidgetsWithData");

	UWBP_CustomGameLobby_C_UpdateWidgetsWithData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team != nullptr)
		*Team = params.Team;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberUpdate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_CustomMatchMember* MatchMember                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FPUMG_CustomMatchMember* PreviousData                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_CustomGameLobby_C::OnMemberUpdate(struct FPUMG_CustomMatchMember* MatchMember, struct FPUMG_CustomMatchMember* PreviousData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberUpdate");

	UWBP_CustomGameLobby_C_OnMemberUpdate_Params params;
	params.MatchMember = MatchMember;
	params.PreviousData = PreviousData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberRemoved
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_CustomMatchMember* FormerMember                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_CustomGameLobby_C::OnMemberRemoved(struct FPUMG_CustomMatchMember* FormerMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberRemoved");

	UWBP_CustomGameLobby_C_OnMemberRemoved_Params params;
	params.FormerMember = FormerMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberAdded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_CustomMatchMember* MatchMember                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_CustomGameLobby_C::OnMemberAdded(struct FPUMG_CustomMatchMember* MatchMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberAdded");

	UWBP_CustomGameLobby_C_OnMemberAdded_Params params;
	params.MatchMember = MatchMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::OnQueueUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueUpdate");

	UWBP_CustomGameLobby_C_OnQueueUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetQueueDataFactory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSQueueDataFactory*     DataFactory                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::GetQueueDataFactory(class UKSQueueDataFactory** DataFactory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetQueueDataFactory");

	UWBP_CustomGameLobby_C_GetQueueDataFactory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataFactory != nullptr)
		*DataFactory = params.DataFactory;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PopulateTeamRenderers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           TeamPanel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           TeamId                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELaterality>*      ControlsSide                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::PopulateTeamRenderers(class UPanelWidget** TeamPanel, int* TeamId, TEnumAsByte<ELaterality>* ControlsSide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PopulateTeamRenderers");

	UWBP_CustomGameLobby_C_PopulateTeamRenderers_Params params;
	params.TeamPanel = TeamPanel;
	params.TeamId = TeamId;
	params.ControlsSide = ControlsSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupRenderers
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::SetupRenderers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupRenderers");

	UWBP_CustomGameLobby_C_SetupRenderers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupDisplayElements
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::SetupDisplayElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupDisplayElements");

	UWBP_CustomGameLobby_C_SetupDisplayElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientQueueInfo*       QueueInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CustomGameLobby_C::UpdateQueueInfo(struct FClientQueueInfo* QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueInfo");

	UWBP_CustomGameLobby_C_UpdateQueueInfo_Params params;
	params.QueueInfo = QueueInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PreConstruct");

	UWBP_CustomGameLobby_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CustomGameLobby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.Construct");

	UWBP_CustomGameLobby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CustomGameLobby_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnInitialized");

	UWBP_CustomGameLobby_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleDataChange
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::HandleDataChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleDataChange");

	UWBP_CustomGameLobby_C_HandleDataChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InvalidateData
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::InvalidateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InvalidateData");

	UWBP_CustomGameLobby_C_InvalidateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_CustomGameLobby_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InitializeWidgetNavigation");

	UWBP_CustomGameLobby_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWidget**              Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomGameLobby_C::HandlePlayerClicked(class UKSPlayerInfo** playerinfo, class UKSWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerClicked");

	UWBP_CustomGameLobby_C_HandlePlayerClicked_Params params;
	params.playerinfo = playerinfo;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleEmptyClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWidget**              Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomGameLobby_C::HandleEmptyClicked(class UKSWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleEmptyClicked");

	UWBP_CustomGameLobby_C_HandleEmptyClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerKick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWidget**              Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomGameLobby_C::HandlePlayerKick(class UKSPlayerInfo** playerinfo, class UKSWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerKick");

	UWBP_CustomGameLobby_C_HandlePlayerKick_Params params;
	params.playerinfo = playerinfo;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWidget**              Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomGameLobby_C::HandlePlayerSwap(class UKSPlayerInfo** playerinfo, class UKSWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerSwap");

	UWBP_CustomGameLobby_C_HandlePlayerSwap_Params params;
	params.playerinfo = playerinfo;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnClickBack
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::OnClickBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnClickBack");

	UWBP_CustomGameLobby_C_OnClickBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_CustomGameLobby_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnShown");

	UWBP_CustomGameLobby_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomGameLobby_C::BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_CustomGameLobby_C_BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnPlayerHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CustomLobbyPlayer_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomGameLobby_C::OnPlayerHovered(class UWBP_CustomLobbyPlayer_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnPlayerHovered");

	UWBP_CustomGameLobby_C_OnPlayerHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnPlayerUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CustomLobbyPlayer_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomGameLobby_C::OnPlayerUnhovered(class UWBP_CustomLobbyPlayer_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnPlayerUnhovered");

	UWBP_CustomGameLobby_C_OnPlayerUnhovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueLeft
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameLobby_C::OnQueueLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueLeft");

	UWBP_CustomGameLobby_C_OnQueueLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomGameLobby_C::BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWBP_CustomGameLobby_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_CustomGameLobby_C::BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature(struct FString* AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature");

	UWBP_CustomGameLobby_C_BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature_Params params;
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_CustomGameLobby_C::BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature(struct FString* AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature");

	UWBP_CustomGameLobby_C_BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature_Params params;
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          bIsTalking                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsMuted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature(struct FString* AccountId, bool* bIsTalking, bool* bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature");

	UWBP_CustomGameLobby_C_BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature_Params params;
	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_5_OnMenuStart__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                FocusWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomGameLobby_C::BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_5_OnMenuStart__DelegateSignature(class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_5_OnMenuStart__DelegateSignature");

	UWBP_CustomGameLobby_C_BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_5_OnMenuStart__DelegateSignature_Params params;
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_6_OnReadyForNavigation__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         NavWidgets                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWidget**                Default_Widget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomGameLobby_C::BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_6_OnReadyForNavigation__DelegateSignature(class UWidget** Default_Widget, TArray<class UWidget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_6_OnReadyForNavigation__DelegateSignature");

	UWBP_CustomGameLobby_C_BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_6_OnReadyForNavigation__DelegateSignature_Params params;
	params.Default_Widget = Default_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomGameLobby_C::BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature");

	UWBP_CustomGameLobby_C_BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ExecuteUbergraph_WBP_CustomGameLobby
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameLobby_C::ExecuteUbergraph_WBP_CustomGameLobby(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ExecuteUbergraph_WBP_CustomGameLobby");

	UWBP_CustomGameLobby_C_ExecuteUbergraph_WBP_CustomGameLobby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
