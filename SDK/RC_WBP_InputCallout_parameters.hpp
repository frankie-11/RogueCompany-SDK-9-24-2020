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

// Function WBP_InputCallout.WBP_InputCallout_C.GetActionKeys
struct UWBP_InputCallout_C_GetActionKeys_Params
{
	class UKSSettingsDataFactory**                     KSSettingsDataFactory;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        PrimaryButton;                                            // (Parm, OutParm)
	struct FKey                                        SecondaryButton;                                          // (Parm, OutParm)
};

// Function WBP_InputCallout.WBP_InputCallout_C.UpdateComboIndicator
struct UWBP_InputCallout_C_UpdateComboIndicator_Params
{
};

// Function WBP_InputCallout.WBP_InputCallout_C.IsValidActionNameForCurrentInput
struct UWBP_InputCallout_C_IsValidActionNameForCurrentInput_Params
{
	struct FName*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputCallout.WBP_InputCallout_C.ResetHoldProgress
struct UWBP_InputCallout_C_ResetHoldProgress_Params
{
};

// Function WBP_InputCallout.WBP_InputCallout_C.SetHoldProgress
struct UWBP_InputCallout_C_SetHoldProgress_Params
{
	float*                                             HoldProgress;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputCallout.WBP_InputCallout_C.SetSecondaryKey
struct UWBP_InputCallout_C_SetSecondaryKey_Params
{
	struct FKey*                                       Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputCallout.WBP_InputCallout_C.SetPrimaryKey
struct UWBP_InputCallout_C_SetPrimaryKey_Params
{
	struct FKey*                                       Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputCallout.WBP_InputCallout_C.OnKeyBindSettingChanged
struct UWBP_InputCallout_C_OnKeyBindSettingChanged_Params
{
	struct FName*                                      KeyBindName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputCallout.WBP_InputCallout_C.InitializeWidget
struct UWBP_InputCallout_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputCallout.WBP_InputCallout_C.ModeChange
struct UWBP_InputCallout_C_ModeChange_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputCallout.WBP_InputCallout_C.SetActionName
struct UWBP_InputCallout_C_SetActionName_Params
{
	struct FName*                                      KeyBoardAction;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      GamepadAction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      MobileAction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputCallout.WBP_InputCallout_C.RemoveActionName
struct UWBP_InputCallout_C_RemoveActionName_Params
{
	struct FName*                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputCallout.WBP_InputCallout_C.ClearAllActionName
struct UWBP_InputCallout_C_ClearAllActionName_Params
{
};

// Function WBP_InputCallout.WBP_InputCallout_C.ExecuteUbergraph_WBP_InputCallout
struct UWBP_InputCallout_C_ExecuteUbergraph_WBP_InputCallout_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
