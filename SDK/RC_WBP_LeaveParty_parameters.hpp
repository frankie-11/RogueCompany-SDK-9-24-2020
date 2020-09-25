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

// Function WBP_LeaveParty.WBP_LeaveParty_C.NavigateConfirm
struct UWBP_LeaveParty_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.HandleInputStateChanged
struct UWBP_LeaveParty_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   CurrentInputState;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyHoverSFX
struct UWBP_LeaveParty_C_SocialLeavePartyHoverSFX_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyClickSFX
struct UWBP_LeaveParty_C_SocialLeavePartyClickSFX_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.InitializeWidget
struct UWBP_LeaveParty_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.HandlePartyUpdated
struct UWBP_LeaveParty_C_HandlePartyUpdated_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.CallLeaveParty
struct UWBP_LeaveParty_C_CallLeaveParty_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_LeaveParty_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_LeaveParty_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_LeaveParty_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadHover
struct UWBP_LeaveParty_C_GamepadHover_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadUnhover
struct UWBP_LeaveParty_C_GamepadUnhover_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.ExecuteUbergraph_WBP_LeaveParty
struct UWBP_LeaveParty_C_ExecuteUbergraph_WBP_LeaveParty_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.OnPartyLeaveVisibilityChange__DelegateSignature
struct UWBP_LeaveParty_C_OnPartyLeaveVisibilityChange__DelegateSignature_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
