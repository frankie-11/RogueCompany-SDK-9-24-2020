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

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.UpdateViewNextTeammate
struct UDeathSpectateOverlay_C_UpdateViewNextTeammate_Params
{
};

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Construct
struct UDeathSpectateOverlay_C_Construct_Params
{
};

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Viewed Pawn Changed
struct UDeathSpectateOverlay_C_Handle_Viewed_Pawn_Changed_Params
{
	class AKSPlayerController**                        InPC;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InActorOne;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InActorTwo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.InitializeWidget
struct UDeathSpectateOverlay_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Input State Changed
struct UDeathSpectateOverlay_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Spectate State Changed
struct UDeathSpectateOverlay_C_Handle_Spectate_State_Changed_Params
{
	bool*                                              IsSpectating;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.TeamMemberEliminated
struct UDeathSpectateOverlay_C_TeamMemberEliminated_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.DetermineLocalPlayerControlled
struct UDeathSpectateOverlay_C_DetermineLocalPlayerControlled_Params
{
};

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.CustomEvent_1
struct UDeathSpectateOverlay_C_CustomEvent_1_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.HandleKillCamEnabled
struct UDeathSpectateOverlay_C_HandleKillCamEnabled_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.HandleNameChange
struct UDeathSpectateOverlay_C_HandleNameChange_Params
{
	class AKSPlayerState**                             InKSPlayerState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.ExecuteUbergraph_DeathSpectateOverlay
struct UDeathSpectateOverlay_C_ExecuteUbergraph_DeathSpectateOverlay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
