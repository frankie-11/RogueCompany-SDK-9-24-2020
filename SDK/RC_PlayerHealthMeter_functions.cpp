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

// Function PlayerHealthMeter.PlayerHealthMeter_C.SetHealthMeterState
// (Native, Event, Public, BlueprintCallable)
// Parameters:
// struct FPlayerHealthMeterState* bpp__HealthMeterState__pf      (Parm)

void UPlayerHealthMeter_C::SetHealthMeterState(struct FPlayerHealthMeterState* bpp__HealthMeterState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.SetHealthMeterState");

	UPlayerHealthMeter_C_SetHealthMeterState_Params params;
	params.bpp__HealthMeterState__pf = bpp__HealthMeterState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.PreConstruct
// (BlueprintCosmetic, Native, Event, Public)
// Parameters:
// bool*                          bpp__IsDesignTime__pf          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHealthMeter_C::PreConstruct(bool* bpp__IsDesignTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.PreConstruct");

	UPlayerHealthMeter_C_PreConstruct_Params params;
	params.bpp__IsDesignTime__pf = bpp__IsDesignTime__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.PlayDamagePulse
// (Native, Public, BlueprintCallable)

void UPlayerHealthMeter_C::PlayDamagePulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.PlayDamagePulse");

	UPlayerHealthMeter_C_PlayDamagePulse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.Construct
// (BlueprintCosmetic, Native, Event, Public)

void UPlayerHealthMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.Construct");

	UPlayerHealthMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.Apply State To Segments
// (Native, Public, BlueprintCallable)

void UPlayerHealthMeter_C::Apply_State_To_Segments()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.Apply State To Segments");

	UPlayerHealthMeter_C_Apply_State_To_Segments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.Add Segments If Needed
// (Native, Public, BlueprintCallable)

void UPlayerHealthMeter_C::Add_Segments_If_Needed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.Add Segments If Needed");

	UPlayerHealthMeter_C_Add_Segments_If_Needed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
