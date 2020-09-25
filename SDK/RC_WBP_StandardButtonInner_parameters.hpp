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

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultValues
struct UWBP_StandardButtonInner_C_SetDefaultValues_Params
{
	float*                                             Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName*                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowPromptOnFocus;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetHeight
struct UWBP_StandardButtonInner_C_SetHeight_Params
{
	float*                                             InHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HasGamepadAction
struct UWBP_StandardButtonInner_C_HasGamepadAction_Params
{
	bool                                               HasGamepadAction;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetGamepadPromptForAction
struct UWBP_StandardButtonInner_C_SetGamepadPromptForAction_Params
{
	struct FName*                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultDisplay
struct UWBP_StandardButtonInner_C_SetDefaultDisplay_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetWidth
struct UWBP_StandardButtonInner_C_SetWidth_Params
{
	float*                                             InWidth;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetButtonText
struct UWBP_StandardButtonInner_C_SetButtonText_Params
{
	struct FText*                                      ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.NavigateConfirm
struct UWBP_StandardButtonInner_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.PreConstruct
struct UWBP_StandardButtonInner_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Construct
struct UWBP_StandardButtonInner_C_Construct_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_StandardButtonInner_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StandardButtonInner_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StandardButtonInner_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadHover
struct UWBP_StandardButtonInner_C_GamepadHover_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadUnhover
struct UWBP_StandardButtonInner_C_GamepadUnhover_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadConfirm
struct UWBP_StandardButtonInner_C_GamepadConfirm_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Hover
struct UWBP_StandardButtonInner_C_Do_Hover_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Unhover
struct UWBP_StandardButtonInner_C_Do_Unhover_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.InitializeWidget
struct UWBP_StandardButtonInner_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HandleInputStateChanged
struct UWBP_StandardButtonInner_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.ExecuteUbergraph_WBP_StandardButtonInner
struct UWBP_StandardButtonInner_C_ExecuteUbergraph_WBP_StandardButtonInner_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnUnhovered__DelegateSignature
struct UWBP_StandardButtonInner_C_OnUnhovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnHovered__DelegateSignature
struct UWBP_StandardButtonInner_C_OnHovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnClicked__DelegateSignature
struct UWBP_StandardButtonInner_C_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
