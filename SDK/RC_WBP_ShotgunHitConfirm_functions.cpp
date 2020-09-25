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

// Function WBP_ShotgunHitConfirm.WBP_ShotgunHitConfirm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ShotgunHitConfirm_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShotgunHitConfirm.WBP_ShotgunHitConfirm_C.Construct");

	UWBP_ShotgunHitConfirm_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShotgunHitConfirm.WBP_ShotgunHitConfirm_C.PlayFadeOut
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShotgunHitConfirm_C::PlayFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShotgunHitConfirm.WBP_ShotgunHitConfirm_C.PlayFadeOut");

	UWBP_ShotgunHitConfirm_C_PlayFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShotgunHitConfirm.WBP_ShotgunHitConfirm_C.HandleFadeoutFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShotgunHitConfirm_C::HandleFadeoutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShotgunHitConfirm.WBP_ShotgunHitConfirm_C.HandleFadeoutFinished");

	UWBP_ShotgunHitConfirm_C_HandleFadeoutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShotgunHitConfirm.WBP_ShotgunHitConfirm_C.PlayEliminationFlourish
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShotgunHitConfirm_C::PlayEliminationFlourish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShotgunHitConfirm.WBP_ShotgunHitConfirm_C.PlayEliminationFlourish");

	UWBP_ShotgunHitConfirm_C_PlayEliminationFlourish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShotgunHitConfirm.WBP_ShotgunHitConfirm_C.ExecuteUbergraph_WBP_ShotgunHitConfirm
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShotgunHitConfirm_C::ExecuteUbergraph_WBP_ShotgunHitConfirm(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShotgunHitConfirm.WBP_ShotgunHitConfirm_C.ExecuteUbergraph_WBP_ShotgunHitConfirm");

	UWBP_ShotgunHitConfirm_C_ExecuteUbergraph_WBP_ShotgunHitConfirm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
