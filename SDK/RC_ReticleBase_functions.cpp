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

// Function ReticleBase.ReticleBase_C.GetAmmoState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSWeaponComponent**     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EAmmoState                     Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UReticleBase_C::GetAmmoState(class UKSWeaponComponent** NewParam, EAmmoState* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.GetAmmoState");

	UReticleBase_C_GetAmmoState_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ReticleBase.ReticleBase_C.HitConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void UReticleBase_C::HitConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.HitConfirm");

	UReticleBase_C_HitConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticleBase.ReticleBase_C.ForceADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticleBase_C::ForceADS(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.ForceADS");

	UReticleBase_C_ForceADS_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticleBase.ReticleBase_C.GrenadeCook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TickPeriod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticleBase_C::GrenadeCook(bool* Active, float* TickPeriod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.GrenadeCook");

	UReticleBase_C_GrenadeCook_Params params;
	params.Active = Active;
	params.TickPeriod = TickPeriod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticleBase.ReticleBase_C.ChangeADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticleBase_C::ChangeADS(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.ChangeADS");

	UReticleBase_C_ChangeADS_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticleBase.ReticleBase_C.KillConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void UReticleBase_C::KillConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.KillConfirm");

	UReticleBase_C_KillConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticleBase.ReticleBase_C.Headshot
// (Public, BlueprintCallable, BlueprintEvent)

void UReticleBase_C::Headshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.Headshot");

	UReticleBase_C_Headshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticleBase.ReticleBase_C.UpdateOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticleBase_C::UpdateOffset(float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.UpdateOffset");

	UReticleBase_C_UpdateOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
