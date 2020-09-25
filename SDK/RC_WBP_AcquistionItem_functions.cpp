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

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails*   CosmeticSlotDetails            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_KSCosmeticItemDisplay_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_AcquistionItem_C::OnSlotHovered(struct FCosmeticSlotDetails* CosmeticSlotDetails, bool* IsGamepad, class UWBP_KSCosmeticItemDisplay_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHovered");

	UWBP_AcquistionItem_C_OnSlotHovered_Params params;
	params.CosmeticSlotDetails = CosmeticSlotDetails;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCosmeticSlotDetails*   CosmeticSlotDetails            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_AcquistionItem_C::OnSlotClicked(class UWBP_KSCosmeticItemDisplay_C** Widget, struct FCosmeticSlotDetails* CosmeticSlotDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotClicked");

	UWBP_AcquistionItem_C_OnSlotClicked_Params params;
	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AcquistionItem.WBP_AcquistionItem_C.SetSlotItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        SlotItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AcquistionItem_C::SetSlotItem(class UPUMG_StoreItem** SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.SetSlotItem");

	UWBP_AcquistionItem_C_SetSlotItem_Params params;
	params.SlotItem = SlotItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AcquistionItem.WBP_AcquistionItem_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AcquistionItem_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.InitializeWidget");

	UWBP_AcquistionItem_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AcquistionItem.WBP_AcquistionItem_C.ExecuteUbergraph_WBP_AcquistionItem
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AcquistionItem_C::ExecuteUbergraph_WBP_AcquistionItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.ExecuteUbergraph_WBP_AcquistionItem");

	UWBP_AcquistionItem_C_ExecuteUbergraph_WBP_AcquistionItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWidget**              Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_AcquistionItem_C::OnSlotHover__DelegateSignature(class UPUMG_StoreItem** Item, class UKSWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHover__DelegateSignature");

	UWBP_AcquistionItem_C_OnSlotHover__DelegateSignature_Params params;
	params.Item = Item;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AcquistionItem_C::OnSlotSelected__DelegateSignature(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotSelected__DelegateSignature");

	UWBP_AcquistionItem_C_OnSlotSelected__DelegateSignature_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
