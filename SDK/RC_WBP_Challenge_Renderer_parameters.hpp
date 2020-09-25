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

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.NavigateConfirmPressed
struct UWBP_Challenge_Renderer_C_NavigateConfirmPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.SetRewardDisplay
struct UWBP_Challenge_Renderer_C_SetRewardDisplay_Params
{
	struct FActivityTier*                              ActivityTier;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.SetChallengeInformation
struct UWBP_Challenge_Renderer_C_SetChallengeInformation_Params
{
	class UKSChallengeActivityInstance**               ChallengeActivity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.PreConstruct
struct UWBP_Challenge_Renderer_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_Challenge_Renderer_C_BndEvt__RerollButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UWBP_Challenge_Renderer_C_BndEvt__RerollButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UWBP_Challenge_Renderer_C_BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UWBP_Challenge_Renderer_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.GamepadHover
struct UWBP_Challenge_Renderer_C_GamepadHover_Params
{
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.GamepadUnhover
struct UWBP_Challenge_Renderer_C_GamepadUnhover_Params
{
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.InitializeWidget
struct UWBP_Challenge_Renderer_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_Challenge_Renderer_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_Challenge_Renderer_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.ExecuteUbergraph_WBP_Challenge_Renderer
struct UWBP_Challenge_Renderer_C_ExecuteUbergraph_WBP_Challenge_Renderer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.DisplayRerollPrompt__DelegateSignature
struct UWBP_Challenge_Renderer_C_DisplayRerollPrompt__DelegateSignature_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
