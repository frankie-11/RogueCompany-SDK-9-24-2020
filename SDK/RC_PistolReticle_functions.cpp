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

// Function PistolReticle.PistolReticle_C.UpdateOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolReticle_C::UpdateOffset(float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.UpdateOffset");

	UPistolReticle_C_UpdateOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolReticle.PistolReticle_C.ChangeADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolReticle_C::ChangeADS(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.ChangeADS");

	UPistolReticle_C_ChangeADS_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolReticle.PistolReticle_C.ForceADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolReticle_C::ForceADS(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.ForceADS");

	UPistolReticle_C_ForceADS_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolReticle.PistolReticle_C.HitConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void UPistolReticle_C::HitConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.HitConfirm");

	UPistolReticle_C_HitConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolReticle.PistolReticle_C.Headshot
// (Public, BlueprintCallable, BlueprintEvent)

void UPistolReticle_C::Headshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.Headshot");

	UPistolReticle_C_Headshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolReticle.PistolReticle_C.KillConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void UPistolReticle_C::KillConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.KillConfirm");

	UPistolReticle_C_KillConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolReticle.PistolReticle_C.GrenadeTick
// (BlueprintCallable, BlueprintEvent)

void UPistolReticle_C::GrenadeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.GrenadeTick");

	UPistolReticle_C_GrenadeTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolReticle.PistolReticle_C.GrenadeCook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TickPeriod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolReticle_C::GrenadeCook(bool* Active, float* TickPeriod)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.GrenadeCook");

	UPistolReticle_C_GrenadeCook_Params params;
	params.Active = Active;
	params.TickPeriod = TickPeriod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolReticle.PistolReticle_C.ExecuteUbergraph_PistolReticle
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolReticle_C::ExecuteUbergraph_PistolReticle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.ExecuteUbergraph_PistolReticle");

	UPistolReticle_C_ExecuteUbergraph_PistolReticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
