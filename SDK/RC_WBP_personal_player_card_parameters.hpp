#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_personal_player_card.WBP_personal_player_card_C.View Refresh Local Player
struct UWBP_personal_player_card_C_View_Refresh_Local_Player_Params
{
};

// Function WBP_personal_player_card.WBP_personal_player_card_C.InitializeWidget
struct UWBP_personal_player_card_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_personal_player_card.WBP_personal_player_card_C.Handle Party Member Data Updated
struct UWBP_personal_player_card_C_Handle_Party_Member_Data_Updated_Params
{
	struct FPUMG_PartyMemberData*                      PartyMember;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_personal_player_card.WBP_personal_player_card_C.ExecuteUbergraph_WBP_personal_player_card
struct UWBP_personal_player_card_C_ExecuteUbergraph_WBP_personal_player_card_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
