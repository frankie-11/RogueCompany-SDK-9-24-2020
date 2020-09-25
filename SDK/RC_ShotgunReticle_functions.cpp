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

// Function ShotgunReticle.ShotgunReticle_C.IsValidWeaponType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSWeaponComponent**     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsValidWeaponType              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShotgunReticle_C::IsValidWeaponType(class UKSWeaponComponent** NewParam, bool* IsValidWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.IsValidWeaponType");

	UShotgunReticle_C_IsValidWeaponType_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValidWeaponType != nullptr)
		*IsValidWeaponType = params.IsValidWeaponType;
}


// Function ShotgunReticle.ShotgunReticle_C.ShouldHideAmmoGauge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSWeaponComponent**     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bShouldHideAmmoGauge           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShotgunReticle_C::ShouldHideAmmoGauge(class UKSWeaponComponent** NewParam, bool* bShouldHideAmmoGauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.ShouldHideAmmoGauge");

	UShotgunReticle_C_ShouldHideAmmoGauge_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldHideAmmoGauge != nullptr)
		*bShouldHideAmmoGauge = params.bShouldHideAmmoGauge;
}


// Function ShotgunReticle.ShotgunReticle_C.UpdateReloadBarPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UShotgunReticle_C::UpdateReloadBarPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.UpdateReloadBarPosition");

	UShotgunReticle_C_UpdateReloadBarPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.UpdateCrosshairDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UShotgunReticle_C::UpdateCrosshairDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.UpdateCrosshairDisplay");

	UShotgunReticle_C_UpdateCrosshairDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.ColorSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShotgunReticle_C::ColorSet(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.ColorSet");

	UShotgunReticle_C_ColorSet_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.FadeClipMeter
// (Public, BlueprintCallable, BlueprintEvent)

void UShotgunReticle_C::FadeClipMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.FadeClipMeter");

	UShotgunReticle_C_FadeClipMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.UpdateOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShotgunReticle_C::UpdateOffset(float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.UpdateOffset");

	UShotgunReticle_C_UpdateOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.ChangeADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShotgunReticle_C::ChangeADS(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.ChangeADS");

	UShotgunReticle_C_ChangeADS_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.ForceADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShotgunReticle_C::ForceADS(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.ForceADS");

	UShotgunReticle_C_ForceADS_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.HitConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void UShotgunReticle_C::HitConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.HitConfirm");

	UShotgunReticle_C_HitConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.Headshot
// (Public, BlueprintCallable, BlueprintEvent)

void UShotgunReticle_C::Headshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.Headshot");

	UShotgunReticle_C_Headshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.KillConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void UShotgunReticle_C::KillConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.KillConfirm");

	UShotgunReticle_C_KillConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.GrenadeCook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TickPeriod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShotgunReticle_C::GrenadeCook(bool* Active, float* TickPeriod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.GrenadeCook");

	UShotgunReticle_C_GrenadeCook_Params params;
	params.Active = Active;
	params.TickPeriod = TickPeriod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.GrenadeTick
// (BlueprintCallable, BlueprintEvent)

void UShotgunReticle_C::GrenadeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.GrenadeTick");

	UShotgunReticle_C_GrenadeTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.UpdateAmmoGauge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShotgunReticle_C::UpdateAmmoGauge(class UKSWeaponComponent** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.UpdateAmmoGauge");

	UShotgunReticle_C_UpdateAmmoGauge_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShotgunReticle.ShotgunReticle_C.ExecuteUbergraph_ShotgunReticle
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShotgunReticle_C::ExecuteUbergraph_ShotgunReticle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.ExecuteUbergraph_ShotgunReticle");

	UShotgunReticle_C_ExecuteUbergraph_ShotgunReticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
