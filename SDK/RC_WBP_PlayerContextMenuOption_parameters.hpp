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

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GetCurrentOptionText
struct UWBP_PlayerContextMenuOption_C_GetCurrentOptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.NavigateConfirm
struct UWBP_PlayerContextMenuOption_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.IsActiveForNavigation
struct UWBP_PlayerContextMenuOption_C_IsActiveForNavigation_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Update Callout Visibility
struct UWBP_PlayerContextMenuOption_C_Update_Callout_Visibility_Params
{
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.SocialPlayerContextMenuOptionClickSFX
struct UWBP_PlayerContextMenuOption_C_SocialPlayerContextMenuOptionClickSFX_Params
{
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.SocialPlayerContextMenuOptionHoverSFX
struct UWBP_PlayerContextMenuOption_C_SocialPlayerContextMenuOptionHoverSFX_Params
{
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.PreConstruct
struct UWBP_PlayerContextMenuOption_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.SetActiveInMenu
struct UWBP_PlayerContextMenuOption_C_SetActiveInMenu_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Handle Input State Changed
struct UWBP_PlayerContextMenuOption_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GamepadHover
struct UWBP_PlayerContextMenuOption_C_GamepadHover_Params
{
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GamepadUnhover
struct UWBP_PlayerContextMenuOption_C_GamepadUnhover_Params
{
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Construct
struct UWBP_PlayerContextMenuOption_C_Construct_Params
{
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature
struct UWBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature_Params
{
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature
struct UWBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature
struct UWBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature_Params
{
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.OnInitialized
struct UWBP_PlayerContextMenuOption_C_OnInitialized_Params
{
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.ExecuteUbergraph_WBP_PlayerContextMenuOption
struct UWBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.OnContextOptionSelected__DelegateSignature
struct UWBP_PlayerContextMenuOption_C_OnContextOptionSelected__DelegateSignature_Params
{
	TEnumAsByte<EPlayerContextOption>*                 Context_Option;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
