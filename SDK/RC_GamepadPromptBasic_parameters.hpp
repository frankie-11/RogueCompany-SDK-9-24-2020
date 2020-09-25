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

// Function GamepadPromptBasic.GamepadPromptBasic_C.SetPrompt
struct UGamepadPromptBasic_C_SetPrompt_Params
{
	struct FButtonPromptData*                          Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GamepadPromptBasic.GamepadPromptBasic_C.Populate
struct UGamepadPromptBasic_C_Populate_Params
{
};

// Function GamepadPromptBasic.GamepadPromptBasic_C.Construct
struct UGamepadPromptBasic_C_Construct_Params
{
};

// Function GamepadPromptBasic.GamepadPromptBasic_C.ExecuteUbergraph_GamepadPromptBasic
struct UGamepadPromptBasic_C_ExecuteUbergraph_GamepadPromptBasic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
