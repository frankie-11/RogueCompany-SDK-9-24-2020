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

// Function WBP_RespawnTimer.WBP_RespawnTimer_C.Tick
struct UWBP_RespawnTimer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RespawnTimer.WBP_RespawnTimer_C.InitializeWidget
struct UWBP_RespawnTimer_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RespawnTimer.WBP_RespawnTimer_C.On Respawn Timer Tick
struct UWBP_RespawnTimer_C_On_Respawn_Timer_Tick_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RespawnTimer.WBP_RespawnTimer_C.On Respawn Timer Active
struct UWBP_RespawnTimer_C_On_Respawn_Timer_Active_Params
{
	bool*                                              bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RespawnTimer.WBP_RespawnTimer_C.OnRespawnTimerComplete
struct UWBP_RespawnTimer_C_OnRespawnTimerComplete_Params
{
};

// Function WBP_RespawnTimer.WBP_RespawnTimer_C.ExecuteUbergraph_WBP_RespawnTimer
struct UWBP_RespawnTimer_C_ExecuteUbergraph_WBP_RespawnTimer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
