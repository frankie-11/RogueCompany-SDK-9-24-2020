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

// Function SwimmingHUD.SwimmingHUD_C.Construct
struct USwimmingHUD_C_Construct_Params
{
};

// Function SwimmingHUD.SwimmingHUD_C.SwimmingChanged
struct USwimmingHUD_C_SwimmingChanged_Params
{
	bool*                                              bIsSwimming;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwimmingHUD.SwimmingHUD_C.PostSetPawn
struct USwimmingHUD_C_PostSetPawn_Params
{
};

// Function SwimmingHUD.SwimmingHUD_C.PreClearPawn
struct USwimmingHUD_C_PreClearPawn_Params
{
};

// Function SwimmingHUD.SwimmingHUD_C.ExecuteUbergraph_SwimmingHUD
struct USwimmingHUD_C_ExecuteUbergraph_SwimmingHUD_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
