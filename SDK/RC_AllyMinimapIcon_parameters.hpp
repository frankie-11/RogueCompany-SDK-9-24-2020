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

// Function AllyMinimapIcon.AllyMinimapIcon_C.UIRelevantChanged
struct UAllyMinimapIcon_C_UIRelevantChanged_Params
{
	class AKSPlayerState**                             bpp__PlayerState__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AllyMinimapIcon.AllyMinimapIcon_C.Tick
struct UAllyMinimapIcon_C_Tick_Params
{
	struct FGeometry*                                  bpp__MyGeometry__pf;                                      // (Parm, IsPlainOldData)
	float*                                             bpp__InDeltaTime__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AllyMinimapIcon.AllyMinimapIcon_C.OnSetupStart
struct UAllyMinimapIcon_C_OnSetupStart_Params
{
};

// Function AllyMinimapIcon.AllyMinimapIcon_C.OnPlayerRevived
struct UAllyMinimapIcon_C_OnPlayerRevived_Params
{
	class AKSPlayerState**                             bpp__Revivee__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             bpp__Reviver__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__ExpBonus__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AllyMinimapIcon.AllyMinimapIcon_C.OnPlayerDown
struct UAllyMinimapIcon_C_OnPlayerDown_Params
{
	struct FCombatEventInfo*                           bpp__CombatEventInfo__pf;                                 // (Parm)
	int*                                               bpp__ExpBonus__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AllyMinimapIcon.AllyMinimapIcon_C.Handle Bomb State Changed
struct UAllyMinimapIcon_C_Handle_Bomb_State_Changed_Params
{
	struct FKSNeutralBombState*                        bpp__BombState__pf;                                       // (Parm)
};

// Function AllyMinimapIcon.AllyMinimapIcon_C.Construct
struct UAllyMinimapIcon_C_Construct_Params
{
};

// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.PlayerReviveDelegate__DelegateSignature
struct UAllyMinimapIcon_C_PlayerReviveDelegate__DelegateSignature_Params
{
	class AKSPlayerState**                             bpp__Revivee__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             bpp__Reviver__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__ExpBonus__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.PlayerDownInfo__DelegateSignature
struct UAllyMinimapIcon_C_PlayerDownInfo__DelegateSignature_Params
{
	struct FCombatEventInfo*                           bpp__EventInfo__pf;                                       // (Parm)
	int*                                               bpp__ExpBonus__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnUIRelevantPlayerStateChanged__DelegateSignature
struct UAllyMinimapIcon_C_OnUIRelevantPlayerStateChanged__DelegateSignature_Params
{
	class AKSPlayerState**                             bpp__PlayerState__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnSetupPhaseStart__DelegateSignature
struct UAllyMinimapIcon_C_OnSetupPhaseStart__DelegateSignature_Params
{
};

// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnNeutralBombStateChanged__DelegateSignature
struct UAllyMinimapIcon_C_OnNeutralBombStateChanged__DelegateSignature_Params
{
	struct FKSNeutralBombState*                        bpp__BombState__pf;                                       // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
