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

// Function WBP_WeaponSlot.WBP_WeaponSlot_C.ToggleActiveState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WeaponSlot_C::ToggleActiveState(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlot.WBP_WeaponSlot_C.ToggleActiveState");

	UWBP_WeaponSlot_C_ToggleActiveState_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlot.WBP_WeaponSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WeaponSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlot.WBP_WeaponSlot_C.Construct");

	UWBP_WeaponSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlot.WBP_WeaponSlot_C.HandleSlotRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWeaponAsset**         WeaponAsset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WeaponSlot_C::HandleSlotRemoved(class UKSWeaponAsset** WeaponAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlot.WBP_WeaponSlot_C.HandleSlotRemoved");

	UWBP_WeaponSlot_C_HandleSlotRemoved_Params params;
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlot.WBP_WeaponSlot_C.UpdateSlotDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWeaponAsset**         WeaponAsset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WeaponSlot_C::UpdateSlotDisplay(class UKSWeaponAsset** WeaponAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlot.WBP_WeaponSlot_C.UpdateSlotDisplay");

	UWBP_WeaponSlot_C_UpdateSlotDisplay_Params params;
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlot.WBP_WeaponSlot_C.ResetSlot
// (BlueprintCallable, BlueprintEvent)

void UWBP_WeaponSlot_C::ResetSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlot.WBP_WeaponSlot_C.ResetSlot");

	UWBP_WeaponSlot_C_ResetSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponSlot.WBP_WeaponSlot_C.ExecuteUbergraph_WBP_WeaponSlot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WeaponSlot_C::ExecuteUbergraph_WBP_WeaponSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlot.WBP_WeaponSlot_C.ExecuteUbergraph_WBP_WeaponSlot");

	UWBP_WeaponSlot_C_ExecuteUbergraph_WBP_WeaponSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
