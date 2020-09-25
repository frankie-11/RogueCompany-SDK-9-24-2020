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

// Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetPercentTimeRemaining
struct UWBP_StoreItemRotator_C_SetPercentTimeRemaining_Params
{
	float*                                             PercentRemaining;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetRotatorSize
struct UWBP_StoreItemRotator_C_SetRotatorSize_Params
{
	int*                                               NumElements;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetActiveIndex
struct UWBP_StoreItemRotator_C_SetActiveIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
