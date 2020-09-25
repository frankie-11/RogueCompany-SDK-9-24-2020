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

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.UpdateLevelDisplay
struct UWBP_ProgressEarnedBar_C_UpdateLevelDisplay_Params
{
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Set Fill Colors
struct UWBP_ProgressEarnedBar_C_Set_Fill_Colors_Params
{
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpAnimCompleted
struct UWBP_ProgressEarnedBar_C_OnLevelUpAnimCompleted_Params
{
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.GetXpPercentageInLevel
struct UWBP_ProgressEarnedBar_C_GetXpPercentageInLevel_Params
{
	float                                              PercentProgress;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.DisplayXpAnimationState
struct UWBP_ProgressEarnedBar_C_DisplayXpAnimationState_Params
{
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetNewLerpTimeframe
struct UWBP_ProgressEarnedBar_C_SetNewLerpTimeframe_Params
{
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetProgressionData
struct UWBP_ProgressEarnedBar_C_SetProgressionData_Params
{
	struct FPlayerProgression*                         Progression;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetFillSettings
struct UWBP_ProgressEarnedBar_C_SetFillSettings_Params
{
	float*                                             BasePercentage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FillPercentage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.PreConstruct
struct UWBP_ProgressEarnedBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Construct
struct UWBP_ProgressEarnedBar_C_Construct_Params
{
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Tick
struct UWBP_ProgressEarnedBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.StartAnimation
struct UWBP_ProgressEarnedBar_C_StartAnimation_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ExecuteUbergraph_WBP_ProgressEarnedBar
struct UWBP_ProgressEarnedBar_C_ExecuteUbergraph_WBP_ProgressEarnedBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpEvent__DelegateSignature
struct UWBP_ProgressEarnedBar_C_OnLevelUpEvent__DelegateSignature_Params
{
	int*                                               NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
