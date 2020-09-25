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

// Function WBP_Progression.WBP_Progression_C.OnMercLevelUp
struct UWBP_Progression_C_OnMercLevelUp_Params
{
	class UKSActivityInstance**                        ActivityInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FActivityTier*                              NewTier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Progression.WBP_Progression_C.ResetVisualState
struct UWBP_Progression_C_ResetVisualState_Params
{
};

// Function WBP_Progression.WBP_Progression_C.HandleRogueMasteryProgression
struct UWBP_Progression_C_HandleRogueMasteryProgression_Params
{
	struct FPlayerProgression*                         PlayerProgression;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Progression.WBP_Progression_C.HandleReputationProgression
struct UWBP_Progression_C_HandleReputationProgression_Params
{
	int*                                               Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Progression.WBP_Progression_C.HandlePlayerProgression
struct UWBP_Progression_C_HandlePlayerProgression_Params
{
	struct FPlayerProgression*                         Progression;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Progression.WBP_Progression_C.Construct
struct UWBP_Progression_C_Construct_Params
{
};

// Function WBP_Progression.WBP_Progression_C.StartAnimation
struct UWBP_Progression_C_StartAnimation_Params
{
};

// Function WBP_Progression.WBP_Progression_C.PreConstruct
struct UWBP_Progression_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Progression.WBP_Progression_C.InitializeWidget
struct UWBP_Progression_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Progression.WBP_Progression_C.IncrementDelay
struct UWBP_Progression_C_IncrementDelay_Params
{
};

// Function WBP_Progression.WBP_Progression_C.ExecuteUbergraph_WBP_Progression
struct UWBP_Progression_C_ExecuteUbergraph_WBP_Progression_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
