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

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextUnhover
struct UWBP_CustomLobbyPlayer_C_HandlePlayerContextUnhover_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextHover
struct UWBP_CustomLobbyPlayer_C_HandlePlayerContextHover_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoHover
struct UWBP_CustomLobbyPlayer_C_DoHover_Params
{
	bool*                                              PlayControlsShow;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoUnhover
struct UWBP_CustomLobbyPlayer_C_DoUnhover_Params
{
	bool*                                              PlayControlsHide;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoPlayerClicked
struct UWBP_CustomLobbyPlayer_C_DoPlayerClicked_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetRendererIsLocalPlayer
struct UWBP_CustomLobbyPlayer_C_GetRendererIsLocalPlayer_Params
{
	bool                                               IsLocalPlayer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerKick
struct UWBP_CustomLobbyPlayer_C_GetCanLocalPlayerKick_Params
{
	bool                                               CanKick;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.UserIsOverUs
struct UWBP_CustomLobbyPlayer_C_UserIsOverUs_Params
{
	bool                                               IsOver;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerControl
struct UWBP_CustomLobbyPlayer_C_GetCanLocalPlayerControl_Params
{
	bool                                               CanControl;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.NavigateConfirm
struct UWBP_CustomLobbyPlayer_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnKeyUp
struct UWBP_CustomLobbyPlayer_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetEmpty
struct UWBP_CustomLobbyPlayer_C_SetEmpty_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetPlayerInfo
struct UWBP_CustomLobbyPlayer_C_SetPlayerInfo_Params
{
	struct FPUMG_CustomMatchMember                     playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetControlsSide
struct UWBP_CustomLobbyPlayer_C_SetControlsSide_Params
{
	TEnumAsByte<ELaterality>*                          Side;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetControlsHoverAnim
struct UWBP_CustomLobbyPlayer_C_GetControlsHoverAnim_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.PreConstruct
struct UWBP_CustomLobbyPlayer_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadHover
struct UWBP_CustomLobbyPlayer_C_GamepadHover_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadUnhover
struct UWBP_CustomLobbyPlayer_C_GamepadUnhover_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInitialized
struct UWBP_CustomLobbyPlayer_C_OnInitialized_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.Construct
struct UWBP_CustomLobbyPlayer_C_Construct_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerClicked
struct UWBP_CustomLobbyPlayer_C_HandlePlayerClicked_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuOpen
struct UWBP_CustomLobbyPlayer_C_OnContextMenuOpen_Params
{
	TEnumAsByte<ELaterality>*                          Side;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuClose
struct UWBP_CustomLobbyPlayer_C_OnContextMenuClose_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetVoiceState
struct UWBP_CustomLobbyPlayer_C_SetVoiceState_Params
{
	bool*                                              ShouldShow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMuted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInputStateChange
struct UWBP_CustomLobbyPlayer_C_OnInputStateChange_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.ExecuteUbergraph_WBP_CustomLobbyPlayer
struct UWBP_CustomLobbyPlayer_C_ExecuteUbergraph_WBP_CustomLobbyPlayer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnUnhovered__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_OnUnhovered__DelegateSignature_Params
{
	class UWBP_CustomLobbyPlayer_C**                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnHovered__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_OnHovered__DelegateSignature_Params
{
	class UWBP_CustomLobbyPlayer_C**                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerKick__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_OnPlayerKick__DelegateSignature_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWidget**                                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerSwap__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_OnPlayerSwap__DelegateSignature_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWidget**                                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnEmptyClicked__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_OnEmptyClicked__DelegateSignature_Params
{
	class UKSWidget**                                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerClicked__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_OnPlayerClicked__DelegateSignature_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWidget**                                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
