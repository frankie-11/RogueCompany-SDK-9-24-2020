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

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.RestoreDefaultColor
struct UWBP_ButtonSlot_Cosmetic_C_RestoreDefaultColor_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OverrideColor
struct UWBP_ButtonSlot_Cosmetic_C_OverrideColor_Params
{
	struct FLinearColor*                               New_Base_Color;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               New_Highlight_Color;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetTint
struct UWBP_ButtonSlot_Cosmetic_C_SetTint_Params
{
	struct FLinearColor*                               BaseColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               HighlightColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoveredLogic
struct UWBP_ButtonSlot_Cosmetic_C_OnHoveredLogic_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.NavigateConfirm
struct UWBP_ButtonSlot_Cosmetic_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoverSound
struct UWBP_ButtonSlot_Cosmetic_C_OnHoverSound_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Construct
struct UWBP_ButtonSlot_Cosmetic_C_Construct_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnGamepadConfirmed
struct UWBP_ButtonSlot_Cosmetic_C_OnGamepadConfirmed_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadHover
struct UWBP_ButtonSlot_Cosmetic_C_GamepadHover_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadUnhover
struct UWBP_ButtonSlot_Cosmetic_C_GamepadUnhover_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.DisableButton
struct UWBP_ButtonSlot_Cosmetic_C_DisableButton_Params
{
	bool*                                              bShouldDisable;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonHover
struct UWBP_ButtonSlot_Cosmetic_C_CallButtonHover_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonUnhover
struct UWBP_ButtonSlot_Cosmetic_C_CallButtonUnhover_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetIsActiveState
struct UWBP_ButtonSlot_Cosmetic_C_SetIsActiveState_Params
{
	bool*                                              bIsActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PreConstruct
struct UWBP_ButtonSlot_Cosmetic_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnClickSound
struct UWBP_ButtonSlot_Cosmetic_C_OnClickSound_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ExecuteUbergraph_WBP_ButtonSlot_Cosmetic
struct UWBP_ButtonSlot_Cosmetic_C_ExecuteUbergraph_WBP_ButtonSlot_Cosmetic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnUnhovered__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_OnBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnHovered__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_OnBtnHovered__DelegateSignature_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnClicked__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_OnBtnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
