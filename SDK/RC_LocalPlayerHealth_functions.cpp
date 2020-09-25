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

// Function LocalPlayerHealth.LocalPlayerHealth_C.ResetVisbility
// (Public, BlueprintCallable, BlueprintEvent)

void ULocalPlayerHealth_C::ResetVisbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.ResetVisbility");

	ULocalPlayerHealth_C_ResetVisbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.TriggerFadeAnim
// (Public, BlueprintCallable, BlueprintEvent)

void ULocalPlayerHealth_C::TriggerFadeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.TriggerFadeAnim");

	ULocalPlayerHealth_C_TriggerFadeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.OnOverhealChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         OldOverheal                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewOverheal                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAnimatedChange                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalPlayerHealth_C::OnOverhealChanged(float* OldOverheal, float* NewOverheal, bool* bAnimatedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.OnOverhealChanged");

	ULocalPlayerHealth_C_OnOverhealChanged_Params params;
	params.OldOverheal = OldOverheal;
	params.NewOverheal = NewOverheal;
	params.bAnimatedChange = bAnimatedChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULocalPlayerHealth_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.Construct");

	ULocalPlayerHealth_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.View_OnDeathStateChanged
// (Event, Public, BlueprintEvent)

void ULocalPlayerHealth_C::View_OnDeathStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.View_OnDeathStateChanged");

	ULocalPlayerHealth_C_View_OnDeathStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalPlayerHealth_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.InitializeWidget");

	ULocalPlayerHealth_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.OnHealthMeterStateChanged
// (Event, Public, BlueprintEvent)

void ULocalPlayerHealth_C::OnHealthMeterStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.OnHealthMeterStateChanged");

	ULocalPlayerHealth_C_OnHealthMeterStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.SetHealthText
// (BlueprintCallable, BlueprintEvent)

void ULocalPlayerHealth_C::SetHealthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.SetHealthText");

	ULocalPlayerHealth_C_SetHealthText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.OnJobChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UKSJobItem**             Job                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalPlayerHealth_C::OnJobChanged(class UKSJobItem** Job)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.OnJobChanged");

	ULocalPlayerHealth_C_OnJobChanged_Params params;
	params.Job = Job;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.OnHealthDecreased
// (Event, Public, BlueprintEvent)

void ULocalPlayerHealth_C::OnHealthDecreased()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.OnHealthDecreased");

	ULocalPlayerHealth_C_OnHealthDecreased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void ULocalPlayerHealth_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.PostSetPawn");

	ULocalPlayerHealth_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.ExecuteUbergraph_LocalPlayerHealth
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalPlayerHealth_C::ExecuteUbergraph_LocalPlayerHealth(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.ExecuteUbergraph_LocalPlayerHealth");

	ULocalPlayerHealth_C_ExecuteUbergraph_LocalPlayerHealth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
