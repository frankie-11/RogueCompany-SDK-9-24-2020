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

// Function WBP_VoteChoice.WBP_VoteChoice_C.PreConstruct
struct UWBP_VoteChoice_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteChoice.WBP_VoteChoice_C.Construct
struct UWBP_VoteChoice_C_Construct_Params
{
};

// Function WBP_VoteChoice.WBP_VoteChoice_C.UpdateVoteFill
struct UWBP_VoteChoice_C_UpdateVoteFill_Params
{
	float*                                             Delta_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TimeToFill;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoteChoice.WBP_VoteChoice_C.ResetFill
struct UWBP_VoteChoice_C_ResetFill_Params
{
};

// Function WBP_VoteChoice.WBP_VoteChoice_C.ExecuteUbergraph_WBP_VoteChoice
struct UWBP_VoteChoice_C_ExecuteUbergraph_WBP_VoteChoice_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
