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

// Function WBP_RoyalePhaseMessage.WBP_RoyalePhaseMessage_C.Construct
struct UWBP_RoyalePhaseMessage_C_Construct_Params
{
};

// Function WBP_RoyalePhaseMessage.WBP_RoyalePhaseMessage_C.Tick
struct UWBP_RoyalePhaseMessage_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RoyalePhaseMessage.WBP_RoyalePhaseMessage_C.ExecuteUbergraph_WBP_RoyalePhaseMessage
struct UWBP_RoyalePhaseMessage_C_ExecuteUbergraph_WBP_RoyalePhaseMessage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
