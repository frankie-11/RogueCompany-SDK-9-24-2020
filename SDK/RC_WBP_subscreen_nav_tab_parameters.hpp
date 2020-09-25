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

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.TryCreateCalloutWidget
struct UWBP_subscreen_nav_tab_C_TryCreateCalloutWidget_Params
{
	bool                                               Created;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetShowCallout
struct UWBP_subscreen_nav_tab_C_SetShowCallout_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetDisabled
struct UWBP_subscreen_nav_tab_C_SetDisabled_Params
{
	bool*                                              SetDisabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SettingsSubScreenNavTabHoveredSFX
struct UWBP_subscreen_nav_tab_C_SettingsSubScreenNavTabHoveredSFX_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SettingsSubScreenNavTabClickedSFX
struct UWBP_subscreen_nav_tab_C_SettingsSubScreenNavTabClickedSFX_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.Construct
struct UWBP_subscreen_nav_tab_C_Construct_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_subscreen_nav_tab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.On Selected
struct UWBP_subscreen_nav_tab_C_On_Selected_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.On Unselected
struct UWBP_subscreen_nav_tab_C_On_Unselected_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_subscreen_nav_tab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_subscreen_nav_tab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetButtonText
struct UWBP_subscreen_nav_tab_C_SetButtonText_Params
{
	struct FText*                                      ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.ProxyClick
struct UWBP_subscreen_nav_tab_C_ProxyClick_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.InitializeWidget
struct UWBP_subscreen_nav_tab_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.PreConstruct
struct UWBP_subscreen_nav_tab_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.ExecuteUbergraph_WBP_subscreen_nav_tab
struct UWBP_subscreen_nav_tab_C_ExecuteUbergraph_WBP_subscreen_nav_tab_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.On Tab Selected__DelegateSignature
struct UWBP_subscreen_nav_tab_C_On_Tab_Selected__DelegateSignature_Params
{
	class UWBP_subscreen_nav_tab_C**                   Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
