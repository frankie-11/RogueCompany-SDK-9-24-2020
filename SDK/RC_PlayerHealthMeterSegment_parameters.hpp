#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetDotVisibility
struct UPlayerHealthMeterSegment_C_SetDotVisibility_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PlayDamagePulse
struct UPlayerHealthMeterSegment_C_PlayDamagePulse_Params
{
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetBonusState
struct UPlayerHealthMeterSegment_C_SetBonusState_Params
{
	bool*                                              IsBonus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetSliceValues
struct UPlayerHealthMeterSegment_C_SetSliceValues_Params
{
	int*                                               Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Armor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Overheal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Depleted;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Inactive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
