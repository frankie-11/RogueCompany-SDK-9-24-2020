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

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.ShowCTA
struct UWBP_StoreSectionTab_C_ShowCTA_Params
{
	bool*                                              ShowCTA;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetPromptButton
struct UWBP_StoreSectionTab_C_SetPromptButton_Params
{
	struct FKey*                                       PromptKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnInputStateChanged
struct UWBP_StoreSectionTab_C_OnInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.NavigateConfirm
struct UWBP_StoreSectionTab_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.Construct
struct UWBP_StoreSectionTab_C_Construct_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_StoreSectionTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.GamepadConfirm
struct UWBP_StoreSectionTab_C_GamepadConfirm_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreSectionTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreSectionTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetActive
struct UWBP_StoreSectionTab_C_SetActive_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetInactive
struct UWBP_StoreSectionTab_C_SetInactive_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.PreConstruct
struct UWBP_StoreSectionTab_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.InitializeWidget
struct UWBP_StoreSectionTab_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.ExecuteUbergraph_WBP_StoreSectionTab
struct UWBP_StoreSectionTab_C_ExecuteUbergraph_WBP_StoreSectionTab_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnUnhovered__DelegateSignature
struct UWBP_StoreSectionTab_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnHovered__DelegateSignature
struct UWBP_StoreSectionTab_C_OnHovered__DelegateSignature_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnClicked__DelegateSignature
struct UWBP_StoreSectionTab_C_OnClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
