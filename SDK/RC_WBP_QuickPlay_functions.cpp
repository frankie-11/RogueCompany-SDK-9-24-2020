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

// Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_QuickPlay_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyDown");

	UWBP_QuickPlay_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_QuickPlay_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyUp");

	UWBP_QuickPlay_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SortQueueSections
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQueueSection>   QueueSections                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FQueueSection>   SortSections                   (Parm, OutParm, ZeroConstructor)

void UWBP_QuickPlay_C::SortQueueSections(TArray<struct FQueueSection>* QueueSections, TArray<struct FQueueSection>* SortSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.SortQueueSections");

	UWBP_QuickPlay_C_SortQueueSections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueueSections != nullptr)
		*QueueSections = params.QueueSections;
	if (SortSections != nullptr)
		*SortSections = params.SortSections;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateWarning
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientQueueInfo*       ClientQueueInfo                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_QuickPlay_C::UpdateWarning(struct FClientQueueInfo* ClientQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateWarning");

	UWBP_QuickPlay_C_UpdateWarning_Params params;
	params.ClientQueueInfo = ClientQueueInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SetMapRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUIMapInfo>      MapRotations                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_QuickPlay_C::SetMapRotation(TArray<struct FUIMapInfo>* MapRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.SetMapRotation");

	UWBP_QuickPlay_C_SetMapRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapRotations != nullptr)
		*MapRotations = params.MapRotations;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SetTouchActiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientQueueInfo*       QueueInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_QuickPlay_C::SetTouchActiveState(struct FClientQueueInfo* QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.SetTouchActiveState");

	UWBP_QuickPlay_C_SetTouchActiveState_Params params;
	params.QueueInfo = QueueInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SetQueueButtonNavigation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::SetQueueButtonNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.SetQueueButtonNavigation");

	UWBP_QuickPlay_C_SetQueueButtonNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.GoToQueueScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::GoToQueueScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.GoToQueueScreen");

	UWBP_QuickPlay_C_GoToQueueScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ResetDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::ResetDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.ResetDetails");

	UWBP_QuickPlay_C_ResetDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientQueueInfo*       QueueButton                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_QuickPlay_C::UpdateDetails(struct FClientQueueInfo* QueueButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateDetails");

	UWBP_QuickPlay_C_UpdateDetails_Params params;
	params.QueueButton = QueueButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ReconcileGameModeButtonEnabling
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::ReconcileGameModeButtonEnabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.ReconcileGameModeButtonEnabling");

	UWBP_QuickPlay_C_ReconcileGameModeButtonEnabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QuickPlay_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.NavigateBack");

	UWBP_QuickPlay_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputMode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleInputModeChanged");

	UWBP_QuickPlay_C_HandleInputModeChanged_Params params;
	params.InputMode = InputMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SetDefaultFocusForQueues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::SetDefaultFocusForQueues()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.SetDefaultFocusForQueues");

	UWBP_QuickPlay_C_SetDefaultFocusForQueues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ResetQueueSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::ResetQueueSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.ResetQueueSelection");

	UWBP_QuickPlay_C_ResetQueueSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SetupQueueButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::SetupQueueButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.SetupQueueButtons");

	UWBP_QuickPlay_C_SetupQueueButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::StartHideAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideAnim");

	UWBP_QuickPlay_C_StartHideAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)

void UWBP_QuickPlay_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeTickAnimations");

	UWBP_QuickPlay_C_InitializeTickAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.InitHideAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::InitHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.InitHideAnimation");

	UWBP_QuickPlay_C_InitHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::ShowQueueTitleFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleFinished");

	UWBP_QuickPlay_C_ShowQueueTitleFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::ShowQueueTitleAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleAnim");

	UWBP_QuickPlay_C_ShowQueueTitleAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::HideQueueTitleFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleFinished");

	UWBP_QuickPlay_C_HideQueueTitleFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::HideQueueTitleAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleAnim");

	UWBP_QuickPlay_C_HideQueueTitleAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::ShowQueueSelectionFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionFinished");

	UWBP_QuickPlay_C_ShowQueueSelectionFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::ShowQueueSelectionAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionAnim");

	UWBP_QuickPlay_C_ShowQueueSelectionAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::HideQueueSelectionFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionFinished");

	UWBP_QuickPlay_C_HideQueueSelectionFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::HideQueueSelectionAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionAnim");

	UWBP_QuickPlay_C_HideQueueSelectionAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidget");

	UWBP_QuickPlay_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           QueueId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::HandleGameModeSelected(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeSelected");

	UWBP_QuickPlay_C_HandleGameModeSelected_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QuickPlay_C::HandleGameModeHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeHovered");

	UWBP_QuickPlay_C_HandleGameModeHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QuickPlay_C::HandleGameModeUnhovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeUnhovered");

	UWBP_QuickPlay_C_HandleGameModeUnhovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_QuickPlay_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidgetNavigation");

	UWBP_QuickPlay_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.GoToLastScreen
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::GoToLastScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.GoToLastScreen");

	UWBP_QuickPlay_C_GoToLastScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::StartShowSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowSequence");

	UWBP_QuickPlay_C_StartShowSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::StartHideSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideSequence");

	UWBP_QuickPlay_C_StartHideSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnControlQueuePermissionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          CanControl                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::OnControlQueuePermissionChanged(bool* CanControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.OnControlQueuePermissionChanged");

	UWBP_QuickPlay_C_OnControlQueuePermissionChanged_Params params;
	params.CanControl = CanControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnQueuePermissionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          CanQueue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::OnQueuePermissionChanged(bool* CanQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.OnQueuePermissionChanged");

	UWBP_QuickPlay_C_OnQueuePermissionChanged_Params params;
	params.CanQueue = CanQueue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_QuickPlay_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature");

	UWBP_QuickPlay_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_QuickPlay_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.OnShown");

	UWBP_QuickPlay_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_QuickPlay_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.OnHide");

	UWBP_QuickPlay_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::StartShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowAnim");

	UWBP_QuickPlay_C_StartShowAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnBackButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::OnBackButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.OnBackButtonClicked");

	UWBP_QuickPlay_C_OnBackButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleRegionSelectRequested
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::HandleRegionSelectRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleRegionSelectRequested");

	UWBP_QuickPlay_C_HandleRegionSelectRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelected
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::OnRegionSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelected");

	UWBP_QuickPlay_C_OnRegionSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelectEntriesCreated
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::OnRegionSelectEntriesCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelectEntriesCreated");

	UWBP_QuickPlay_C_OnRegionSelectEntriesCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SwitchFocusGroupToScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                ScreenToSwitch                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QuickPlay_C::SwitchFocusGroupToScreen(class UWidget** ScreenToSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.SwitchFocusGroupToScreen");

	UWBP_QuickPlay_C_SwitchFocusGroupToScreen_Params params;
	params.ScreenToSwitch = ScreenToSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnQueueSectionPopulated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_QuickPlay_QueueButton_C*>* QueueButtons                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_QuickPlay_C::HandleOnQueueSectionPopulated(TArray<class UWBP_QuickPlay_QueueButton_C*>* QueueButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnQueueSectionPopulated");

	UWBP_QuickPlay_C_HandleOnQueueSectionPopulated_Params params;
	params.QueueButtons = QueueButtons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_QuickPlay_C::BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature");

	UWBP_QuickPlay_C_BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.PreConstruct");

	UWBP_QuickPlay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuickPlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.Construct");

	UWBP_QuickPlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleQueueErrorStateChange
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::HandleQueueErrorStateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleQueueErrorStateChange");

	UWBP_QuickPlay_C_HandleQueueErrorStateChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.CreateCustomMatch
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::CreateCustomMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.CreateCustomMatch");

	UWBP_QuickPlay_C_CreateCustomMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnCustomSectionPopulated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UKSWidget*>*      Buttons                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_QuickPlay_C::HandleOnCustomSectionPopulated(TArray<class UKSWidget*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnCustomSectionPopulated");

	UWBP_QuickPlay_C_HandleOnCustomSectionPopulated_Params params;
	params.Buttons = Buttons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleMapScrollChange
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_C::HandleMapScrollChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleMapScrollChange");

	UWBP_QuickPlay_C_HandleMapScrollChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.Tick");

	UWBP_QuickPlay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ExecuteUbergraph_WBP_QuickPlay
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_C::ExecuteUbergraph_WBP_QuickPlay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay.WBP_QuickPlay_C.ExecuteUbergraph_WBP_QuickPlay");

	UWBP_QuickPlay_C_ExecuteUbergraph_WBP_QuickPlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
