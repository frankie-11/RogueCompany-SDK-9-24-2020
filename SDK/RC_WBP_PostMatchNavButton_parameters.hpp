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

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.NavigateConfirm
struct UWBP_PostMatchNavButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadConfirm
struct UWBP_PostMatchNavButton_C_GamepadConfirm_Params
{
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadHover
struct UWBP_PostMatchNavButton_C_GamepadHover_Params
{
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadUnhover
struct UWBP_PostMatchNavButton_C_GamepadUnhover_Params
{
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.SetActive
struct UWBP_PostMatchNavButton_C_SetActive_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.Construct
struct UWBP_PostMatchNavButton_C_Construct_Params
{
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.InitializeWidget
struct UWBP_PostMatchNavButton_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.PreConstruct
struct UWBP_PostMatchNavButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.HandleButtonClicked
struct UWBP_PostMatchNavButton_C_HandleButtonClicked_Params
{
	class UWBP_subscreen_nav_tab_C**                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.ExecuteUbergraph_WBP_PostMatchNavButton
struct UWBP_PostMatchNavButton_C_ExecuteUbergraph_WBP_PostMatchNavButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.OnClicked__DelegateSignature
struct UWBP_PostMatchNavButton_C_OnClicked__DelegateSignature_Params
{
	class UWBP_PostMatchNavButton_C**                  SelectedWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
