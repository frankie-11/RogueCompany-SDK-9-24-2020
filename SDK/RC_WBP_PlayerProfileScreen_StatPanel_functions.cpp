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

// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.SetDisableState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsDisabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_StatPanel_C::SetDisableState(bool* IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.SetDisableState");

	UWBP_PlayerProfileScreen_StatPanel_C_SetDisableState_Params params;
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PlayerProfileScreen_StatPanel_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.NavigateConfirm");

	UWBP_PlayerProfileScreen_StatPanel_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.RefreshStats
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerProfileScreen_StatPanel_C::RefreshStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.RefreshStats");

	UWBP_PlayerProfileScreen_StatPanel_C_RefreshStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_StatPanel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.PreConstruct");

	UWBP_PlayerProfileScreen_StatPanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_StatPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.Construct");

	UWBP_PlayerProfileScreen_StatPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_StatPanel_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadHover");

	UWBP_PlayerProfileScreen_StatPanel_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_StatPanel_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadUnhover");

	UWBP_PlayerProfileScreen_StatPanel_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.OnActivityInstanceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLoaded                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_StatPanel_C::OnActivityInstanceChanged(bool* IsLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.OnActivityInstanceChanged");

	UWBP_PlayerProfileScreen_StatPanel_C_OnActivityInstanceChanged_Params params;
	params.IsLoaded = IsLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_StatPanel_C::ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel");

	UWBP_PlayerProfileScreen_StatPanel_C_ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
