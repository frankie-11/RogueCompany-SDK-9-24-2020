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

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Sub Settings Widget
struct UWBP_SettingsGroup_C_Add_Sub_Settings_Widget_Params
{
	class UKSSettingsContainer**                       Settings_Container;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Main Settings Widget
struct UWBP_SettingsGroup_C_Add_Main_Settings_Widget_Params
{
	class UKSSettingsContainer**                       Settings_Container;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSettingsWidget
struct UWBP_SettingsGroup_C_AddSettingsWidget_Params
{
	class UKSSettingsContainer**                       Settings_Container;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox**                               Vertical_Box;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.InitializeWidget
struct UWBP_SettingsGroup_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSubSettingsContainerWidget
struct UWBP_SettingsGroup_C_AddSubSettingsContainerWidget_Params
{
	class UKSSettingsContainer**                       SettingsContainer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddMainSettingsContainerWidget
struct UWBP_SettingsGroup_C_AddMainSettingsContainerWidget_Params
{
	class UKSSettingsContainer**                       SettingsContainer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.ExecuteUbergraph_WBP_SettingsGroup
struct UWBP_SettingsGroup_C_ExecuteUbergraph_WBP_SettingsGroup_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
