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

// Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBruteStrengthModifierWarning_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.InitializeWidget");

	UBruteStrengthModifierWarning_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.OnHide
// (Event, Public, BlueprintEvent)

void UBruteStrengthModifierWarning_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.OnHide");

	UBruteStrengthModifierWarning_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.OnFade
// (BlueprintCallable, BlueprintEvent)

void UBruteStrengthModifierWarning_C::OnFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.OnFade");

	UBruteStrengthModifierWarning_C_OnFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.ExecuteUbergraph_BruteStrengthModifierWarning
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBruteStrengthModifierWarning_C::ExecuteUbergraph_BruteStrengthModifierWarning(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.ExecuteUbergraph_BruteStrengthModifierWarning");

	UBruteStrengthModifierWarning_C_ExecuteUbergraph_BruteStrengthModifierWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
