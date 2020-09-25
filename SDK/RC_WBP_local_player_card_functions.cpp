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

// Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerCurrency
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_local_player_card_C::SetPlayerCurrency()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerCurrency");

	UWBP_local_player_card_C_SetPlayerCurrency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_local_player_card_C::SetPlayerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerLevel");

	UWBP_local_player_card_C_SetPlayerLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_local_player_card_C::SetPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerInfo");

	UWBP_local_player_card_C_SetPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_local_player_card.WBP_local_player_card_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_local_player_card_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.InitializeWidget");

	UWBP_local_player_card_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_local_player_card.WBP_local_player_card_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_local_player_card_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.UninitializeWidget");

	UWBP_local_player_card_C_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_local_player_card.WBP_local_player_card_C.ExecuteUbergraph_WBP_local_player_card
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_local_player_card_C::ExecuteUbergraph_WBP_local_player_card(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.ExecuteUbergraph_WBP_local_player_card");

	UWBP_local_player_card_C_ExecuteUbergraph_WBP_local_player_card_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
