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

// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetAmmoInClipDisplaySize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ActiveWeaponComponent_C::SetAmmoInClipDisplaySize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetAmmoInClipDisplaySize");

	UWBP_ActiveWeaponComponent_C_SetAmmoInClipDisplaySize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetClipCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ActiveWeaponComponent_C::SetClipCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetClipCount");

	UWBP_ActiveWeaponComponent_C_SetClipCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.DetermineLowAmmo
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ActiveWeaponComponent_C::DetermineLowAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.DetermineLowAmmo");

	UWBP_ActiveWeaponComponent_C_DetermineLowAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.OnAmmoChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     WeaponComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ActiveWeaponComponent_C::OnAmmoChange(class UKSWeaponComponent** WeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.OnAmmoChange");

	UWBP_ActiveWeaponComponent_C_OnAmmoChange_Params params;
	params.WeaponComponent = WeaponComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetReserveAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ReserveAmmo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ActiveWeaponComponent_C::SetReserveAmmo(int* ReserveAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetReserveAmmo");

	UWBP_ActiveWeaponComponent_C_SetReserveAmmo_Params params;
	params.ReserveAmmo = ReserveAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.PostSetActiveWeaponComponent
// (Event, Protected, BlueprintEvent)

void UWBP_ActiveWeaponComponent_C::PostSetActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.PostSetActiveWeaponComponent");

	UWBP_ActiveWeaponComponent_C_PostSetActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.PreClearActiveWeaponComponent
// (Event, Protected, BlueprintEvent)

void UWBP_ActiveWeaponComponent_C::PreClearActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.PreClearActiveWeaponComponent");

	UWBP_ActiveWeaponComponent_C_PreClearActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ActiveWeaponComponent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.Construct");

	UWBP_ActiveWeaponComponent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.ExecuteUbergraph_WBP_ActiveWeaponComponent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ActiveWeaponComponent_C::ExecuteUbergraph_WBP_ActiveWeaponComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.ExecuteUbergraph_WBP_ActiveWeaponComponent");

	UWBP_ActiveWeaponComponent_C_ExecuteUbergraph_WBP_ActiveWeaponComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
