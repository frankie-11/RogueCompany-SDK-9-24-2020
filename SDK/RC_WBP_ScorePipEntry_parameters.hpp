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

// Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.Set Pip
struct UWBP_ScorePipEntry_C_Set_Pip_Params
{
	bool*                                              On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.PreConstruct
struct UWBP_ScorePipEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.Construct
struct UWBP_ScorePipEntry_C_Construct_Params
{
};

// Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.ExecuteUbergraph_WBP_ScorePipEntry
struct UWBP_ScorePipEntry_C_ExecuteUbergraph_WBP_ScorePipEntry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
