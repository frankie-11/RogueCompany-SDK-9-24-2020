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

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.DisplayRerollPrompt
struct UWBP_Challenge_Panel_C_DisplayRerollPrompt_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.GetNavigationWidgets
struct UWBP_Challenge_Panel_C_GetNavigationWidgets_Params
{
	TArray<class UPUMG_Widget*>                        Widgets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PopulateChallenges
struct UWBP_Challenge_Panel_C_PopulateChallenges_Params
{
};

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PreConstruct
struct UWBP_Challenge_Panel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.InitializeWidget
struct UWBP_Challenge_Panel_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.ExecuteUbergraph_WBP_Challenge_Panel
struct UWBP_Challenge_Panel_C_ExecuteUbergraph_WBP_Challenge_Panel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
