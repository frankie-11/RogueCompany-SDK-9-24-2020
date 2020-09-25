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

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BindContextMenu
struct UWBP_Social_Header_Cosmetic_C_BindContextMenu_Params
{
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateName
struct UWBP_Social_Header_Cosmetic_C_UpdateName_Params
{
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateAfterInfoChange
struct UWBP_Social_Header_Cosmetic_C_UpdateAfterInfoChange_Params
{
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateBanner
struct UWBP_Social_Header_Cosmetic_C_UpdateBanner_Params
{
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateAvatar
struct UWBP_Social_Header_Cosmetic_C_UpdateAvatar_Params
{
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.SetData
struct UWBP_Social_Header_Cosmetic_C_SetData_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.PreConstruct
struct UWBP_Social_Header_Cosmetic_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.InitializeWidget
struct UWBP_Social_Header_Cosmetic_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_Social_Header_Cosmetic_C_BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleInputStateChanged
struct UWBP_Social_Header_Cosmetic_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ToggleDND
struct UWBP_Social_Header_Cosmetic_C_ToggleDND_Params
{
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleReadyNavigation
struct UWBP_Social_Header_Cosmetic_C_HandleReadyNavigation_Params
{
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuStart
struct UWBP_Social_Header_Cosmetic_C_HandleMenuStart_Params
{
	class UWBP_PlayerStatus_ContextMenuOption_C**      FocusWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuHidden
struct UWBP_Social_Header_Cosmetic_C_HandleMenuHidden_Params
{
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HideStatusMenu
struct UWBP_Social_Header_Cosmetic_C_HideStatusMenu_Params
{
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ExecuteUbergraph_WBP_Social_Header_Cosmetic
struct UWBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuHidden__DelegateSignature
struct UWBP_Social_Header_Cosmetic_C_OnMenuHidden__DelegateSignature_Params
{
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuShown__DelegateSignature
struct UWBP_Social_Header_Cosmetic_C_OnMenuShown__DelegateSignature_Params
{
	class UWBP_PlayerStatus_ContextMenuOption_C**      FocusWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnNavigationReady__DelegateSignature
struct UWBP_Social_Header_Cosmetic_C_OnNavigationReady__DelegateSignature_Params
{
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
