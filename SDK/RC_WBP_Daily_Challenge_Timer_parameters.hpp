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

// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.CheckForNewChallenge
struct UWBP_Daily_Challenge_Timer_C_CheckForNewChallenge_Params
{
};

// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.UpdateContractTimer
struct UWBP_Daily_Challenge_Timer_C_UpdateContractTimer_Params
{
};

// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.SetRemainingTime
struct UWBP_Daily_Challenge_Timer_C_SetRemainingTime_Params
{
};

// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.Tick
struct UWBP_Daily_Challenge_Timer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.InitializeWidget
struct UWBP_Daily_Challenge_Timer_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.ExecuteUbergraph_WBP_Daily_Challenge_Timer
struct UWBP_Daily_Challenge_Timer_C_ExecuteUbergraph_WBP_Daily_Challenge_Timer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
