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

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.UpdatePlayerName
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_UpdatePlayerName_Params
{
	class AKSPlayerState**                             KSPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.PopulateSelectedJob
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_PopulateSelectedJob_Params
{
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetEnemyDirectly
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_SetEnemyDirectly_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.HandleUIRelevantStateChange
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_HandleUIRelevantStateChange_Params
{
	class AKSPlayerState**                             InPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.ResetJobEntry
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_ResetJobEntry_Params
{
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.Bind to Model Viewer
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_Bind_to_Model_Viewer_Params
{
	int*                                               ModelIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetInitialDisplay
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_SetInitialDisplay_Params
{
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetJobEntry
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_SetJobEntry_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetPlayerOwner
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_SetPlayerOwner_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.InitializeWidget
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.Construct
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_Construct_Params
{
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.PreConstruct
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.ExecuteUbergraph_WBP_InGameJobSelect_TeamComp_Teammate
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_ExecuteUbergraph_WBP_InGameJobSelect_TeamComp_Teammate_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.DisplayPlayerNameDispatcher__DelegateSignature
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_DisplayPlayerNameDispatcher__DelegateSignature_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.DisplayJobInfoDispatcher__DelegateSignature
struct UWBP_InGameJobSelect_TeamComp_Teammate_C_DisplayJobInfoDispatcher__DelegateSignature_Params
{
	int*                                               Job_Item_Id;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Skin_Item_Id;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EJobSelectionState*                                JobSelectionState;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
