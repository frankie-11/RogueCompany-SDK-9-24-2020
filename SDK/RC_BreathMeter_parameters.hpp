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

// Function BreathMeter.BreathMeter_C.Tick
struct UBreathMeter_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BreathMeter.BreathMeter_C.OpenGate
struct UBreathMeter_C_OpenGate_Params
{
};

// Function BreathMeter.BreathMeter_C.CloseGate
struct UBreathMeter_C_CloseGate_Params
{
};

// Function BreathMeter.BreathMeter_C.Construct
struct UBreathMeter_C_Construct_Params
{
};

// Function BreathMeter.BreathMeter_C.UpdateCharacter
struct UBreathMeter_C_UpdateCharacter_Params
{
	class AKSCharacter**                               NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BreathMeter.BreathMeter_C.UnbindCharacter
struct UBreathMeter_C_UnbindCharacter_Params
{
};

// Function BreathMeter.BreathMeter_C.UpdateBreath
struct UBreathMeter_C_UpdateBreath_Params
{
	float*                                             NewBreath;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BreathMeter.BreathMeter_C.ExecuteUbergraph_BreathMeter
struct UBreathMeter_C_ExecuteUbergraph_BreathMeter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
