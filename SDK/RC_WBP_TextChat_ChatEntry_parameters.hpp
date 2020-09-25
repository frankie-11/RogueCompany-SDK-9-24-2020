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

// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.HandleInitialSpawn
struct UWBP_TextChat_ChatEntry_C_HandleInitialSpawn_Params
{
};

// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.InitialShowFinished
struct UWBP_TextChat_ChatEntry_C_InitialShowFinished_Params
{
};

// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetWindowCollapsed
struct UWBP_TextChat_ChatEntry_C_SetWindowCollapsed_Params
{
	bool*                                              Collapsed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithoutPlayer
struct UWBP_TextChat_ChatEntry_C_SetTextWithoutPlayer_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	EPUMG_ChatChannel*                                 Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithPlayer
struct UWBP_TextChat_ChatEntry_C_SetTextWithPlayer_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UPUMG_PlayerInfo**                           Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_PlayerInfo**                           Recipient;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsOwnMessage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPUMG_ChatChannel*                                 Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.Construct
struct UWBP_TextChat_ChatEntry_C_Construct_Params
{
};

// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.ExecuteUbergraph_WBP_TextChat_ChatEntry
struct UWBP_TextChat_ChatEntry_C_ExecuteUbergraph_WBP_TextChat_ChatEntry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
