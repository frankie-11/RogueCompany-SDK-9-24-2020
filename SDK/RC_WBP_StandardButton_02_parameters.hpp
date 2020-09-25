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

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.SetDefaultDisplay
struct UWBP_StandardButton_02_C_SetDefaultDisplay_Params
{
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.SetWidth
struct UWBP_StandardButton_02_C_SetWidth_Params
{
	float*                                             InWidth;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.SetButtonText
struct UWBP_StandardButton_02_C_SetButtonText_Params
{
	struct FText*                                      ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.NavigateConfirm
struct UWBP_StandardButton_02_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.PreConstruct
struct UWBP_StandardButton_02_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.Construct
struct UWBP_StandardButton_02_C_Construct_Params
{
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_StandardButton_02_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StandardButton_02_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StandardButton_02_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.GamepadHover
struct UWBP_StandardButton_02_C_GamepadHover_Params
{
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.GamepadUnhover
struct UWBP_StandardButton_02_C_GamepadUnhover_Params
{
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.GamepadConfirm
struct UWBP_StandardButton_02_C_GamepadConfirm_Params
{
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.Do Hover
struct UWBP_StandardButton_02_C_Do_Hover_Params
{
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.Do Unhover
struct UWBP_StandardButton_02_C_Do_Unhover_Params
{
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.ExecuteUbergraph_WBP_StandardButton_02
struct UWBP_StandardButton_02_C_ExecuteUbergraph_WBP_StandardButton_02_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.OnUnhovered__DelegateSignature
struct UWBP_StandardButton_02_C_OnUnhovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.OnHovered__DelegateSignature
struct UWBP_StandardButton_02_C_OnHovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_StandardButton_02.WBP_StandardButton_02_C.OnClicked__DelegateSignature
struct UWBP_StandardButton_02_C_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
