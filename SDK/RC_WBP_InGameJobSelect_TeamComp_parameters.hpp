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

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.ResetJobEntries
struct UWBP_InGameJobSelect_TeamComp_C_ResetJobEntries_Params
{
};

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.TeamMembersUpdated
struct UWBP_InGameJobSelect_TeamComp_C_TeamMembersUpdated_Params
{
	class AKSPlayerState**                             NewMember;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.SetupTeamDisplay
struct UWBP_InGameJobSelect_TeamComp_C_SetupTeamDisplay_Params
{
};

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.SetInitialView
struct UWBP_InGameJobSelect_TeamComp_C_SetInitialView_Params
{
};

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnJobEntryUpdated
struct UWBP_InGameJobSelect_TeamComp_C_OnJobEntryUpdated_Params
{
	class UJobSelectionEntryDetails**                  JobSelectionEntry;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnPlayerStateChanged
struct UWBP_InGameJobSelect_TeamComp_C_OnPlayerStateChanged_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnTeamChanged
struct UWBP_InGameJobSelect_TeamComp_C_OnTeamChanged_Params
{
	class AKSPlayerState**                             KSPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.PreConstruct
struct UWBP_InGameJobSelect_TeamComp_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.Construct
struct UWBP_InGameJobSelect_TeamComp_C_Construct_Params
{
};

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.InitializeWidget
struct UWBP_InGameJobSelect_TeamComp_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnPlayerStateUpdate
struct UWBP_InGameJobSelect_TeamComp_C_OnPlayerStateUpdate_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.ExecuteUbergraph_WBP_InGameJobSelect_TeamComp
struct UWBP_InGameJobSelect_TeamComp_C_ExecuteUbergraph_WBP_InGameJobSelect_TeamComp_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
