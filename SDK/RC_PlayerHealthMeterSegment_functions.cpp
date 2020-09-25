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

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetDotVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHealthMeterSegment_C::SetDotVisibility(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetDotVisibility");

	UPlayerHealthMeterSegment_C_SetDotVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PlayDamagePulse
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerHealthMeterSegment_C::PlayDamagePulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PlayDamagePulse");

	UPlayerHealthMeterSegment_C_PlayDamagePulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetBonusState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsBonus                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHealthMeterSegment_C::SetBonusState(bool* IsBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetBonusState");

	UPlayerHealthMeterSegment_C_SetBonusState_Params params;
	params.IsBonus = IsBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetSliceValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Armor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Overheal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Depleted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Inactive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHealthMeterSegment_C::SetSliceValues(int* Health, int* Armor, int* Overheal, int* Depleted, int* Inactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetSliceValues");

	UPlayerHealthMeterSegment_C_SetSliceValues_Params params;
	params.Health = Health;
	params.Armor = Armor;
	params.Overheal = Overheal;
	params.Depleted = Depleted;
	params.Inactive = Inactive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
