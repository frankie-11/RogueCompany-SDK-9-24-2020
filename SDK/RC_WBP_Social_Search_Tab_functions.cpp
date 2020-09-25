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

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ClearListFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Search_Tab_C::ClearListFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ClearListFocus");

	UWBP_Social_Search_Tab_C_ClearListFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.TryRecoverLastKnownListFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Search_Tab_C::TryRecoverLastKnownListFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.TryRecoverLastKnownListFocus");

	UWBP_Social_Search_Tab_C_TryRecoverLastKnownListFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.GetFirstVisibleItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSTreeView**            List                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Search_Tab_C::GetFirstVisibleItem(class UKSTreeView** List, class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.GetFirstVisibleItem");

	UWBP_Social_Search_Tab_C_GetFirstVisibleItem_Params params;
	params.List = List;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Social_Search_Tab_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnKeyUp");

	UWBP_Social_Search_Tab_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.GetFocusTargets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>         Target                         (Parm, OutParm, ZeroConstructor)

void UWBP_Social_Search_Tab_C::GetFocusTargets(TArray<class UWidget*>* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.GetFocusTargets");

	UWBP_Social_Search_Tab_C_GetFocusTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ClearSearch
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Search_Tab_C::ClearSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ClearSearch");

	UWBP_Social_Search_Tab_C_ClearSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.HandlePlayerCardClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Search_Tab_C::HandlePlayerCardClicked(class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.HandlePlayerCardClicked");

	UWBP_Social_Search_Tab_C_HandlePlayerCardClicked_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Search_Tab_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.InitializeWidget");

	UWBP_Social_Search_Tab_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Search_Tab_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.UninitializeWidget");

	UWBP_Social_Search_Tab_C_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_Social_Search_Tab_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnHide");

	UWBP_Social_Search_Tab_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Search_Tab_C::BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");

	UWBP_Social_Search_Tab_C_BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Search_Tab_C::BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");

	UWBP_Social_Search_Tab_C_BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnInputStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Search_Tab_C::OnInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnInputStateChange");

	UWBP_Social_Search_Tab_C_OnInputStateChange_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_Social_Search_Tab_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.InitializeWidgetNavigation");

	UWBP_Social_Search_Tab_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
// (BlueprintEvent)

void UWBP_Social_Search_Tab_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature");

	UWBP_Social_Search_Tab_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
// (BlueprintEvent)

void UWBP_Social_Search_Tab_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature");

	UWBP_Social_Search_Tab_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  SearchTerm                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Social_Search_Tab_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature(struct FText* SearchTerm)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature");

	UWBP_Social_Search_Tab_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature_Params params;
	params.SearchTerm = SearchTerm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ExecuteUbergraph_WBP_Social_Search_Tab
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Search_Tab_C::ExecuteUbergraph_WBP_Social_Search_Tab(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ExecuteUbergraph_WBP_Social_Search_Tab");

	UWBP_Social_Search_Tab_C_ExecuteUbergraph_WBP_Social_Search_Tab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
