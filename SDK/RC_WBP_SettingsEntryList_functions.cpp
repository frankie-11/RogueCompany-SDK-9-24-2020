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

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.SetDesiredIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsEntryList_C::SetDesiredIndex(int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.SetDesiredIndex");

	UWBP_SettingsEntryList_C_SetDesiredIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SettingsEntryList_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateBack");

	UWBP_SettingsEntryList_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirmPressed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SettingsEntryList_C::NavigateConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirmPressed");

	UWBP_SettingsEntryList_C_NavigateConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SettingsEntryList_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirm");

	UWBP_SettingsEntryList_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.GetDirtyIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsEntryList_C::GetDirtyIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.GetDirtyIndex");

	UWBP_SettingsEntryList_C_GetDirtyIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnWidgetSettingsInfoSet
// (Event, Protected, BlueprintEvent)

void UWBP_SettingsEntryList_C::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnWidgetSettingsInfoSet");

	UWBP_SettingsEntryList_C_OnWidgetSettingsInfoSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.Selection Made
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SettingsEntryList_C::Selection_Made(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.Selection Made");

	UWBP_SettingsEntryList_C_Selection_Made_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.ExecuteUbergraph_WBP_SettingsEntryList
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsEntryList_C::ExecuteUbergraph_WBP_SettingsEntryList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.ExecuteUbergraph_WBP_SettingsEntryList");

	UWBP_SettingsEntryList_C_ExecuteUbergraph_WBP_SettingsEntryList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsEntryList_C::OnSelection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnSelection__DelegateSignature");

	UWBP_SettingsEntryList_C_OnSelection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
