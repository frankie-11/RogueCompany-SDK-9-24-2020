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

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.NavigateConfirm
struct UWBP_Social_Search_bar_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.ShowVirtualKeyboard
struct UWBP_Social_Search_bar_C_ShowVirtualKeyboard_Params
{
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.Clear
struct UWBP_Social_Search_bar_C_Clear_Params
{
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.DoSearch
struct UWBP_Social_Search_bar_C_DoSearch_Params
{
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.InitializeWidget
struct UWBP_Social_Search_bar_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.UninitializeWidget
struct UWBP_Social_Search_bar_C_UninitializeWidget_Params
{
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnSearchTextChange
struct UWBP_Social_Search_bar_C_OnSearchTextChange_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_Social_Search_bar_C_BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__InputText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_Social_Search_bar_C_BndEvt__InputText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWBP_Social_Search_bar_C_BndEvt__SubmitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.GamepadHover
struct UWBP_Social_Search_bar_C_GamepadHover_Params
{
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.GamepadUnhover
struct UWBP_Social_Search_bar_C_GamepadUnhover_Params
{
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.ExecuteUbergraph_WBP_Social_Search_bar
struct UWBP_Social_Search_bar_C_ExecuteUbergraph_WBP_Social_Search_bar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnUnhovered__DelegateSignature
struct UWBP_Social_Search_bar_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnHovered__DelegateSignature
struct UWBP_Social_Search_bar_C_OnHovered__DelegateSignature_Params
{
};

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnSearchTermChange__DelegateSignature
struct UWBP_Social_Search_bar_C_OnSearchTermChange__DelegateSignature_Params
{
	struct FText*                                      SearchTerm;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
