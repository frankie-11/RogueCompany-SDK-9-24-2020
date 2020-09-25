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

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.NavigateBack
struct UWBP_Guided_Tutorial_Tips_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.GuidedTutorialShown
struct UWBP_Guided_Tutorial_Tips_C_GuidedTutorialShown_Params
{
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.SetTipMode
struct UWBP_Guided_Tutorial_Tips_C_SetTipMode_Params
{
	class UGuidedMenuCalloutData**                     CalloutData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.Construct
struct UWBP_Guided_Tutorial_Tips_C_Construct_Params
{
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidget
struct UWBP_Guided_Tutorial_Tips_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_Guided_Tutorial_Tips_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCloseHovered
struct UWBP_Guided_Tutorial_Tips_C_HandleCloseHovered_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCLoseUnhovered
struct UWBP_Guided_Tutorial_Tips_C_HandleCLoseUnhovered_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidgetNavigation
struct UWBP_Guided_Tutorial_Tips_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnShown
struct UWBP_Guided_Tutorial_Tips_C_OnShown_Params
{
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.PreConstruct
struct UWBP_Guided_Tutorial_Tips_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.CloseScene
struct UWBP_Guided_Tutorial_Tips_C_CloseScene_Params
{
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_Guided_Tutorial_Tips_C_BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnBackPrompt
struct UWBP_Guided_Tutorial_Tips_C_OnBackPrompt_Params
{
};

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.ExecuteUbergraph_WBP_Guided_Tutorial_Tips
struct UWBP_Guided_Tutorial_Tips_C_ExecuteUbergraph_WBP_Guided_Tutorial_Tips_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
