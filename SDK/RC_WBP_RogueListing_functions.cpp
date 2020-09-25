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

// Function WBP_RogueListing.WBP_RogueListing_C.SetRogueOwned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueListing_C::SetRogueOwned(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.SetRogueOwned");

	UWBP_RogueListing_C_SetRogueOwned_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.ResetFavoriteIcons
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueListing_C::ResetFavoriteIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.ResetFavoriteIcons");

	UWBP_RogueListing_C_ResetFavoriteIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnJobHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSJobItem**             JobItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueListing_C::OnJobHovered(class UKSJobItem** JobItem, class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.OnJobHovered");

	UWBP_RogueListing_C_OnJobHovered_Params params;
	params.JobItem = JobItem;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_RogueListing_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.OnKeyUp");

	UWBP_RogueListing_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RogueListing.WBP_RogueListing_C.HandleInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputMode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueListing_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.HandleInputModeChanged");

	UWBP_RogueListing_C_HandleInputModeChanged_Params params;
	params.InputMode = InputMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_RogueListing_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.NavigateBack");

	UWBP_RogueListing_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RogueListing.WBP_RogueListing_C.PopulateRoleFilters
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueListing_C::PopulateRoleFilters()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.PopulateRoleFilters");

	UWBP_RogueListing_C_PopulateRoleFilters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.GetJobButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_JobGeneralButton_C*> JobButtons                     (Parm, OutParm, ZeroConstructor)

void UWBP_RogueListing_C::GetJobButtons(TArray<class UWBP_JobGeneralButton_C*>* JobButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.GetJobButtons");

	UWBP_RogueListing_C_GetJobButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JobButtons != nullptr)
		*JobButtons = params.JobButtons;
}


// Function WBP_RogueListing.WBP_RogueListing_C.SetRowAndColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGridSlot**              GridSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxRowCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueListing_C::SetRowAndColumn(class UGridSlot** GridSlot, int* Index, int* MaxRowCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.SetRowAndColumn");

	UWBP_RogueListing_C_SetRowAndColumn_Params params;
	params.GridSlot = GridSlot;
	params.Index = Index;
	params.MaxRowCount = MaxRowCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.ResetButtonState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueListing_C::ResetButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.ResetButtonState");

	UWBP_RogueListing_C_ResetButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.ResetJobList
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueListing_C::ResetJobList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.ResetJobList");

	UWBP_RogueListing_C_ResetJobList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.PopulateJobList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPUMG_StoreItem*> LoadoutOptions                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_RogueListing_C::PopulateJobList(TArray<class UPUMG_StoreItem*>* LoadoutOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.PopulateJobList");

	UWBP_RogueListing_C_PopulateJobList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadoutOptions != nullptr)
		*LoadoutOptions = params.LoadoutOptions;
}


// Function WBP_RogueListing.WBP_RogueListing_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)

void UWBP_RogueListing_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.InitializeTickAnimations");

	UWBP_RogueListing_C_InitializeTickAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueListing_C::OnShowScreenAnimUpdate(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimUpdate");

	UWBP_RogueListing_C_OnShowScreenAnimUpdate_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueListing_C::OnShowScreenAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimFinished");

	UWBP_RogueListing_C_OnShowScreenAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.StartShowScreenAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueListing_C::StartShowScreenAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.StartShowScreenAnim");

	UWBP_RogueListing_C_StartShowScreenAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueListing_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidget");

	UWBP_RogueListing_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.HandleOnJobSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSJobItem**             SelectedJob                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueListing_C::HandleOnJobSelected(class UKSJobItem** SelectedJob)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.HandleOnJobSelected");

	UWBP_RogueListing_C_HandleOnJobSelected_Params params;
	params.SelectedJob = SelectedJob;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_RogueListing_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.OnShown");

	UWBP_RogueListing_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.ExternalOnShown
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueListing_C::ExternalOnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.ExternalOnShown");

	UWBP_RogueListing_C_ExternalOnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_RogueListing_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidgetNavigation");

	UWBP_RogueListing_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueListing_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.OnBackPrompt");

	UWBP_RogueListing_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.RefreshJobItems
// (Event, Protected, BlueprintEvent)

void UWBP_RogueListing_C::RefreshJobItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.RefreshJobItems");

	UWBP_RogueListing_C_RefreshJobItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.HandleOnPurchasedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_StoreItemPrice**   Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueListing_C::HandleOnPurchasedItem(class UPUMG_StoreItem** Item, class UPUMG_StoreItemPrice** Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.HandleOnPurchasedItem");

	UWBP_RogueListing_C_HandleOnPurchasedItem_Params params;
	params.Item = Item;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.ExecuteUbergraph_WBP_RogueListing
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueListing_C::ExecuteUbergraph_WBP_RogueListing(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.ExecuteUbergraph_WBP_RogueListing");

	UWBP_RogueListing_C_ExecuteUbergraph_WBP_RogueListing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnJobListReady__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_JobGeneralButton_C*> JobButtons                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_RogueListing_C::OnJobListReady__DelegateSignature(TArray<class UWBP_JobGeneralButton_C*>* JobButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.OnJobListReady__DelegateSignature");

	UWBP_RogueListing_C_OnJobListReady__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JobButtons != nullptr)
		*JobButtons = params.JobButtons;
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnJobSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSJobItem**             JobItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueListing_C::OnJobSelected__DelegateSignature(class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListing.WBP_RogueListing_C.OnJobSelected__DelegateSignature");

	UWBP_RogueListing_C_OnJobSelected__DelegateSignature_Params params;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
