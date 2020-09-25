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

// Function PopupManager.PopupManager_C.OnKeyUp
struct UPopupManager_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PopupManager.PopupManager_C.OnKeyDown
struct UPopupManager_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PopupManager.PopupManager_C.SetupSubHeaderText
struct UPopupManager_C_SetupSubHeaderText_Params
{
	struct FText*                                      NewSubHeaderText;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupManager.PopupManager_C.SetupButtons
struct UPopupManager_C_SetupButtons_Params
{
	TArray<struct FPUMG_PopupButtonConfig>             ButtonInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PopupManager.PopupManager_C.SetupTextEntry
struct UPopupManager_C_SetupTextEntry_Params
{
	bool*                                              HasTextEntry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      DefaultEntryText;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupManager.PopupManager_C.SetupWarningText
struct UPopupManager_C_SetupWarningText_Params
{
	struct FText*                                      NewWarningText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupManager.PopupManager_C.SetupDescription
struct UPopupManager_C_SetupDescription_Params
{
	struct FText*                                      NewDescText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupManager.PopupManager_C.SetupHeader
struct UPopupManager_C_SetupHeader_Params
{
	struct FText*                                      NewHeaderText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupManager.PopupManager_C.NavigateBack
struct UPopupManager_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PopupManager.PopupManager_C.Construct
struct UPopupManager_C_Construct_Params
{
};

// Function PopupManager.PopupManager_C.ShowPopup
struct UPopupManager_C_ShowPopup_Params
{
	struct FPUMG_PopupConfig*                          popupData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupManager.PopupManager_C.HidePopup
struct UPopupManager_C_HidePopup_Params
{
};

// Function PopupManager.PopupManager_C.ButtonPressed
struct UPopupManager_C_ButtonPressed_Params
{
	class UWidget**                                    Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PopupManager.PopupManager_C.InitializeWidgetNavigation
struct UPopupManager_C_InitializeWidgetNavigation_Params
{
};

// Function PopupManager.PopupManager_C.InitializeWidget
struct UPopupManager_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupManager.PopupManager_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UPopupManager_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PopupManager.PopupManager_C.HandleCancelButtonClicked
struct UPopupManager_C_HandleCancelButtonClicked_Params
{
	class UWidget**                                    InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PopupManager.PopupManager_C.OnShown
struct UPopupManager_C_OnShown_Params
{
};

// Function PopupManager.PopupManager_C.OnHide
struct UPopupManager_C_OnHide_Params
{
};

// Function PopupManager.PopupManager_C.OnBackButton
struct UPopupManager_C_OnBackButton_Params
{
};

// Function PopupManager.PopupManager_C.ExecuteUbergraph_PopupManager
struct UPopupManager_C_ExecuteUbergraph_PopupManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
