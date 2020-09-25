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

// Function LobbyAnnouncer.LobbyAnnouncer_C.OnLoadingScreenEnded
struct ALobbyAnnouncer_C_OnLoadingScreenEnded_Params
{
};

// Function LobbyAnnouncer.LobbyAnnouncer_C.OnLobbyWidgetReady
struct ALobbyAnnouncer_C_OnLobbyWidgetReady_Params
{
};

// Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveBeginPlay
struct ALobbyAnnouncer_C_ReceiveBeginPlay_Params
{
};

// Function LobbyAnnouncer.LobbyAnnouncer_C.OnViewStateChangedStarted
struct ALobbyAnnouncer_C_OnViewStateChangedStarted_Params
{
	struct FName*                                      CurrentRoute;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NextRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EViewManagerLayer*                                 Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveEndPlay
struct ALobbyAnnouncer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyAnnouncer.LobbyAnnouncer_C.EventQueueInGame
struct ALobbyAnnouncer_C_EventQueueInGame_Params
{
};

// Function LobbyAnnouncer.LobbyAnnouncer_C.ExecuteUbergraph_LobbyAnnouncer
struct ALobbyAnnouncer_C_ExecuteUbergraph_LobbyAnnouncer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
