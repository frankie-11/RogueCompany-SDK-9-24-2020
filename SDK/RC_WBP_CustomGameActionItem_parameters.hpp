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

// Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.SetText
struct UWBP_CustomGameActionItem_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.PreConstruct
struct UWBP_CustomGameActionItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.Construct
struct UWBP_CustomGameActionItem_C_Construct_Params
{
};

// Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.ExecuteUbergraph_WBP_CustomGameActionItem
struct UWBP_CustomGameActionItem_C_ExecuteUbergraph_WBP_CustomGameActionItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
