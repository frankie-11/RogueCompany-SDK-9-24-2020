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

// Function TextTypeEffect.TextTypeEffect_C.SetText
struct UTextTypeEffect_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TextTypeEffect.TextTypeEffect_C.Tick
struct UTextTypeEffect_C_Tick_Params
{
	float*                                             dt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TextTypeEffect.TextTypeEffect_C.StartType
struct UTextTypeEffect_C_StartType_Params
{
};

// Function TextTypeEffect.TextTypeEffect_C.ExecuteUbergraph_TextTypeEffect
struct UTextTypeEffect_C_ExecuteUbergraph_TextTypeEffect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
