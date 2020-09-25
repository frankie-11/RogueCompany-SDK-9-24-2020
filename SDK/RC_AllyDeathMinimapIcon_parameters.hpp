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

// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.ShouldUpdate
struct UAllyDeathMinimapIcon_C_ShouldUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.Construct
struct UAllyDeathMinimapIcon_C_Construct_Params
{
};

// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.Start Fade
struct UAllyDeathMinimapIcon_C_Start_Fade_Params
{
};

// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.UpdateMeetsHeightThreshold
struct UAllyDeathMinimapIcon_C_UpdateMeetsHeightThreshold_Params
{
	bool*                                              bHeight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDepth;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.ExecuteUbergraph_AllyDeathMinimapIcon
struct UAllyDeathMinimapIcon_C_ExecuteUbergraph_AllyDeathMinimapIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.PingExpired__DelegateSignature
struct UAllyDeathMinimapIcon_C_PingExpired__DelegateSignature_Params
{
	unsigned char*                                     IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
