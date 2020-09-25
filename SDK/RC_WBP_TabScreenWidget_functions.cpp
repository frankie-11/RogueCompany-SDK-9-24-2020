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

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ChangeFocusable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Focusable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::ChangeFocusable(bool* Is_Focusable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ChangeFocusable");

	UWBP_TabScreenWidget_C_ChangeFocusable_Params params;
	params.Is_Focusable = Is_Focusable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.UpdateAfterTabChange
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::UpdateAfterTabChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.UpdateAfterTabChange");

	UWBP_TabScreenWidget_C_UpdateAfterTabChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.RegisterAllForFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::RegisterAllForFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.RegisterAllForFocus");

	UWBP_TabScreenWidget_C_RegisterAllForFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupContextPrompts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD**                   HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::SetupContextPrompts(class AHUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupContextPrompts");

	UWBP_TabScreenWidget_C_SetupContextPrompts_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupReportButtonNav
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::SetupReportButtonNav()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupReportButtonNav");

	UWBP_TabScreenWidget_C_SetupReportButtonNav_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandlePlayerReported
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64_t*                       PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::HandlePlayerReported(int64_t* PlayerId, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandlePlayerReported");

	UWBP_TabScreenWidget_C_HandlePlayerReported_Params params;
	params.PlayerId = PlayerId;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeReportPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::InitializeReportPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeReportPlayer");

	UWBP_TabScreenWidget_C_InitializeReportPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardNav
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::ResetScoreboardNav()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardNav");

	UWBP_TabScreenWidget_C_ResetScoreboardNav_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.MoveFocusTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ToGoScreen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::MoveFocusTo(struct FName* ToGoScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.MoveFocusTo");

	UWBP_TabScreenWidget_C_MoveFocusTo_Params params;
	params.ToGoScreen = ToGoScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleOnActionBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::HandleOnActionBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleOnActionBack");

	UWBP_TabScreenWidget_C_HandleOnActionBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleOnPlayerReported
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64_t*                       PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TeamNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::HandleOnPlayerReported(int64_t* PlayerId, class AKSPlayerState** PlayerState, int* TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleOnPlayerReported");

	UWBP_TabScreenWidget_C_HandleOnPlayerReported_Params params;
	params.PlayerId = PlayerId;
	params.PlayerState = PlayerState;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializePlayerAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::InitializePlayerAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializePlayerAction");

	UWBP_TabScreenWidget_C_InitializePlayerAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeScoreboard
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::InitializeScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeScoreboard");

	UWBP_TabScreenWidget_C_InitializeScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupPlayerActionNavigation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::SetupPlayerActionNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupPlayerActionNavigation");

	UWBP_TabScreenWidget_C_SetupPlayerActionNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ToggleHideCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::ToggleHideCursor(bool* ShouldHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ToggleHideCursor");

	UWBP_TabScreenWidget_C_ToggleHideCursor_Params params;
	params.ShouldHide = ShouldHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_TabScreenWidget_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnMouseMove");

	UWBP_TabScreenWidget_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardHoverState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::ResetScoreboardHoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardHoverState");

	UWBP_TabScreenWidget_C_ResetScoreboardHoverState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_TabScreenWidget_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavigateBack");

	UWBP_TabScreenWidget_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_TabScreenWidget_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnKeyUp");

	UWBP_TabScreenWidget_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupScoreboardNav
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::SetupScoreboardNav()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupScoreboardNav");

	UWBP_TabScreenWidget_C_SetupScoreboardNav_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputMode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleInputModeChanged");

	UWBP_TabScreenWidget_C_HandleInputModeChanged_Params params;
	params.InputMode = InputMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HasTabs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasTabs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::HasTabs(bool* HasTabs)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HasTabs");

	UWBP_TabScreenWidget_C_HasTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasTabs != nullptr)
		*HasTabs = params.HasTabs;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleNavButtonClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                TargetWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_TabScreenWidget_C::HandleNavButtonClicked(class UWidget** TargetWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleNavButtonClicked");

	UWBP_TabScreenWidget_C_HandleNavButtonClicked_Params params;
	params.TargetWidget = TargetWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.CycleTabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::CycleTabs(bool* Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.CycleTabs");

	UWBP_TabScreenWidget_C_CycleTabs_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.IncrementTabWrapped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::IncrementTabWrapped(int* In, bool* Reverse, int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.IncrementTabWrapped");

	UWBP_TabScreenWidget_C_IncrementTabWrapped_Params params;
	params.In = In;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Refresh Tabs
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::Refresh_Tabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Refresh Tabs");

	UWBP_TabScreenWidget_C_Refresh_Tabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetGamepadCallouts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::SetGamepadCallouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetGamepadCallouts");

	UWBP_TabScreenWidget_C_SetGamepadCallouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidget");

	UWBP_TabScreenWidget_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_TabScreenWidget_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidgetNavigation");

	UWBP_TabScreenWidget_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_TabScreenWidget_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnShown");

	UWBP_TabScreenWidget_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_TabScreenWidget_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnHide");

	UWBP_TabScreenWidget_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void UWBP_TabScreenWidget_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidgetButtonListeners");

	UWBP_TabScreenWidget_C_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavLeft
// (BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::NavLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavLeft");

	UWBP_TabScreenWidget_C_NavLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavRight
// (BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::NavRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavRight");

	UWBP_TabScreenWidget_C_NavRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OpenTimerGate
// (BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::OpenTimerGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OpenTimerGate");

	UWBP_TabScreenWidget_C_OpenTimerGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.CloseTimerGate
// (BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::CloseTimerGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.CloseTimerGate");

	UWBP_TabScreenWidget_C_CloseTimerGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Tick");

	UWBP_TabScreenWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.AttemptCloseTab
// (BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::AttemptCloseTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.AttemptCloseTab");

	UWBP_TabScreenWidget_C_AttemptCloseTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.FocusScoreboardPlayerEntries
// (BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::FocusScoreboardPlayerEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.FocusScoreboardPlayerEntries");

	UWBP_TabScreenWidget_C_FocusScoreboardPlayerEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardFocus
// (BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::ResetScoreboardFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardFocus");

	UWBP_TabScreenWidget_C_ResetScoreboardFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ShowPlayerOptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64_t*                       PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         NewPlayerState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TeamNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CanReport                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::ShowPlayerOptions(int64_t* PlayerId, class AKSPlayerState** NewPlayerState, int* TeamNum, bool* CanReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ShowPlayerOptions");

	UWBP_TabScreenWidget_C_ShowPlayerOptions_Params params;
	params.PlayerId = PlayerId;
	params.NewPlayerState = NewPlayerState;
	params.TeamNum = TeamNum;
	params.CanReport = CanReport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Handle KillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::Handle_KillCamEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Handle KillCamEnabled");

	UWBP_TabScreenWidget_C_Handle_KillCamEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TabScreenWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Construct");

	UWBP_TabScreenWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Handle Back Button Clicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::Handle_Back_Button_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Handle Back Button Clicked");

	UWBP_TabScreenWidget_C_Handle_Back_Button_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.UnfocusScoreboardPlayers
// (BlueprintCallable, BlueprintEvent)

void UWBP_TabScreenWidget_C::UnfocusScoreboardPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.UnfocusScoreboardPlayers");

	UWBP_TabScreenWidget_C_UnfocusScoreboardPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.AttemptCloseTabFromKeyUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bKeyboardInput                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::AttemptCloseTabFromKeyUp(bool* bKeyboardInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.AttemptCloseTabFromKeyUp");

	UWBP_TabScreenWidget_C_AttemptCloseTabFromKeyUp_Params params;
	params.bKeyboardInput = bKeyboardInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ExecuteUbergraph_WBP_TabScreenWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TabScreenWidget_C::ExecuteUbergraph_WBP_TabScreenWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ExecuteUbergraph_WBP_TabScreenWidget");

	UWBP_TabScreenWidget_C_ExecuteUbergraph_WBP_TabScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
