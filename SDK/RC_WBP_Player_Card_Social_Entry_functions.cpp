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

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.SetCurrentInfoContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                InfoContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::SetCurrentInfoContainer(class UObject** InfoContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.SetCurrentInfoContainer");

	UWBP_Player_Card_Social_Entry_C_SetCurrentInfoContainer_Params params;
	params.InfoContainer = InfoContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UpdatePlayerCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::UpdatePlayerCard(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UpdatePlayerCard");

	UWBP_Player_Card_Social_Entry_C_UpdatePlayerCard_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.SetHoverState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::SetHoverState(bool* IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.SetHoverState");

	UWBP_Player_Card_Social_Entry_C_SetHoverState_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.GetDisplayItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWidget*               ActiveDisplayItem              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::GetDisplayItem(class UKSWidget** ActiveDisplayItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.GetDisplayItem");

	UWBP_Player_Card_Social_Entry_C_GetDisplayItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveDisplayItem != nullptr)
		*ActiveDisplayItem = params.ActiveDisplayItem;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UpdateDataItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::UpdateDataItem(class UObject** Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UpdateDataItem");

	UWBP_Player_Card_Social_Entry_C_UpdateDataItem_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::BP_OnItemSelectionChanged(bool* bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnItemSelectionChanged");

	UWBP_Player_Card_Social_Entry_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::BP_OnItemExpansionChanged(bool* bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnItemExpansionChanged");

	UWBP_Player_Card_Social_Entry_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_Player_Card_Social_Entry_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnEntryReleased");

	UWBP_Player_Card_Social_Entry_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject**                ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::OnListItemObjectSet(class UObject** ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnListItemObjectSet");

	UWBP_Player_Card_Social_Entry_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.InitializeWidget");

	UWBP_Player_Card_Social_Entry_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_Player_Card_Social_Entry_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UninitializeWidget");

	UWBP_Player_Card_Social_Entry_C_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnHeaderClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::OnHeaderClicked(class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnHeaderClicked");

	UWBP_Player_Card_Social_Entry_C_OnHeaderClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnPlayerClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C** Selected_Player_Card           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::OnPlayerClicked(class UWBP_player_card_module_C** Selected_Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnPlayerClicked");

	UWBP_Player_Card_Social_Entry_C_OnPlayerClicked_Params params;
	params.Selected_Player_Card = Selected_Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Player_Card_Social_Entry_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnMouseEnter");

	UWBP_Player_Card_Social_Entry_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Player_Card_Social_Entry_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnMouseLeave");

	UWBP_Player_Card_Social_Entry_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_Player_Card_Social_Entry_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnShown");

	UWBP_Player_Card_Social_Entry_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.HandlePlayerContainerUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::HandlePlayerContainerUpdate(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.HandlePlayerContainerUpdate");

	UWBP_Player_Card_Social_Entry_C_HandlePlayerContainerUpdate_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.ExecuteUbergraph_WBP_Player_Card_Social_Entry
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::ExecuteUbergraph_WBP_Player_Card_Social_Entry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.ExecuteUbergraph_WBP_Player_Card_Social_Entry");

	UWBP_Player_Card_Social_Entry_C_ExecuteUbergraph_WBP_Player_Card_Social_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Player_Card_Social_Entry_C::OnClicked__DelegateSignature(class UUserWidget** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnClicked__DelegateSignature");

	UWBP_Player_Card_Social_Entry_C_OnClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
