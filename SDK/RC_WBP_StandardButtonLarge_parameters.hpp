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

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetHeight
struct UWBP_StandardButtonLarge_C_SetHeight_Params
{
	float*                                             InHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetGamepadPromptKey
struct UWBP_StandardButtonLarge_C_GetGamepadPromptKey_Params
{
	bool                                               HasValidKeyPrompt;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        GamepadKey;                                               // (Parm, OutParm)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Set Key Prompt
struct UWBP_StandardButtonLarge_C_Set_Key_Prompt_Params
{
	struct FKey*                                       Prompt;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetGamepadPromptForAction
struct UWBP_StandardButtonLarge_C_SetGamepadPromptForAction_Params
{
	struct FName*                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDefaultDisplay
struct UWBP_StandardButtonLarge_C_SetDefaultDisplay_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetWidth
struct UWBP_StandardButtonLarge_C_SetWidth_Params
{
	float*                                             InWidth;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetButtonText
struct UWBP_StandardButtonLarge_C_SetButtonText_Params
{
	struct FText*                                      ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.NavigateConfirm
struct UWBP_StandardButtonLarge_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.PreConstruct
struct UWBP_StandardButtonLarge_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Construct
struct UWBP_StandardButtonLarge_C_Construct_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_StandardButtonLarge_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StandardButtonLarge_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StandardButtonLarge_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadHover
struct UWBP_StandardButtonLarge_C_GamepadHover_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadUnhover
struct UWBP_StandardButtonLarge_C_GamepadUnhover_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadConfirm
struct UWBP_StandardButtonLarge_C_GamepadConfirm_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Hover
struct UWBP_StandardButtonLarge_C_Do_Hover_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Unhover
struct UWBP_StandardButtonLarge_C_Do_Unhover_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.HandleInputStateChanged
struct UWBP_StandardButtonLarge_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnInitialized
struct UWBP_StandardButtonLarge_C_OnInitialized_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.ExecuteUbergraph_WBP_StandardButtonLarge
struct UWBP_StandardButtonLarge_C_ExecuteUbergraph_WBP_StandardButtonLarge_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnUnhovered__DelegateSignature
struct UWBP_StandardButtonLarge_C_OnUnhovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnHovered__DelegateSignature
struct UWBP_StandardButtonLarge_C_OnHovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnClicked__DelegateSignature
struct UWBP_StandardButtonLarge_C_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
