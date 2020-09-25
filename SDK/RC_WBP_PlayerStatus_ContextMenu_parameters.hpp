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

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.GetStatusColor
struct UWBP_PlayerStatus_ContextMenu_C_GetStatusColor_Params
{
	EKSPlayerOnlineStatus*                             PlayerStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 StatusColor;                                              // (Parm, OutParm)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.UpdatePlayerStatus
struct UWBP_PlayerStatus_ContextMenu_C_UpdatePlayerStatus_Params
{
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HideContextMenu
struct UWBP_PlayerStatus_ContextMenu_C_HideContextMenu_Params
{
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ShowContextMenu
struct UWBP_PlayerStatus_ContextMenu_C_ShowContextMenu_Params
{
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HandleOptionSelected
struct UWBP_PlayerStatus_ContextMenu_C_HandleOptionSelected_Params
{
	TEnumAsByte<EPlayerStatusOption>*                  EPlayerStatus;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetupOptionButton
struct UWBP_PlayerStatus_ContextMenu_C_SetupOptionButton_Params
{
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.PreConstruct
struct UWBP_PlayerStatus_ContextMenu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.InitializeWidget
struct UWBP_PlayerStatus_ContextMenu_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.Construct
struct UWBP_PlayerStatus_ContextMenu_C_Construct_Params
{
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetPlayerInfo
struct UWBP_PlayerStatus_ContextMenu_C_SetPlayerInfo_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.DetermineToggleState
struct UWBP_PlayerStatus_ContextMenu_C_DetermineToggleState_Params
{
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenu
struct UWBP_PlayerStatus_ContextMenu_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuStart__DelegateSignature
struct UWBP_PlayerStatus_ContextMenu_C_OnMenuStart__DelegateSignature_Params
{
	class UWBP_PlayerStatus_ContextMenuOption_C**      FirstFocusableButton;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnReadyNavigation__DelegateSignature
struct UWBP_PlayerStatus_ContextMenu_C_OnReadyNavigation__DelegateSignature_Params
{
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuHidden__DelegateSignature
struct UWBP_PlayerStatus_ContextMenu_C_OnMenuHidden__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
