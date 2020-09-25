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

// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.IsValidWeaponType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValidWeaponType              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_OutOfAmmoAlert_C::IsValidWeaponType(bool* IsValidWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.IsValidWeaponType");

	UWBP_OutOfAmmoAlert_C_IsValidWeaponType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValidWeaponType != nullptr)
		*IsValidWeaponType = params.IsValidWeaponType;
}


// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.HandleAmmoChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_OutOfAmmoAlert_C::HandleAmmoChanged(class UKSWeaponComponent** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.HandleAmmoChanged");

	UWBP_OutOfAmmoAlert_C_HandleAmmoChanged_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.BindToAmmoUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_OutOfAmmoAlert_C::BindToAmmoUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.BindToAmmoUpdate");

	UWBP_OutOfAmmoAlert_C_BindToAmmoUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.PostSetActiveWeaponComponent
// (Event, Protected, BlueprintEvent)

void UWBP_OutOfAmmoAlert_C::PostSetActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.PostSetActiveWeaponComponent");

	UWBP_OutOfAmmoAlert_C_PostSetActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.PreClearActiveWeaponComponent
// (Event, Protected, BlueprintEvent)

void UWBP_OutOfAmmoAlert_C::PreClearActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.PreClearActiveWeaponComponent");

	UWBP_OutOfAmmoAlert_C_PreClearActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_OutOfAmmoAlert_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.Construct");

	UWBP_OutOfAmmoAlert_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.ExecuteUbergraph_WBP_OutOfAmmoAlert
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_OutOfAmmoAlert_C::ExecuteUbergraph_WBP_OutOfAmmoAlert(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.ExecuteUbergraph_WBP_OutOfAmmoAlert");

	UWBP_OutOfAmmoAlert_C_ExecuteUbergraph_WBP_OutOfAmmoAlert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
