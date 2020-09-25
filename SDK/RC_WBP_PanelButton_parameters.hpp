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

// Function WBP_PanelButton.WBP_PanelButton_C.SetIsDisabled
struct UWBP_PanelButton_C_SetIsDisabled_Params
{
	bool*                                              bDisabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PanelButton.WBP_PanelButton_C.NavigateConfirm
struct UWBP_PanelButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PanelButton.WBP_PanelButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_PanelButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PanelButton.WBP_PanelButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_PanelButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_PanelButton.WBP_PanelButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_PanelButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_PanelButton.WBP_PanelButton_C.GamepadHover
struct UWBP_PanelButton_C_GamepadHover_Params
{
};

// Function WBP_PanelButton.WBP_PanelButton_C.GamepadUnhover
struct UWBP_PanelButton_C_GamepadUnhover_Params
{
};

// Function WBP_PanelButton.WBP_PanelButton_C.GamepadConfirm
struct UWBP_PanelButton_C_GamepadConfirm_Params
{
};

// Function WBP_PanelButton.WBP_PanelButton_C.Do Hover
struct UWBP_PanelButton_C_Do_Hover_Params
{
};

// Function WBP_PanelButton.WBP_PanelButton_C.Do Unhover
struct UWBP_PanelButton_C_Do_Unhover_Params
{
};

// Function WBP_PanelButton.WBP_PanelButton_C.ExecuteUbergraph_WBP_PanelButton
struct UWBP_PanelButton_C_ExecuteUbergraph_WBP_PanelButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PanelButton.WBP_PanelButton_C.OnUnhovered__DelegateSignature
struct UWBP_PanelButton_C_OnUnhovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PanelButton.WBP_PanelButton_C.OnHovered__DelegateSignature
struct UWBP_PanelButton_C_OnHovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PanelButton.WBP_PanelButton_C.OnClicked__DelegateSignature
struct UWBP_PanelButton_C_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
