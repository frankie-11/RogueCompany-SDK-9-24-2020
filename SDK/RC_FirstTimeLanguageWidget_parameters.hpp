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

// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.InitializeWidget
struct UFirstTimeLanguageWidget_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnShown
struct UFirstTimeLanguageWidget_C_OnShown_Params
{
};

// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UFirstTimeLanguageWidget_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.PreConstruct
struct UFirstTimeLanguageWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.HandleInputState
struct UFirstTimeLanguageWidget_C_HandleInputState_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.SaveSetting
struct UFirstTimeLanguageWidget_C_SaveSetting_Params
{
};

// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnHide
struct UFirstTimeLanguageWidget_C_OnHide_Params
{
};

// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnSettingSelected
struct UFirstTimeLanguageWidget_C_OnSettingSelected_Params
{
};

// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.ExecuteUbergraph_FirstTimeLanguageWidget
struct UFirstTimeLanguageWidget_C_ExecuteUbergraph_FirstTimeLanguageWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
