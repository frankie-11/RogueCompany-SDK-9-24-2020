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

// Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.Construct
struct UWBP_QuickPlay_QueueTypeHeader_C_Construct_Params
{
};

// Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.PreConstruct
struct UWBP_QuickPlay_QueueTypeHeader_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.SetHeaderText
struct UWBP_QuickPlay_QueueTypeHeader_C_SetHeaderText_Params
{
	struct FText*                                      QueueType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader
struct UWBP_QuickPlay_QueueTypeHeader_C_ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
