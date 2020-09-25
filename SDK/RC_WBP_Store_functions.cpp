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

// Function WBP_Store.WBP_Store_C.GetKSStoreItemHelper
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSStoreItemHelper*      StoreItemHelper                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Store_C::GetKSStoreItemHelper(class UKSStoreItemHelper** StoreItemHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.GetKSStoreItemHelper");

	UWBP_Store_C_GetKSStoreItemHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StoreItemHelper != nullptr)
		*StoreItemHelper = params.StoreItemHelper;
}


// Function WBP_Store.WBP_Store_C.GotoPendingSection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Store_C::GotoPendingSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.GotoPendingSection");

	UWBP_Store_C_GotoPendingSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Store_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnKeyDown");

	UWBP_Store_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Store.WBP_Store_C.OnPrevSection
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Store_C::OnPrevSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnPrevSection");

	UWBP_Store_C_OnPrevSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.OnNextSection
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Store_C::OnNextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnNextSection");

	UWBP_Store_C_OnNextSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.OnStoreSectionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Store_C::OnStoreSectionSelected(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnStoreSectionSelected");

	UWBP_Store_C_OnStoreSectionSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.AddSectionsToStore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UKSStoreSection*> StoreSection                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_Store_C::AddSectionsToStore(TArray<class UKSStoreSection*>* StoreSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.AddSectionsToStore");

	UWBP_Store_C_AddSectionsToStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StoreSection != nullptr)
		*StoreSection = params.StoreSection;
}


// Function WBP_Store.WBP_Store_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_Store_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.NavigateBack");

	UWBP_Store_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Store.WBP_Store_C.PopulateStore
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Store_C::PopulateStore()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.PopulateStore");

	UWBP_Store_C_PopulateStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.OnVendorsReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   VendorIds                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_Store_C::OnVendorsReceived(int* GroupId, TArray<int>* VendorIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnVendorsReceived");

	UWBP_Store_C_OnVendorsReceived_Params params;
	params.GroupId = GroupId;
	params.VendorIds = VendorIds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Store_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.InitializeWidget");

	UWBP_Store_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_Store_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnBackPrompt");

	UWBP_Store_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_Store_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.InitializeWidgetNavigation");

	UWBP_Store_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_Store_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnShown");

	UWBP_Store_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_Store_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnHide");

	UWBP_Store_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.OnOpenCodeRedeem
// (BlueprintCallable, BlueprintEvent)

void UWBP_Store_C::OnOpenCodeRedeem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnOpenCodeRedeem");

	UWBP_Store_C_OnOpenCodeRedeem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.FocusGroupNavigateLeftFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Store_C::FocusGroupNavigateLeftFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.FocusGroupNavigateLeftFailure");

	UWBP_Store_C_FocusGroupNavigateLeftFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.FocusGroupNavigateRightFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Store_C::FocusGroupNavigateRightFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.FocusGroupNavigateRightFailure");

	UWBP_Store_C_FocusGroupNavigateRightFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Store.WBP_Store_C.ExecuteUbergraph_WBP_Store
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Store_C::ExecuteUbergraph_WBP_Store(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.ExecuteUbergraph_WBP_Store");

	UWBP_Store_C_ExecuteUbergraph_WBP_Store_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
