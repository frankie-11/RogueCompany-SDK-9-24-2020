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

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetButtonPrompt
struct UWBP_ControllerPrompt_C_SetButtonPrompt_Params
{
	struct FKey*                                       Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsCancel
struct UWBP_ControllerPrompt_C_SetIsCancel_Params
{
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsConfirm
struct UWBP_ControllerPrompt_C_SetIsConfirm_Params
{
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetPromptFromButton
struct UWBP_ControllerPrompt_C_SetPromptFromButton_Params
{
	struct FKey*                                       Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.UpdateFromSetValues
struct UWBP_ControllerPrompt_C_UpdateFromSetValues_Params
{
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetInputAction
struct UWBP_ControllerPrompt_C_SetInputAction_Params
{
	struct FName*                                      ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.PreConstruct
struct UWBP_ControllerPrompt_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.Construct
struct UWBP_ControllerPrompt_C_Construct_Params
{
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.ExecuteUbergraph_WBP_ControllerPrompt
struct UWBP_ControllerPrompt_C_ExecuteUbergraph_WBP_ControllerPrompt_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
