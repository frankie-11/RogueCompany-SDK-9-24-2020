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

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_Social_Search_bar_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.NavigateConfirm");

	UWBP_Social_Search_bar_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.ShowVirtualKeyboard
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Search_bar_C::ShowVirtualKeyboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.ShowVirtualKeyboard");

	UWBP_Social_Search_bar_C_ShowVirtualKeyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.Clear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Search_bar_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.Clear");

	UWBP_Social_Search_bar_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.DoSearch
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Search_bar_C::DoSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.DoSearch");

	UWBP_Social_Search_bar_C_DoSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Search_bar_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.InitializeWidget");

	UWBP_Social_Search_bar_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Search_bar_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.UninitializeWidget");

	UWBP_Social_Search_bar_C_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnSearchTextChange
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Social_Search_bar_C::OnSearchTextChange(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnSearchTextChange");

	UWBP_Social_Search_bar_C_OnSearchTextChange_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Search_bar_C::BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWBP_Social_Search_bar_C_BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__InputText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Social_Search_bar_C::BndEvt__InputText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__InputText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWBP_Social_Search_bar_C_BndEvt__InputText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Social_Search_bar_C::BndEvt__SubmitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWBP_Social_Search_bar_C_BndEvt__SubmitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_Social_Search_bar_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.GamepadHover");

	UWBP_Social_Search_bar_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_Social_Search_bar_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.GamepadUnhover");

	UWBP_Social_Search_bar_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.ExecuteUbergraph_WBP_Social_Search_bar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Search_bar_C::ExecuteUbergraph_WBP_Social_Search_bar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.ExecuteUbergraph_WBP_Social_Search_bar");

	UWBP_Social_Search_bar_C_ExecuteUbergraph_WBP_Social_Search_bar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Search_bar_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnUnhovered__DelegateSignature");

	UWBP_Social_Search_bar_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Search_bar_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnHovered__DelegateSignature");

	UWBP_Social_Search_bar_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnSearchTermChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  SearchTerm                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Social_Search_bar_C::OnSearchTermChange__DelegateSignature(struct FText* SearchTerm)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnSearchTermChange__DelegateSignature");

	UWBP_Social_Search_bar_C_OnSearchTermChange__DelegateSignature_Params params;
	params.SearchTerm = SearchTerm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
