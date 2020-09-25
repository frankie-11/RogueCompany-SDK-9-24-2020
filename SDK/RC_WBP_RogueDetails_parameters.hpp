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

// Function WBP_RogueDetails.WBP_RogueDetails_C.SetJobCharacter
struct UWBP_RogueDetails_C_SetJobCharacter_Params
{
	class UKSJobItem**                                 KSJobItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.OnPurchaseRogue
struct UWBP_RogueDetails_C_OnPurchaseRogue_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.SetContextBar
struct UWBP_RogueDetails_C_SetContextBar_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeOverViewButtons
struct UWBP_RogueDetails_C_InitializeOverViewButtons_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.NavigateBack
struct UWBP_RogueDetails_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.BindOverViewButtons
struct UWBP_RogueDetails_C_BindOverViewButtons_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.PopulatedJobOverview
struct UWBP_RogueDetails_C_PopulatedJobOverview_Params
{
	class UKSJobItem**                                 JobItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.Construct
struct UWBP_RogueDetails_C_Construct_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeWidget
struct UWBP_RogueDetails_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.OnShown
struct UWBP_RogueDetails_C_OnShown_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeWidgetNavigation
struct UWBP_RogueDetails_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.OnCombatLoadout
struct UWBP_RogueDetails_C_OnCombatLoadout_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.OnCustomizeLoadout
struct UWBP_RogueDetails_C_OnCustomizeLoadout_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.OnRogueMastery
struct UWBP_RogueDetails_C_OnRogueMastery_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.OnBackPrompt
struct UWBP_RogueDetails_C_OnBackPrompt_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.SetDisableButtons
struct UWBP_RogueDetails_C_SetDisableButtons_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.OnHide
struct UWBP_RogueDetails_C_OnHide_Params
{
};

// Function WBP_RogueDetails.WBP_RogueDetails_C.ExecuteUbergraph_WBP_RogueDetails
struct UWBP_RogueDetails_C_ExecuteUbergraph_WBP_RogueDetails_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
