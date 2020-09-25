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

// Function WBP_PlayerProfileScreen_StatEntry.WBP_PlayerProfileScreen_StatEntry_C.SetActivityInstance
struct UWBP_PlayerProfileScreen_StatEntry_C_SetActivityInstance_Params
{
	class UKSActivityInstance**                        Instance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EKSActivityProgressDisplayType*                    DisplayType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
