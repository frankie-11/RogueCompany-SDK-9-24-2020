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

// Function WBP_Header2.WBP_Header2_C.SetText
struct UWBP_Header2_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Header2.WBP_Header2_C.PreConstruct
struct UWBP_Header2_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Header2.WBP_Header2_C.Construct
struct UWBP_Header2_C_Construct_Params
{
};

// Function WBP_Header2.WBP_Header2_C.ExecuteUbergraph_WBP_Header2
struct UWBP_Header2_C_ExecuteUbergraph_WBP_Header2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
