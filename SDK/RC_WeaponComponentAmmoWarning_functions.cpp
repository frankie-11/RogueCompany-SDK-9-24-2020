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

// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.Get Ammo Warning Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   AmmoText                       (Parm, OutParm)

void UWeaponComponentAmmoWarning_C::Get_Ammo_Warning_Text(struct FText* AmmoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.Get Ammo Warning Text");

	UWeaponComponentAmmoWarning_C_Get_Ammo_Warning_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoText != nullptr)
		*AmmoText = params.AmmoText;
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.Update Visibility And State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponComponentAmmoWarning_C::Update_Visibility_And_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.Update Visibility And State");

	UWeaponComponentAmmoWarning_C_Update_Visibility_And_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UWeaponComponentAmmoWarning_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PostSetPawn");

	UWeaponComponentAmmoWarning_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UWeaponComponentAmmoWarning_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PreClearPawn");

	UWeaponComponentAmmoWarning_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PawnHealthChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponComponentAmmoWarning_C::PawnHealthChanged(class AKSCharacterBase** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PawnHealthChanged");

	UWeaponComponentAmmoWarning_C_PawnHealthChanged_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.AmmoStateChanged
// (Event, Protected, BlueprintEvent)

void UWeaponComponentAmmoWarning_C::AmmoStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.AmmoStateChanged");

	UWeaponComponentAmmoWarning_C_AmmoStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PostSetActiveWeaponComponent
// (Event, Protected, BlueprintEvent)

void UWeaponComponentAmmoWarning_C::PostSetActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PostSetActiveWeaponComponent");

	UWeaponComponentAmmoWarning_C_PostSetActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.ExecuteUbergraph_WeaponComponentAmmoWarning
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponComponentAmmoWarning_C::ExecuteUbergraph_WeaponComponentAmmoWarning(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.ExecuteUbergraph_WeaponComponentAmmoWarning");

	UWeaponComponentAmmoWarning_C_ExecuteUbergraph_WeaponComponentAmmoWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
