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

// Function WBP_DamageNumber.WBP_DamageNumber_C.UpdateVisuals
struct UWBP_DamageNumber_C_UpdateVisuals_Params
{
	struct FSlateColor*                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              PlayAnim;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation**                           Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Immune
struct UWBP_DamageNumber_C_Handle_Immune_Params
{
};

// Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Normal
struct UWBP_DamageNumber_C_Handle_Normal_Params
{
};

// Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Lethal
struct UWBP_DamageNumber_C_Handle_Lethal_Params
{
};

// Function WBP_DamageNumber.WBP_DamageNumber_C.Handle NonLeathal Headshot
struct UWBP_DamageNumber_C_Handle_NonLeathal_Headshot_Params
{
};

// Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Damage Amount
struct UWBP_DamageNumber_C_Handle_Damage_Amount_Params
{
};

// Function WBP_DamageNumber.WBP_DamageNumber_C.PlayFlourishAnimation
struct UWBP_DamageNumber_C_PlayFlourishAnimation_Params
{
};

// Function WBP_DamageNumber.WBP_DamageNumber_C.OnDisplayInformationReset
struct UWBP_DamageNumber_C_OnDisplayInformationReset_Params
{
};

// Function WBP_DamageNumber.WBP_DamageNumber_C.OnDisplaySpecialDamageInfo
struct UWBP_DamageNumber_C_OnDisplaySpecialDamageInfo_Params
{
	float*                                             CurrentDamageAmount;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSpecialDamageColors*                       DamageColors;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              bChangePosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DamageNumber.WBP_DamageNumber_C.HandleFlourishFinished
struct UWBP_DamageNumber_C_HandleFlourishFinished_Params
{
};

// Function WBP_DamageNumber.WBP_DamageNumber_C.ExecuteUbergraph_WBP_DamageNumber
struct UWBP_DamageNumber_C_ExecuteUbergraph_WBP_DamageNumber_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
