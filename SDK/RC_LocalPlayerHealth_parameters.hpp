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

// Function LocalPlayerHealth.LocalPlayerHealth_C.ResetVisbility
struct ULocalPlayerHealth_C_ResetVisbility_Params
{
};

// Function LocalPlayerHealth.LocalPlayerHealth_C.TriggerFadeAnim
struct ULocalPlayerHealth_C_TriggerFadeAnim_Params
{
};

// Function LocalPlayerHealth.LocalPlayerHealth_C.OnOverhealChanged
struct ULocalPlayerHealth_C_OnOverhealChanged_Params
{
	float*                                             OldOverheal;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewOverheal;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAnimatedChange;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LocalPlayerHealth.LocalPlayerHealth_C.Construct
struct ULocalPlayerHealth_C_Construct_Params
{
};

// Function LocalPlayerHealth.LocalPlayerHealth_C.View_OnDeathStateChanged
struct ULocalPlayerHealth_C_View_OnDeathStateChanged_Params
{
};

// Function LocalPlayerHealth.LocalPlayerHealth_C.InitializeWidget
struct ULocalPlayerHealth_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LocalPlayerHealth.LocalPlayerHealth_C.OnHealthMeterStateChanged
struct ULocalPlayerHealth_C_OnHealthMeterStateChanged_Params
{
};

// Function LocalPlayerHealth.LocalPlayerHealth_C.SetHealthText
struct ULocalPlayerHealth_C_SetHealthText_Params
{
};

// Function LocalPlayerHealth.LocalPlayerHealth_C.OnJobChanged
struct ULocalPlayerHealth_C_OnJobChanged_Params
{
	class UKSJobItem**                                 Job;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LocalPlayerHealth.LocalPlayerHealth_C.OnHealthDecreased
struct ULocalPlayerHealth_C_OnHealthDecreased_Params
{
};

// Function LocalPlayerHealth.LocalPlayerHealth_C.PostSetPawn
struct ULocalPlayerHealth_C_PostSetPawn_Params
{
};

// Function LocalPlayerHealth.LocalPlayerHealth_C.ExecuteUbergraph_LocalPlayerHealth
struct ULocalPlayerHealth_C_ExecuteUbergraph_LocalPlayerHealth_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
