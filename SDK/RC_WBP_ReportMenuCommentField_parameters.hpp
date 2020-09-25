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

// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.NavigateConfirm
struct UWBP_ReportMenuCommentField_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ClearText
struct UWBP_ReportMenuCommentField_C_ClearText_Params
{
};

// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GetText
struct UWBP_ReportMenuCommentField_C_GetText_Params
{
	struct FText                                       Return_Value;                                             // (Parm, OutParm)
};

// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadHover
struct UWBP_ReportMenuCommentField_C_GamepadHover_Params
{
};

// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadUnhover
struct UWBP_ReportMenuCommentField_C_GamepadUnhover_Params
{
};

// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ExecuteUbergraph_WBP_ReportMenuCommentField
struct UWBP_ReportMenuCommentField_C_ExecuteUbergraph_WBP_ReportMenuCommentField_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
