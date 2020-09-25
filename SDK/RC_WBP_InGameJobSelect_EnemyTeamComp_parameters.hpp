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

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ClearJobEntries
struct UWBP_InGameJobSelect_EnemyTeamComp_C_ClearJobEntries_Params
{
};

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnTeamsUpdated
struct UWBP_InGameJobSelect_EnemyTeamComp_C_OnTeamsUpdated_Params
{
	class AKSTeamState**                               AddedTeam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnEnemyTeamMemberAdded
struct UWBP_InGameJobSelect_EnemyTeamComp_C_OnEnemyTeamMemberAdded_Params
{
	class AKSPlayerState**                             NewMember;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnEnemyTeamAdded
struct UWBP_InGameJobSelect_EnemyTeamComp_C_OnEnemyTeamAdded_Params
{
	class AKSTeamState**                               AddedTeam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ResetJobEntries
struct UWBP_InGameJobSelect_EnemyTeamComp_C_ResetJobEntries_Params
{
};

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.SetInitialView
struct UWBP_InGameJobSelect_EnemyTeamComp_C_SetInitialView_Params
{
};

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnJobEntryUpdated
struct UWBP_InGameJobSelect_EnemyTeamComp_C_OnJobEntryUpdated_Params
{
	class UJobSelectionEntryDetails**                  JobSelectionEntry;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnPlayerStateChanged
struct UWBP_InGameJobSelect_EnemyTeamComp_C_OnPlayerStateChanged_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.PreConstruct
struct UWBP_InGameJobSelect_EnemyTeamComp_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.Construct
struct UWBP_InGameJobSelect_EnemyTeamComp_C_Construct_Params
{
};

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.InitializeWidget
struct UWBP_InGameJobSelect_EnemyTeamComp_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnPlayerStateUpdate
struct UWBP_InGameJobSelect_EnemyTeamComp_C_OnPlayerStateUpdate_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ExecuteUbergraph_WBP_InGameJobSelect_EnemyTeamComp
struct UWBP_InGameJobSelect_EnemyTeamComp_C_ExecuteUbergraph_WBP_InGameJobSelect_EnemyTeamComp_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
