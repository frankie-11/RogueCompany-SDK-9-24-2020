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

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.Get Player Widget byPlayerState
struct UScoreboardTeamSection_C_Get_Player_Widget_byPlayerState_Params
{
	class AKSPlayerState**                             Player_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UScoreboardPlayerEntry_C*                    Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdatePlayerVoice
struct UScoreboardTeamSection_C_UpdatePlayerVoice_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMuted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.GetPlayerButtons
struct UScoreboardTeamSection_C_GetPlayerButtons_Params
{
	TArray<class UStandardButtonNoBorder_C*>           PlayerButtons;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.EndUpdate
struct UScoreboardTeamSection_C_EndUpdate_Params
{
};

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.BeginUpdate
struct UScoreboardTeamSection_C_BeginUpdate_Params
{
};

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdatePlayer
struct UScoreboardTeamSection_C_UpdatePlayer_Params
{
	class UKSPersistentPlayerData**                    PlayerData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.Construct
struct UScoreboardTeamSection_C_Construct_Params
{
};

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdateHeaderColors
struct UScoreboardTeamSection_C_UpdateHeaderColors_Params
{
};

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.OnShown
struct UScoreboardTeamSection_C_OnShown_Params
{
};

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.InitializeWidget
struct UScoreboardTeamSection_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.Handle Display Cash Changed
struct UScoreboardTeamSection_C_Handle_Display_Cash_Changed_Params
{
};

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.ExecuteUbergraph_ScoreboardTeamSection
struct UScoreboardTeamSection_C_ExecuteUbergraph_ScoreboardTeamSection_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.OnPlayerAdded__DelegateSignature
struct UScoreboardTeamSection_C_OnPlayerAdded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
