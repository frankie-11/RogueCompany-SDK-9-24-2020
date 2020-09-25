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

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.ToggleContextMenuForPlayerCard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWidget**              KSWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Social_Overlay_C::ToggleContextMenuForPlayerCard(class UKSWidget** KSWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.ToggleContextMenuForPlayerCard");

	UWBP_Social_Overlay_C_ToggleContextMenuForPlayerCard_Params params;
	params.KSWidget = KSWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuHidden
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Overlay_C::HandleStatusMenuHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuHidden");

	UWBP_Social_Overlay_C_HandleStatusMenuHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuShown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PlayerStatus_ContextMenuOption_C** FocusWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Social_Overlay_C::HandleStatusMenuShown(class UWBP_PlayerStatus_ContextMenuOption_C** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuShown");

	UWBP_Social_Overlay_C_HandleStatusMenuShown_Params params;
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusNavigationReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_Social_Overlay_C::HandleStatusNavigationReady(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>* StatusButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusNavigationReady");

	UWBP_Social_Overlay_C_HandleStatusNavigationReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusButtons != nullptr)
		*StatusButtons = params.StatusButtons;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupHeader
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Overlay_C::SetupHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupHeader");

	UWBP_Social_Overlay_C_SetupHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetTabIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Overlay_C::SetTabIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetTabIndex");

	UWBP_Social_Overlay_C_SetTabIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_subscreen_nav_tab_C** ActiveTabButton                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Social_Overlay_C::OnTabChange(class UWBP_subscreen_nav_tab_C** ActiveTabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabChange");

	UWBP_Social_Overlay_C_OnTabChange_Params params;
	params.ActiveTabButton = ActiveTabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetActiveTabByWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Social_Overlay_C::SetActiveTabByWidget(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetActiveTabByWidget");

	UWBP_Social_Overlay_C_SetActiveTabByWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Social_Overlay_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnMouseButtonUp");

	UWBP_Social_Overlay_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.MoveTabBy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Overlay_C::MoveTabBy(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.MoveTabBy");

	UWBP_Social_Overlay_C_MoveTabBy_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupNavTabs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Overlay_C::SetupNavTabs(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupNavTabs");

	UWBP_Social_Overlay_C_SetupNavTabs_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_Social_Overlay_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.NavigateBack");

	UWBP_Social_Overlay_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.ClosePanel
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Overlay_C::ClosePanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.ClosePanel");

	UWBP_Social_Overlay_C_ClosePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_Social_Overlay_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnShown");

	UWBP_Social_Overlay_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Social_Overlay_C::BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_Social_Overlay_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Overlay_C::StartShowSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartShowSequence");

	UWBP_Social_Overlay_C_StartShowSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Overlay_C::StartHideSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartHideSequence");

	UWBP_Social_Overlay_C_StartHideSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Overlay_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidget");

	UWBP_Social_Overlay_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_subscreen_nav_tab_C** ButtonClicked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Social_Overlay_C::OnTabClicked(class UWBP_subscreen_nav_tab_C** ButtonClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabClicked");

	UWBP_Social_Overlay_C_OnTabClicked_Params params;
	params.ButtonClicked = ButtonClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Overlay_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.UninitializeWidget");

	UWBP_Social_Overlay_C_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnPlayerCardClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWidget**              PlayerCard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Social_Overlay_C::OnPlayerCardClick(class UKSWidget** PlayerCard)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnPlayerCardClick");

	UWBP_Social_Overlay_C_OnPlayerCardClick_Params params;
	params.PlayerCard = PlayerCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnInputStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Overlay_C::OnInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnInputStateChange");

	UWBP_Social_Overlay_C_OnInputStateChange_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_Social_Overlay_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidgetNavigation");

	UWBP_Social_Overlay_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_Social_Overlay_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHide");

	UWBP_Social_Overlay_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabLeft
// (BlueprintCallable, BlueprintEvent)

void UWBP_Social_Overlay_C::OnTabLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabLeft");

	UWBP_Social_Overlay_C_OnTabLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabRight
// (BlueprintCallable, BlueprintEvent)

void UWBP_Social_Overlay_C::OnTabRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabRight");

	UWBP_Social_Overlay_C_OnTabRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleSocial
// (BlueprintCallable, BlueprintEvent)

void UWBP_Social_Overlay_C::OnToggleSocial()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleSocial");

	UWBP_Social_Overlay_C_OnToggleSocial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnViewStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  CurrentRoute                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousRoute                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EViewManagerLayer*             Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Overlay_C::OnViewStateChange(struct FName* CurrentRoute, struct FName* PreviousRoute, EViewManagerLayer* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnViewStateChange");

	UWBP_Social_Overlay_C_OnViewStateChange_Params params;
	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleStatusMenu
// (BlueprintCallable, BlueprintEvent)

void UWBP_Social_Overlay_C::OnToggleStatusMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleStatusMenu");

	UWBP_Social_Overlay_C_OnToggleStatusMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnReadyForNavigation__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         NavWidgets                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWidget**                Default_Widget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Social_Overlay_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnReadyForNavigation__DelegateSignature(class UWidget** Default_Widget, TArray<class UWidget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnReadyForNavigation__DelegateSignature");

	UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnReadyForNavigation__DelegateSignature_Params params;
	params.Default_Widget = Default_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuHidden__DelegateSignature
// (BlueprintEvent)

void UWBP_Social_Overlay_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuHidden__DelegateSignature");

	UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuHidden__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_3_OnMenuStart__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                FocusWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Social_Overlay_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_3_OnMenuStart__DelegateSignature(class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_3_OnMenuStart__DelegateSignature");

	UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_3_OnMenuStart__DelegateSignature_Params params;
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandlePlayerInvitesChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSDataSocialCategory**  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UKSDataSocialPlayer*>* Players                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_Social_Overlay_C::HandlePlayerInvitesChanged(class UKSDataSocialCategory** Category, TArray<class UKSDataSocialPlayer*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandlePlayerInvitesChanged");

	UWBP_Social_Overlay_C_HandlePlayerInvitesChanged_Params params;
	params.Category = Category;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Social_Overlay_C::BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UWBP_Social_Overlay_C_BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.ExecuteUbergraph_WBP_Social_Overlay
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Overlay_C::ExecuteUbergraph_WBP_Social_Overlay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.ExecuteUbergraph_WBP_Social_Overlay");

	UWBP_Social_Overlay_C_ExecuteUbergraph_WBP_Social_Overlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
