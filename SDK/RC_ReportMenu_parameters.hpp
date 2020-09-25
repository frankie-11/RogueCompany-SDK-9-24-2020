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

// Function ReportMenu.ReportMenu_C.GetNavigationWidgets
struct UReportMenu_C_GetNavigationWidgets_Params
{
	TArray<class UPUMG_Widget*>                        Return_Value;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function ReportMenu.ReportMenu_C.SelectReason
struct UReportMenu_C_SelectReason_Params
{
	EReportPlayerReason*                               ReportReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportMenu.ReportMenu_C.ReportPlayer
struct UReportMenu_C_ReportPlayer_Params
{
	EReportPlayerReason*                               ReportReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportMenu.ReportMenu_C.OnOpenReportScreen
struct UReportMenu_C_OnOpenReportScreen_Params
{
	struct FReportPlayerParams*                        Report;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ReportMenu.ReportMenu_C.InitializeWidget
struct UReportMenu_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportMenu.ReportMenu_C.BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature
struct UReportMenu_C_BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportMenu.ReportMenu_C.BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UReportMenu_C_BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportMenu.ReportMenu_C.BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UReportMenu_C_BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportMenu.ReportMenu_C.BndEvt__LeavingAFKButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UReportMenu_C_BndEvt__LeavingAFKButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportMenu.ReportMenu_C.BndEvt__OtherButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UReportMenu_C_BndEvt__OtherButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportMenu.ReportMenu_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UReportMenu_C_BndEvt__SubmitButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportMenu.ReportMenu_C.OnShown
struct UReportMenu_C_OnShown_Params
{
};

// Function ReportMenu.ReportMenu_C.OnHide
struct UReportMenu_C_OnHide_Params
{
};

// Function ReportMenu.ReportMenu_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UReportMenu_C_BndEvt__CheatingButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportMenu.ReportMenu_C.ExecuteUbergraph_ReportMenu
struct UReportMenu_C_ExecuteUbergraph_ReportMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportMenu.ReportMenu_C.OnTabPressed__DelegateSignature
struct UReportMenu_C_OnTabPressed__DelegateSignature_Params
{
};

// Function ReportMenu.ReportMenu_C.OnPlayerReported__DelegateSignature
struct UReportMenu_C_OnPlayerReported__DelegateSignature_Params
{
	int64_t*                                           PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportMenu.ReportMenu_C.OnCloseTabScreen__DelegateSignature
struct UReportMenu_C_OnCloseTabScreen__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
