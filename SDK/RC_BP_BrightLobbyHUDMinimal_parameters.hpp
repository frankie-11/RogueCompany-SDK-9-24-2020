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

// Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallRemoveTopViewRoute
struct ABP_BrightLobbyHUDMinimal_C_CallRemoveTopViewRoute_Params
{
	bool*                                              ForceTransition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ViewChanged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallAddViewRoute
struct ABP_BrightLobbyHUDMinimal_C_CallAddViewRoute_Params
{
	struct FName*                                      RouteName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ClearRouteStack;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ViewChanged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
