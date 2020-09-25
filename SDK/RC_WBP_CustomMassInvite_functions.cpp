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

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.FocusFirstPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSTreeView**            TreeView                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomMassInvite_C::FocusFirstPlayer(class UKSTreeView** TreeView)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.FocusFirstPlayer");

	UWBP_CustomMassInvite_C_FocusFirstPlayer_Params params;
	params.TreeView = TreeView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSTreeView**            OwningList                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomMassInvite_C::List_HandleItemClicked(class UObject** Item, class UKSTreeView** OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemClicked");

	UWBP_CustomMassInvite_C_List_HandleItemClicked_Params params;
	params.Item = Item;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemInitialized
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomMassInvite_C::List_HandleItemInitialized(class UObject** Item, class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemInitialized");

	UWBP_CustomMassInvite_C_List_HandleItemInitialized_Params params;
	params.Item = Item;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleListItemHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::List_HandleListItemHover(class UObject** Item, bool* bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleListItemHover");

	UWBP_CustomMassInvite_C_List_HandleListItemHover_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowLoadAnimImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowLoading                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation**       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::ShowLoadAnimImpl(bool* ShowLoading, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowLoadAnimImpl");

	UWBP_CustomMassInvite_C_ShowLoadAnimImpl_Params params;
	params.ShowLoading = ShowLoading;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowSearchListLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowLoading                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::ShowSearchListLoading(bool* ShowLoading)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowSearchListLoading");

	UWBP_CustomMassInvite_C_ShowSearchListLoading_Params params;
	params.ShowLoading = ShowLoading;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.HandleReceiveSearchPlayers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKSPlayerQueryError*           Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UKSPlayerInfo*>*  Matches                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_CustomMassInvite_C::HandleReceiveSearchPlayers(EKSPlayerQueryError* Error, TArray<class UKSPlayerInfo*>* Matches)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.HandleReceiveSearchPlayers");

	UWBP_CustomMassInvite_C_HandleReceiveSearchPlayers_Params params;
	params.Error = Error;
	params.Matches = Matches;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.GetQueryDataFactory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSPlayerQueryDataFactory* DataFactory                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::GetQueryDataFactory(class UKSPlayerQueryDataFactory** DataFactory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.GetQueryDataFactory");

	UWBP_CustomMassInvite_C_GetQueryDataFactory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataFactory != nullptr)
		*DataFactory = params.DataFactory;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.SetTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::SetTab(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.SetTab");

	UWBP_CustomMassInvite_C_SetTab_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_CustomMassInvite_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnKeyUp");

	UWBP_CustomMassInvite_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowAutoListLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::ShowAutoListLoading(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowAutoListLoading");

	UWBP_CustomMassInvite_C_ShowAutoListLoading_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnBlockerClick
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_CustomMassInvite_C::OnBlockerClick(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnBlockerClick");

	UWBP_CustomMassInvite_C_OnBlockerClick_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_OnGetItemChildren
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         Children                       (Parm, OutParm, ZeroConstructor)

void UWBP_CustomMassInvite_C::List_OnGetItemChildren(class UObject** Item, TArray<class UObject*>* Children)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_OnGetItemChildren");

	UWBP_CustomMassInvite_C_List_OnGetItemChildren_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Children != nullptr)
		*Children = params.Children;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_CustomMassInvite_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.NavigateBack");

	UWBP_CustomMassInvite_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_CustomMassInvite_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnShown");

	UWBP_CustomMassInvite_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnReceivePlayers
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UKSPlayerInfo*>*  Players                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_CustomMassInvite_C::OnReceivePlayers(TArray<class UKSPlayerInfo*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnReceivePlayers");

	UWBP_CustomMassInvite_C_OnReceivePlayers_Params params;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomMassInvite_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject** Item, class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature_Params params;
	params.Item = Item;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_CustomMassInvite_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidgetNavigation");

	UWBP_CustomMassInvite_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomMassInvite_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject** Item, bool* bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject** Item, bool* bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomMassInvite_C::BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CustomMassInvite_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInitialized");

	UWBP_CustomMassInvite_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationStart
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomMassInvite_C::OnLoadingAnimationStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationStart");

	UWBP_CustomMassInvite_C_OnLoadingAnimationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationEnd
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomMassInvite_C::OnLoadingAnimationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationEnd");

	UWBP_CustomMassInvite_C_OnLoadingAnimationEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInputStateChanged");

	UWBP_CustomMassInvite_C_OnInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidget");

	UWBP_CustomMassInvite_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__AutoTab_K2Node_ComponentBoundEvent_7_On Tab Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_subscreen_nav_tab_C** Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomMassInvite_C::BndEvt__AutoTab_K2Node_ComponentBoundEvent_7_On_Tab_Selected__DelegateSignature(class UWBP_subscreen_nav_tab_C** Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__AutoTab_K2Node_ComponentBoundEvent_7_On Tab Selected__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__AutoTab_K2Node_ComponentBoundEvent_7_On_Tab_Selected__DelegateSignature_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchTab_K2Node_ComponentBoundEvent_8_On Tab Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_subscreen_nav_tab_C** Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomMassInvite_C::BndEvt__SearchTab_K2Node_ComponentBoundEvent_8_On_Tab_Selected__DelegateSignature(class UWBP_subscreen_nav_tab_C** Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchTab_K2Node_ComponentBoundEvent_8_On Tab Selected__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__SearchTab_K2Node_ComponentBoundEvent_8_On_Tab_Selected__DelegateSignature_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  SearchTerm                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CustomMassInvite_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature(struct FText* SearchTerm)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature_Params params;
	params.SearchTerm = SearchTerm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_CustomMassInvite_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnHide");

	UWBP_CustomMassInvite_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchStart
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomMassInvite_C::OnLoadingSearchStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchStart");

	UWBP_CustomMassInvite_C_OnLoadingSearchStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchEnd
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomMassInvite_C::OnLoadingSearchEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchEnd");

	UWBP_CustomMassInvite_C_OnLoadingSearchEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomMassInvite_C::BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature(class UObject** Item, class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature_Params params;
	params.Item = Item;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature(class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject** Item, bool* bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject** Item, bool* bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomMassInvite_C::BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	UWBP_CustomMassInvite_C_BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ExecuteUbergraph_WBP_CustomMassInvite
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::ExecuteUbergraph_WBP_CustomMassInvite(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ExecuteUbergraph_WBP_CustomMassInvite");

	UWBP_CustomMassInvite_C_ExecuteUbergraph_WBP_CustomMassInvite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInvite_C::OnSelect__DelegateSignature(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnSelect__DelegateSignature");

	UWBP_CustomMassInvite_C_OnSelect__DelegateSignature_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
