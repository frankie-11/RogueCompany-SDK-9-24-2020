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

// Function WBP_player_card_module.WBP_player_card_module_C.SetPlayerCardStyle
struct UWBP_player_card_module_C_SetPlayerCardStyle_Params
{
	TEnumAsByte<EPlayerCardStyle>*                     PlayerCardStyle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_card_module.WBP_player_card_module_C.GetStatusColor
struct UWBP_player_card_module_C_GetStatusColor_Params
{
	EKSPlayerOnlineStatus*                             Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 StatusColor;                                              // (Parm, OutParm)
};

// Function WBP_player_card_module.WBP_player_card_module_C.SetVoiceState
struct UWBP_player_card_module_C_SetVoiceState_Params
{
	bool*                                              ShouldShow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMuted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_card_module.WBP_player_card_module_C.View_ResetPlayerCardState
struct UWBP_player_card_module_C_View_ResetPlayerCardState_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.NavigateConfirm
struct UWBP_player_card_module_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_player_card_module.WBP_player_card_module_C.PlayerUpdate
struct UWBP_player_card_module_C_PlayerUpdate_Params
{
	class UPUMG_PlayerInfo**                           Player_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_card_module.WBP_player_card_module_C.View_SetDefault
struct UWBP_player_card_module_C_View_SetDefault_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.View_SetEmpty
struct UWBP_player_card_module_C_View_SetEmpty_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardClickSFX
struct UWBP_player_card_module_C_SocialPlayerCardClickSFX_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardHoverSFX
struct UWBP_player_card_module_C_SocialPlayerCardHoverSFX_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimation
struct UWBP_player_card_module_C_ShowPlayerCardAnimation_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimationFinished
struct UWBP_player_card_module_C_ShowPlayerCardAnimationFinished_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.AddShowPlayerCardAnimation
struct UWBP_player_card_module_C_AddShowPlayerCardAnimation_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_card_module.WBP_player_card_module_C.PreConstruct
struct UWBP_player_card_module_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_player_card_module_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_player_card_module_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_player_card_module_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.Manual Clicked
struct UWBP_player_card_module_C_Manual_Clicked_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.GamepadUnhover
struct UWBP_player_card_module_C_GamepadUnhover_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.GamepadHover
struct UWBP_player_card_module_C_GamepadHover_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.NavigateLeftFailure
struct UWBP_player_card_module_C_NavigateLeftFailure_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.NavigateRightFailure
struct UWBP_player_card_module_C_NavigateRightFailure_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.Manual Hover
struct UWBP_player_card_module_C_Manual_Hover_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.Manual Unhover
struct UWBP_player_card_module_C_Manual_Unhover_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerUpdate
struct UWBP_player_card_module_C_OnPlayerUpdate_Params
{
	class UPUMG_PlayerInfo**                           playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EKSPlayerOnlineStatus*                             PlayerStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsPortalFriend;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsPending;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_card_module.WBP_player_card_module_C.Handle Input State Changed
struct UWBP_player_card_module_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuOpen
struct UWBP_player_card_module_C_OnContextMenuOpen_Params
{
	TEnumAsByte<ELaterality>*                          Side;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuClose
struct UWBP_player_card_module_C_OnContextMenuClose_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.OnInitialized
struct UWBP_player_card_module_C_OnInitialized_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.ExecuteUbergraph_WBP_player_card_module
struct UWBP_player_card_module_C_ExecuteUbergraph_WBP_player_card_module_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_card_module.WBP_player_card_module_C.OnBackButton__DelegateSignature
struct UWBP_player_card_module_C_OnBackButton__DelegateSignature_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.OnCardHovered__DelegateSignature
struct UWBP_player_card_module_C_OnCardHovered__DelegateSignature_Params
{
	class UPUMG_PlayerInfo**                           Card_Player_Info;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateRightFailure__DelegateSignature
struct UWBP_player_card_module_C_OnNavigateRightFailure__DelegateSignature_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateLeftFailure__DelegateSignature
struct UWBP_player_card_module_C_OnNavigateLeftFailure__DelegateSignature_Params
{
};

// Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerClicked__DelegateSignature
struct UWBP_player_card_module_C_OnPlayerClicked__DelegateSignature_Params
{
	class UWBP_player_card_module_C**                  Selected_Player_Card;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
