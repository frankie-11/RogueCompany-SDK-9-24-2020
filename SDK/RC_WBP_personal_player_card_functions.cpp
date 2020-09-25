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

// Function WBP_personal_player_card.WBP_personal_player_card_C.View Refresh Local Player
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_personal_player_card_C::View_Refresh_Local_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_personal_player_card.WBP_personal_player_card_C.View Refresh Local Player");

	UWBP_personal_player_card_C_View_Refresh_Local_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_personal_player_card.WBP_personal_player_card_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_personal_player_card_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_personal_player_card.WBP_personal_player_card_C.InitializeWidget");

	UWBP_personal_player_card_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_personal_player_card.WBP_personal_player_card_C.Handle Party Member Data Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_PartyMemberData*  PartyMember                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_personal_player_card_C::Handle_Party_Member_Data_Updated(struct FPUMG_PartyMemberData* PartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_personal_player_card.WBP_personal_player_card_C.Handle Party Member Data Updated");

	UWBP_personal_player_card_C_Handle_Party_Member_Data_Updated_Params params;
	params.PartyMember = PartyMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_personal_player_card.WBP_personal_player_card_C.ExecuteUbergraph_WBP_personal_player_card
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_personal_player_card_C::ExecuteUbergraph_WBP_personal_player_card(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_personal_player_card.WBP_personal_player_card_C.ExecuteUbergraph_WBP_personal_player_card");

	UWBP_personal_player_card_C_ExecuteUbergraph_WBP_personal_player_card_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
