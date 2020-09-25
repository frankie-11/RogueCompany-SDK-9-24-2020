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

// Function HitIndicatorSub.HitIndicatorSub_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitIndicatorSub_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndicatorSub.HitIndicatorSub_C.Tick");

	UHitIndicatorSub_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndicatorSub.HitIndicatorSub_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UHitIndicatorSub_C::WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndicatorSub.HitIndicatorSub_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1");

	UHitIndicatorSub_C_WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndicatorSub.HitIndicatorSub_C.StartDamageAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                InHitLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInIsArmorHit                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitIndicatorSub_C::StartDamageAnim(struct FVector* InHitLocation, bool* bInIsArmorHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndicatorSub.HitIndicatorSub_C.StartDamageAnim");

	UHitIndicatorSub_C_StartDamageAnim_Params params;
	params.InHitLocation = InHitLocation;
	params.bInIsArmorHit = bInIsArmorHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndicatorSub.HitIndicatorSub_C.ExecuteUbergraph_HitIndicatorSub
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitIndicatorSub_C::ExecuteUbergraph_HitIndicatorSub(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndicatorSub.HitIndicatorSub_C.ExecuteUbergraph_HitIndicatorSub");

	UHitIndicatorSub_C_ExecuteUbergraph_HitIndicatorSub_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
