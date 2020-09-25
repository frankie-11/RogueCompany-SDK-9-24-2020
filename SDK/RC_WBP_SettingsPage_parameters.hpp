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

// Function WBP_SettingsPage.WBP_SettingsPage_C.GetScrollBox
struct UWBP_SettingsPage_C_GetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.Add Settings Section Widget
struct UWBP_SettingsPage_C_Add_Settings_Section_Widget_Params
{
	class UKSSettingsSection**                         Selection_Widget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.InitializeTickAnimations
struct UWBP_SettingsPage_C_InitializeTickAnimations_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimFinished
struct UWBP_SettingsPage_C_HandleShowPageAnimFinished_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimUpdated
struct UWBP_SettingsPage_C_HandleShowPageAnimUpdated_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimFinished
struct UWBP_SettingsPage_C_HandleHidePageAnimFinished_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimUpdated
struct UWBP_SettingsPage_C_HandleHidePageAnimUpdated_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.PlayShowPageAnim
struct UWBP_SettingsPage_C_PlayShowPageAnim_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.PlayHidePageAnim
struct UWBP_SettingsPage_C_PlayHidePageAnim_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.SetInitPageState
struct UWBP_SettingsPage_C_SetInitPageState_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.Construct
struct UWBP_SettingsPage_C_Construct_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.AddSettingsSectionWidget
struct UWBP_SettingsPage_C_AddSettingsSectionWidget_Params
{
	class UKSSettingsSection**                         SettingsSection;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.ExecuteUbergraph_WBP_SettingsPage
struct UWBP_SettingsPage_C_ExecuteUbergraph_WBP_SettingsPage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
