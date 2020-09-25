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

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.GetPlatformIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_C::GetPlatformIcon(bool* Success, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.GetPlatformIcon");

	UWBP_PlayerProfileScreen_C_GetPlatformIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.SetPlayerHint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerProfileScreen_C::SetPlayerHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.SetPlayerHint");

	UWBP_PlayerProfileScreen_C_SetPlayerHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ClearPlayerHint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerProfileScreen_C::ClearPlayerHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ClearPlayerHint");

	UWBP_PlayerProfileScreen_C_ClearPlayerHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PlayerProfileScreen_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.NavigateBack");

	UWBP_PlayerProfileScreen_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.Construct");

	UWBP_PlayerProfileScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnShown");

	UWBP_PlayerProfileScreen_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidget");

	UWBP_PlayerProfileScreen_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.AwardButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PlayerProfileScreen_C::AwardButtonClicked(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.AwardButtonClicked");

	UWBP_PlayerProfileScreen_C_AwardButtonClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.StatsButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PlayerProfileScreen_C::StatsButtonClicked(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.StatsButtonClicked");

	UWBP_PlayerProfileScreen_C_StatsButtonClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.CustomizeButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PlayerProfileScreen_C::CustomizeButtonClicked(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.CustomizeButtonClicked");

	UWBP_PlayerProfileScreen_C_CustomizeButtonClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidgetNavigation");

	UWBP_PlayerProfileScreen_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerProfileScreen_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnBackPrompt");

	UWBP_PlayerProfileScreen_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.HandleLoginStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_LoginState*              LoginState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_C::HandleLoginStateChange(EPUMG_LoginState* LoginState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.HandleLoginStateChange");

	UWBP_PlayerProfileScreen_C_HandleLoginStateChange_Params params;
	params.LoginState = LoginState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ExecuteUbergraph_WBP_PlayerProfileScreen
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_C::ExecuteUbergraph_WBP_PlayerProfileScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ExecuteUbergraph_WBP_PlayerProfileScreen");

	UWBP_PlayerProfileScreen_C_ExecuteUbergraph_WBP_PlayerProfileScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
