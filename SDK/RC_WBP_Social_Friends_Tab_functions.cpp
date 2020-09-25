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

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Friends_Tab_C::FocusFirstItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstItem");

	UWBP_Social_Friends_Tab_C_FocusFirstItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.TryGetFirstItemForCategory
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKSSocialOverlaySection*       Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSPlayerInfo*           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Friends_Tab_C::TryGetFirstItemForCategory(EKSSocialOverlaySection* Category, class UKSPlayerInfo** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.TryGetFirstItemForCategory");

	UWBP_Social_Friends_Tab_C_TryGetFirstItemForCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FindFirstOnlinePlayerOrDefault
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Friends_Tab_C::FindFirstOnlinePlayerOrDefault(class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FindFirstOnlinePlayerOrDefault");

	UWBP_Social_Friends_Tab_C_FindFirstOnlinePlayerOrDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstOnlinePlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Friends_Tab_C::FocusFirstOnlinePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstOnlinePlayer");

	UWBP_Social_Friends_Tab_C_FocusFirstOnlinePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Social_Friends_Tab_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnFocusReceived");

	UWBP_Social_Friends_Tab_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.HandleItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Friends_Tab_C::HandleItemClicked(class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.HandleItemClicked");

	UWBP_Social_Friends_Tab_C_HandleItemClicked_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_Social_Friends_Tab_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.NavigateConfirm");

	UWBP_Social_Friends_Tab_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.GetFocusTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 Target                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Social_Friends_Tab_C::GetFocusTarget(class UWidget** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.GetFocusTarget");

	UWBP_Social_Friends_Tab_C_GetFocusTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Friends_Tab_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidget");

	UWBP_Social_Friends_Tab_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Friends_Tab_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.UninitializeWidget");

	UWBP_Social_Friends_Tab_C_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Friends_Tab_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject** Item, bool* bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");

	UWBP_Social_Friends_Tab_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_Social_Friends_Tab_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnShown");

	UWBP_Social_Friends_Tab_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Friends_Tab_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");

	UWBP_Social_Friends_Tab_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Friends_Tab_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnInputStateChanged");

	UWBP_Social_Friends_Tab_C_OnInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_Social_Friends_Tab_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidgetNavigation");

	UWBP_Social_Friends_Tab_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.ExecuteUbergraph_WBP_Social_Friends_Tab
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Friends_Tab_C::ExecuteUbergraph_WBP_Social_Friends_Tab(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.ExecuteUbergraph_WBP_Social_Friends_Tab");

	UWBP_Social_Friends_Tab_C_ExecuteUbergraph_WBP_Social_Friends_Tab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
