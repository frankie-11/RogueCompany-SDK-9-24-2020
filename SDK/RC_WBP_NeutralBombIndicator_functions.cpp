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

// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_NeutralBombIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.Construct");

	UWBP_NeutralBombIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleBombStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSNeutralBombState*    BombState                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_NeutralBombIndicator_C::HandleBombStateChanged(struct FKSNeutralBombState* BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleBombStateChanged");

	UWBP_NeutralBombIndicator_C_HandleBombStateChanged_Params params;
	params.BombState = BombState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleViewedPawnChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerController**    Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OldViewTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 NewViewTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NeutralBombIndicator_C::HandleViewedPawnChanged(class AKSPlayerController** Controller, class AActor** OldViewTarget, class AActor** NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleViewedPawnChanged");

	UWBP_NeutralBombIndicator_C_HandleViewedPawnChanged_Params params;
	params.Controller = Controller;
	params.OldViewTarget = OldViewTarget;
	params.NewViewTarget = NewViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NeutralBombIndicator_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.InitializeWidget");

	UWBP_NeutralBombIndicator_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.ExecuteUbergraph_WBP_NeutralBombIndicator
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NeutralBombIndicator_C::ExecuteUbergraph_WBP_NeutralBombIndicator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.ExecuteUbergraph_WBP_NeutralBombIndicator");

	UWBP_NeutralBombIndicator_C_ExecuteUbergraph_WBP_NeutralBombIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
