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

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.NavigateBack
struct UWBP_PlayerAwardsScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.GoBack
struct UWBP_PlayerAwardsScreen_C_GoBack_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.RegisterScrollingInput
struct UWBP_PlayerAwardsScreen_C_RegisterScrollingInput_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.TickScrolling
struct UWBP_PlayerAwardsScreen_C_TickScrolling_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollReleased
struct UWBP_PlayerAwardsScreen_C_ScrollReleased_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollDownPressed
struct UWBP_PlayerAwardsScreen_C_ScrollDownPressed_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollUpPressed
struct UWBP_PlayerAwardsScreen_C_ScrollUpPressed_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.CompareChildren
struct UWBP_PlayerAwardsScreen_C_CompareChildren_Params
{
	class UWidget**                                    LHS;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget**                                    RHS;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Construct
struct UWBP_PlayerAwardsScreen_C_Construct_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Tick
struct UWBP_PlayerAwardsScreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnShown
struct UWBP_PlayerAwardsScreen_C_OnShown_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetButtonListeners
struct UWBP_PlayerAwardsScreen_C_InitializeWidgetButtonListeners_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidget
struct UWBP_PlayerAwardsScreen_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetNavigation
struct UWBP_PlayerAwardsScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnBackPrompt
struct UWBP_PlayerAwardsScreen_C_OnBackPrompt_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ExecuteUbergraph_WBP_PlayerAwardsScreen
struct UWBP_PlayerAwardsScreen_C_ExecuteUbergraph_WBP_PlayerAwardsScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
