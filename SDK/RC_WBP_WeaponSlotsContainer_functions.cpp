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

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.FindActiveSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     ActiveWeaponComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_WeaponSlotsContainer_C::FindActiveSlot(class UKSWeaponComponent** ActiveWeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.FindActiveSlot");

	UWBP_WeaponSlotsContainer_C_FindActiveSlot_Params params;
	params.ActiveWeaponComponent = ActiveWeaponComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.RefreshActiveSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WeaponSlotsContainer_C::RefreshActiveSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.RefreshActiveSlot");

	UWBP_WeaponSlotsContainer_C_RefreshActiveSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.HandleInputStop
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WeaponSlotsContainer_C::HandleInputStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.HandleInputStop");

	UWBP_WeaponSlotsContainer_C_HandleInputStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.HandleInputHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TotalTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WeaponSlotsContainer_C::HandleInputHold(float* TotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.HandleInputHold");

	UWBP_WeaponSlotsContainer_C_HandleInputHold_Params params;
	params.TotalTime = TotalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.ResetWeaponSlotsText
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WeaponSlotsContainer_C::ResetWeaponSlotsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.ResetWeaponSlotsText");

	UWBP_WeaponSlotsContainer_C_ResetWeaponSlotsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WeaponSlotsContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.Construct");

	UWBP_WeaponSlotsContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnUpdatedPawnInventorySlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FPlayerInventorySlot*   InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_WeaponSlotsContainer_C::OnUpdatedPawnInventorySlot(struct FPlayerInventorySlot* InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnUpdatedPawnInventorySlot");

	UWBP_WeaponSlotsContainer_C_OnUpdatedPawnInventorySlot_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnActivePawnInventorySlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FPlayerInventorySlot*   InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_WeaponSlotsContainer_C::OnActivePawnInventorySlot(struct FPlayerInventorySlot* InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnActivePawnInventorySlot");

	UWBP_WeaponSlotsContainer_C_OnActivePawnInventorySlot_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnRemovedPawnInventorySlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FPlayerInventorySlot*   InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_WeaponSlotsContainer_C::OnRemovedPawnInventorySlot(struct FPlayerInventorySlot* InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnRemovedPawnInventorySlot");

	UWBP_WeaponSlotsContainer_C_OnRemovedPawnInventorySlot_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WeaponSlotsContainer_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.InitializeWidget");

	UWBP_WeaponSlotsContainer_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.StartHoldProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HoldTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WeaponSlotsContainer_C::StartHoldProgress(float* HoldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.StartHoldProgress");

	UWBP_WeaponSlotsContainer_C_StartHoldProgress_Params params;
	params.HoldTime = HoldTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.CloseHoldProgress
// (BlueprintCallable, BlueprintEvent)

void UWBP_WeaponSlotsContainer_C::CloseHoldProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.CloseHoldProgress");

	UWBP_WeaponSlotsContainer_C_CloseHoldProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.Tick Wheel
// (BlueprintCallable, BlueprintEvent)

void UWBP_WeaponSlotsContainer_C::Tick_Wheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.Tick Wheel");

	UWBP_WeaponSlotsContainer_C_Tick_Wheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.ExecuteUbergraph_WBP_WeaponSlotsContainer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WeaponSlotsContainer_C::ExecuteUbergraph_WBP_WeaponSlotsContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.ExecuteUbergraph_WBP_WeaponSlotsContainer");

	UWBP_WeaponSlotsContainer_C_ExecuteUbergraph_WBP_WeaponSlotsContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
