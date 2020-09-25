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

// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_RedeemCodeField_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.SetText");

	UWBP_RedeemCodeField_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.GetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   NewParam                       (Parm, OutParm)

void UWBP_RedeemCodeField_C::GetText(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.GetText");

	UWBP_RedeemCodeField_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_RedeemCodeField_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.NavigateConfirm");

	UWBP_RedeemCodeField_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.Set Up Keyboard Focus
// (BlueprintCallable, BlueprintEvent)

void UWBP_RedeemCodeField_C::Set_Up_Keyboard_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.Set Up Keyboard Focus");

	UWBP_RedeemCodeField_C_Set_Up_Keyboard_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_RedeemCodeField_C::BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWBP_RedeemCodeField_C_BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RedeemCodeField_C::BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWBP_RedeemCodeField_C_BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.ExecuteUbergraph_WBP_RedeemCodeField
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RedeemCodeField_C::ExecuteUbergraph_WBP_RedeemCodeField(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.ExecuteUbergraph_WBP_RedeemCodeField");

	UWBP_RedeemCodeField_C_ExecuteUbergraph_WBP_RedeemCodeField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.OnTextCommitted__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RedeemCodeField_C::OnTextCommitted__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.OnTextCommitted__DelegateSignature");

	UWBP_RedeemCodeField_C_OnTextCommitted__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.OnTextChanged__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_RedeemCodeField_C::OnTextChanged__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.OnTextChanged__DelegateSignature");

	UWBP_RedeemCodeField_C_OnTextChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
