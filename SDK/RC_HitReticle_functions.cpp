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

// Function HitReticle.HitReticle_C.OnHitAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UHitReticle_C::OnHitAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitReticle.HitReticle_C.OnHitAnimationFinished");

	UHitReticle_C_OnHitAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitReticle.HitReticle_C.ResetHitReticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Headshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Lethal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Down                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitReticle_C::ResetHitReticle(bool* Headshot, bool* Lethal, bool* Down)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitReticle.HitReticle_C.ResetHitReticle");

	UHitReticle_C_ResetHitReticle_Params params;
	params.Headshot = Headshot;
	params.Lethal = Lethal;
	params.Down = Down;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitReticle.HitReticle_C.ExecuteUbergraph_HitReticle
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitReticle_C::ExecuteUbergraph_HitReticle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitReticle.HitReticle_C.ExecuteUbergraph_HitReticle");

	UHitReticle_C_ExecuteUbergraph_HitReticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
