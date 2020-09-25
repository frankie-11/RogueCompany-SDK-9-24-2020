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

// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.SetText
struct UWBP_RedeemCodeField_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.GetText
struct UWBP_RedeemCodeField_C_GetText_Params
{
	struct FText                                       NewParam;                                                 // (Parm, OutParm)
};

// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.NavigateConfirm
struct UWBP_RedeemCodeField_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.Set Up Keyboard Focus
struct UWBP_RedeemCodeField_C_Set_Up_Keyboard_Focus_Params
{
};

// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_RedeemCodeField_C_BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_RedeemCodeField_C_BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.ExecuteUbergraph_WBP_RedeemCodeField
struct UWBP_RedeemCodeField_C_ExecuteUbergraph_WBP_RedeemCodeField_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.OnTextCommitted__DelegateSignature
struct UWBP_RedeemCodeField_C_OnTextCommitted__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.OnTextChanged__DelegateSignature
struct UWBP_RedeemCodeField_C_OnTextChanged__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
