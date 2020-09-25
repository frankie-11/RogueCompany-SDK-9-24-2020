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

// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PlayerProfileScreen_AccountPanel_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.NavigateConfirm");

	UWBP_PlayerProfileScreen_AccountPanel_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.RefreshPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AccountPanel_C::RefreshPlayer(class UPUMG_PlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.RefreshPlayer");

	UWBP_PlayerProfileScreen_AccountPanel_C_RefreshPlayer_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AccountPanel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.PreConstruct");

	UWBP_PlayerProfileScreen_AccountPanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_AccountPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.Construct");

	UWBP_PlayerProfileScreen_AccountPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AccountPanel_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.InitializeWidget");

	UWBP_PlayerProfileScreen_AccountPanel_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_AccountPanel_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.GamepadHover");

	UWBP_PlayerProfileScreen_AccountPanel_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_AccountPanel_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.GamepadUnhover");

	UWBP_PlayerProfileScreen_AccountPanel_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AccountPanel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AccountPanel_C::ExecuteUbergraph_WBP_PlayerProfileScreen_AccountPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AccountPanel");

	UWBP_PlayerProfileScreen_AccountPanel_C_ExecuteUbergraph_WBP_PlayerProfileScreen_AccountPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
