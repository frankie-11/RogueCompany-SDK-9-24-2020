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

// Function FlashTrapModInst.FlashTrapModInst_C.CanActivateNow
struct UFlashTrapModInst_C_CanActivateNow_Params
{
	EKSAbilityUsageFailureType                         OutAbilityFailureType;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FlashTrapModInst.FlashTrapModInst_C.ReceiveBeginPlay
struct UFlashTrapModInst_C_ReceiveBeginPlay_Params
{
};

// Function FlashTrapModInst.FlashTrapModInst_C.OnNewGivenItem
struct UFlashTrapModInst_C_OnNewGivenItem_Params
{
};

// Function FlashTrapModInst.FlashTrapModInst_C.OnWeaponStateChanged
struct UFlashTrapModInst_C_OnWeaponStateChanged_Params
{
	class AKSWeapon**                                  Weapon;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashTrapModInst.FlashTrapModInst_C.BeginActivation
struct UFlashTrapModInst_C_BeginActivation_Params
{
};

// Function FlashTrapModInst.FlashTrapModInst_C.OnGrenadeSpawned
struct UFlashTrapModInst_C_OnGrenadeSpawned_Params
{
	class AKSProjectile_Grenade**                      Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashTrapModInst.FlashTrapModInst_C.OnGrenadeDestroyed
struct UFlashTrapModInst_C_OnGrenadeDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashTrapModInst.FlashTrapModInst_C.Init_RemoteThrow
struct UFlashTrapModInst_C_Init_RemoteThrow_Params
{
	class AKSWeapon_RemoteThrow**                      RemoteThrow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashTrapModInst.FlashTrapModInst_C.Init_Detonator
struct UFlashTrapModInst_C_Init_Detonator_Params
{
	class AKSWeapon_RemoteTrigger**                    Detonator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashTrapModInst.FlashTrapModInst_C.On Detonator Spawned
struct UFlashTrapModInst_C_On_Detonator_Spawned_Params
{
	class AKSWeapon_RemoteTrigger**                    Detonator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashTrapModInst.FlashTrapModInst_C.On Remote Throw Spawned
struct UFlashTrapModInst_C_On_Remote_Throw_Spawned_Params
{
	class AKSWeapon_RemoteThrow**                      RemoteThrow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashTrapModInst.FlashTrapModInst_C.FiredOnAuthority
struct UFlashTrapModInst_C_FiredOnAuthority_Params
{
};

// Function FlashTrapModInst.FlashTrapModInst_C.On Reclaimed
struct UFlashTrapModInst_C_On_Reclaimed_Params
{
	class AKSProjectile**                              Reclaimed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashTrapModInst.FlashTrapModInst_C.OnAbilityReleased
struct UFlashTrapModInst_C_OnAbilityReleased_Params
{
};

// Function FlashTrapModInst.FlashTrapModInst_C.OnNewCharacter
struct UFlashTrapModInst_C_OnNewCharacter_Params
{
};

// Function FlashTrapModInst.FlashTrapModInst_C.On Character Died
struct UFlashTrapModInst_C_On_Character_Died_Params
{
	class AKSCharacterBase**                           KillerCharacter;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacterBase**                           KilledCharacter;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashTrapModInst.FlashTrapModInst_C.ExecuteUbergraph_FlashTrapModInst
struct UFlashTrapModInst_C_ExecuteUbergraph_FlashTrapModInst_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
