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

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.NavigateConfirm
struct UScoreboardPlayerStats_Lobby_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetColors
struct UScoreboardPlayerStats_Lobby_C_SetColors_Params
{
	bool*                                              IsFriendly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Construct
struct UScoreboardPlayerStats_Lobby_C_Construct_Params
{
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetTeamColor
struct UScoreboardPlayerStats_Lobby_C_SetTeamColor_Params
{
	bool*                                              IsFriendlyTeam;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetLocalPlayer
struct UScoreboardPlayerStats_Lobby_C_SetLocalPlayer_Params
{
	bool*                                              IsLocalPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetJobIcon
struct UScoreboardPlayerStats_Lobby_C_SetJobIcon_Params
{
	class UKSJobItem**                                 JobItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.InitializeWidget
struct UScoreboardPlayerStats_Lobby_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UScoreboardPlayerStats_Lobby_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UScoreboardPlayerStats_Lobby_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UScoreboardPlayerStats_Lobby_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadHover
struct UScoreboardPlayerStats_Lobby_C_GamepadHover_Params
{
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadUnhover
struct UScoreboardPlayerStats_Lobby_C_GamepadUnhover_Params
{
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.ExecuteUbergraph_ScoreboardPlayerStats_Lobby
struct UScoreboardPlayerStats_Lobby_C_ExecuteUbergraph_ScoreboardPlayerStats_Lobby_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.OnClicked__DelegateSignature
struct UScoreboardPlayerStats_Lobby_C_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int64_t*                                           PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
