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

// Function ReticuleMoving.ReticuleMoving_C.ResetADS
struct UReticuleMoving_C_ResetADS_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.UpdateBlockedShotDisplay
struct UReticuleMoving_C_UpdateBlockedShotDisplay_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Translation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  IconScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.UpdateVisibility
struct UReticuleMoving_C_UpdateVisibility_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.UnBindReticleAmmoGauge
struct UReticuleMoving_C_UnBindReticleAmmoGauge_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.HandleShotgunElimination
struct UReticuleMoving_C_HandleShotgunElimination_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.ProcessShotgunHitDisplay
struct UReticuleMoving_C_ProcessShotgunHitDisplay_Params
{
	struct FShotgunHitData*                            InShotgunHitData;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ReticuleMoving.ReticuleMoving_C.UnbindShotgunNotify
struct UReticuleMoving_C_UnbindShotgunNotify_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.BindToShotgunNotify
struct UReticuleMoving_C_BindToShotgunNotify_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.IsShotgunReticleType
struct UReticuleMoving_C_IsShotgunReticleType_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UReticleBase_C*                              Reticle;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.BindReticleAmmoGauge
struct UReticuleMoving_C_BindReticleAmmoGauge_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.CheckShotgunReload
struct UReticuleMoving_C_CheckShotgunReload_Params
{
	bool                                               IsShotgunReload;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.GetActiveReticle
struct UReticuleMoving_C_GetActiveReticle_Params
{
	class UReticleBase_C*                              Reticle;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.SetActiveReticle
struct UReticuleMoving_C_SetActiveReticle_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.InitializeTickAnimations
struct UReticuleMoving_C_InitializeTickAnimations_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.HandleBlockedShotLerpUpdate
struct UReticuleMoving_C_HandleBlockedShotLerpUpdate_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.HandleBlockedShotLerpFinished
struct UReticuleMoving_C_HandleBlockedShotLerpFinished_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.Construct
struct UReticuleMoving_C_Construct_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.AimStateChange
struct UReticuleMoving_C_AimStateChange_Params
{
	EKSCharacterAimMode*                               NewAimMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.Kill
struct UReticuleMoving_C_Kill_Params
{
	struct FCombatEventInfo*                           Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ReticuleMoving.ReticuleMoving_C.OnInstigatedDamage
struct UReticuleMoving_C_OnInstigatedDamage_Params
{
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsHeadshot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsLethal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Damage_Resisted;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.UpdateReticleOffset
struct UReticuleMoving_C_UpdateReticleOffset_Params
{
	float*                                             OffsetFromCenterScreen;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.UpdateBlockedShotIcon
struct UReticuleMoving_C_UpdateBlockedShotIcon_Params
{
	bool*                                              IconVisible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Translation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  IconScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.PostSetActiveWeaponComponent
struct UReticuleMoving_C_PostSetActiveWeaponComponent_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.PreClearActiveWeaponComponent
struct UReticuleMoving_C_PreClearActiveWeaponComponent_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.HandleOnKillCamViewProjectile
struct UReticuleMoving_C_HandleOnKillCamViewProjectile_Params
{
	class AKSProjectile**                              ViewProjectile;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.HandleKillCamEnabled
struct UReticuleMoving_C_HandleKillCamEnabled_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.PreClearPawn
struct UReticuleMoving_C_PreClearPawn_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.ViewedPawnInstigatedDamageNotify
struct UReticuleMoving_C_ViewedPawnInstigatedDamageNotify_Params
{
	struct FCombatEventInfo*                           DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ReticuleMoving.ReticuleMoving_C.OnPlayerKilled
struct UReticuleMoving_C_OnPlayerKilled_Params
{
	class AKSCharacterBase**                           KillerCharacter;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacterBase**                           KilledCharacter;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.Tick
struct UReticuleMoving_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.HandleReload (New)
struct UReticuleMoving_C_HandleReload__New__Params
{
	class UKSWeaponComponent**                         WeaponComponent;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EWeaponStateNew*                                   OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.GrenadeStateChange (New)
struct UReticuleMoving_C_GrenadeStateChange__New__Params
{
	class UKSWeaponComponent**                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EWeaponStateNew*                                   Old_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   New_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.HandleShotgunNotify
struct UReticuleMoving_C_HandleShotgunNotify_Params
{
	class AKSCharacter**                               KSCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FShotgunHitData*                            InShotgunHitData;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ReticuleMoving.ReticuleMoving_C.PostSetPawn
struct UReticuleMoving_C_PostSetPawn_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.PostSetPlayerState
struct UReticuleMoving_C_PostSetPlayerState_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.PreClearPlayerState
struct UReticuleMoving_C_PreClearPlayerState_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.Handle Player Down or Elim Changed
struct UReticuleMoving_C_Handle_Player_Down_or_Elim_Changed_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.HandleEmoteStoppedPlaying
struct UReticuleMoving_C_HandleEmoteStoppedPlaying_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.HandleOnEmoteStartedPlaying
struct UReticuleMoving_C_HandleOnEmoteStartedPlaying_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.HandleDeathStateChange
struct UReticuleMoving_C_HandleDeathStateChange_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.HandleCrosshairHidden
struct UReticuleMoving_C_HandleCrosshairHidden_Params
{
	class AKSCharacter**                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReticuleMoving.ReticuleMoving_C.Handle Out Of Bounds End
struct UReticuleMoving_C_Handle_Out_Of_Bounds_End_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.Handle Out Of Bounds Begin
struct UReticuleMoving_C_Handle_Out_Of_Bounds_Begin_Params
{
};

// Function ReticuleMoving.ReticuleMoving_C.ExecuteUbergraph_ReticuleMoving
struct UReticuleMoving_C_ExecuteUbergraph_ReticuleMoving_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
