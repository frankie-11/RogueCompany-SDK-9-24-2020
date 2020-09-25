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

// Function GameTimerBarPips.GameTimerBarPips_C.Set Total Pips
struct UGameTimerBarPips_C_Set_Total_Pips_Params
{
	int*                                               Pips_Number;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarPips.GameTimerBarPips_C.Set Pips Number
struct UGameTimerBarPips_C_Set_Pips_Number_Params
{
	int*                                               Pips_Number;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarPips.GameTimerBarPips_C.PreConstruct
struct UGameTimerBarPips_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarPips.GameTimerBarPips_C.Construct
struct UGameTimerBarPips_C_Construct_Params
{
};

// Function GameTimerBarPips.GameTimerBarPips_C.ExecuteUbergraph_GameTimerBarPips
struct UGameTimerBarPips_C_ExecuteUbergraph_GameTimerBarPips_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
