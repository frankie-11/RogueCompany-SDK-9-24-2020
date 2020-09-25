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

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnPlayerStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelectManager_C::OnPlayerStateChanged(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnPlayerStateChanged");

	UWBP_InGameJobSelectManager_C_OnPlayerStateChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandlePhaseChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NewPhaseName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousPhaseName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelectManager_C::HandlePhaseChange(struct FName* NewPhaseName, struct FName* PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandlePhaseChange");

	UWBP_InGameJobSelectManager_C_HandlePhaseChange_Params params;
	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_InGameJobSelectManager_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnKeyDown");

	UWBP_InGameJobSelectManager_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.RestoreJobSelectViewState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::RestoreJobSelectViewState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.RestoreJobSelectViewState");

	UWBP_InGameJobSelectManager_C_RestoreJobSelectViewState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_InGameJobSelectManager_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnKeyUp");

	UWBP_InGameJobSelectManager_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.SetFocusGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelectManager_C::SetFocusGroup(struct FName* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.SetFocusGroup");

	UWBP_InGameJobSelectManager_C_SetFocusGroup_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeLoadoutScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::InitializeLoadoutScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeLoadoutScreen");

	UWBP_InGameJobSelectManager_C_InitializeLoadoutScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_InGameJobSelectManager_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.NavigateBack");

	UWBP_InGameJobSelectManager_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.ViewScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  GoToScreen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelectManager_C::ViewScreen(struct FName* GoToScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.ViewScreen");

	UWBP_InGameJobSelectManager_C_ViewScreen_Params params;
	params.GoToScreen = GoToScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelectionEntryChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          EnemyTeam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelectManager_C::HandleJobSelectionEntryChanged(class UJobSelectionEntryDetails** JobEntry, bool* EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelectionEntryChanged");

	UWBP_InGameJobSelectManager_C_HandleJobSelectionEntryChanged_Params params;
	params.JobEntry = JobEntry;
	params.EnemyTeam = EnemyTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeJobSelectScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::InitializeJobSelectScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeJobSelectScreen");

	UWBP_InGameJobSelectManager_C_InitializeJobSelectScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelectionReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UJobSelectionEntryDetails*> JobEntries                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          EnemyTeam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelectManager_C::HandleJobSelectionReady(bool* EnemyTeam, TArray<class UJobSelectionEntryDetails*>* JobEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelectionReady");

	UWBP_InGameJobSelectManager_C_HandleJobSelectionReady_Params params;
	params.EnemyTeam = EnemyTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JobEntries != nullptr)
		*JobEntries = params.JobEntries;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelectManager_C::HandleJobSelection(class UJobSelectionEntryDetails** JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelection");

	UWBP_InGameJobSelectManager_C_HandleJobSelection_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobLockedIn
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::HandleJobLockedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobLockedIn");

	UWBP_InGameJobSelectManager_C_HandleJobLockedIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobLoadoutView
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::HandleJobLoadoutView()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobLoadoutView");

	UWBP_InGameJobSelectManager_C_HandleJobLoadoutView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelectManager_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeWidget");

	UWBP_InGameJobSelectManager_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnJobEntryChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          EnemyTeam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelectManager_C::OnJobEntryChanged(class UJobSelectionEntryDetails** JobEntry, bool* EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnJobEntryChanged");

	UWBP_InGameJobSelectManager_C_OnJobEntryChanged_Params params;
	params.JobEntry = JobEntry;
	params.EnemyTeam = EnemyTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeWidgetNavigation");

	UWBP_InGameJobSelectManager_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnShown");

	UWBP_InGameJobSelectManager_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleNavigateBack
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::HandleNavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleNavigateBack");

	UWBP_InGameJobSelectManager_C_HandleNavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OpenMainMenu
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::OpenMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OpenMainMenu");

	UWBP_InGameJobSelectManager_C_OpenMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnHide");

	UWBP_InGameJobSelectManager_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnBackPrompt");

	UWBP_InGameJobSelectManager_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.PreRoundAnimComplete
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::PreRoundAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.PreRoundAnimComplete");

	UWBP_InGameJobSelectManager_C_PreRoundAnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.Construct");

	UWBP_InGameJobSelectManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnJobEntriesReady
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UJobSelectionEntryDetails*>* JobEntries                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          EnemyTeam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelectManager_C::OnJobEntriesReady(TArray<class UJobSelectionEntryDetails*>* JobEntries, bool* EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnJobEntriesReady");

	UWBP_InGameJobSelectManager_C_OnJobEntriesReady_Params params;
	params.JobEntries = JobEntries;
	params.EnemyTeam = EnemyTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnResetSelection
// (Event, Public, BlueprintEvent)

void UWBP_InGameJobSelectManager_C::OnResetSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnResetSelection");

	UWBP_InGameJobSelectManager_C_OnResetSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnPlayerSelectionStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EPlayerSelectionState*         NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelectManager_C::OnPlayerSelectionStateChanged(EPlayerSelectionState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnPlayerSelectionStateChanged");

	UWBP_InGameJobSelectManager_C_OnPlayerSelectionStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.ExecuteUbergraph_WBP_InGameJobSelectManager
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelectManager_C::ExecuteUbergraph_WBP_InGameJobSelectManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.ExecuteUbergraph_WBP_InGameJobSelectManager");

	UWBP_InGameJobSelectManager_C_ExecuteUbergraph_WBP_InGameJobSelectManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
