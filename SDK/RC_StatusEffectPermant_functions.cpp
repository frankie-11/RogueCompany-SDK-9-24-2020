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

// Function StatusEffectPermant.StatusEffectPermant_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerController**    Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OldViewTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 NewViewTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectPermant_C::CustomEvent_1(class AKSPlayerController** Controller, class AActor** OldViewTarget, class AActor** NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectPermant.StatusEffectPermant_C.CustomEvent_1");

	UStatusEffectPermant_C_CustomEvent_1_Params params;
	params.Controller = Controller;
	params.OldViewTarget = OldViewTarget;
	params.NewViewTarget = NewViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectPermant.StatusEffectPermant_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UStatusEffectPermant_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectPermant.StatusEffectPermant_C.PreClearPawn");

	UStatusEffectPermant_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectPermant.StatusEffectPermant_C.RevealStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Revealed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Permanent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectPermant_C::RevealStatus(bool* Revealed, bool* Permanent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectPermant.StatusEffectPermant_C.RevealStatus");

	UStatusEffectPermant_C_RevealStatus_Params params;
	params.Revealed = Revealed;
	params.Permanent = Permanent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectPermant.StatusEffectPermant_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UStatusEffectPermant_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectPermant.StatusEffectPermant_C.PostSetPawn");

	UStatusEffectPermant_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectPermant.StatusEffectPermant_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSpectating                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectPermant_C::CustomEvent_2(bool* IsSpectating)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectPermant.StatusEffectPermant_C.CustomEvent_2");

	UStatusEffectPermant_C_CustomEvent_2_Params params;
	params.IsSpectating = IsSpectating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectPermant.StatusEffectPermant_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStatusEffectPermant_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectPermant.StatusEffectPermant_C.Construct");

	UStatusEffectPermant_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectPermant.StatusEffectPermant_C.ExecuteUbergraph_StatusEffectPermant
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectPermant_C::ExecuteUbergraph_StatusEffectPermant(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectPermant.StatusEffectPermant_C.ExecuteUbergraph_StatusEffectPermant");

	UStatusEffectPermant_C_ExecuteUbergraph_StatusEffectPermant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
