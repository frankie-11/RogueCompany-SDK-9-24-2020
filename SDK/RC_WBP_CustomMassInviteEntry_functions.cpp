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

// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.GetPlayerInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInviteEntry_C::GetPlayerInfo(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.GetPlayerInfo");

	UWBP_CustomMassInviteEntry_C_GetPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (playerinfo != nullptr)
		*playerinfo = params.playerinfo;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_CustomMassInviteEntry_C_BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_CustomMassInviteEntry_C_BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_CustomMassInviteEntry_C_BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInviteEntry_C::BP_OnItemSelectionChanged(bool* bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemSelectionChanged");

	UWBP_CustomMassInviteEntry_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInviteEntry_C::BP_OnItemExpansionChanged(bool* bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemExpansionChanged");

	UWBP_CustomMassInviteEntry_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnEntryReleased");

	UWBP_CustomMassInviteEntry_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject**                ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInviteEntry_C::OnListItemObjectSet(class UObject** ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnListItemObjectSet");

	UWBP_CustomMassInviteEntry_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ForceHovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::ForceHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ForceHovered");

	UWBP_CustomMassInviteEntry_C_ForceHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ForceUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::ForceUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ForceUnhovered");

	UWBP_CustomMassInviteEntry_C_ForceUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.PlaySelection
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::PlaySelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.PlaySelection");

	UWBP_CustomMassInviteEntry_C_PlaySelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.PlayDeselection
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::PlayDeselection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.PlayDeselection");

	UWBP_CustomMassInviteEntry_C_PlayDeselection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInviteEntry_C::SetSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.SetSelected");

	UWBP_CustomMassInviteEntry_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CustomMassInviteEntry_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseEnter");

	UWBP_CustomMassInviteEntry_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CustomMassInviteEntry_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseLeave");

	UWBP_CustomMassInviteEntry_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ExecuteUbergraph_WBP_CustomMassInviteEntry
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomMassInviteEntry_C::ExecuteUbergraph_WBP_CustomMassInviteEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ExecuteUbergraph_WBP_CustomMassInviteEntry");

	UWBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomMassInviteEntry_C::OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnClicked__DelegateSignature");

	UWBP_CustomMassInviteEntry_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
