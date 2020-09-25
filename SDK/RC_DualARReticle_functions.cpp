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

// Function DualARReticle.DualARReticle_C.ChangeADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDualARReticle_C::ChangeADS(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function DualARReticle.DualARReticle_C.ChangeADS");

	UDualARReticle_C_ChangeADS_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualARReticle.DualARReticle_C.ForceADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDualARReticle_C::ForceADS(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function DualARReticle.DualARReticle_C.ForceADS");

	UDualARReticle_C_ForceADS_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualARReticle.DualARReticle_C.HitConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void UDualARReticle_C::HitConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualARReticle.DualARReticle_C.HitConfirm");

	UDualARReticle_C_HitConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualARReticle.DualARReticle_C.Headshot
// (Public, BlueprintCallable, BlueprintEvent)

void UDualARReticle_C::Headshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualARReticle.DualARReticle_C.Headshot");

	UDualARReticle_C_Headshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualARReticle.DualARReticle_C.KillConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void UDualARReticle_C::KillConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualARReticle.DualARReticle_C.KillConfirm");

	UDualARReticle_C_KillConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualARReticle.DualARReticle_C.GrenadeCook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TickPeriod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDualARReticle_C::GrenadeCook(bool* Active, float* TickPeriod)
{
	static auto fn = UObject::FindObject<UFunction>("Function DualARReticle.DualARReticle_C.GrenadeCook");

	UDualARReticle_C_GrenadeCook_Params params;
	params.Active = Active;
	params.TickPeriod = TickPeriod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualARReticle.DualARReticle_C.GrenadeTick
// (BlueprintCallable, BlueprintEvent)

void UDualARReticle_C::GrenadeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualARReticle.DualARReticle_C.GrenadeTick");

	UDualARReticle_C_GrenadeTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualARReticle.DualARReticle_C.UpdateOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDualARReticle_C::UpdateOffset(float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DualARReticle.DualARReticle_C.UpdateOffset");

	UDualARReticle_C_UpdateOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualARReticle.DualARReticle_C.ExecuteUbergraph_DualARReticle
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDualARReticle_C::ExecuteUbergraph_DualARReticle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DualARReticle.DualARReticle_C.ExecuteUbergraph_DualARReticle");

	UDualARReticle_C_ExecuteUbergraph_DualARReticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
