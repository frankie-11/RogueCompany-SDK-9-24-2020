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

// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.ShowPreferredSiteIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsPreferredSite                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RegionSelect_Entry_C::ShowPreferredSiteIcon(bool* IsPreferredSite)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.ShowPreferredSiteIcon");

	UWBP_RegionSelect_Entry_C_ShowPreferredSiteIcon_Params params;
	params.IsPreferredSite = IsPreferredSite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_RegionSelect_Entry_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.NavigateConfirm");

	UWBP_RegionSelect_Entry_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RegionSelect_Entry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.PreConstruct");

	UWBP_RegionSelect_Entry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RegionSelect_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.Construct");

	UWBP_RegionSelect_Entry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_RegionSelect_Entry_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_RegionSelect_Entry_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_RegionSelect_Entry_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_RegionSelect_Entry_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_RegionSelect_Entry_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWBP_RegionSelect_Entry_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_RegionSelect_Entry_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.GamepadHover");

	UWBP_RegionSelect_Entry_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_RegionSelect_Entry_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.GamepadUnhover");

	UWBP_RegionSelect_Entry_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.OnGamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_RegionSelect_Entry_C::OnGamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.OnGamepadConfirm");

	UWBP_RegionSelect_Entry_C_OnGamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.ExecuteUbergraph_WBP_RegionSelect_Entry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RegionSelect_Entry_C::ExecuteUbergraph_WBP_RegionSelect_Entry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.ExecuteUbergraph_WBP_RegionSelect_Entry");

	UWBP_RegionSelect_Entry_C_ExecuteUbergraph_WBP_RegionSelect_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.OnRegionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_RegionSelect_Entry_C::OnRegionSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.OnRegionSelected__DelegateSignature");

	UWBP_RegionSelect_Entry_C_OnRegionSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
