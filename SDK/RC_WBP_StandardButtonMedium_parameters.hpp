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

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GetGamepadPromptKey
struct UWBP_StandardButtonMedium_C_GetGamepadPromptKey_Params
{
	bool                                               HasValidKeyPrompt;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        GamepadKey;                                               // (Parm, OutParm)
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetKeyPrompt
struct UWBP_StandardButtonMedium_C_SetKeyPrompt_Params
{
	struct FKey*                                       GamepadButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetDefaultDisplay
struct UWBP_StandardButtonMedium_C_SetDefaultDisplay_Params
{
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetWidth
struct UWBP_StandardButtonMedium_C_SetWidth_Params
{
	float*                                             InWidth;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetButtonText
struct UWBP_StandardButtonMedium_C_SetButtonText_Params
{
	struct FText*                                      ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.NavigateConfirm
struct UWBP_StandardButtonMedium_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.PreConstruct
struct UWBP_StandardButtonMedium_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Construct
struct UWBP_StandardButtonMedium_C_Construct_Params
{
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_StandardButtonMedium_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StandardButtonMedium_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StandardButtonMedium_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadHover
struct UWBP_StandardButtonMedium_C_GamepadHover_Params
{
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadUnhover
struct UWBP_StandardButtonMedium_C_GamepadUnhover_Params
{
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadConfirm
struct UWBP_StandardButtonMedium_C_GamepadConfirm_Params
{
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Hover
struct UWBP_StandardButtonMedium_C_Do_Hover_Params
{
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Unhover
struct UWBP_StandardButtonMedium_C_Do_Unhover_Params
{
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.InitializeWidget
struct UWBP_StandardButtonMedium_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.HandleInputStateChanged
struct UWBP_StandardButtonMedium_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnInitialized
struct UWBP_StandardButtonMedium_C_OnInitialized_Params
{
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.ExecuteUbergraph_WBP_StandardButtonMedium
struct UWBP_StandardButtonMedium_C_ExecuteUbergraph_WBP_StandardButtonMedium_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnUnhovered__DelegateSignature
struct UWBP_StandardButtonMedium_C_OnUnhovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnHovered__DelegateSignature
struct UWBP_StandardButtonMedium_C_OnHovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnClicked__DelegateSignature
struct UWBP_StandardButtonMedium_C_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
