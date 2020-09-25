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

// Function CombatLogElement.CombatLogElement_C.SetMessageData
struct UCombatLogElement_C_SetMessageData_Params
{
	struct FCombatLogData*                             MessageData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCombatLogElement_C*                         CombatLogElement;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CombatLogElement.CombatLogElement_C.GetVictimTextColor
struct UCombatLogElement_C_GetVictimTextColor_Params
{
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function CombatLogElement.CombatLogElement_C.GetInstigatorTextColor
struct UCombatLogElement_C_GetInstigatorTextColor_Params
{
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function CombatLogElement.CombatLogElement_C.OnIconUpdated
struct UCombatLogElement_C_OnIconUpdated_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CombatLogElement.CombatLogElement_C.Transition
struct UCombatLogElement_C_Transition_Params
{
};

// Function CombatLogElement.CombatLogElement_C.OnIconUpdated_Event_1
struct UCombatLogElement_C_OnIconUpdated_Event_1_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CombatLogElement.CombatLogElement_C.OnFadeOutAnimFinished
struct UCombatLogElement_C_OnFadeOutAnimFinished_Params
{
};

// Function CombatLogElement.CombatLogElement_C.Construct
struct UCombatLogElement_C_Construct_Params
{
};

// Function CombatLogElement.CombatLogElement_C.OnInfoSet
struct UCombatLogElement_C_OnInfoSet_Params
{
};

// Function CombatLogElement.CombatLogElement_C.FadeOut
struct UCombatLogElement_C_FadeOut_Params
{
};

// Function CombatLogElement.CombatLogElement_C.StopAnimsAndTimers
struct UCombatLogElement_C_StopAnimsAndTimers_Params
{
};

// Function CombatLogElement.CombatLogElement_C.ExecuteUbergraph_CombatLogElement
struct UCombatLogElement_C_ExecuteUbergraph_CombatLogElement_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
