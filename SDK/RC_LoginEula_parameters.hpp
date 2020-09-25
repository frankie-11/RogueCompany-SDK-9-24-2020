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

// Function LoginEula.LoginEula_C.ShowArrows
struct ULoginEula_C_ShowArrows_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginEula.LoginEula_C.ChangeFontSizeText
struct ULoginEula_C_ChangeFontSizeText_Params
{
};

// Function LoginEula.LoginEula_C.HandleCalloutSwitcher
struct ULoginEula_C_HandleCalloutSwitcher_Params
{
};

// Function LoginEula.LoginEula_C.Construct
struct ULoginEula_C_Construct_Params
{
};

// Function LoginEula.LoginEula_C.Tick
struct ULoginEula_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginEula.LoginEula_C.InitializeWidget
struct ULoginEula_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginEula.LoginEula_C.InitializeWidgetNavigation
struct ULoginEula_C_InitializeWidgetNavigation_Params
{
};

// Function LoginEula.LoginEula_C.InitializeWidgetButtonListeners
struct ULoginEula_C_InitializeWidgetButtonListeners_Params
{
};

// Function LoginEula.LoginEula_C.ScrollUpPressed
struct ULoginEula_C_ScrollUpPressed_Params
{
};

// Function LoginEula.LoginEula_C.ScrollDownPressed
struct ULoginEula_C_ScrollDownPressed_Params
{
};

// Function LoginEula.LoginEula_C.ScrollUpReleased
struct ULoginEula_C_ScrollUpReleased_Params
{
};

// Function LoginEula.LoginEula_C.ScrollDownReleased
struct ULoginEula_C_ScrollDownReleased_Params
{
};

// Function LoginEula.LoginEula_C.Handle Input State Changed
struct ULoginEula_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginEula.LoginEula_C.SetActiveScrollCallout
struct ULoginEula_C_SetActiveScrollCallout_Params
{
};

// Function LoginEula.LoginEula_C.BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct ULoginEula_C_BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginEula.LoginEula_C.BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct ULoginEula_C_BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginEula.LoginEula_C.BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature
struct ULoginEula_C_BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature_Params
{
	bool*                                              Checked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginEula.LoginEula_C.Destruct
struct ULoginEula_C_Destruct_Params
{
};

// Function LoginEula.LoginEula_C.OnHide
struct ULoginEula_C_OnHide_Params
{
};

// Function LoginEula.LoginEula_C.OnShown
struct ULoginEula_C_OnShown_Params
{
};

// Function LoginEula.LoginEula_C.ExecuteUbergraph_LoginEula
struct ULoginEula_C_ExecuteUbergraph_LoginEula_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
