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

// Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.Construct
struct UDebugBaseCommandHeader_C_Construct_Params
{
};

// Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.EstablishIndex
struct UDebugBaseCommandHeader_C_EstablishIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.ExecuteUbergraph_DebugBaseCommandHeader
struct UDebugBaseCommandHeader_C_ExecuteUbergraph_DebugBaseCommandHeader_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
