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

// Function CoopProgressOverlay.CoopProgressOverlay_C.Refresh Appearance
struct UCoopProgressOverlay_C_Refresh_Appearance_Params
{
};

// Function CoopProgressOverlay.CoopProgressOverlay_C.InitializeWidget
struct UCoopProgressOverlay_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Round Start
struct UCoopProgressOverlay_C_Handle_Round_Start_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Coop Pickup
struct UCoopProgressOverlay_C_Handle_Coop_Pickup_Params
{
	class AKSObjectiveBase**                           Pickup;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PickupsUsed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PickupsLeft;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Computers Unlocked
struct UCoopProgressOverlay_C_Handle_Computers_Unlocked_Params
{
};

// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Successful Hack
struct UCoopProgressOverlay_C_Handle_Successful_Hack_Params
{
	class AKSExtractionComputer**                      Computer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Escape Point Changed
struct UCoopProgressOverlay_C_Handle_Escape_Point_Changed_Params
{
	TArray<class AKSPlayerState*>*                     ContainedPlayers;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Phase Change
struct UCoopProgressOverlay_C_Handle_Phase_Change_Params
{
	struct FName*                                      CurrentPhaseName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousPhaseName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Timer Second Tick
struct UCoopProgressOverlay_C_Handle_Timer_Second_Tick_Params
{
	float*                                             NewTruncatedSeconds;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Player Downed Changed
struct UCoopProgressOverlay_C_Handle_Player_Downed_Changed_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Player Death
struct UCoopProgressOverlay_C_Handle_Player_Death_Params
{
	struct FCombatEventInfo*                           EventInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CoopProgressOverlay.CoopProgressOverlay_C.ExecuteUbergraph_CoopProgressOverlay
struct UCoopProgressOverlay_C_ExecuteUbergraph_CoopProgressOverlay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
