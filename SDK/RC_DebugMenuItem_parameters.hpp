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

// Function DebugMenuItem.DebugMenuItem_C.NavigateConfirm
struct UDebugMenuItem_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenuItem.DebugMenuItem_C.Construct
struct UDebugMenuItem_C_Construct_Params
{
};

// Function DebugMenuItem.DebugMenuItem_C.GamepadHover
struct UDebugMenuItem_C_GamepadHover_Params
{
};

// Function DebugMenuItem.DebugMenuItem_C.GamepadUnhover
struct UDebugMenuItem_C_GamepadUnhover_Params
{
};

// Function DebugMenuItem.DebugMenuItem_C.ExecuteUbergraph_DebugMenuItem
struct UDebugMenuItem_C_ExecuteUbergraph_DebugMenuItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenuItem.DebugMenuItem_C.ItemSelected__DelegateSignature
struct UDebugMenuItem_C_ItemSelected__DelegateSignature_Params
{
	struct FDebugMenuCommandInfo*                      Command;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
