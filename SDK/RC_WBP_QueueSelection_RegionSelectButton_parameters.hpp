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

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.HandleInputStateChange
struct UWBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   NewInputState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.SetupPromptImageHandling
struct UWBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling_Params
{
};

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.InitializeWidget
struct UWBP_QueueSelection_RegionSelectButton_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.Update Region
struct UWBP_QueueSelection_RegionSelectButton_C_Update_Region_Params
{
};

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.OnHide
struct UWBP_QueueSelection_RegionSelectButton_C_OnHide_Params
{
};

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.LoginState
struct UWBP_QueueSelection_RegionSelectButton_C_LoginState_Params
{
	EPUMG_LoginState*                                  LoginState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.EnableAsButton
struct UWBP_QueueSelection_RegionSelectButton_C_EnableAsButton_Params
{
};

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.DisableAsButton
struct UWBP_QueueSelection_RegionSelectButton_C_DisableAsButton_Params
{
};

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.UpdateCrossplay
struct UWBP_QueueSelection_RegionSelectButton_C_UpdateCrossplay_Params
{
};

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_QueueSelection_RegionSelectButton_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.PreConstruct
struct UWBP_QueueSelection_RegionSelectButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton
struct UWBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.RegionSelectRequested__DelegateSignature
struct UWBP_QueueSelection_RegionSelectButton_C_RegionSelectRequested__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
