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

// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.SetItem
struct UWBP_RogueItemDisplay_C_SetItem_Params
{
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.Construct
struct UWBP_RogueItemDisplay_C_Construct_Params
{
};

// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.PreConstruct
struct UWBP_RogueItemDisplay_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.ExecuteUbergraph_WBP_RogueItemDisplay
struct UWBP_RogueItemDisplay_C_ExecuteUbergraph_WBP_RogueItemDisplay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
