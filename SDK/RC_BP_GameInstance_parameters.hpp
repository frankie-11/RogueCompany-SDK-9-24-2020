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

// Function BP_GameInstance.BP_GameInstance_C.EndLoading
struct UBP_GameInstance_C_EndLoading_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.BeginLoading
struct UBP_GameInstance_C_BeginLoading_Params
{
	struct FString*                                    mapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
struct UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
