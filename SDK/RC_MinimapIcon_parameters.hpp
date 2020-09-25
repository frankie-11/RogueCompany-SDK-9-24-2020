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

// Function MinimapIcon.MinimapIcon_C.SetupEnemyPing
struct UMinimapIcon_C_SetupEnemyPing_Params
{
};

// Function MinimapIcon.MinimapIcon_C.SetupAlly
struct UMinimapIcon_C_SetupAlly_Params
{
};

// Function MinimapIcon.MinimapIcon_C.SetupLocalPlayer
struct UMinimapIcon_C_SetupLocalPlayer_Params
{
};

// Function MinimapIcon.MinimapIcon_C.SetObjectiveIcon
struct UMinimapIcon_C_SetObjectiveIcon_Params
{
};

// Function MinimapIcon.MinimapIcon_C.AllyStateChange
struct UMinimapIcon_C_AllyStateChange_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapIcon.MinimapIcon_C.ObjectiveUpdated
struct UMinimapIcon_C_ObjectiveUpdated_Params
{
	class AKSObjectiveBase**                           Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapIcon.MinimapIcon_C.SetRelativeHeight
struct UMinimapIcon_C_SetRelativeHeight_Params
{
	TEnumAsByte<EMiniMapRelativeHeight>*               RelativeHeight;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapIcon.MinimapIcon_C.ResetHeightIndicators
struct UMinimapIcon_C_ResetHeightIndicators_Params
{
};

// Function MinimapIcon.MinimapIcon_C.OnLootSiteStateChanged
struct UMinimapIcon_C_OnLootSiteStateChanged_Params
{
	struct FLootSiteState*                             State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapIcon.MinimapIcon_C.SetupObjective
struct UMinimapIcon_C_SetupObjective_Params
{
};

// Function MinimapIcon.MinimapIcon_C.SetupLootSite
struct UMinimapIcon_C_SetupLootSite_Params
{
};

// Function MinimapIcon.MinimapIcon_C.Update
struct UMinimapIcon_C_Update_Params
{
};

// Function MinimapIcon.MinimapIcon_C.Construct
struct UMinimapIcon_C_Construct_Params
{
};

// Function MinimapIcon.MinimapIcon_C.ExecuteUbergraph_MinimapIcon
struct UMinimapIcon_C_ExecuteUbergraph_MinimapIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapIcon.MinimapIcon_C.PingExpired__DelegateSignature
struct UMinimapIcon_C_PingExpired__DelegateSignature_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
