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

// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveStarted
// (Native, Event, Public)
// Parameters:
// class AKSCharacter**           bpp__SkyDiver__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UAttackBomb_WeaponComponent_C::OnSkyDiveStarted(class AKSCharacter** bpp__SkyDiver__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveStarted");

	UAttackBomb_WeaponComponent_C_OnSkyDiveStarted_Params params;
	params.bpp__SkyDiver__pf = bpp__SkyDiver__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveSkipped
// (Native, Event, Public)
// Parameters:
// class AKSCharacter**           bpp__SkyDiver__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UAttackBomb_WeaponComponent_C::OnSkyDiveSkipped(class AKSCharacter** bpp__SkyDiver__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveSkipped");

	UAttackBomb_WeaponComponent_C_OnSkyDiveSkipped_Params params;
	params.bpp__SkyDiver__pf = bpp__SkyDiver__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveEnded
// (Native, Event, Public)
// Parameters:
// class AKSCharacter**           bpp__SkyDiver__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UAttackBomb_WeaponComponent_C::OnSkyDiveEnded(class AKSCharacter** bpp__SkyDiver__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveEnded");

	UAttackBomb_WeaponComponent_C_OnSkyDiveEnded_Params params;
	params.bpp__SkyDiver__pf = bpp__SkyDiver__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.DoesCharacterHaveBackpack
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bpp__HasBackpack__pf           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAttackBomb_WeaponComponent_C::DoesCharacterHaveBackpack(bool* bpp__HasBackpack__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.DoesCharacterHaveBackpack");

	UAttackBomb_WeaponComponent_C_DoesCharacterHaveBackpack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__HasBackpack__pf != nullptr)
		*bpp__HasBackpack__pf = params.bpp__HasBackpack__pf;
}


// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.BombStateChange
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKSNeutralBombState*    bpp__BombState__pf             (Parm)

void UAttackBomb_WeaponComponent_C::BombStateChange(struct FKSNeutralBombState* bpp__BombState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.BombStateChange");

	UAttackBomb_WeaponComponent_C_BombStateChange_Params params;
	params.bpp__BombState__pf = bpp__BombState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnNeutralBombStateChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FKSNeutralBombState*    bpp__BombState__pf             (Parm)

void UAttackBomb_WeaponComponent_C::OnNeutralBombStateChanged__DelegateSignature(struct FKSNeutralBombState* bpp__BombState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnNeutralBombStateChanged__DelegateSignature");

	UAttackBomb_WeaponComponent_C_OnNeutralBombStateChanged__DelegateSignature_Params params;
	params.bpp__BombState__pf = bpp__BombState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
