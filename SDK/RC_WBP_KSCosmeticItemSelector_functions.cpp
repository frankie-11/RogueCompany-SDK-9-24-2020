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

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_KSCosmeticItemSelector_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.NavigateConfirm");

	UWBP_KSCosmeticItemSelector_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnHoverSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnHoverSound");

	UWBP_KSCosmeticItemSelector_C_OnHoverSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnClickSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnClickSound");

	UWBP_KSCosmeticItemSelector_C_OnClickSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.Construct");

	UWBP_KSCosmeticItemSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemSelector_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.InitializeWidget");

	UWBP_KSCosmeticItemSelector_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails*   CosmeticDetails                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_KSCosmeticItemDisplay_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_KSCosmeticItemSelector_C::OnCosmeticHover(struct FCosmeticSlotDetails* CosmeticDetails, bool* IsGamepad, class UWBP_KSCosmeticItemDisplay_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticHover");

	UWBP_KSCosmeticItemSelector_C_OnCosmeticHover_Params params;
	params.CosmeticDetails = CosmeticDetails;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticUnhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::OnCosmeticUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticUnhover");

	UWBP_KSCosmeticItemSelector_C_OnCosmeticUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCosmeticSlotDetails*   CosmeticSlotDetails            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_KSCosmeticItemSelector_C::OnCosmeticClicked(class UWBP_KSCosmeticItemDisplay_C** Widget, struct FCosmeticSlotDetails* CosmeticSlotDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticClicked");

	UWBP_KSCosmeticItemSelector_C_OnCosmeticClicked_Params params;
	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadHover");

	UWBP_KSCosmeticItemSelector_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadUnhover");

	UWBP_KSCosmeticItemSelector_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetSlotActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemSelector_C::SetSlotActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetSlotActive");

	UWBP_KSCosmeticItemSelector_C_SetSlotActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetItemOwned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemSelector_C::SetItemOwned(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetItemOwned");

	UWBP_KSCosmeticItemSelector_C_SetItemOwned_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.ExecuteUbergraph_WBP_KSCosmeticItemSelector
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemSelector_C::ExecuteUbergraph_WBP_KSCosmeticItemSelector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.ExecuteUbergraph_WBP_KSCosmeticItemSelector");

	UWBP_KSCosmeticItemSelector_C_ExecuteUbergraph_WBP_KSCosmeticItemSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnPurchaseItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemSelector_C::OnPurchaseItem__DelegateSignature(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnPurchaseItem__DelegateSignature");

	UWBP_KSCosmeticItemSelector_C_OnPurchaseItem__DelegateSignature_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                KSItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCosmeticSlotDetails*   CosmeticSlot                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_KSCosmeticItemSelector_C::OnItemSelected__DelegateSignature(class UKSItem** KSItem, class UWidget** Widget, struct FCosmeticSlotDetails* CosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemSelected__DelegateSignature");

	UWBP_KSCosmeticItemSelector_C_OnItemSelected__DelegateSignature_Params params;
	params.KSItem = KSItem;
	params.Widget = Widget;
	params.CosmeticSlot = CosmeticSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::OnItemUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemUnhovered__DelegateSignature");

	UWBP_KSCosmeticItemSelector_C_OnItemUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails*   CosmeticDetails                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UKSItem**                KSItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemSelector_C::OnItemHovered__DelegateSignature(struct FCosmeticSlotDetails* CosmeticDetails, class UKSItem** KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemHovered__DelegateSignature");

	UWBP_KSCosmeticItemSelector_C_OnItemHovered__DelegateSignature_Params params;
	params.CosmeticDetails = CosmeticDetails;
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
