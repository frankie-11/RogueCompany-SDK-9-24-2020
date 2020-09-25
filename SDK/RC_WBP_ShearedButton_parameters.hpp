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

// Function WBP_ShearedButton.WBP_ShearedButton_C.ApplyColors
struct UWBP_ShearedButton_C_ApplyColors_Params
{
	struct FLinearColor*                               PrimaryColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               SecondaryColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.SetActive
struct UWBP_ShearedButton_C_SetActive_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.SetDisabled
struct UWBP_ShearedButton_C_SetDisabled_Params
{
	bool*                                              Disable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.NavigateConfirm
struct UWBP_ShearedButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.SetMessage
struct UWBP_ShearedButton_C_SetMessage_Params
{
	struct FText*                                      InTitle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.SetShadowVisibility
struct UWBP_ShearedButton_C_SetShadowVisibility_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.SetPositions
struct UWBP_ShearedButton_C_SetPositions_Params
{
	float*                                             InOffset;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.SetSizings
struct UWBP_ShearedButton_C_SetSizings_Params
{
	float*                                             InWidth;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.SetColors
struct UWBP_ShearedButton_C_SetColors_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.HoverStateAnimFinished
struct UWBP_ShearedButton_C_HoverStateAnimFinished_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.UnhoverStateAnim
struct UWBP_ShearedButton_C_UnhoverStateAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.UnhoverStateAnimFinished
struct UWBP_ShearedButton_C_UnhoverStateAnimFinished_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.PressedStateAnim
struct UWBP_ShearedButton_C_PressedStateAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.PressedStateAnimFinished
struct UWBP_ShearedButton_C_PressedStateAnimFinished_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.ReleasedStateAnim
struct UWBP_ShearedButton_C_ReleasedStateAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.ReleasedStateAnimFinished
struct UWBP_ShearedButton_C_ReleasedStateAnimFinished_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.HoverStateAnim
struct UWBP_ShearedButton_C_HoverStateAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.InitializeTickAnimations
struct UWBP_ShearedButton_C_InitializeTickAnimations_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.PreConstruct
struct UWBP_ShearedButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.Construct
struct UWBP_ShearedButton_C_Construct_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_ShearedButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.GamepadHover
struct UWBP_ShearedButton_C_GamepadHover_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.GamepadUnhover
struct UWBP_ShearedButton_C_GamepadUnhover_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyClick
struct UWBP_ShearedButton_C_ProxyClick_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyHover
struct UWBP_ShearedButton_C_ProxyHover_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyUnhover
struct UWBP_ShearedButton_C_ProxyUnhover_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_ShearedButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_ShearedButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.ResetDisplay
struct UWBP_ShearedButton_C_ResetDisplay_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UWBP_ShearedButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
struct UWBP_ShearedButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.ExecuteUbergraph_WBP_ShearedButton
struct UWBP_ShearedButton_C_ExecuteUbergraph_WBP_ShearedButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.OnUnhovered__DelegateSignature
struct UWBP_ShearedButton_C_OnUnhovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.OnHovered__DelegateSignature
struct UWBP_ShearedButton_C_OnHovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_ShearedButton.WBP_ShearedButton_C.OnClicked__DelegateSignature
struct UWBP_ShearedButton_C_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
