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

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.TryToPlayAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry_C::TryToPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.TryToPlayAnim");

	UWBP_InGameJobSelect_JobEntry_C_TryToPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.CanSelect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanSelect                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_JobEntry_C::CanSelect(bool* CanSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.CanSelect");

	UWBP_InGameJobSelect_JobEntry_C_CanSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSelect != nullptr)
		*CanSelect = params.CanSelect;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.CreateDesatMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry_C::CreateDesatMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.CreateDesatMaterial");

	UWBP_InGameJobSelect_JobEntry_C_CreateDesatMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.Update Job Entry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_JobEntry_C::Update_Job_Entry(class UJobSelectionEntryDetails** JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.Update Job Entry");

	UWBP_InGameJobSelect_JobEntry_C_Update_Job_Entry_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_InGameJobSelect_JobEntry_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.NavigateConfirm");

	UWBP_InGameJobSelect_JobEntry_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.PopulateJobEntrySlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobDetails                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_JobEntry_C::PopulateJobEntrySlot(class UJobSelectionEntryDetails** JobDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.PopulateJobEntrySlot");

	UWBP_InGameJobSelect_JobEntry_C_PopulateJobEntrySlot_Params params;
	params.JobDetails = JobDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.GamepadConfirm");

	UWBP_InGameJobSelect_JobEntry_C_GamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_InGameJobSelect_JobEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_InGameJobSelect_JobEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.GamepadHover");

	UWBP_InGameJobSelect_JobEntry_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.GamepadUnhover");

	UWBP_InGameJobSelect_JobEntry_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_InGameJobSelect_JobEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.SetHoverState
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry_C::SetHoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.SetHoverState");

	UWBP_InGameJobSelect_JobEntry_C_SetHoverState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.SetUnhoverState
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry_C::SetUnhoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.SetUnhoverState");

	UWBP_InGameJobSelect_JobEntry_C_SetUnhoverState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.OnInitialized");

	UWBP_InGameJobSelect_JobEntry_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.ExecuteUbergraph_WBP_InGameJobSelect_JobEntry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_JobEntry_C::ExecuteUbergraph_WBP_InGameJobSelect_JobEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.ExecuteUbergraph_WBP_InGameJobSelect_JobEntry");

	UWBP_InGameJobSelect_JobEntry_C_ExecuteUbergraph_WBP_InGameJobSelect_JobEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.OnUnhovered__DelegateSignature");

	UWBP_InGameJobSelect_JobEntry_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_JobEntry_C::OnHovered__DelegateSignature(class UJobSelectionEntryDetails** JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.OnHovered__DelegateSignature");

	UWBP_InGameJobSelect_JobEntry_C_OnHovered__DelegateSignature_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_JobEntry_C::OnClicked__DelegateSignature(class UJobSelectionEntryDetails** JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.OnClicked__DelegateSignature");

	UWBP_InGameJobSelect_JobEntry_C_OnClicked__DelegateSignature_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
