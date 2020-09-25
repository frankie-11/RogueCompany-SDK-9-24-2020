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

// Function WBP_TopNavButton.WBP_TopNavButton_C.SetNewIndicator
struct UWBP_TopNavButton_C_SetNewIndicator_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.IsDisabled
struct UWBP_TopNavButton_C_IsDisabled_Params
{
	bool                                               Disabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.IsActive
struct UWBP_TopNavButton_C_IsActive_Params
{
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.PreConstruct
struct UWBP_TopNavButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.SetMessage
struct UWBP_TopNavButton_C_SetMessage_Params
{
	struct FText*                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.Construct
struct UWBP_TopNavButton_C_Construct_Params
{
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.DisableButton
struct UWBP_TopNavButton_C_DisableButton_Params
{
	bool*                                              IsDisabled;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.SetActive
struct UWBP_TopNavButton_C_SetActive_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.GamepadConfirm
struct UWBP_TopNavButton_C_GamepadConfirm_Params
{
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.InitializeWidget
struct UWBP_TopNavButton_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.HandleButtonClick
struct UWBP_TopNavButton_C_HandleButtonClick_Params
{
	class UWBP_subscreen_nav_tab_C**                   Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.ExecuteUbergraph_WBP_TopNavButton
struct UWBP_TopNavButton_C_ExecuteUbergraph_WBP_TopNavButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.OnNonRouteClicked__DelegateSignature
struct UWBP_TopNavButton_C_OnNonRouteClicked__DelegateSignature_Params
{
	class UKSWidget**                                  ButtonClicked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.OnUnhovered__DelegateSignature
struct UWBP_TopNavButton_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.OnHovered__DelegateSignature
struct UWBP_TopNavButton_C_OnHovered__DelegateSignature_Params
{
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.OnClicked__DelegateSignature
struct UWBP_TopNavButton_C_OnClicked__DelegateSignature_Params
{
	struct FName*                                      TargetViewState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
