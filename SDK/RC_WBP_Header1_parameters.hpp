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

// Function WBP_Header1.WBP_Header1_C.SetText
struct UWBP_Header1_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Header1.WBP_Header1_C.PreConstruct
struct UWBP_Header1_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Header1.WBP_Header1_C.Construct
struct UWBP_Header1_C_Construct_Params
{
};

// Function WBP_Header1.WBP_Header1_C.ExecuteUbergraph_WBP_Header1
struct UWBP_Header1_C_ExecuteUbergraph_WBP_Header1_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
