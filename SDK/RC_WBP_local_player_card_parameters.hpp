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

// Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerCurrency
struct UWBP_local_player_card_C_SetPlayerCurrency_Params
{
};

// Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerLevel
struct UWBP_local_player_card_C_SetPlayerLevel_Params
{
};

// Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerInfo
struct UWBP_local_player_card_C_SetPlayerInfo_Params
{
};

// Function WBP_local_player_card.WBP_local_player_card_C.InitializeWidget
struct UWBP_local_player_card_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_local_player_card.WBP_local_player_card_C.UninitializeWidget
struct UWBP_local_player_card_C_UninitializeWidget_Params
{
};

// Function WBP_local_player_card.WBP_local_player_card_C.ExecuteUbergraph_WBP_local_player_card
struct UWBP_local_player_card_C_ExecuteUbergraph_WBP_local_player_card_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
