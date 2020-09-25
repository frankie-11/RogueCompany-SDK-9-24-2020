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

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.SetVersionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::SetVersionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.SetVersionText");

	UWBP_HomeScreen_v2_C_SetVersionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.CanFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bAllowFous                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::CanFocus(bool* bAllowFous)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.CanFocus");

	UWBP_HomeScreen_v2_C_CanFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllowFous != nullptr)
		*bAllowFous = params.bAllowFous;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateContextPrompts
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::UpdateContextPrompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateContextPrompts");

	UWBP_HomeScreen_v2_C_UpdateContextPrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StopConflictingAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  AnimName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::StopConflictingAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StopConflictingAnimation");

	UWBP_HomeScreen_v2_C_StopConflictingAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_HomeScreen_v2_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NavigateBack");

	UWBP_HomeScreen_v2_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleQueueStatusChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_MatchStatus*             NewStatus                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::HandleQueueStatusChange(EPUMG_MatchStatus* NewStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleQueueStatusChange");

	UWBP_HomeScreen_v2_C_HandleQueueStatusChange_Params params;
	params.NewStatus = NewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleLobbyCameraSet
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::HandleLobbyCameraSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleLobbyCameraSet");

	UWBP_HomeScreen_v2_C_HandleLobbyCameraSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandlePreMatchAnimStarted
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::HandlePreMatchAnimStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandlePreMatchAnimStarted");

	UWBP_HomeScreen_v2_C_HandlePreMatchAnimStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UnbindLobbyAnimationHandling
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::UnbindLobbyAnimationHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UnbindLobbyAnimationHandling");

	UWBP_HomeScreen_v2_C_UnbindLobbyAnimationHandling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.BindLobbyAnimationHandling
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::BindLobbyAnimationHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.BindLobbyAnimationHandling");

	UWBP_HomeScreen_v2_C_BindLobbyAnimationHandling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeContentWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::InitializeContentWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeContentWidgets");

	UWBP_HomeScreen_v2_C_InitializeContentWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::StartShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowAnim");

	UWBP_HomeScreen_v2_C_StartShowAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)

void UWBP_HomeScreen_v2_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeTickAnimations");

	UWBP_HomeScreen_v2_C_InitializeTickAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::ShowQuickPlayFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayFinished");

	UWBP_HomeScreen_v2_C_ShowQuickPlayFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::ShowQuickPlayAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayAnim");

	UWBP_HomeScreen_v2_C_ShowQuickPlayAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitHideAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::InitHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitHideAnimation");

	UWBP_HomeScreen_v2_C_InitHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::HideQuickPlayFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayFinished");

	UWBP_HomeScreen_v2_C_HideQuickPlayFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::HideQuickPlayAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayAnim");

	UWBP_HomeScreen_v2_C_HideQuickPlayAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::StartHideAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideAnim");

	UWBP_HomeScreen_v2_C_StartHideAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidget");

	UWBP_HomeScreen_v2_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void UWBP_HomeScreen_v2_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetButtonListeners");

	UWBP_HomeScreen_v2_C_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleJoinQueue
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::HandleJoinQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleJoinQueue");

	UWBP_HomeScreen_v2_C_HandleJoinQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleChangeQueue
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::HandleChangeQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleChangeQueue");

	UWBP_HomeScreen_v2_C_HandleChangeQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_HomeScreen_v2_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnShown");

	UWBP_HomeScreen_v2_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UninitializeWidget");

	UWBP_HomeScreen_v2_C_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::StartShowSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowSequence");

	UWBP_HomeScreen_v2_C_StartShowSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::StartHideSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideSequence");

	UWBP_HomeScreen_v2_C_StartHideSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_HomeScreen_v2_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetNavigation");

	UWBP_HomeScreen_v2_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HomeScreen_v2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Construct");

	UWBP_HomeScreen_v2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnCrossplayChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::OnCrossplayChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnCrossplayChanged");

	UWBP_HomeScreen_v2_C_OnCrossplayChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateCrossplay
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::UpdateCrossplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateCrossplay");

	UWBP_HomeScreen_v2_C_UpdateCrossplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.LoginState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_LoginState*              LoginState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::LoginState(EPUMG_LoginState* LoginState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.LoginState");

	UWBP_HomeScreen_v2_C_LoginState_Params params;
	params.LoginState = LoginState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Update Region
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::Update_Region()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Update Region");

	UWBP_HomeScreen_v2_C_Update_Region_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Party Player Card Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C** Selected_Player_Card           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_HomeScreen_v2_C::Handle_Party_Player_Card_Selected(class UWBP_player_card_module_C** Selected_Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Party Player Card Selected");

	UWBP_HomeScreen_v2_C_Handle_Party_Player_Card_Selected_Params params;
	params.Selected_Player_Card = Selected_Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Navigation
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         NavWidgets                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWidget**                Default_Widget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_HomeScreen_v2_C::Handle_Context_Menu_Navigation(class UWidget** Default_Widget, TArray<class UWidget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Navigation");

	UWBP_HomeScreen_v2_C_Handle_Context_Menu_Navigation_Params params;
	params.Default_Widget = Default_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Hidden
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::Handle_Context_Menu_Hidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Hidden");

	UWBP_HomeScreen_v2_C_Handle_Context_Menu_Hidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleContextMenuShown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                FocusWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_HomeScreen_v2_C::HandleContextMenuShown(class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleContextMenuShown");

	UWBP_HomeScreen_v2_C_HandleContextMenuShown_Params params;
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateRightFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::FocusGroupNavigateRightFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateRightFailure");

	UWBP_HomeScreen_v2_C_FocusGroupNavigateRightFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateLeftFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::FocusGroupNavigateLeftFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateLeftFailure");

	UWBP_HomeScreen_v2_C_FocusGroupNavigateLeftFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NewsPanelVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::NewsPanelVisibilityChanged(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NewsPanelVisibilityChanged");

	UWBP_HomeScreen_v2_C_NewsPanelVisibilityChanged_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnEOMButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::OnEOMButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnEOMButton");

	UWBP_HomeScreen_v2_C_OnEOMButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleViewSocial
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::HandleViewSocial()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleViewSocial");

	UWBP_HomeScreen_v2_C_HandleViewSocial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateDownFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::FocusGroupNavigateDownFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateDownFailure");

	UWBP_HomeScreen_v2_C_FocusGroupNavigateDownFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateUpFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::FocusGroupNavigateUpFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateUpFailure");

	UWBP_HomeScreen_v2_C_FocusGroupNavigateUpFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Player Card Back Button
// (BlueprintCallable, BlueprintEvent)

void UWBP_HomeScreen_v2_C::Handle_Player_Card_Back_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Player Card Back Button");

	UWBP_HomeScreen_v2_C_Handle_Player_Card_Back_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.PreConstruct");

	UWBP_HomeScreen_v2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnSetQueueInputState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::OnSetQueueInputState(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnSetQueueInputState");

	UWBP_HomeScreen_v2_C_OnSetQueueInputState_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnPartyLeaveVisibilityChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::OnPartyLeaveVisibilityChange(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnPartyLeaveVisibilityChange");

	UWBP_HomeScreen_v2_C_OnPartyLeaveVisibilityChange_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ExecuteUbergraph_WBP_HomeScreen_v2
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HomeScreen_v2_C::ExecuteUbergraph_WBP_HomeScreen_v2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ExecuteUbergraph_WBP_HomeScreen_v2");

	UWBP_HomeScreen_v2_C_ExecuteUbergraph_WBP_HomeScreen_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
