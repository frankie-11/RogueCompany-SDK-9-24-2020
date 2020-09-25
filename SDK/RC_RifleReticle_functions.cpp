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

// Function RifleReticle.RifleReticle_C.IsValidWeaponType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSWeaponComponent**     NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsValidWeaponType              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URifleReticle_C::IsValidWeaponType(class UKSWeaponComponent** NewParam1, bool* IsValidWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.IsValidWeaponType");

	URifleReticle_C_IsValidWeaponType_Params params;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValidWeaponType != nullptr)
		*IsValidWeaponType = params.IsValidWeaponType;
}


// Function RifleReticle.RifleReticle_C.ShouldHideAmmoGauge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSWeaponComponent**     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bShouldHideAmmoGauge           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URifleReticle_C::ShouldHideAmmoGauge(class UKSWeaponComponent** Weapon, bool* bShouldHideAmmoGauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.ShouldHideAmmoGauge");

	URifleReticle_C_ShouldHideAmmoGauge_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldHideAmmoGauge != nullptr)
		*bShouldHideAmmoGauge = params.bShouldHideAmmoGauge;
}


// Function RifleReticle.RifleReticle_C.ColorSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URifleReticle_C::ColorSet(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.ColorSet");

	URifleReticle_C_ColorSet_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.UpdateReticleDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InOffset                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URifleReticle_C::UpdateReticleDisplay(float* InOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.UpdateReticleDisplay");

	URifleReticle_C_UpdateReticleDisplay_Params params;
	params.InOffset = InOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URifleReticle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.Construct");

	URifleReticle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.UpdateOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URifleReticle_C::UpdateOffset(float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.UpdateOffset");

	URifleReticle_C_UpdateOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.ChangeADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URifleReticle_C::ChangeADS(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.ChangeADS");

	URifleReticle_C_ChangeADS_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.ForceADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URifleReticle_C::ForceADS(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.ForceADS");

	URifleReticle_C_ForceADS_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.HitConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void URifleReticle_C::HitConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.HitConfirm");

	URifleReticle_C_HitConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.Headshot
// (Public, BlueprintCallable, BlueprintEvent)

void URifleReticle_C::Headshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.Headshot");

	URifleReticle_C_Headshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.KillConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void URifleReticle_C::KillConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.KillConfirm");

	URifleReticle_C_KillConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.GrenadeCook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TickPeriod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URifleReticle_C::GrenadeCook(bool* Active, float* TickPeriod)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.GrenadeCook");

	URifleReticle_C_GrenadeCook_Params params;
	params.Active = Active;
	params.TickPeriod = TickPeriod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.GrenadeTick
// (BlueprintCallable, BlueprintEvent)

void URifleReticle_C::GrenadeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.GrenadeTick");

	URifleReticle_C_GrenadeTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.UpdateAmmoGauge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URifleReticle_C::UpdateAmmoGauge(class UKSWeaponComponent** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.UpdateAmmoGauge");

	URifleReticle_C_UpdateAmmoGauge_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.UpdateMagazineOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              NewOffset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URifleReticle_C::UpdateMagazineOffset(struct FVector2D* NewOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.UpdateMagazineOffset");

	URifleReticle_C_UpdateMagazineOffset_Params params;
	params.NewOffset = NewOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleReticle.RifleReticle_C.ExecuteUbergraph_RifleReticle
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URifleReticle_C::ExecuteUbergraph_RifleReticle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.ExecuteUbergraph_RifleReticle");

	URifleReticle_C_ExecuteUbergraph_RifleReticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
