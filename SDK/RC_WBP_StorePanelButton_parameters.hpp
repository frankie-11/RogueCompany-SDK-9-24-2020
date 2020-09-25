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

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.SetTint
struct UWBP_StorePanelButton_C_SetTint_Params
{
	struct FLinearColor*                               BaseColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnHoveredLogic
struct UWBP_StorePanelButton_C_OnHoveredLogic_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.NavigateConfirm
struct UWBP_StorePanelButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnClickSound
struct UWBP_StorePanelButton_C_OnClickSound_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnHoverSound
struct UWBP_StorePanelButton_C_OnHoverSound_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.Construct
struct UWBP_StorePanelButton_C_Construct_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnGamepadConfirmed
struct UWBP_StorePanelButton_C_OnGamepadConfirmed_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_StorePanelButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StorePanelButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StorePanelButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.GamepadHover
struct UWBP_StorePanelButton_C_GamepadHover_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.GamepadUnhover
struct UWBP_StorePanelButton_C_GamepadUnhover_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.DisableButton
struct UWBP_StorePanelButton_C_DisableButton_Params
{
	bool*                                              bShouldDisable;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.CallButtonHover
struct UWBP_StorePanelButton_C_CallButtonHover_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.CallButtonUnhover
struct UWBP_StorePanelButton_C_CallButtonUnhover_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.PreConstruct
struct UWBP_StorePanelButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UWBP_StorePanelButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
struct UWBP_StorePanelButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.ExecuteUbergraph_WBP_StorePanelButton
struct UWBP_StorePanelButton_C_ExecuteUbergraph_WBP_StorePanelButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnUnhovered__DelegateSignature
struct UWBP_StorePanelButton_C_OnBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnHovered__DelegateSignature
struct UWBP_StorePanelButton_C_OnBtnHovered__DelegateSignature_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnClicked__DelegateSignature
struct UWBP_StorePanelButton_C_OnBtnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
