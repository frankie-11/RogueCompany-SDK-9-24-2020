// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ReportMenuCommentField_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.NavigateConfirm");

	UWBP_ReportMenuCommentField_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ClearText
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ReportMenuCommentField_C::ClearText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ClearText");

	UWBP_ReportMenuCommentField_C_ClearText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Return_Value                   (Parm, OutParm)

void UWBP_ReportMenuCommentField_C::GetText(struct FText* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GetText");

	UWBP_ReportMenuCommentField_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_ReportMenuCommentField_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadHover");

	UWBP_ReportMenuCommentField_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_ReportMenuCommentField_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadUnhover");

	UWBP_ReportMenuCommentField_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ExecuteUbergraph_WBP_ReportMenuCommentField
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ReportMenuCommentField_C::ExecuteUbergraph_WBP_ReportMenuCommentField(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ExecuteUbergraph_WBP_ReportMenuCommentField");

	UWBP_ReportMenuCommentField_C_ExecuteUbergraph_WBP_ReportMenuCommentField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
