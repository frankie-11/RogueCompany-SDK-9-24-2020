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

// Function AccuracyDebug.AccuracyDebug_C.Construct
struct UAccuracyDebug_C_Construct_Params
{
};

// Function AccuracyDebug.AccuracyDebug_C.Tick
struct UAccuracyDebug_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AccuracyDebug.AccuracyDebug_C.ExecuteUbergraph_AccuracyDebug
struct UAccuracyDebug_C_ExecuteUbergraph_AccuracyDebug_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
