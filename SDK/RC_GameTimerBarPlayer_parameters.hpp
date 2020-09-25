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

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Try Update Is Ally
struct UGameTimerBarPlayer_C_Try_Update_Is_Ally_Params
{
	bool                                               ValueHasChanged;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.GameTimerBarPlayer_AutoGenFunc
struct UGameTimerBarPlayer_C_GameTimerBarPlayer_AutoGenFunc_Params
{
	class AKSTeamState**                               Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.On Player Respawns Changed
struct UGameTimerBarPlayer_C_On_Player_Respawns_Changed_Params
{
	class AKSPlayerState**                             KSPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleBindingsForPlayerStateChanges
struct UGameTimerBarPlayer_C_HandleBindingsForPlayerStateChanges_Params
{
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set Merc Icon
struct UGameTimerBarPlayer_C_Set_Merc_Icon_Params
{
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.SetLocalIdentifier
struct UGameTimerBarPlayer_C_SetLocalIdentifier_Params
{
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set View State
struct UGameTimerBarPlayer_C_Set_View_State_Params
{
	TEnumAsByte<EGameTimerBarPlayerState>*             State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set Player State
struct UGameTimerBarPlayer_C_Set_Player_State_Params
{
	class AKSPlayerState**                             KS_Player_State;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.PreConstruct
struct UGameTimerBarPlayer_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.InitializeWidget
struct UGameTimerBarPlayer_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Bomb State Changed
struct UGameTimerBarPlayer_C_Handle_Bomb_State_Changed_Params
{
	struct FKSNeutralBombState*                        BombState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.On Player State Downed Changed
struct UGameTimerBarPlayer_C_On_Player_State_Downed_Changed_Params
{
	class AKSPlayerState**                             KSPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Player Mods Changed
struct UGameTimerBarPlayer_C_Handle_Player_Mods_Changed_Params
{
	class UKSPlayerMod**                               Mod;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSPlayerModInstance**                       ModInstance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Icon Showing Changed
struct UGameTimerBarPlayer_C_Handle_Icon_Showing_Changed_Params
{
	TScriptInterface<class UKSTopBarStatusIconInterface>* StatusIconInterface;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Bound Icon Mod Removed
struct UGameTimerBarPlayer_C_Handle_Bound_Icon_Mod_Removed_Params
{
};

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.ExecuteUbergraph_GameTimerBarPlayer
struct UGameTimerBarPlayer_C_ExecuteUbergraph_GameTimerBarPlayer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
