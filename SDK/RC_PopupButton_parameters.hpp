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

// Function PopupButton.PopupButton_C.NavigateBack
struct UPopupButton_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PopupButton.PopupButton_C.ToggleGamepadCallout
struct UPopupButton_C_ToggleGamepadCallout_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupButton.PopupButton_C.SetDisplayText
struct UPopupButton_C_SetDisplayText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupButton.PopupButton_C.SetButtonCalloutImage
struct UPopupButton_C_SetButtonCalloutImage_Params
{
	struct FName*                                      InActionName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupButton.PopupButton_C.SetFontSize
struct UPopupButton_C_SetFontSize_Params
{
	int*                                               In_Font_Size;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupButton.PopupButton_C.NavigateConfirm
struct UPopupButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PopupButton.PopupButton_C.PreConstruct
struct UPopupButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPopupButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UPopupButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UPopupButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PopupButton.PopupButton_C.GamepadHover
struct UPopupButton_C_GamepadHover_Params
{
};

// Function PopupButton.PopupButton_C.GamepadUnhover
struct UPopupButton_C_GamepadUnhover_Params
{
};

// Function PopupButton.PopupButton_C.GamepadPress
struct UPopupButton_C_GamepadPress_Params
{
};

// Function PopupButton.PopupButton_C.OnNavBack
struct UPopupButton_C_OnNavBack_Params
{
};

// Function PopupButton.PopupButton_C.Construct
struct UPopupButton_C_Construct_Params
{
};

// Function PopupButton.PopupButton_C.ExecuteUbergraph_PopupButton
struct UPopupButton_C_ExecuteUbergraph_PopupButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupButton.PopupButton_C.OnNavigateBackAction__DelegateSignature
struct UPopupButton_C_OnNavigateBackAction__DelegateSignature_Params
{
};

// Function PopupButton.PopupButton_C.OnClicked__DelegateSignature
struct UPopupButton_C_OnClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
