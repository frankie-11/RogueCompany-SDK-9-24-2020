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

// Function WBP_SettingsSection.WBP_SettingsSection_C.Add Settings Group Widget
struct UWBP_SettingsSection_C_Add_Settings_Group_Widget_Params
{
	class UKSSettingsGroup**                           Settings_Group_Widget;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsSection.WBP_SettingsSection_C.PreConstruct
struct UWBP_SettingsSection_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsSection.WBP_SettingsSection_C.InitializeWidget
struct UWBP_SettingsSection_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsSection.WBP_SettingsSection_C.AddSettingsGroupWidget
struct UWBP_SettingsSection_C_AddSettingsGroupWidget_Params
{
	class UKSSettingsGroup**                           SettingsGroup;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsSection.WBP_SettingsSection_C.OnSectionConfigSet
struct UWBP_SettingsSection_C_OnSectionConfigSet_Params
{
};

// Function WBP_SettingsSection.WBP_SettingsSection_C.ExecuteUbergraph_WBP_SettingsSection
struct UWBP_SettingsSection_C_ExecuteUbergraph_WBP_SettingsSection_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
