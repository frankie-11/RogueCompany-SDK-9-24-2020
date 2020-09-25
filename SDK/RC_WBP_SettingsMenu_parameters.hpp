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

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Clicked
struct UWBP_SettingsMenu_C_On_Tab_Clicked_Params
{
	class UWBP_subscreen_nav_tab_C**                   Tab_Selected;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPageState
struct UWBP_SettingsMenu_C_ResetPageState_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetContainerWidgetForPUMGWidgetOnPage
struct UWBP_SettingsMenu_C_GetContainerWidgetForPUMGWidgetOnPage_Params
{
	class UKSSettingsPage**                            Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPUMG_Widget**                               PUMG_Widget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSSettingsContainer*                        KSSettingsContainerWidget;                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Mouse Entered
struct UWBP_SettingsMenu_C_On_Widget_Mouse_Entered_Params
{
	class UPUMG_Widget**                               PUMG_Widget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bEntered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Hover Handling
struct UWBP_SettingsMenu_C_Setup_Hover_Handling_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsContainersForPage
struct UWBP_SettingsMenu_C_GetSettingsContainersForPage_Params
{
	class UKSSettingsPage**                            SettingsPage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UKSSettingsContainer*>                SettingsContainers;                                       // (Parm, OutParm, ZeroConstructor)
	TArray<class UPUMG_Widget*>                        SettingsContainersAsPUMG;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetForPUMGWidgetOnPage
struct UWBP_SettingsMenu_C_GetSettingsWidgetForPUMGWidgetOnPage_Params
{
	class UKSSettingsPage**                            Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPUMG_Widget**                               PUMG_Widget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSSettingsWidget*                           KSSettingsWidget;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Get Current Page
struct UWBP_SettingsMenu_C_Get_Current_Page_Params
{
	class UKSSettingsPage*                             KSSettingsPage;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Assign Tab Icons
struct UWBP_SettingsMenu_C_Assign_Tab_Icons_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Assign Tab Icon
struct UWBP_SettingsMenu_C_Assign_Tab_Icon_Params
{
	class UImage**                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      Action_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Input State Changed
struct UWBP_SettingsMenu_C_On_Input_State_Changed_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   Input_State;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Input State Handling
struct UWBP_SettingsMenu_C_Setup_Input_State_Handling_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Login Handling
struct UWBP_SettingsMenu_C_Setup_Login_Handling_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Handle Login State
struct UWBP_SettingsMenu_C_Handle_Login_State_Params
{
	EPUMG_LoginState*                                  Login_State;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Right
struct UWBP_SettingsMenu_C_Tab_Right_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Left
struct UWBP_SettingsMenu_C_Tab_Left_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Go To Active Tab
struct UWBP_SettingsMenu_C_Go_To_Active_Tab_Params
{
	bool*                                              bInstantSwitch;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Recover From Navigate Failure
struct UWBP_SettingsMenu_C_Recover_From_Navigate_Failure_Params
{
	class UPUMG_Widget**                               PUMG_Widget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               Index_Offset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Down Failure
struct UWBP_SettingsMenu_C_Widget_Navigate_Down_Failure_Params
{
	int*                                               Focus_Group;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_Widget**                               PUMG_Widget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Up Failure
struct UWBP_SettingsMenu_C_Widget_Navigate_Up_Failure_Params
{
	int*                                               Focus_Group;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_Widget**                               PUMG_Widget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Gamepad Hovered
struct UWBP_SettingsMenu_C_On_Widget_Gamepad_Hovered_Params
{
	class UPUMG_Widget**                               PUMG_Widget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bHovered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll Widget Into View
struct UWBP_SettingsMenu_C_Scroll_Widget_Into_View_Params
{
	class UPUMG_Widget**                               PUMG_Widget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To Start
struct UWBP_SettingsMenu_C_Scroll_To_Start_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To End
struct UWBP_SettingsMenu_C_Scroll_To_End_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GoBack
struct UWBP_SettingsMenu_C_GoBack_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Revert Settings
struct UWBP_SettingsMenu_C_Revert_Settings_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ConfirmExit
struct UWBP_SettingsMenu_C_ConfirmExit_Params
{
	bool*                                              ShouldSaveSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Restore Settings
struct UWBP_SettingsMenu_C_Restore_Settings_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExitSettingsPage
struct UWBP_SettingsMenu_C_ExitSettingsPage_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.HasAnyUnsavedSetting
struct UWBP_SettingsMenu_C_HasAnyUnsavedSetting_Params
{
	bool                                               AnyUnsaved;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Save Settings
struct UWBP_SettingsMenu_C_Save_Settings_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBackPressed
struct UWBP_SettingsMenu_C_NavigateBackPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBack
struct UWBP_SettingsMenu_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetsForPage
struct UWBP_SettingsMenu_C_GetSettingsWidgetsForPage_Params
{
	class UKSSettingsPage**                            SettingsPage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UKSSettingsWidget*>                   SettingsWidgets;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<class UPUMG_Widget*>                        SettingsWidgetsAsPUMG;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupNavigationForPage
struct UWBP_SettingsMenu_C_SetupNavigationForPage_Params
{
	class UKSSettingsPage**                            Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Selected
struct UWBP_SettingsMenu_C_On_Tab_Selected_Params
{
	class UWBP_subscreen_nav_tab_C**                   Tab_Selected;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bInstantSwitch;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Tab For Settings Page
struct UWBP_SettingsMenu_C_Add_Tab_For_Settings_Page_Params
{
	class UKSSettingsPage**                            Settings_Page_Widget;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Settings Page Widget
struct UWBP_SettingsMenu_C_Add_Settings_Page_Widget_Params
{
	class UKSSettingsPage**                            Settings_Page;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuHoverSFX
struct UWBP_SettingsMenu_C_SettingsMenuHoverSFX_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuApplyClickSFX
struct UWBP_SettingsMenu_C_SettingsMenuApplyClickSFX_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuBackClickSFX
struct UWBP_SettingsMenu_C_SettingsMenuBackClickSFX_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuRevertButtonClickSFX
struct UWBP_SettingsMenu_C_SettingsMenuRevertButtonClickSFX_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddSettingsPageWidget
struct UWBP_SettingsMenu_C_AddSettingsPageWidget_Params
{
	class UKSSettingsPage**                            SettingsPage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnShown
struct UWBP_SettingsMenu_C_OnShown_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnHide
struct UWBP_SettingsMenu_C_OnHide_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnMenuConfigSet
struct UWBP_SettingsMenu_C_OnMenuConfigSet_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidget
struct UWBP_SettingsMenu_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidgetNavigation
struct UWBP_SettingsMenu_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.RebuildNavigation
struct UWBP_SettingsMenu_C_RebuildNavigation_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnBackButton
struct UWBP_SettingsMenu_C_OnBackButton_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnApplyButton
struct UWBP_SettingsMenu_C_OnApplyButton_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnRevertButton
struct UWBP_SettingsMenu_C_OnRevertButton_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnConfirmExit
struct UWBP_SettingsMenu_C_OnConfirmExit_Params
{
	bool*                                              ShouldSaveSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.PreConstruct
struct UWBP_SettingsMenu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExecuteUbergraph_WBP_SettingsMenu
struct UWBP_SettingsMenu_C_ExecuteUbergraph_WBP_SettingsMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
