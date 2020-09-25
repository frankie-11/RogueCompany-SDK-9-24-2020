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

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetGamepadPrompts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_C::SetGamepadPrompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetGamepadPrompts");

	UWBP_InGameJobSelect_C_SetGamepadPrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetAttackDefendMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_C::SetAttackDefendMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetAttackDefendMessage");

	UWBP_InGameJobSelect_C_SetAttackDefendMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.HandlePhaseChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NewPhaseName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousPhaseName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::HandlePhaseChange(struct FName* NewPhaseName, struct FName* PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.HandlePhaseChange");

	UWBP_InGameJobSelect_C_HandlePhaseChange_Params params;
	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.RestoreVisualState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_C::RestoreVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.RestoreVisualState");

	UWBP_InGameJobSelect_C_RestoreVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnInputStateChanged");

	UWBP_InGameJobSelect_C_OnInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetHoverMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::SetHoverMessage(class UJobSelectionEntryDetails** JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetHoverMessage");

	UWBP_InGameJobSelect_C_SetHoverMessage_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.CanSelect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobSelectionEntry              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSelect                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::CanSelect(class UJobSelectionEntryDetails** JobSelectionEntry, bool* CanSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.CanSelect");

	UWBP_InGameJobSelect_C_CanSelect_Params params;
	params.JobSelectionEntry = JobSelectionEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSelect != nullptr)
		*CanSelect = params.CanSelect;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnPlayerSelectionStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerSelectionState*         SelectionState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::OnPlayerSelectionStateChanged(EPlayerSelectionState* SelectionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnPlayerSelectionStateChanged");

	UWBP_InGameJobSelect_C_OnPlayerSelectionStateChanged_Params params;
	params.SelectionState = SelectionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnTimerTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewTruncatedSeconds            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::OnTimerTick(float* NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnTimerTick");

	UWBP_InGameJobSelect_C_OnTimerTick_Params params;
	params.NewTruncatedSeconds = NewTruncatedSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobEntrySelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::OnJobEntrySelected(class UJobSelectionEntryDetails** JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobEntrySelected");

	UWBP_InGameJobSelect_C_OnJobEntrySelected_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.Update Job Entry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** UpdatedJobEntry                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          EnemyTeam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::Update_Job_Entry(class UJobSelectionEntryDetails** UpdatedJobEntry, bool* EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.Update Job Entry");

	UWBP_InGameJobSelect_C_Update_Job_Entry_Params params;
	params.UpdatedJobEntry = UpdatedJobEntry;
	params.EnemyTeam = EnemyTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ClearSelectedRogue
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_C::ClearSelectedRogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ClearSelectedRogue");

	UWBP_InGameJobSelect_C_ClearSelectedRogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetJobEntries
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UJobSelectionEntryDetails*> JobEntries                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_InGameJobSelect_C::SetJobEntries(TArray<class UJobSelectionEntryDetails*>* JobEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetJobEntries");

	UWBP_InGameJobSelect_C_SetJobEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JobEntries != nullptr)
		*JobEntries = params.JobEntries;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.InitializeWidget");

	UWBP_InGameJobSelect_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.PreConstruct");

	UWBP_InGameJobSelect_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::OnJobHovered(class UJobSelectionEntryDetails** JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobHovered");

	UWBP_InGameJobSelect_C_OnJobHovered_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_C::OnJobUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobUnhovered");

	UWBP_InGameJobSelect_C_OnJobUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_InGameJobSelect_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnShown");

	UWBP_InGameJobSelect_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.BndEvt__LockInBtnNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_InGameJobSelect_C::BndEvt__LockInBtnNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.BndEvt__LockInBtnNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_InGameJobSelect_C_BndEvt__LockInBtnNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_InGameJobSelect_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWBP_InGameJobSelect_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ExecuteUbergraph_WBP_InGameJobSelect
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::ExecuteUbergraph_WBP_InGameJobSelect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ExecuteUbergraph_WBP_InGameJobSelect");

	UWBP_InGameJobSelect_C_ExecuteUbergraph_WBP_InGameJobSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnCancelJobSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::OnCancelJobSelection__DelegateSignature(class UJobSelectionEntryDetails** JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnCancelJobSelection__DelegateSignature");

	UWBP_InGameJobSelect_C_OnCancelJobSelection__DelegateSignature_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnViewJobLoadout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_C::OnViewJobLoadout__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnViewJobLoadout__DelegateSignature");

	UWBP_InGameJobSelect_C_OnViewJobLoadout__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnLockInJob__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_C::OnLockInJob__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnLockInJob__DelegateSignature");

	UWBP_InGameJobSelect_C_OnLockInJob__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_C::OnJobSelected__DelegateSignature(class UJobSelectionEntryDetails** JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobSelected__DelegateSignature");

	UWBP_InGameJobSelect_C_OnJobSelected__DelegateSignature_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnResetJobEntries__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_InGameJobSelect_JobEntry_C*> JobEntryButtons                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_InGameJobSelect_C::OnResetJobEntries__DelegateSignature(TArray<class UWBP_InGameJobSelect_JobEntry_C*>* JobEntryButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnResetJobEntries__DelegateSignature");

	UWBP_InGameJobSelect_C_OnResetJobEntries__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JobEntryButtons != nullptr)
		*JobEntryButtons = params.JobEntryButtons;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
