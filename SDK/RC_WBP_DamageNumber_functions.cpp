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

// Function WBP_DamageNumber.WBP_DamageNumber_C.UpdateVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          PlayAnim                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation**       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DamageNumber_C::UpdateVisuals(struct FSlateColor* Color, bool* PlayAnim, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.UpdateVisuals");

	UWBP_DamageNumber_C_UpdateVisuals_Params params;
	params.Color = Color;
	params.PlayAnim = PlayAnim;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Immune
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DamageNumber_C::Handle_Immune()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Immune");

	UWBP_DamageNumber_C_Handle_Immune_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Normal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DamageNumber_C::Handle_Normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Normal");

	UWBP_DamageNumber_C_Handle_Normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Lethal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DamageNumber_C::Handle_Lethal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Lethal");

	UWBP_DamageNumber_C_Handle_Lethal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Handle NonLeathal Headshot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DamageNumber_C::Handle_NonLeathal_Headshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Handle NonLeathal Headshot");

	UWBP_DamageNumber_C_Handle_NonLeathal_Headshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Damage Amount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DamageNumber_C::Handle_Damage_Amount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Damage Amount");

	UWBP_DamageNumber_C_Handle_Damage_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.PlayFlourishAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_DamageNumber_C::PlayFlourishAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.PlayFlourishAnimation");

	UWBP_DamageNumber_C_PlayFlourishAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.OnDisplayInformationReset
// (Event, Public, BlueprintEvent)

void UWBP_DamageNumber_C::OnDisplayInformationReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.OnDisplayInformationReset");

	UWBP_DamageNumber_C_OnDisplayInformationReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.OnDisplaySpecialDamageInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         CurrentDamageAmount            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSpecialDamageColors*   DamageColors                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          bChangePosition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DamageNumber_C::OnDisplaySpecialDamageInfo(float* CurrentDamageAmount, struct FSpecialDamageColors* DamageColors, bool* bChangePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.OnDisplaySpecialDamageInfo");

	UWBP_DamageNumber_C_OnDisplaySpecialDamageInfo_Params params;
	params.CurrentDamageAmount = CurrentDamageAmount;
	params.DamageColors = DamageColors;
	params.bChangePosition = bChangePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.HandleFlourishFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_DamageNumber_C::HandleFlourishFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.HandleFlourishFinished");

	UWBP_DamageNumber_C_HandleFlourishFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.ExecuteUbergraph_WBP_DamageNumber
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DamageNumber_C::ExecuteUbergraph_WBP_DamageNumber(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.ExecuteUbergraph_WBP_DamageNumber");

	UWBP_DamageNumber_C_ExecuteUbergraph_WBP_DamageNumber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
