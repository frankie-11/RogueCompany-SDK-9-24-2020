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

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.Add Setting Widget To Box
struct UWBP_SettingsContainer_C_Add_Setting_Widget_To_Box_Params
{
	class UKSSettingsWidget**                          Setting_Widget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.SettingsContainerHoverSFX
struct UWBP_SettingsContainer_C_SettingsContainerHoverSFX_Params
{
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnContainerConfigSet
struct UWBP_SettingsContainer_C_OnContainerConfigSet_Params
{
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddSettingsWidget
struct UWBP_SettingsContainer_C_AddSettingsWidget_Params
{
	class UKSSettingsWidget**                          SettingsWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseEnter
struct UWBP_SettingsContainer_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseLeave
struct UWBP_SettingsContainer_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayHoverAnim
struct UWBP_SettingsContainer_C_PlayHoverAnim_Params
{
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayUnhoverAnim
struct UWBP_SettingsContainer_C_PlayUnhoverAnim_Params
{
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.ExecuteUbergraph_WBP_SettingsContainer
struct UWBP_SettingsContainer_C_ExecuteUbergraph_WBP_SettingsContainer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
