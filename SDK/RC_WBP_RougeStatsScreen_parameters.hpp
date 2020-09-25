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

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.RegisterScrollingInput
struct UWBP_RougeStatsScreen_C_RegisterScrollingInput_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.NavigateBack
struct UWBP_RougeStatsScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.GoBack
struct UWBP_RougeStatsScreen_C_GoBack_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.TickScrolling
struct UWBP_RougeStatsScreen_C_TickScrolling_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollReleased
struct UWBP_RougeStatsScreen_C_ScrollReleased_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollDownPressed
struct UWBP_RougeStatsScreen_C_ScrollDownPressed_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollUpPressed
struct UWBP_RougeStatsScreen_C_ScrollUpPressed_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.SetupTabNavigation
struct UWBP_RougeStatsScreen_C_SetupTabNavigation_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.GetPooledStatEntry
struct UWBP_RougeStatsScreen_C_GetPooledStatEntry_Params
{
	class UWBP_RogueStatsScreen_RogueEntry_C*          StatEntry;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ReturnAllStatEntriesToPool
struct UWBP_RougeStatsScreen_C_ReturnAllStatEntriesToPool_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.On_PnlStatEntries_SortCompareChildren_1
struct UWBP_RougeStatsScreen_C_On_PnlStatEntries_SortCompareChildren_1_Params
{
	class UWidget**                                    LHS;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget**                                    RHS;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.SelectStat
struct UWBP_RougeStatsScreen_C_SelectStat_Params
{
	EKSMercMasteryActivityType*                        ActivityType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.AddStatTabs
struct UWBP_RougeStatsScreen_C_AddStatTabs_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.Construct
struct UWBP_RougeStatsScreen_C_Construct_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.Tick
struct UWBP_RougeStatsScreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidget
struct UWBP_RougeStatsScreen_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature
struct UWBP_RougeStatsScreen_C_BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidgetNavigation
struct UWBP_RougeStatsScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidgetButtonListeners
struct UWBP_RougeStatsScreen_C_InitializeWidgetButtonListeners_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.OnShown
struct UWBP_RougeStatsScreen_C_OnShown_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.OnBackPrompt
struct UWBP_RougeStatsScreen_C_OnBackPrompt_Params
{
};

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ExecuteUbergraph_WBP_RougeStatsScreen
struct UWBP_RougeStatsScreen_C_ExecuteUbergraph_WBP_RougeStatsScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
