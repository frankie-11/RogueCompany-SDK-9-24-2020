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

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetPreviousMatchPlayerIds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int64_t>                PlayerIds                      (Parm, OutParm, ZeroConstructor)

void UWBP_PostMatchLobby_C::GetPreviousMatchPlayerIds(TArray<int64_t>* PlayerIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetPreviousMatchPlayerIds");

	UWBP_PostMatchLobby_C_GetPreviousMatchPlayerIds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerIds != nullptr)
		*PlayerIds = params.PlayerIds;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.TryUpdatePlayAgainPrompt
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::TryUpdatePlayAgainPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.TryUpdatePlayAgainPrompt");

	UWBP_PostMatchLobby_C_TryUpdatePlayAgainPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetCurrentPrompts
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::SetCurrentPrompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetCurrentPrompts");

	UWBP_PostMatchLobby_C_SetCurrentPrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.TryMakeTabArray
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::TryMakeTabArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.TryMakeTabArray");

	UWBP_PostMatchLobby_C_TryMakeTabArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupReportMenuNav
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::SetupReportMenuNav()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupReportMenuNav");

	UWBP_PostMatchLobby_C_SetupReportMenuNav_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetReportMenuFocusGroup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            FocusGroup                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::GetReportMenuFocusGroup(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetReportMenuFocusGroup");

	UWBP_PostMatchLobby_C_GetReportMenuFocusGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusGroup != nullptr)
		*FocusGroup = params.FocusGroup;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ShowContextMenuForPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int64_t*                       PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::ShowContextMenuForPlayer(class UWidget** Widget, int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ShowContextMenuForPlayer");

	UWBP_PostMatchLobby_C_ShowContextMenuForPlayer_Params params;
	params.Widget = Widget;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetContextMenuFocusGroup
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            GroupIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::GetContextMenuFocusGroup(int* GroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetContextMenuFocusGroup");

	UWBP_PostMatchLobby_C_GetContextMenuFocusGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroupIndex != nullptr)
		*GroupIndex = params.GroupIndex;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleScoreboardChange
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::HandleScoreboardChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleScoreboardChange");

	UWBP_PostMatchLobby_C_HandleScoreboardChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetScoreboardFocusGroup
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            GroupIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::GetScoreboardFocusGroup(int* GroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetScoreboardFocusGroup");

	UWBP_PostMatchLobby_C_GetScoreboardFocusGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroupIndex != nullptr)
		*GroupIndex = params.GroupIndex;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupContextMenuNav
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         NavWidgets                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWidget**                DefaultFocus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PostMatchLobby_C::SetupContextMenuNav(class UWidget** DefaultFocus, TArray<class UWidget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupContextMenuNav");

	UWBP_PostMatchLobby_C_SetupContextMenuNav_Params params;
	params.DefaultFocus = DefaultFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupFocusGroups
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::SetupFocusGroups()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupFocusGroups");

	UWBP_PostMatchLobby_C_SetupFocusGroups_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetGamepadIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::SetGamepadIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetGamepadIcon");

	UWBP_PostMatchLobby_C_SetGamepadIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PostMatchLobby_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnKeyUp");

	UWBP_PostMatchLobby_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetGamepadPrompt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::SetGamepadPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetGamepadPrompt");

	UWBP_PostMatchLobby_C_SetGamepadPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetNavButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_PostMatchNavButton_C*> NavButtons                     (Parm, OutParm, ZeroConstructor)

void UWBP_PostMatchLobby_C::GetNavButtons(TArray<class UWBP_PostMatchNavButton_C*>* NavButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetNavButtons");

	UWBP_PostMatchLobby_C_GetNavButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavButtons != nullptr)
		*NavButtons = params.NavButtons;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.FormatPlayedTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         timePlayed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void UWBP_PostMatchLobby_C::FormatPlayedTime(float* timePlayed, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.FormatPlayedTime");

	UWBP_PostMatchLobby_C_FormatPlayedTime_Params params;
	params.timePlayed = timePlayed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulateTimePlayed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::PopulateTimePlayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulateTimePlayed");

	UWBP_PostMatchLobby_C_PopulateTimePlayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PostMatchLobby_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.NavigateBack");

	UWBP_PostMatchLobby_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetVictoryDefeat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScoreboardStats*       ScoreboardStats                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PostMatchLobby_C::SetVictoryDefeat(struct FScoreboardStats* ScoreboardStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetVictoryDefeat");

	UWBP_PostMatchLobby_C_SetVictoryDefeat_Params params;
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.DetermineMatchResult
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScoreboardStats*       ScoreboardStats                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           DidWin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::DetermineMatchResult(struct FScoreboardStats* ScoreboardStats, bool* DidWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.DetermineMatchResult");

	UWBP_PostMatchLobby_C_DetermineMatchResult_Params params;
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DidWin != nullptr)
		*DidWin = params.DidWin;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulateScoreboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScoreboardStats*       ScoreboardStats                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PostMatchLobby_C::PopulateScoreboard(struct FScoreboardStats* ScoreboardStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulateScoreboard");

	UWBP_PostMatchLobby_C_PopulateScoreboard_Params params;
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleTabClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PostMatchNavButton_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PostMatchLobby_C::HandleTabClicked(class UWBP_PostMatchNavButton_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleTabClicked");

	UWBP_PostMatchLobby_C_HandleTabClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.CycleTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::CycleTab(bool* Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.CycleTab");

	UWBP_PostMatchLobby_C_CycleTab_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PostMatchLobby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Construct");

	UWBP_PostMatchLobby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.InitializeWidget");

	UWBP_PostMatchLobby_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_PostMatchLobby_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.InitializeWidgetNavigation");

	UWBP_PostMatchLobby_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_PostMatchLobby_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnShown");

	UWBP_PostMatchLobby_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulatePostMatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerRewardsSummary*  PlayerSummary                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScoreboardStats*       ScoreboardStats                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PostMatchLobby_C::PopulatePostMatch(struct FPlayerRewardsSummary* PlayerSummary, struct FScoreboardStats* ScoreboardStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulatePostMatch");

	UWBP_PostMatchLobby_C_PopulatePostMatch_Params params;
	params.PlayerSummary = PlayerSummary;
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleOnShowAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::HandleOnShowAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleOnShowAnimationFinished");

	UWBP_PostMatchLobby_C_HandleOnShowAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleOnPlayerDataChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::HandleOnPlayerDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleOnPlayerDataChanged");

	UWBP_PostMatchLobby_C_HandleOnPlayerDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleInputStateChanged");

	UWBP_PostMatchLobby_C_HandleInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::StartShowSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.StartShowSequence");

	UWBP_PostMatchLobby_C_StartShowSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::StartHideSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.StartHideSequence");

	UWBP_PostMatchLobby_C_StartHideSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_PostMatchLobby_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnHide");

	UWBP_PostMatchLobby_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnBackButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::OnBackButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnBackButtonClicked");

	UWBP_PostMatchLobby_C_OnBackButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PreConstruct");

	UWBP_PostMatchLobby_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Play Again
// (BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::Handle_Play_Again()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Play Again");

	UWBP_PostMatchLobby_C_Handle_Play_Again_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.JoinQueue
// (BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::JoinQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.JoinQueue");

	UWBP_PostMatchLobby_C_JoinQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Party Data Updated
// (BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchLobby_C::Handle_Party_Data_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Party Data Updated");

	UWBP_PostMatchLobby_C_Handle_Party_Data_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Queue Status Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_MatchStatus*             MatchStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::Handle_Queue_Status_Change(EPUMG_MatchStatus* MatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Queue Status Change");

	UWBP_PostMatchLobby_C_Handle_Queue_Status_Change_Params params;
	params.MatchStatus = MatchStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_0_OnReadyForNavigation__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         NavWidgets                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWidget**                Default_Widget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PostMatchLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_0_OnReadyForNavigation__DelegateSignature(class UWidget** Default_Widget, TArray<class UWidget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_0_OnReadyForNavigation__DelegateSignature");

	UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_0_OnReadyForNavigation__DelegateSignature_Params params;
	params.Default_Widget = Default_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnMenuHidden__DelegateSignature
// (BlueprintEvent)

void UWBP_PostMatchLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnMenuHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnMenuHidden__DelegateSignature");

	UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnMenuHidden__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuStart__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                FocusWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PostMatchLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuStart__DelegateSignature(class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuStart__DelegateSignature");

	UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuStart__DelegateSignature_Params params;
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature
// (BlueprintEvent)

void UWBP_PostMatchLobby_C::BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature");

	UWBP_PostMatchLobby_C_BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandlePlayerClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int64_t*                       PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::HandlePlayerClicked(class UWidget** Widget, int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandlePlayerClicked");

	UWBP_PostMatchLobby_C_HandlePlayerClicked_Params params;
	params.Widget = Widget;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_4_OnReportPlayer__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_4_OnReportPlayer__DelegateSignature(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_4_OnReportPlayer__DelegateSignature");

	UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_4_OnReportPlayer__DelegateSignature_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int64_t*                       PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature(int64_t* PlayerId, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature");

	UWBP_PostMatchLobby_C_BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature_Params params;
	params.PlayerId = PlayerId;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PostMatchLobby_C::BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UWBP_PostMatchLobby_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ExecuteUbergraph_WBP_PostMatchLobby
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchLobby_C::ExecuteUbergraph_WBP_PostMatchLobby(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ExecuteUbergraph_WBP_PostMatchLobby");

	UWBP_PostMatchLobby_C_ExecuteUbergraph_WBP_PostMatchLobby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
