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

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.NavigateConfirm
struct UWBP_PlayerStatus_ContextMenuOption_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.IsActiveForNavigation
struct UWBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Update Callout Visibility
struct UWBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility_Params
{
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SocialPlayerContextMenuOptionClickSFX
struct UWBP_PlayerStatus_ContextMenuOption_C_SocialPlayerContextMenuOptionClickSFX_Params
{
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SocialPlayerContextMenuOptionHoverSFX
struct UWBP_PlayerStatus_ContextMenuOption_C_SocialPlayerContextMenuOptionHoverSFX_Params
{
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.PreConstruct
struct UWBP_PlayerStatus_ContextMenuOption_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SetActiveInMenu
struct UWBP_PlayerStatus_ContextMenuOption_C_SetActiveInMenu_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.InitializeWidget
struct UWBP_PlayerStatus_ContextMenuOption_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Handle Input State Changed
struct UWBP_PlayerStatus_ContextMenuOption_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.GamepadHover
struct UWBP_PlayerStatus_ContextMenuOption_C_GamepadHover_Params
{
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.GamepadUnhover
struct UWBP_PlayerStatus_ContextMenuOption_C_GamepadUnhover_Params
{
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Construct
struct UWBP_PlayerStatus_ContextMenuOption_C_Construct_Params
{
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature
struct UWBP_PlayerStatus_ContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature_Params
{
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature
struct UWBP_PlayerStatus_ContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature
struct UWBP_PlayerStatus_ContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature_Params
{
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption
struct UWBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.OnContextOptionSelected__DelegateSignature
struct UWBP_PlayerStatus_ContextMenuOption_C_OnContextOptionSelected__DelegateSignature_Params
{
	TEnumAsByte<EPlayerStatusOption>*                  Context_Option;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
