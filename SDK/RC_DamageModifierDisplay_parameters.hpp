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

// Function DamageModifierDisplay.DamageModifierDisplay_C.InitializeWidget
struct UDamageModifierDisplay_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DamageModifierDisplay.DamageModifierDisplay_C.AddModifier
struct UDamageModifierDisplay_C_AddModifier_Params
{
};

// Function DamageModifierDisplay.DamageModifierDisplay_C.ExecuteUbergraph_DamageModifierDisplay
struct UDamageModifierDisplay_C_ExecuteUbergraph_DamageModifierDisplay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
