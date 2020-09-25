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

// Function StatusEffect.StatusEffect_C.StopHideTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UStatusEffect_C::StopHideTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.StopHideTimer");

	UStatusEffect_C_StopHideTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.StartHideTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffect_C::StartHideTimer(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.StartHideTimer");

	UStatusEffect_C_StartHideTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UStatusEffect_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.PreClearPawn");

	UStatusEffect_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UStatusEffect_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.PostSetPawn");

	UStatusEffect_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.RevealStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Revealed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Permanent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffect_C::RevealStatus(bool* Revealed, bool* Permanent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.RevealStatus");

	UStatusEffect_C_RevealStatus_Params params;
	params.Revealed = Revealed;
	params.Permanent = Permanent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.OnStuck
// (BlueprintCallable, BlueprintEvent)

void UStatusEffect_C::OnStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.OnStuck");

	UStatusEffect_C_OnStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.HideTimeExpired
// (BlueprintCallable, BlueprintEvent)

void UStatusEffect_C::HideTimeExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.HideTimeExpired");

	UStatusEffect_C_HideTimeExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.UpdateRevealStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsRevealed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffect_C::UpdateRevealStatus(bool* IsRevealed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.UpdateRevealStatus");

	UStatusEffect_C_UpdateRevealStatus_Params params;
	params.IsRevealed = IsRevealed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.ExecuteUbergraph_StatusEffect
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffect_C::ExecuteUbergraph_StatusEffect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.ExecuteUbergraph_StatusEffect");

	UStatusEffect_C_ExecuteUbergraph_StatusEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
