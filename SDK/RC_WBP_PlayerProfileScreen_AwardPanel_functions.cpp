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

// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.SetDisableState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsDisable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AwardPanel_C::SetDisableState(bool* IsDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.SetDisableState");

	UWBP_PlayerProfileScreen_AwardPanel_C_SetDisableState_Params params;
	params.IsDisable = IsDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PlayerProfileScreen_AwardPanel_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.NavigateConfirm");

	UWBP_PlayerProfileScreen_AwardPanel_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.RefreshAwards
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardPanel_C::RefreshAwards()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.RefreshAwards");

	UWBP_PlayerProfileScreen_AwardPanel_C_RefreshAwards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AwardPanel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.PreConstruct");

	UWBP_PlayerProfileScreen_AwardPanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.Construct");

	UWBP_PlayerProfileScreen_AwardPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardPanel_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.GamepadHover");

	UWBP_PlayerProfileScreen_AwardPanel_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardPanel_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.GamepadUnhover");

	UWBP_PlayerProfileScreen_AwardPanel_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AwardPanel_C::ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel");

	UWBP_PlayerProfileScreen_AwardPanel_C_ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
