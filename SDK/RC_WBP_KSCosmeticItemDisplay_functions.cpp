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

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetItemOwned
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemDisplay_C::SetItemOwned(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetItemOwned");

	UWBP_KSCosmeticItemDisplay_C_SetItemOwned_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_KSCosmeticItemDisplay_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.NavigateConfirm");

	UWBP_KSCosmeticItemDisplay_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ResetSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::ResetSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ResetSlot");

	UWBP_KSCosmeticItemDisplay_C_ResetSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetWeaponSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::SetWeaponSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetWeaponSlot");

	UWBP_KSCosmeticItemDisplay_C_SetWeaponSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCornerIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShowIcon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemDisplay_C::SetCornerIcon(bool* bShowIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCornerIcon");

	UWBP_KSCosmeticItemDisplay_C_SetCornerIcon_Params params;
	params.bShowIcon = bShowIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCosmeticSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::SetCosmeticSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCosmeticSlot");

	UWBP_KSCosmeticItemDisplay_C_SetCosmeticSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnClickSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnClickSound");

	UWBP_KSCosmeticItemDisplay_C_OnClickSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHoverSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHoverSound");

	UWBP_KSCosmeticItemDisplay_C_OnHoverSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PopulateSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                KSItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem**             AssiocatedJobItem              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemDisplay_C::PopulateSlot(class UKSItem** KSItem, class UKSJobItem** AssiocatedJobItem, class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PopulateSlot");

	UWBP_KSCosmeticItemDisplay_C_PopulateSlot_Params params;
	params.KSItem = KSItem;
	params.AssiocatedJobItem = AssiocatedJobItem;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.Construct");

	UWBP_KSCosmeticItemDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemDisplay_C::OnHovered(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHovered");

	UWBP_KSCosmeticItemDisplay_C_OnHovered_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::OnButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonUnhovered");

	UWBP_KSCosmeticItemDisplay_C_OnButtonUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemDisplay_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.InitializeWidget");

	UWBP_KSCosmeticItemDisplay_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemDisplay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PreConstruct");

	UWBP_KSCosmeticItemDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::OnButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonClicked");

	UWBP_KSCosmeticItemDisplay_C_OnButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadHover");

	UWBP_KSCosmeticItemDisplay_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadUnhover");

	UWBP_KSCosmeticItemDisplay_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallHovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::CallHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallHovered");

	UWBP_KSCosmeticItemDisplay_C_CallHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::CallUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallUnhovered");

	UWBP_KSCosmeticItemDisplay_C_CallUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetSlotActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemDisplay_C::SetSlotActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetSlotActive");

	UWBP_KSCosmeticItemDisplay_C_SetSlotActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ExecuteUbergraph_WBP_KSCosmeticItemDisplay
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KSCosmeticItemDisplay_C::ExecuteUbergraph_WBP_KSCosmeticItemDisplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ExecuteUbergraph_WBP_KSCosmeticItemDisplay");

	UWBP_KSCosmeticItemDisplay_C_ExecuteUbergraph_WBP_KSCosmeticItemDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnCosmeticClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCosmeticSlotDetails*   CosmeticSlotDetails            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_KSCosmeticItemDisplay_C::OnCosmeticClicked__DelegateSignature(class UWBP_KSCosmeticItemDisplay_C** Widget, struct FCosmeticSlotDetails* CosmeticSlotDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnCosmeticClicked__DelegateSignature");

	UWBP_KSCosmeticItemDisplay_C_OnCosmeticClicked__DelegateSignature_Params params;
	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnUnhover__DelegateSignature");

	UWBP_KSCosmeticItemDisplay_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails*   CosmeticSlotDetails            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_KSCosmeticItemDisplay_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_KSCosmeticItemDisplay_C::OnHover__DelegateSignature(struct FCosmeticSlotDetails* CosmeticSlotDetails, bool* IsGamepad, class UWBP_KSCosmeticItemDisplay_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHover__DelegateSignature");

	UWBP_KSCosmeticItemDisplay_C_OnHover__DelegateSignature_Params params;
	params.CosmeticSlotDetails = CosmeticSlotDetails;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
