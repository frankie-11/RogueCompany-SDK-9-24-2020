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

// Function DamageModifierDisplay.DamageModifierDisplay_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDamageModifierDisplay_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageModifierDisplay.DamageModifierDisplay_C.InitializeWidget");

	UDamageModifierDisplay_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DamageModifierDisplay.DamageModifierDisplay_C.AddModifier
// (BlueprintCallable, BlueprintEvent)

void UDamageModifierDisplay_C::AddModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageModifierDisplay.DamageModifierDisplay_C.AddModifier");

	UDamageModifierDisplay_C_AddModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DamageModifierDisplay.DamageModifierDisplay_C.ExecuteUbergraph_DamageModifierDisplay
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDamageModifierDisplay_C::ExecuteUbergraph_DamageModifierDisplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageModifierDisplay.DamageModifierDisplay_C.ExecuteUbergraph_DamageModifierDisplay");

	UDamageModifierDisplay_C_ExecuteUbergraph_DamageModifierDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
