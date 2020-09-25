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

// DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnMagThrow__DelegateSignature
struct UPCM_Hero_ABP_C_OnMagThrow__DelegateSignature_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ZipLineTurnReset
struct UPCM_Hero_ABP_C_ZipLineTurnReset_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateSkinDependantVariables
struct UPCM_Hero_ABP_C_UpdateSkinDependantVariables_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateRagdollPelvis
struct UPCM_Hero_ABP_C_UpdateRagdollPelvis_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateIKHandRuleset
struct UPCM_Hero_ABP_C_UpdateIKHandRuleset_Params
{
	class UKSWeaponComponent**                         bpp__InWeaponComponent__pf;                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateEngHeadAdditive
struct UPCM_Hero_ABP_C_UpdateEngHeadAdditive_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateCustomPivot
struct UPCM_Hero_ABP_C_UpdateCustomPivot_Params
{
	bool*                                              bpp__bNewValue__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UnhideMag
struct UPCM_Hero_ABP_C_UnhideMag_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.TurnInPlace
struct UPCM_Hero_ABP_C_TurnInPlace_Params
{
	bool                                               bpp__TurnxOver__pfT;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.TickHitReacts
struct UPCM_Hero_ABP_C_TickHitReacts_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SwitchWeaponIK
struct UPCM_Hero_ABP_C_SwitchWeaponIK_Params
{
	class UKSWeaponComponent**                         bpp__WeaponRef__pf;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SwitchWeapon
struct UPCM_Hero_ABP_C_SwitchWeapon_Params
{
	class UKSWeaponComponent**                         bpp__WeaponRef__pf;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Stop Turn In Place
struct UPCM_Hero_ABP_C_Stop_Turn_In_Place_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Start Turn In Place
struct UPCM_Hero_ABP_C_Start_Turn_In_Place_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.StartRevivee
struct UPCM_Hero_ABP_C_StartRevivee_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Should Update Component Rotation
struct UPCM_Hero_ABP_C_Should_Update_Component_Rotation_Params
{
	float*                                             bpp__DeltaxTime__pfT;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__ReturnxValue__pfT;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__NewxCompoentxYaw__pfTT;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Should Turn In Place Be Active
struct UPCM_Hero_ABP_C_Should_Turn_In_Place_Be_Active_Params
{
	bool                                               bpp__ReturnxValue__pfT;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ShoulderCharge
struct UPCM_Hero_ABP_C_ShoulderCharge_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Turn Value
struct UPCM_Hero_ABP_C_Set_Turn_Value_Params
{
	float*                                             bpp__Yaw__pf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Skinned Local Parameters
struct UPCM_Hero_ABP_C_Set_Skinned_Local_Parameters_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Footstep SFX Switches
struct UPCM_Hero_ABP_C_Set_Footstep_SFX_Switches_Params
{
	struct FName*                                      bpp__ShoexName__pfT;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bpp__StepxName__pfT;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bpp__MaterialxName__pfT;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     bpp__Actor__pf;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      bpp__ActorxReturn__pfT;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Desired Component Yaw
struct UPCM_Hero_ABP_C_Set_Desired_Component_Yaw_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Clothing SFX Switch
struct UPCM_Hero_ABP_C_Set_Clothing_SFX_Switch_Params
{
	struct FName*                                      bpp__ClothingxType__pfT;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      bpp__ActorxReturn__pfT;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Aims
struct UPCM_Hero_ABP_C_Set_Aims_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set ADS 1p Aims
struct UPCM_Hero_ABP_C_Set_ADS_1p_Aims_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetUpStopAnims
struct UPCM_Hero_ABP_C_SetUpStopAnims_Params
{
	EKSMovementDirection*                              bpp__NewMoveDirection__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetUpStartAnims
struct UPCM_Hero_ABP_C_SetUpStartAnims_Params
{
	EKSMovementDirection*                              bpp__NewMoveDirection__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetTransitionAnims
struct UPCM_Hero_ABP_C_SetTransitionAnims_Params
{
	class UAnimSequenceBase**                          bpp__StartMoving__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          bpp__CurrentStopMovingA__pf;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          bpp__CurrentDirectionPivot__pf;                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          bpp__StartMovingCrouch__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          bpp__CurrentStopMovingCrouch__pf;                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          bpp__CurrentDirectionPivotCrouch__pf;                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          bpp__StartDisableMoving__pf;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          bpp__StopDisableMoving__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          bpp__CurrentDisablePivot__pf;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetStopAnim
struct UPCM_Hero_ABP_C_SetStopAnim_Params
{
	EKSMovementDirection*                              bpp__Direction__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetStartMeleeLowerBodyAnim
struct UPCM_Hero_ABP_C_SetStartMeleeLowerBodyAnim_Params
{
	EKSMovementDirection*                              bpp__Direction__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetStartAnim
struct UPCM_Hero_ABP_C_SetStartAnim_Params
{
	EKSMovementDirection*                              bpp__Direction__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetPoseDrivenHitReactParams
struct UPCM_Hero_ABP_C_SetPoseDrivenHitReactParams_Params
{
	struct FVector*                                    bpp__ImpactxNormal__pfT;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__Damage__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetMovementDirection
struct UPCM_Hero_ABP_C_SetMovementDirection_Params
{
	EKSMovementDirection*                              bpp__Direction__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EKSMovementDirection*                              bpp__OldMoveDirection__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetMaxSpeedValues_2
struct UPCM_Hero_ABP_C_SetMaxSpeedValues_2_Params
{
	class UKSWeaponAsset**                             bpp__WeaponAsset__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetHitReactParams
struct UPCM_Hero_ABP_C_SetHitReactParams_Params
{
	struct FVector*                                    bpp__RelativeImpactLocation__pf;                          // (Parm, ZeroConstructor, IsPlainOldData)
	EKSMovementDirection*                              bpp__HitDirection__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ReviveMesh
struct UPCM_Hero_ABP_C_ReviveMesh_Params
{
	class UAnimMontage**                               bpp__ReviveMontage__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bpp__bIsInAir__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.RequestNewCombatState
struct UPCM_Hero_ABP_C_RequestNewCombatState_Params
{
	ECombatState*                                      bpp__NewCombatState__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bpp__bBlockCooldown__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bpp__bForce__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.RemoveExpiredHitReact
struct UPCM_Hero_ABP_C_RemoveExpiredHitReact_Params
{
	struct FHitReaction*                               bpp__ExpiredHitReact__pf;                                 // (Parm)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.On Sprint Changed
struct UPCM_Hero_ABP_C_On_Sprint_Changed_Params
{
	bool*                                              bpp__IsSprinting__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnShoulderChanged
struct UPCM_Hero_ABP_C_OnShoulderChanged_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_F55321C648B813A33A06BF926330EB4F
struct UPCM_Hero_ABP_C_OnNotifyEnd_F55321C648B813A33A06BF926330EB4F_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_D0E2AA7A43FF94C946DDED97889E22B1
struct UPCM_Hero_ABP_C_OnNotifyEnd_D0E2AA7A43FF94C946DDED97889E22B1_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_D02C034A4EB0D0E596D903B8DBD4801B
struct UPCM_Hero_ABP_C_OnNotifyEnd_D02C034A4EB0D0E596D903B8DBD4801B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_C78BE1F74ADCCB255C1BCD9E6240104B
struct UPCM_Hero_ABP_C_OnNotifyEnd_C78BE1F74ADCCB255C1BCD9E6240104B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_B5B16ACD4F176963194D6B8527E16FBB
struct UPCM_Hero_ABP_C_OnNotifyEnd_B5B16ACD4F176963194D6B8527E16FBB_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_9E6BC1B74A4D30EF4551EDBB637F89EE
struct UPCM_Hero_ABP_C_OnNotifyEnd_9E6BC1B74A4D30EF4551EDBB637F89EE_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_68DE575241BD5D31439A859E850392A2
struct UPCM_Hero_ABP_C_OnNotifyEnd_68DE575241BD5D31439A859E850392A2_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_4DE3C6AE469BE13DC02A7AB80E924B7B
struct UPCM_Hero_ABP_C_OnNotifyEnd_4DE3C6AE469BE13DC02A7AB80E924B7B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_1BE19CEA4A7E760561F3419034A02FE3
struct UPCM_Hero_ABP_C_OnNotifyEnd_1BE19CEA4A7E760561F3419034A02FE3_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_143632A9488E9A82D17492B8710C0540
struct UPCM_Hero_ABP_C_OnNotifyEnd_143632A9488E9A82D17492B8710C0540_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_F55321C648B813A33A06BF926330EB4F
struct UPCM_Hero_ABP_C_OnNotifyBegin_F55321C648B813A33A06BF926330EB4F_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_D0E2AA7A43FF94C946DDED97889E22B1
struct UPCM_Hero_ABP_C_OnNotifyBegin_D0E2AA7A43FF94C946DDED97889E22B1_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_D02C034A4EB0D0E596D903B8DBD4801B
struct UPCM_Hero_ABP_C_OnNotifyBegin_D02C034A4EB0D0E596D903B8DBD4801B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_C78BE1F74ADCCB255C1BCD9E6240104B
struct UPCM_Hero_ABP_C_OnNotifyBegin_C78BE1F74ADCCB255C1BCD9E6240104B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_B5B16ACD4F176963194D6B8527E16FBB
struct UPCM_Hero_ABP_C_OnNotifyBegin_B5B16ACD4F176963194D6B8527E16FBB_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_9E6BC1B74A4D30EF4551EDBB637F89EE
struct UPCM_Hero_ABP_C_OnNotifyBegin_9E6BC1B74A4D30EF4551EDBB637F89EE_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_68DE575241BD5D31439A859E850392A2
struct UPCM_Hero_ABP_C_OnNotifyBegin_68DE575241BD5D31439A859E850392A2_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_4DE3C6AE469BE13DC02A7AB80E924B7B
struct UPCM_Hero_ABP_C_OnNotifyBegin_4DE3C6AE469BE13DC02A7AB80E924B7B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_1BE19CEA4A7E760561F3419034A02FE3
struct UPCM_Hero_ABP_C_OnNotifyBegin_1BE19CEA4A7E760561F3419034A02FE3_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_143632A9488E9A82D17492B8710C0540
struct UPCM_Hero_ABP_C_OnNotifyBegin_143632A9488E9A82D17492B8710C0540_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_F55321C648B813A33A06BF926330EB4F
struct UPCM_Hero_ABP_C_OnInterrupted_F55321C648B813A33A06BF926330EB4F_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_D0E2AA7A43FF94C946DDED97889E22B1
struct UPCM_Hero_ABP_C_OnInterrupted_D0E2AA7A43FF94C946DDED97889E22B1_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_D02C034A4EB0D0E596D903B8DBD4801B
struct UPCM_Hero_ABP_C_OnInterrupted_D02C034A4EB0D0E596D903B8DBD4801B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_C78BE1F74ADCCB255C1BCD9E6240104B
struct UPCM_Hero_ABP_C_OnInterrupted_C78BE1F74ADCCB255C1BCD9E6240104B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_B5B16ACD4F176963194D6B8527E16FBB
struct UPCM_Hero_ABP_C_OnInterrupted_B5B16ACD4F176963194D6B8527E16FBB_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_9E6BC1B74A4D30EF4551EDBB637F89EE
struct UPCM_Hero_ABP_C_OnInterrupted_9E6BC1B74A4D30EF4551EDBB637F89EE_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_68DE575241BD5D31439A859E850392A2
struct UPCM_Hero_ABP_C_OnInterrupted_68DE575241BD5D31439A859E850392A2_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_4DE3C6AE469BE13DC02A7AB80E924B7B
struct UPCM_Hero_ABP_C_OnInterrupted_4DE3C6AE469BE13DC02A7AB80E924B7B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_1BE19CEA4A7E760561F3419034A02FE3
struct UPCM_Hero_ABP_C_OnInterrupted_1BE19CEA4A7E760561F3419034A02FE3_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_143632A9488E9A82D17492B8710C0540
struct UPCM_Hero_ABP_C_OnInterrupted_143632A9488E9A82D17492B8710C0540_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_F55321C648B813A33A06BF926330EB4F
struct UPCM_Hero_ABP_C_OnCompleted_F55321C648B813A33A06BF926330EB4F_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_D0E2AA7A43FF94C946DDED97889E22B1
struct UPCM_Hero_ABP_C_OnCompleted_D0E2AA7A43FF94C946DDED97889E22B1_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_D02C034A4EB0D0E596D903B8DBD4801B
struct UPCM_Hero_ABP_C_OnCompleted_D02C034A4EB0D0E596D903B8DBD4801B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_C78BE1F74ADCCB255C1BCD9E6240104B
struct UPCM_Hero_ABP_C_OnCompleted_C78BE1F74ADCCB255C1BCD9E6240104B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_B5B16ACD4F176963194D6B8527E16FBB
struct UPCM_Hero_ABP_C_OnCompleted_B5B16ACD4F176963194D6B8527E16FBB_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_9E6BC1B74A4D30EF4551EDBB637F89EE
struct UPCM_Hero_ABP_C_OnCompleted_9E6BC1B74A4D30EF4551EDBB637F89EE_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_68DE575241BD5D31439A859E850392A2
struct UPCM_Hero_ABP_C_OnCompleted_68DE575241BD5D31439A859E850392A2_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_4DE3C6AE469BE13DC02A7AB80E924B7B
struct UPCM_Hero_ABP_C_OnCompleted_4DE3C6AE469BE13DC02A7AB80E924B7B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_1BE19CEA4A7E760561F3419034A02FE3
struct UPCM_Hero_ABP_C_OnCompleted_1BE19CEA4A7E760561F3419034A02FE3_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_143632A9488E9A82D17492B8710C0540
struct UPCM_Hero_ABP_C_OnCompleted_143632A9488E9A82D17492B8710C0540_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_F55321C648B813A33A06BF926330EB4F
struct UPCM_Hero_ABP_C_OnBlendOut_F55321C648B813A33A06BF926330EB4F_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_D0E2AA7A43FF94C946DDED97889E22B1
struct UPCM_Hero_ABP_C_OnBlendOut_D0E2AA7A43FF94C946DDED97889E22B1_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_D02C034A4EB0D0E596D903B8DBD4801B
struct UPCM_Hero_ABP_C_OnBlendOut_D02C034A4EB0D0E596D903B8DBD4801B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_C78BE1F74ADCCB255C1BCD9E6240104B
struct UPCM_Hero_ABP_C_OnBlendOut_C78BE1F74ADCCB255C1BCD9E6240104B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_B5B16ACD4F176963194D6B8527E16FBB
struct UPCM_Hero_ABP_C_OnBlendOut_B5B16ACD4F176963194D6B8527E16FBB_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_9E6BC1B74A4D30EF4551EDBB637F89EE
struct UPCM_Hero_ABP_C_OnBlendOut_9E6BC1B74A4D30EF4551EDBB637F89EE_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_68DE575241BD5D31439A859E850392A2
struct UPCM_Hero_ABP_C_OnBlendOut_68DE575241BD5D31439A859E850392A2_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_4DE3C6AE469BE13DC02A7AB80E924B7B
struct UPCM_Hero_ABP_C_OnBlendOut_4DE3C6AE469BE13DC02A7AB80E924B7B_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_1BE19CEA4A7E760561F3419034A02FE3
struct UPCM_Hero_ABP_C_OnBlendOut_1BE19CEA4A7E760561F3419034A02FE3_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_143632A9488E9A82D17492B8710C0540
struct UPCM_Hero_ABP_C_OnBlendOut_143632A9488E9A82D17492B8710C0540_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionStop
struct UPCM_Hero_ABP_C_LocomotionStop_Params
{
	struct FVector*                                    bpp__StopLocation__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionStart
struct UPCM_Hero_ABP_C_LocomotionStart_Params
{
	struct FVector*                                    bpp__StartLocation__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionPrePivot
struct UPCM_Hero_ABP_C_LocomotionPrePivot_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionPivotCheckpoint
struct UPCM_Hero_ABP_C_LocomotionPivotCheckpoint_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionPivot
struct UPCM_Hero_ABP_C_LocomotionPivot_Params
{
	struct FVector*                                    bpp__PivotLocation__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocalAccelerationToMovementDirection
struct UPCM_Hero_ABP_C_LocalAccelerationToMovementDirection_Params
{
	struct FVector*                                    bpp__LocalxAcceleration__pfT;                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bpp__GetOppositeDirection__pf;                            // (Parm, ZeroConstructor, IsPlainOldData)
	EKSMovementDirection                               bpp__AccelerationDirection__pf;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.IsPlayerRagdoll
struct UPCM_Hero_ABP_C_IsPlayerRagdoll_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Hit React Event New
struct UPCM_Hero_ABP_C_Hit_React_Event_New_Params
{
	class AKSCharacter**                               bpp__Character__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEffect*                              bpp__Response__pf;                                        // (Parm)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.HideMag
struct UPCM_Hero_ABP_C_HideMag_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Get Roll Directions
struct UPCM_Hero_ABP_C_Get_Roll_Directions_Params
{
	struct FVector2D*                                  bpp__RollDirectionInput__pf;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Get Footstep SFX Material
struct UPCM_Hero_ABP_C_Get_Footstep_SFX_Material_Params
{
	struct FName*                                      bpp__BoneName__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bpp__MaterialxReturn__pfT;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      bpp__ActorxReturn__pfT;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_8
struct UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_8_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_65
struct UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_65_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_36
struct UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_36_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_31
struct UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_31_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_30
struct UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_30_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_3
struct UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_3_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_15
struct UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_15_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_14
struct UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_14_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_1
struct UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_1_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStopSwimming
struct UPCM_Hero_ABP_C_EventStopSwimming_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStopSubmerge
struct UPCM_Hero_ABP_C_EventStopSubmerge_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStartSwimming
struct UPCM_Hero_ABP_C_EventStartSwimming_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStartSubmerge
struct UPCM_Hero_ABP_C_EventStartSubmerge_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStartInteraction
struct UPCM_Hero_ABP_C_EventStartInteraction_Params
{
	struct FName*                                      bpp__NewInteractState__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__NewInteractHeight__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__NewInteractTime__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndZipLine
struct UPCM_Hero_ABP_C_EventEndZipLine_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndVault
struct UPCM_Hero_ABP_C_EventEndVault_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndPowerSlide
struct UPCM_Hero_ABP_C_EventEndPowerSlide_Params
{
	EKSPowerSlideEndReason*                            bpp__EndReason__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndInteraction
struct UPCM_Hero_ABP_C_EventEndInteraction_Params
{
	struct FName*                                      bpp__OldInteractState__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndAbilityMovement
struct UPCM_Hero_ABP_C_EventEndAbilityMovement_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoZipLine
struct UPCM_Hero_ABP_C_EventDoZipLine_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoVault
struct UPCM_Hero_ABP_C_EventDoVault_Params
{
	float*                                             bpp__InMantleHeight__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bpp__bInVault__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__InVaultDrop__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__InUpDuration__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__InAcrossDuration__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__InDownDuration__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bpp__InMantleName__pf__const;                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoStun
struct UPCM_Hero_ABP_C_EventDoStun_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoPowerSlide
struct UPCM_Hero_ABP_C_EventDoPowerSlide_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoGoDown
struct UPCM_Hero_ABP_C_EventDoGoDown_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoDodgeRoll
struct UPCM_Hero_ABP_C_EventDoDodgeRoll_Params
{
	float*                                             bpp__Duration__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  bpp__Direction__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoAbilityMovement
struct UPCM_Hero_ABP_C_EventDoAbilityMovement_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_172323EF48DCF7241EF95098F2D8AD87
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_172323EF48DCF7241EF95098F2D8AD87_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_131E912946E5081C735EBFAFB1693C8A
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_131E912946E5081C735EBFAFB1693C8A_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_C14F007F4907BBAD8DC842954DC08D71
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_C14F007F4907BBAD8DC842954DC08D71_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_FB952A3747B8EBAA8E56269CBB6E9766
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_FB952A3747B8EBAA8E56269CBB6E9766_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_EF9DE76E43DA1FFA5323C29FE06381CE
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_EF9DE76E43DA1FFA5323C29FE06381CE_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E8F5864A4FBC518801ABE9B4B8E01DB2
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E8F5864A4FBC518801ABE9B4B8E01DB2_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E471C2EA41D54CD0DBC13F89A50DBDD9
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E471C2EA41D54CD0DBC13F89A50DBDD9_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_B60DB0C2476CE26BC38E85978156C863
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_B60DB0C2476CE26BC38E85978156C863_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_A71A137D45979E49935FD59C46E68895
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_A71A137D45979E49935FD59C46E68895_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_9EC4576B4419196162338EB146564905
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_9EC4576B4419196162338EB146564905_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_928BF07A47B3335F07F0FEBDA1AEEA49
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_928BF07A47B3335F07F0FEBDA1AEEA49_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_897086894750D35614505B985BA4FA44
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_897086894750D35614505B985BA4FA44_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7EE32840456D5D28C484B38772C5014A
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7EE32840456D5D28C484B38772C5014A_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_792988884C48FF32578DF1A60C1F730A
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_792988884C48FF32578DF1A60C1F730A_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7768F70149EF6298739C1C9FEDCCBB0C
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7768F70149EF6298739C1C9FEDCCBB0C_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_73D785DB4ABE1311BEF5A69B1EE3D871
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_73D785DB4ABE1311BEF5A69B1EE3D871_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_6C07F39748AE158DE081A1A83BB697E8
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_6C07F39748AE158DE081A1A83BB697E8_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5F88837142168D1B73A6A1B2A0AD3830
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5F88837142168D1B73A6A1B2A0AD3830_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_3B9ACF614D7FA965A4FAE0ADBEB82AD5
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_3B9ACF614D7FA965A4FAE0ADBEB82AD5_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_33E027DF46DCE517828E04A253364A0F
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_33E027DF46DCE517828E04A253364A0F_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_233C356842DB534CD453E29390007BA8
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_233C356842DB534CD453E29390007BA8_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_223977B248EAF97F0D1CF197C85E2617
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_223977B248EAF97F0D1CF197C85E2617_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_RotationOffsetBlendSpace_D107525D4933CE74C8899D9BD3CC2AA0
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_RotationOffsetBlendSpace_D107525D4933CE74C8899D9BD3CC2AA0_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_EFBF9A054BC7B28D4BFC5FB791063D37
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_EFBF9A054BC7B28D4BFC5FB791063D37_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_E028EF2646CAABBA4677D6BE2F6ACEB8
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_E028EF2646CAABBA4677D6BE2F6ACEB8_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BAE9A17D40662CAF9E691E83B4482E5D
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BAE9A17D40662CAF9E691E83B4482E5D_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BA1929D54B3B09856192B4B7A4D3B8A5
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BA1929D54B3B09856192B4B7A4D3B8A5_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B8C63AC244919E63F441999AF88ED3E2
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B8C63AC244919E63F441999AF88ED3E2_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B37F5A5044B9338ED291FF9598922B35
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B37F5A5044B9338ED291FF9598922B35_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_A84676B74AFF6C9E33195FB08136D345
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_A84676B74AFF6C9E33195FB08136D345_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_933D26B8456AE00A739D7C98D974D374
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_933D26B8456AE00A739D7C98D974D374_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8E46CD0F459017238E79DC91DFAD4E63
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8E46CD0F459017238E79DC91DFAD4E63_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8B2E22BB4C78E301E11713A2FA2A31A9
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8B2E22BB4C78E301E11713A2FA2A31A9_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8746FEEA43980FC2F65C9DA47BD6C683
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8746FEEA43980FC2F65C9DA47BD6C683_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8550E2144C50DB8698BDCBBD4ED6D425
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8550E2144C50DB8698BDCBBD4ED6D425_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_81898CD14A88E1C843BD08BA90B663DC
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_81898CD14A88E1C843BD08BA90B663DC_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_815C9F154477C4703D8C4C88F2D59040
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_815C9F154477C4703D8C4C88F2D59040_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_72640BAF4E1BA30E6914C3B9C3DE123A
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_72640BAF4E1BA30E6914C3B9C3DE123A_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_37906F5F492BB9398CB5C894999E8B65
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_37906F5F492BB9398CB5C894999E8B65_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_299A235045F7CAFDDC18FFBABC71DFF6
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_299A235045F7CAFDDC18FFBABC71DFF6_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_23DB87334A5B7D99A2FB028091C7E25A
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_23DB87334A5B7D99A2FB028091C7E25A_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1CDEF52142A60BC67A453693093D4120
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1CDEF52142A60BC67A453693093D4120_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1888317840C6DA4D8814B18BC7223E23
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1888317840C6DA4D8814B18BC7223E23_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_0B8FD2D64DEA37A39BF510A97F6DDAB2
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_0B8FD2D64DEA37A39BF510A97F6DDAB2_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_A82298444B1E8F93A73095B20F5AAD80
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_A82298444B1E8F93A73095B20F5AAD80_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_10BC24364F921197A28983919050AD47
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_10BC24364F921197A28983919050AD47_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EndRevivee
struct UPCM_Hero_ABP_C_EndRevivee_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EmoteMontageLostAllGlobalWeight
struct UPCM_Hero_ABP_C_EmoteMontageLostAllGlobalWeight_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Do Bind Hit React Event New
struct UPCM_Hero_ABP_C_Do_Bind_Hit_React_Event_New_Params
{
	class AKSCharacter**                               bpp__InxCharacter__pfT;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.DetermineAutoEquip
struct UPCM_Hero_ABP_C_DetermineAutoEquip_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Check for Skin Dependant Variables
struct UPCM_Hero_ABP_C_Check_for_Skin_Dependant_Variables_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.CancelDownedCosmetic
struct UPCM_Hero_ABP_C_CancelDownedCosmetic_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.CacheRootRagdollState
struct UPCM_Hero_ABP_C_CacheRootRagdollState_Params
{
	struct FVector*                                    bpp__RootLocation__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   bpp__RootRotation__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.BlueprintUpdateAnimation
struct UPCM_Hero_ABP_C_BlueprintUpdateAnimation_Params
{
	float*                                             bpp__DeltaTimeX__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.BlueprintInitializeAnimation
struct UPCM_Hero_ABP_C_BlueprintInitializeAnimation_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UpdateCrouchTransition1P
struct UPCM_Hero_ABP_C_AnimNotify_UpdateCrouchTransition1P_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Unplant Right Hand
struct UPCM_Hero_ABP_C_AnimNotify_Unplant_Right_Hand_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Unplant Left Hand
struct UPCM_Hero_ABP_C_AnimNotify_Unplant_Left_Hand_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UnHide Weapon
struct UPCM_Hero_ABP_C_AnimNotify_UnHide_Weapon_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UnHide Tablet
struct UPCM_Hero_ABP_C_AnimNotify_UnHide_Tablet_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Unhide Mag
struct UPCM_Hero_ABP_C_AnimNotify_Unhide_Mag_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UnHide Gadget
struct UPCM_Hero_ABP_C_AnimNotify_UnHide_Gadget_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_RetrieveEnd
struct UPCM_Hero_ABP_C_AnimNotify_RetrieveEnd_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_RetrieveBegin
struct UPCM_Hero_ABP_C_AnimNotify_RetrieveBegin_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Plant Right Hand
struct UPCM_Hero_ABP_C_AnimNotify_Plant_Right_Hand_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Plant Left Hand
struct UPCM_Hero_ABP_C_AnimNotify_Plant_Left_Hand_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_MagThrow
struct UPCM_Hero_ABP_C_AnimNotify_MagThrow_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_InterruptStopExit
struct UPCM_Hero_ABP_C_AnimNotify_InterruptStopExit_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_InterruptStartExit
struct UPCM_Hero_ABP_C_AnimNotify_InterruptStartExit_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Weapon
struct UPCM_Hero_ABP_C_AnimNotify_Hide_Weapon_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Tablet
struct UPCM_Hero_ABP_C_AnimNotify_Hide_Tablet_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Mag
struct UPCM_Hero_ABP_C_AnimNotify_Hide_Mag_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Gadget
struct UPCM_Hero_ABP_C_AnimNotify_Hide_Gadget_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_HackingEnd
struct UPCM_Hero_ABP_C_AnimNotify_HackingEnd_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_HackingBegin
struct UPCM_Hero_ABP_C_AnimNotify_HackingBegin_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Fire End
struct UPCM_Hero_ABP_C_AnimNotify_Fire_End_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_ExitCustomPivot
struct UPCM_Hero_ABP_C_AnimNotify_ExitCustomPivot_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_EndLocomotionStartExit
struct UPCM_Hero_ABP_C_AnimNotify_EndLocomotionStartExit_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_EndLocomotionStartEnter
struct UPCM_Hero_ABP_C_AnimNotify_EndLocomotionStartEnter_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_EnableAims
struct UPCM_Hero_ABP_C_AnimNotify_EnableAims_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_DisableAims
struct UPCM_Hero_ABP_C_AnimNotify_DisableAims_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_CanStand
struct UPCM_Hero_ABP_C_AnimNotify_CanStand_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_BeginLocomotionStartExit
struct UPCM_Hero_ABP_C_AnimNotify_BeginLocomotionStartExit_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_BeginLocomotionStartEnter
struct UPCM_Hero_ABP_C_AnimNotify_BeginLocomotionStartEnter_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimMIrrorDelayEnd
struct UPCM_Hero_ABP_C_AnimMIrrorDelayEnd_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimGraph
struct UPCM_Hero_ABP_C_AnimGraph_Params
{
	struct FPoseLink                                   bpp__AnimGraph__pf;                                       // (Parm, OutParm)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AfterInteraction
struct UPCM_Hero_ABP_C_AfterInteraction_Params
{
	struct FName*                                      bpp__NewxInteractxState__pfTT;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ADS Bump Stop Reset
struct UPCM_Hero_ABP_C_ADS_Bump_Stop_Reset_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ADS Bump Start Reset
struct UPCM_Hero_ABP_C_ADS_Bump_Start_Reset_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ADSResetBumpnRollValues
struct UPCM_Hero_ABP_C_ADSResetBumpnRollValues_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ADSBumpnRollEvaluation
struct UPCM_Hero_ABP_C_ADSBumpnRollEvaluation_Params
{
	float*                                             bpp__Tick__pf;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnSprintChanged__DelegateSignature
struct UPCM_Hero_ABP_C_OnSprintChanged__DelegateSignature_Params
{
	bool*                                              bpp__IsSprinting__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnPlayHitFromPointDamage__DelegateSignature
struct UPCM_Hero_ABP_C_OnPlayHitFromPointDamage__DelegateSignature_Params
{
	class AKSCharacter**                               bpp__Character__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEffect*                              bpp__Response__pf;                                        // (Parm)
};

// DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnMontagePlayDelegate__DelegateSignature
struct UPCM_Hero_ABP_C_OnMontagePlayDelegate__DelegateSignature_Params
{
	struct FName*                                      bpp__NotifyName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__MontageInstanceID__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnFinishedAllPendingLoadsKeywords__DelegateSignature
struct UPCM_Hero_ABP_C_OnFinishedAllPendingLoadsKeywords__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
