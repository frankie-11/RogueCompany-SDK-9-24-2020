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

// Function WBP_RegionSelect.WBP_RegionSelect_C.GetRegionSelectEntries
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_RegionSelect_Entry_C*> RegionSelectEntries            (Parm, OutParm, ZeroConstructor)

void UWBP_RegionSelect_C::GetRegionSelectEntries(TArray<class UWBP_RegionSelect_Entry_C*>* RegionSelectEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect.WBP_RegionSelect_C.GetRegionSelectEntries");

	UWBP_RegionSelect_C_GetRegionSelectEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RegionSelectEntries != nullptr)
		*RegionSelectEntries = params.RegionSelectEntries;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RegionSelect_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect.WBP_RegionSelect_C.PreConstruct");

	UWBP_RegionSelect_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RegionSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect.WBP_RegionSelect_C.Construct");

	UWBP_RegionSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.LoginState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_LoginState*              LoginState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RegionSelect_C::LoginState(EPUMG_LoginState* LoginState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect.WBP_RegionSelect_C.LoginState");

	UWBP_RegionSelect_C_LoginState_Params params;
	params.LoginState = LoginState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.Populate Regions
// (BlueprintCallable, BlueprintEvent)

void UWBP_RegionSelect_C::Populate_Regions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect.WBP_RegionSelect_C.Populate Regions");

	UWBP_RegionSelect_C_Populate_Regions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnChildButtonSelectedRegion
// (BlueprintCallable, BlueprintEvent)

void UWBP_RegionSelect_C::OnChildButtonSelectedRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect.WBP_RegionSelect_C.OnChildButtonSelectedRegion");

	UWBP_RegionSelect_C_OnChildButtonSelectedRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_RegionSelect_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect.WBP_RegionSelect_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature");

	UWBP_RegionSelect_C_BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RegionSelect_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect.WBP_RegionSelect_C.InitializeWidget");

	UWBP_RegionSelect_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_RegionSelect_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect.WBP_RegionSelect_C.OnShown");

	UWBP_RegionSelect_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.ExecuteUbergraph_WBP_RegionSelect
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RegionSelect_C::ExecuteUbergraph_WBP_RegionSelect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect.WBP_RegionSelect_C.ExecuteUbergraph_WBP_RegionSelect");

	UWBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelectEntriesCreated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_RegionSelect_C::OnRegionSelectEntriesCreated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelectEntriesCreated__DelegateSignature");

	UWBP_RegionSelect_C_OnRegionSelectEntriesCreated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_RegionSelect_C::OnRegionSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelected__DelegateSignature");

	UWBP_RegionSelect_C_OnRegionSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
