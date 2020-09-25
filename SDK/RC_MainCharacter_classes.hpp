#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass MainCharacter.MainCharacter_C
// 0x1590 (0x4970 - 0x33E0)
class AMainCharacter_C : public AKSCharacter
{
public:
	class UKSCharacterSocketComponent*                 PerformanceAimOrigin;                                     // 0x33E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCharacterEmotionComponent_C*                CharacterEmotionComponent;                                // 0x33E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SkyDiveCameraBoom;                                        // 0x33F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Nameplate;                                                // 0x33F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMainCharacterThreatComponent_C*             MainCharacterThreatComponent;                             // 0x3400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSTabletMeshComponent*                      NewTablet;                                                // 0x3408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMainEnvironmentTracker_C*                   MainEnvironmentTracker;                                   // 0x3410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAimAssistAnchorComponent*                 BodyAimAssistAnchor;                                      // 0x3418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAimAssistAnchorComponent*                 HeadAimAssistAnchor;                                      // 0x3420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Free_Fall_Particle_Component;                             // 0x3428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            SkyDiveCamera;                                            // 0x3430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EnterFreeFallFOVTimeline_FOV_214483C64B8EF94ABEE010ACC0C82B47;// 0x3438(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EnterFreeFallFOVTimeline__Direction_214483C64B8EF94ABEE010ACC0C82B47;// 0x343C(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          EnterFreeFallFOVTimeline;                                 // 0x3440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              NoseDiveFOVTimeline_FOV_B4B28FE84FD9F70D4702AD94CD02429F; // 0x3448(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    NoseDiveFOVTimeline__Direction_B4B28FE84FD9F70D4702AD94CD02429F;// 0x344C(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          NoseDiveFOVTimeline;                                      // 0x3450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Martial_Artist_Target_Front_Camera_Offset_2353812C44E84070E58EA28AC0C39A7A;// 0x3458(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Martial_Artist_Target_Front_Camera_Rotation_2353812C44E84070E58EA28AC0C39A7A;// 0x3464(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Martial_Artist_Target_Front__Direction_2353812C44E84070E58EA28AC0C39A7A;// 0x3470(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Martial_Artist_Target_Front;                              // 0x3478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Martial_Artist_Target_Back_Camera_Offset_1BFA9A6E4FC29401CE8D43B8AAD4581C;// 0x3480(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Martial_Artist_Target_Back_Camera_Rotation_1BFA9A6E4FC29401CE8D43B8AAD4581C;// 0x348C(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Martial_Artist_Target_Back__Direction_1BFA9A6E4FC29401CE8D43B8AAD4581C;// 0x3498(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Martial_Artist_Target_Back;                               // 0x34A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Martial_Artist_Instigator_Front_Camera_Offset_F70AEBFB4CDEF611144DE3BBA0C06E0C;// 0x34A8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Martial_Artist_Instigator_Front_Camera_Rotation_F70AEBFB4CDEF611144DE3BBA0C06E0C;// 0x34B4(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Martial_Artist_Instigator_Front__Direction_F70AEBFB4CDEF611144DE3BBA0C06E0C;// 0x34C0(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Martial_Artist_Instigator_Front;                          // 0x34C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Martial_Artist_Instigator_Back_Camera_Offset_28F092594C0CD50C0A3EA1BF17E2C5E1;// 0x34D0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Martial_Artist_Instigator_Back_Camera_Rotation_28F092594C0CD50C0A3EA1BF17E2C5E1;// 0x34DC(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Martial_Artist_Instigator_Back__Direction_28F092594C0CD50C0A3EA1BF17E2C5E1;// 0x34E8(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Martial_Artist_Instigator_Back;                           // 0x34F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CameraDodgeRoll_Relative_Position_4B7EB20A461034BB0B80418AE71BD9F4;// 0x34F8(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              CameraDodgeRoll_Camera_Boom_Length_4B7EB20A461034BB0B80418AE71BD9F4;// 0x3504(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraDodgeRoll__Direction_4B7EB20A461034BB0B80418AE71BD9F4;// 0x3508(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          CameraDodgeRoll;                                          // 0x3510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SprintFOVTimeline_FOVAlpha_F9A879E74FD1B4D844684CBEE4230863;// 0x3518(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SprintFOVTimeline__Direction_F9A879E74FD1B4D844684CBEE4230863;// 0x351C(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          SprintFOVTimeline;                                        // 0x3520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EndImmunity_Invulnerable_4A69979040C00E80AB6D5687355E98EA;// 0x3528(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EndImmunity__Direction_4A69979040C00E80AB6D5687355E98EA;  // 0x352C(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          EndImmunity;                                              // 0x3530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StartImmunity_Invulnerable_F2F49BA44D30D2903638919AFE6C1704;// 0x3538(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StartImmunity__Direction_F2F49BA44D30D2903638919AFE6C1704;// 0x353C(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          StartImmunity;                                            // 0x3540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Camera_Boom_Timeline_Player_Mesh_ADS_Weight_Reverse_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3548(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_Boom_Timeline_Player_Mesh_ADS_Weight_Forward_7F7960E24E458B7FB9796A9428D9E3C5;// 0x354C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_Boom_Timeline_FOV_Weight_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3550(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_Boom_Timeline_Camera_Boom_Length_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3554(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Camera_Boom_Timeline__Direction_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3558(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Camera_Boom_Timeline;                                     // 0x3560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Elapsed;                                                  // 0x3568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      StopwatchOn;                                              // 0x356C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // 0x3570(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Successful_Hit_AkEvent;                                   // 0x3580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ADS_Test;                                                 // 0x3588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Camera_Boom_Arm_Max;                                      // 0x358C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Cached_1p_Field_of_View;                                  // 0x3590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Test_Alpha;                                               // 0x3594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      InFreeFall;                                               // 0x3598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Turn_Right;                                               // 0x3599(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Turn_Left;                                                // 0x359A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Pitch;                                                    // 0x359C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Friendly_Free_Fall;                                       // 0x35A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Enemy_Free_Fall;                                          // 0x35A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Yaw;                                                      // 0x35B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Main_Camera_Cached_FOV;                                   // 0x35B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                HitDirs;                                                  // 0x35B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHitEnum                                           HitEnum;                                                  // 0x35BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSpecialEffect                            DownedPPEffect;                                           // 0x35C0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Downed_PP_Transition_Duration;                            // 0x3610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsTrailActive;                                            // 0x3614(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          FlashBang_PP_Material;                                    // 0x3618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FlashBang_PP_Material_Instance;                           // 0x3620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Flash_Bang_Effect_Distance;                           // 0x3628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Half_Flash_Bang_Effect_Distance;                          // 0x362C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              SFX_Grenade_Damage_Type;                                  // 0x3630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SFX_Blade_Damage_Type;                                    // 0x3640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      SFX_Damage_Target;                                        // 0x3650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftTempLoc;                                              // 0x3658(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AffectRange;                                              // 0x3664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightTempLoc;                                             // 0x3668(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Out_Of_Bounds_PP_Material;                                // 0x3678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Out_Of_Bounds_PP_Material_Instance;                       // 0x3680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CachedFOV;                                                // 0x3688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLastHitImpulse                             LastHitInfo;                                              // 0x3690(0x0040) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FRotator                                    KnockbackRotation;                                        // 0x36D0(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x36DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsRagdoll;                                               // 0x36E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsLaunchedOnDown;                                        // 0x36E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bSnapshotPoseFacingUp;                                    // 0x36E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GetUpMontage;                                             // 0x36E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsRagdollOnGround;                                       // 0x36F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RagdollPelvisLocation;                                    // 0x36F4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RagdollCapsuleLocation;                                   // 0x3700(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeInRagdoll;                                            // 0x370C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeInRagdoll;                                         // 0x3710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    FireParticle;                                             // 0x3718(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GrenadeImpactPointMID;                                    // 0x3720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ZiplineActive1;                                           // 0x3728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintFov;                                                // 0x372C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintFOVChangeDuration;                                  // 0x3730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineFov;                                               // 0x3734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousFov;                                              // 0x3738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDebugFloatHistory                          InterpLengthHist;                                         // 0x3740(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UKSFXCurveComponent*                         AppliedDownedCurveComponent;                              // 0x3760(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FDamageEffect                               Effect;                                                   // 0x3768(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSSpecialEffect                            BloodPPEffect;                                            // 0x37B8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterial*                                   HealthPostProcess;                                        // 0x3808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Health_PP_MID;                                            // 0x3810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthPPInterpSpeed;                                      // 0x3818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSpecialEffect                            SonarPPEffect;                                            // 0x3820(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSSpecialEffect                            EMPPPEffect;                                              // 0x3870(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bEnableDirectionalDowns;                                  // 0x38C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableComplexDirectionalDowns;                           // 0x38C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FreeFallParticleDetachTime;                               // 0x38C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSpecialEffect                            OutOfBoundsPPEffect;                                      // 0x38C8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UKSFXCurveComponent*                         OutOfBoundsEffectCurve;                                   // 0x3918(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FKSSpecialEffect                            ConfirmHitPPEffect;                                       // 0x3920(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSSpecialEffect                            NearMissPPEffect;                                         // 0x3970(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Active_Index;                                             // 0x39C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSpecialEffect                            FirePostProcess;                                          // 0x39C8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDamageEffect>                       QueuedDamageEffects;                                      // 0x3A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      InLowTreshold;                                            // 0x3A28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowHealthTreshold;                                        // 0x3A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSpecialEffect                            PP_SkyDive;                                               // 0x3A30(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKSFlashBangRecord>                  FlashBangRecords;                                         // 0x3A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      FlashBang_PP_Active;                                      // 0x3A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               GadgetSwapSound;                                          // 0x3A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ConfirmHitPPEffectEnabled;                                // 0x3AA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSpecialEffect                            ConfirmPickupPPEffect;                                    // 0x3AA8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHitResult                                  CallFunc_K2_SetWorldLocation_SweepHitResult;              // 0x3AF8(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetPhysicsLinearVelocity_ReturnValue;            // 0x3B80(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_IsGrounded;                            // 0x3B8C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_Damage;                                      // 0x3B90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_Event_DamageTypeClass_2;                           // 0x3B98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DamageImpulse;                               // 0x3BA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Event_RelativeImpactLocation;                      // 0x3BA4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_BoneName;                                    // 0x3BB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser_2;                              // 0x3BB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_ShouldLastHitLaunchIntoRagdoll_bShouldRagdoll;   // 0x3BC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_GetRagdollFacingDirection_IsUp;                  // 0x3BC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_DeltaSeconds;                          // 0x3BC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Has_Been_Initd_Variable;                        // 0x3BC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x3BCC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitLocation;      // 0x3BDC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitNormal;        // 0x3BE8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_VectorToHitSource;     // 0x3BF4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EKSMovementDirection                               CallFunc_ProcessTakePointHitDamage_HitDirection;          // 0x3C00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_SequenceName;                                // 0x3C04(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                   // 0x3C0C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      K2Node_SwitchName_CmpSuccess;                             // 0x3C1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Camera_Rotation;                       // 0x3C20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_Uses_Rotation;                         // 0x3C2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Camera_Offset;                         // 0x3C30(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x3C3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x3C40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x3C44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X_2;                                 // 0x3C48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y_2;                                 // 0x3C4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z_2;                                 // 0x3C50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable;                                   // 0x3C54(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FHitResult                                  CallFunc_K2_SetRelativeRotation_SweepHitResult;           // 0x3C64(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_K2_SetRelativeLocation_SweepHitResult;           // 0x3CEC(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable_2;                                 // 0x3D74(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_3;                                 // 0x3D84(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class USkinnableSkeletalMeshComponent*             K2Node_DynamicCast_AsSkinnable_Skeletal_Mesh_Component;   // 0x3D98(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess;                              // 0x3DA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FDamageEffect                               K2Node_CustomEvent_Effect_4;                              // 0x3DA8(0x0050) (Transient, DuplicateTransient)
	class USkinnableSkeletalMeshComponent*             K2Node_DynamicCast_AsSkinnable_Skeletal_Mesh_Component_2; // 0x3DF8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_2;                            // 0x3E00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable_4;                                 // 0x3E04(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_5;                                 // 0x3E14(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_6;                                 // 0x3E24(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FKSFlashBangRecord                          K2Node_MakeStruct_KSFlashBangRecord;                      // 0x3E34(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FKSFlashBangRecord                          K2Node_MakeStruct_KSFlashBangRecord_2;                    // 0x3E3C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FKSFlashBangRecord                          K2Node_MakeStruct_KSFlashBangRecord_3;                    // 0x3E44(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable_7;                                 // 0x3E4C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      Temp_bool_IsClosed_Variable;                              // 0x3E5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable_8;                                 // 0x3E60(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_9;                                 // 0x3E70(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      K2Node_Event_bVisible;                                    // 0x3E80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                   // 0x3E84(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      Temp_bool_Has_Been_Initd_Variable_2;                      // 0x3E94(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_4;                   // 0x3E98(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FDamageEffect                               K2Node_CustomEvent_Effect_3;                              // 0x3EA8(0x0050) (Transient, DuplicateTransient)
	struct FName                                       Temp_name_Variable;                                       // 0x3EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_ClassDynamicCast_AsKSDamage_Type_Base;             // 0x3F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_ClassDynamicCast_bSuccess;                         // 0x3F08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       Temp_name_Variable_2;                                     // 0x3F0C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSBloodSplatterComponent*                   K2Node_DynamicCast_AsKSBlood_Splatter_Component;          // 0x3F18(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_3;                            // 0x3F20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_IsClosed_Variable_2;                            // 0x3F21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FDamageEffect                               K2Node_CustomEvent_Effect_2;                              // 0x3F28(0x0050) (Transient, DuplicateTransient)
	class UClass*                                      K2Node_ClassDynamicCast_AsKSDamage_Type_Base_2;           // 0x3F78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_ClassDynamicCast_bSuccess_2;                       // 0x3F80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable_10;                                // 0x3F84(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	EKSPowerSlideEndReason                             K2Node_Event_EndReason;                                   // 0x3F94(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSHUDCommon*                                K2Node_DynamicCast_AsKSHUDCommon;                         // 0x3F98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_4;                            // 0x3FA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSHUDCommon*                                K2Node_DynamicCast_AsKSHUDCommon_2;                       // 0x3FA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_5;                            // 0x3FB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FDamageEffect                               K2Node_CustomEvent_Effect;                                // 0x3FB8(0x0050) (Transient, DuplicateTransient)
	unsigned char                                      CallFunc_GetSettingAsBool_OutBool;                        // 0x4008(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_ClassDynamicCast_AsKSDamage_Type_Base_3;           // 0x4010(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_ClassDynamicCast_bSuccess_3;                       // 0x4018(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCombatEventInfo                            K2Node_Event_DamageInfo_2;                                // 0x4020(0x0060) (Transient, DuplicateTransient)
	float                                              K2Node_Event_DamageAmount;                                // 0x4080(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_Event_DamageTypeClass;                             // 0x4088(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x4090(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Event_DamageOrigin;                                // 0x4098(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCombatEventInfo                            K2Node_Event_DamageInfo;                                  // 0x40A8(0x0060) (Transient, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_11;                                // 0x4108(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_12;                                // 0x4118(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_13;                                // 0x4128(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_14;                                // 0x4138(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_15;                                // 0x4148(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UParticleSystem*                             CallFunc_GetHitPawnEffectOverride_ParticleSystem;         // 0x4158(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable_16;                                // 0x4160(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FDamageEffect                               K2Node_Event_Effect_2;                                    // 0x4170(0x0050) (Transient, DuplicateTransient)
	struct FDamageEffect                               K2Node_Event_Effect;                                      // 0x41C0(0x0050) (Transient, DuplicateTransient)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitLocation_2;    // 0x4210(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitNormal_2;      // 0x421C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_VectorToHitSource_2;   // 0x4228(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EKSMovementDirection                               CallFunc_ProcessTakePointHitDamage_HitDirection_2;        // 0x4234(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_ClassDynamicCast_AsKSDamage_Type_Base_4;           // 0x4238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_ClassDynamicCast_bSuccess_4;                       // 0x4240(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacterBase*                            K2Node_CustomEvent_Character_3;                           // 0x4248(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Has_Been_Initd_Variable_3;                      // 0x4250(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable_17;                                // 0x4254(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_18;                                // 0x4264(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_19;                                // 0x4274(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_20;                                // 0x4284(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_21;                                // 0x4294(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_5;                   // 0x42A4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_22;                                // 0x42B4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_23;                                // 0x42C4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class APlayerState*                                K2Node_CustomEvent_Player;                                // 0x42D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_6;                   // 0x42E0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	TScriptInterface<class UINameplateWidget_C>        K2Node_DynamicCast_AsINameplate_Widget;                   // 0x42F0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_6;                            // 0x4300(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_ExtraTime;                                   // 0x4304(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TScriptInterface<class UINameplateWidget_C>        K2Node_DynamicCast_AsINameplate_Widget_2;                 // 0x4308(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_7;                            // 0x4318(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TScriptInterface<class UINameplateWidget_C>        K2Node_DynamicCast_AsINameplate_Widget_3;                 // 0x4320(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_8;                            // 0x4330(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_IsClosed_Variable_3;                            // 0x4331(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         K2Node_Event_PrevMovementMode;                            // 0x4332(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         K2Node_Event_NewMovementMode;                             // 0x4333(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_PrevCustomMode;                              // 0x4334(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_NewCustomMode;                               // 0x4335(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterMovementComponent*               K2Node_DynamicCast_AsKSCharacter_Movement_Component;      // 0x4338(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_9;                            // 0x4340(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCombatEventInfo                            K2Node_CustomEvent_EventInfo_2;                           // 0x4348(0x0060) (Transient, DuplicateTransient)
	int                                                K2Node_CustomEvent_ExpBonus_2;                            // 0x43A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_CustomEvent_Revivee;                               // 0x43B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_CustomEvent_Reviver;                               // 0x43B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_ExpBonus;                              // 0x43C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_DynamicCast_AsKSPlayer_State;                      // 0x43C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_10;                           // 0x43D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_DynamicCast_AsKSPlayer_State_2;                    // 0x43D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_11;                           // 0x43E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_7;                   // 0x43E4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FCombatEventInfo                            K2Node_CustomEvent_EventInfo;                             // 0x43F8(0x0060) (Transient, DuplicateTransient)
	class AKSPlayerState*                              K2Node_DynamicCast_AsKSPlayer_State_3;                    // 0x4458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_12;                           // 0x4460(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_DynamicCast_AsKSPlayer_State_4;                    // 0x4468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_13;                           // 0x4470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x4471(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2;// 0x4472(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_Enabled;                                     // 0x4473(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable_24;                                // 0x4474(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_25;                                // 0x4484(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_26;                                // 0x4494(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_27;                                // 0x44A4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_28;                                // 0x44B4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      Temp_bool_Has_Been_Initd_Variable_4;                      // 0x44C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_IsClosed_Variable_4;                            // 0x44C5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_Event_Reviver_3;                                   // 0x44C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_ReviveTime;                                  // 0x44D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_Remote;                                      // 0x44D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_Event_Reviver_2;                                   // 0x44D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_Event_Reviver;                                     // 0x44E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Has_Been_Initd_Variable_5;                      // 0x44E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3;// 0x44E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4;// 0x44EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_IsClosed_Variable_5;                            // 0x44EB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_IsSprinting;                           // 0x44EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_IsDodgeRolling_2;                      // 0x44ED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_KeepActionCameraAboveWater_OutBoomPosition;      // 0x44F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_8;                   // 0x44FC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_9;                   // 0x450C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FHitResult                                  CallFunc_K2_SetRelativeLocation_SweepHitResult_2;         // 0x451C(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_10;                  // 0x45A4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x45B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FKey                                        K2Node_InputKeyEvent_Key;                                 // 0x45B8(0x0018) (Transient, DuplicateTransient)
	struct FVector                                     K2Node_Event_BreakingLocation;                            // 0x45D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Event_BreakingDirection;                           // 0x45DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Event_BreakingNormal;                              // 0x45E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Has_Been_Initd_Variable_6;                      // 0x45F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_IsPowerSliding;                        // 0x45F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetTargetFov_TargetFov;                          // 0x45F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_IsZiplining;                           // 0x45FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaster_WeaponComponent_C*                   K2Node_DynamicCast_AsMaster_Weapon_Component;             // 0x4600(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_14;                           // 0x4608(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_11;                  // 0x460C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_12;                  // 0x461C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      Temp_bool_Has_Been_Initd_Variable_7;                      // 0x462C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_bEnterNoseDive;                              // 0x462D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_AnimLength;                                  // 0x4630(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FString                                     K2Node_Event_SwingMontageSectionName;                     // 0x4638(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaster_WeaponComponent_C*                   K2Node_DynamicCast_AsMaster_Weapon_Component_2;           // 0x4648(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_15;                           // 0x4650(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystem*                             Temp_object_Variable;                                     // 0x4658(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_13;                  // 0x4660(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      Temp_bool_IsClosed_Variable_6;                            // 0x4670(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_Event_PC_2;                                        // 0x4678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_Event_PC;                                          // 0x4680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable;                                       // 0x4688(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_UpdateTargetRotation;                        // 0x4689(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_AffectCapsule;                               // 0x468A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_DetermineKnockbackFacing_ActorRotation;          // 0x468C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable_29;                                // 0x4698(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_30;                                // 0x46A8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_14;                  // 0x46B8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	EHitEnum                                           Temp_byte_Variable;                                       // 0x46C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           Temp_byte_Variable_2;                                     // 0x46C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           Temp_byte_Variable_3;                                     // 0x46CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_IsClosed_Variable_7;                            // 0x46CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           Temp_byte_Variable_4;                                     // 0x46CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  K2Node_Event_Hit;                                         // 0x46D0(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	EKSMovementDirection                               Temp_byte_Variable_5;                                     // 0x4758(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           K2Node_Select_Default;                                    // 0x4759(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     Temp_struct_Variable;                                     // 0x475C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable_2;                                     // 0x4768(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable_3;                                     // 0x4769(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Select_Default_2;                                  // 0x476C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystem*                             K2Node_Select_Default_3;                                  // 0x4778(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_15;                  // 0x4780(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UParticleSystem*                             K2Node_Select_Default_4;                                  // 0x4790(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FSettingDelegateStruct                      K2Node_MakeStruct_SettingDelegateStruct;                  // 0x4798(0x0020) (Transient, DuplicateTransient)
	unsigned char                                      K2Node_CustomEvent_IsDodgeRolling;                        // 0x47B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_16;                  // 0x47BC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FLastHitImpulse                             K2Node_MakeStruct_LastHitImpulse;                         // 0x47D0(0x0040) (Transient, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_31;                                // 0x4810(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_32;                                // 0x4820(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_33;                                // 0x4830(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_34;                                // 0x4840(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class AKSCharacter*                                K2Node_CustomEvent_Character_2;                           // 0x4850(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaster_WeaponComponent_C*                   K2Node_DynamicCast_AsMaster_Weapon_Component_3;           // 0x4858(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_16;                           // 0x4860(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaster_WeaponComponent_C*                   K2Node_DynamicCast_AsMaster_Weapon_Component_4;           // 0x4868(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_17;                           // 0x4870(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable_35;                                // 0x4874(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_36;                                // 0x4884(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_37;                                // 0x4894(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_38;                                // 0x48A4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_39;                                // 0x48B4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_40;                                // 0x48C4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	EHitEnum                                           Temp_byte_Variable_6;                                     // 0x48D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_bFullyHealed;                                // 0x48D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable_4;                                     // 0x48D6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           Temp_byte_Variable_7;                                     // 0x48D7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           Temp_byte_Variable_8;                                     // 0x48D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           Temp_byte_Variable_9;                                     // 0x48D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EKSMovementDirection                               Temp_byte_Variable_10;                                    // 0x48DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           K2Node_Select_Default_5;                                  // 0x48DB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Has_Been_Initd_Variable_8;                      // 0x48DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                Temp_object_Variable_2;                                   // 0x48E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                Temp_object_Variable_3;                                   // 0x48E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable_5;                                     // 0x48F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSZiplineMeshComponent*                     K2Node_DynamicCast_AsKSZipline_Mesh_Component;            // 0x48F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_18;                           // 0x4900(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_Select_Default_6;                                  // 0x4908(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSZiplineMeshComponent*                     K2Node_DynamicCast_AsKSZipline_Mesh_Component_2;          // 0x4910(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_19;                           // 0x4918(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_InputAxisKeyEvent_AxisValue_2;                     // 0x491C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_InputAxisKeyEvent_AxisValue;                       // 0x4920(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_17;                  // 0x4924(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      Temp_bool_IsClosed_Variable_8;                            // 0x4934(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSZiplineMeshComponent*                     K2Node_DynamicCast_AsKSZipline_Mesh_Component_3;          // 0x4938(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_20;                           // 0x4940(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSZiplineMeshComponent*                     K2Node_DynamicCast_AsKSZipline_Mesh_Component_4;          // 0x4948(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_21;                           // 0x4950(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_CustomEvent_Character;                             // 0x4958(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSItemDrop*                                 K2Node_CustomEvent_ItemDrop;                              // 0x4960(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSItem*                                     K2Node_CustomEvent_Item;                                  // 0x4968(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MainCharacter.MainCharacter_C");
		return ptr;
	}


	void Zipline_Pulley_Unhide();
	void Zipline_Pulley_Hide();
	void WasLastHitHeadshot(bool* bpp__bHeadshot__pf);
	void VO_Player_Revived();
	void VO_Player_Death();
	void VerifyLastHitDamageType(class UClass** bpp__DamageType__pf, bool* bpp__IsRelatedToThisType__pf);
	void VerifyLastHitBone(struct FName* bpp__ParentBoneName__pf, bool* bpp__IsRelatedToThisBone__pf);
	void UserConstructionScript();
	void Update_Action_Camera(struct FVector* bpp__CameraxRotation__pfT, bool* bpp__UsesxRotation__pfT, struct FVector* bpp__CameraxOffset__pfT);
	void UpdateRagdollOnGround(bool* bpp__IsGrounded__pf);
	void UpdateRagdollMeshLocation();
	void UpdateRagdoll(float* bpp__DeltaSeconds__pf);
	void UpdatePlayerState(class APlayerState** bpp__Player__pf);
	void UpdateHealthPP();
	void UpdateFlashBangPP();
	void UpdateDebugHealthVisibility();
	void UnhideZiplinePulley();
	void UnhideUplineDevice();
	void TurnOffCapsulePhysics_Server();
	void TurnOffCapsulePhysics();
	void Transition_To_Main_Camera();
	void Transition_To_ADS_Camera();
	void SwitchToSnapshotPose();
	void Stop_Playing_Emote_Music();
	void StopLowHealthSFX();
	void Start_Viewed_Down_Hit();
	void Start_Playing_Emote_Music();
	void StartImmunity__UpdateFunc();
	void StartImmunity__FinishedFunc();
	void StartHacking();
	void SprintFOVTimeline__UpdateFunc();
	void SprintFOVTimeline__FinishedFunc();
	void ShowDebugLocation(bool* bpp__bVisible__pf);
	void ShouldLastHitLaunchIntoRagdoll(bool* bpp__bShouldRagdoll__pf);
	void SFXStateChangeReset();
	void SFXStateChangeMax();
	void SFXStateChangeHalf();
	void SFXRingHalfSTOP();
	void SFXRingHalfPlay();
	void SFXRingFullSTOP();
	void SFXRingFullPlay();
	void Set_up_ADS_Blur_Dynamic_Material();
	void Set_Health_SFX_RTPC();
	void Setup_Debug_Info_Widget();
	void SetPostProcessHealthValue(float* bpp__Health__pf);
	void SetHitTargetArmorLevelRTPC(class AActor** bpp__HitxTarget__pfT, class AActor** bpp__RTPCxActor__pfT);
	void RestoreNormalCamera();
	void ReevaluateDebugWidgetAttachment();
	void ReceiveTick(float* bpp__DeltaSeconds__pf);
	void ReceiveBeginPlay();
	void Play_Viewed_Sonar_Hit(struct FDamageEffect* bpp__Effect__pf);
	void Play_Viewed_EMP_Hit(struct FDamageEffect* bpp__Effect__pf);
	void Play_Viewed_Blood_Hit(struct FDamageEffect* bpp__Effect__pf);
	void Play_Martial_Artist_Target_Front();
	void Play_Martial_Artist_Target_Back();
	void Play_Martial_Artist_Instigator_Front();
	void Play_Martial_Artist_Instigator_Back();
	void PlayViewFlashBangHit(struct FDamageEffect* bpp__Effect__pf);
	void PlayPickupFX(class AActor** bpp__ItemActor__pf);
	void PlayHitMarkerSFX(struct FCombatEventInfo* bpp__CombatEventInfo__pf);
	void PlayHitFromRadialDamage(struct FDamageEffect* bpp__Effect__pf__const);
	void PlayHitFromPointDamage(struct FDamageEffect* bpp__Effect__pf__const);
	void PlayHitBySFX(struct FDamageEffect* bpp__DamageEffect__pf);
	void PlayerRevived(class AKSPlayerState** bpp__Revivee__pf, class AKSPlayerState** bpp__Reviver__pf, int* bpp__ExpBonus__pf);
	void PlayerDown(struct FCombatEventInfo* bpp__EventInfo__pf, int* bpp__ExpBonus__pf);
	void PlayerDeath(struct FCombatEventInfo* bpp__EventInfo__pf);
	void PlayDownPPOnce();
	void PlayActionCameraSequence(struct FName* bpp__SequenceName__pf);
	void OnZiplineChangeForFov(bool* bpp__IsZiplining__pf);
	void On_Shoulder_Swap_Changed_Event(class AKSCharacter** bpp__Character__pf);
	void On_Anim_Initialized();
	void OnUnhovered(float* bpp__ExtraTime__pf);
	void OnStartSkydive();
	void OnSprintChangedCallback(bool* bpp__IsSprinting__pf);
	void OnReviveStart(class AKSCharacter** bpp__Reviver__pf, float* bpp__ReviveTime__pf, bool* bpp__Remote__pf);
	void OnReviveInterrupt(class AKSCharacter** bpp__Reviver__pf);
	void OnReviveComplete(class AKSCharacter** bpp__Reviver__pf);
	void OnPowerSlideChangedCallback(bool* bpp__IsPowerSliding__pf);
	void OnLanded(struct FHitResult* bpp__Hit__pf__const);
	void OnItemPickedUp_Event_1(class AKSCharacter** bpp__Character__pf, class AKSItemDrop** bpp__ItemDrop__pf, class UKSItem** bpp__Item__pf);
	void OnImmuneStart();
	void OnImmuneEnd();
	void OnHovered();
	void OnHealthChanged(class AKSCharacterBase** bpp__Character__pf__const);
	void OnGadgetSwapped();
	void OnFieldOfViewModChange();
	void OnEndZiplineRagdoll();
	void OnEndSkydive();
	void OnEndPowerSlide(EKSPowerSlideEndReason* bpp__EndReason__pf);
	void OnEndOutOfBounds();
	void OnDodgeRollChangedEvent(bool* bpp__IsDodgeRolling__pf);
	void OnBeginZiplineRagdoll();
	void OnBeginPowerSlide();
	void OnBeginOutOfBounds();
	void OnADSBlurSettingChanged();
	void NoseDiveFOVTimeline__UpdateFunc();
	void NoseDiveFOVTimeline__FinishedFunc();
	void NoseDiveCameraTransition(bool* bpp__bEnterNoseDive__pf, float* bpp__AnimLength__pf);
	void Martial_Artist_Target_Front__UpdateFunc();
	void Martial_Artist_Target_Front__FinishedFunc();
	void Martial_Artist_Target_Back__UpdateFunc();
	void Martial_Artist_Target_Back__FinishedFunc();
	void Martial_Artist_Instigator_Front__UpdateFunc();
	void Martial_Artist_Instigator_Front__FinishedFunc();
	void Martial_Artist_Instigator_Back__UpdateFunc();
	void Martial_Artist_Instigator_Back__FinishedFunc();
	void LandingRollEvent(bool* bpp__IsDodgeRolling__pf);
	void KeepActionCameraAboveWater(struct FVector* bpp__InBoomPosition__pf, struct FVector* bpp__OutBoomPosition__pf);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* bpp__PrevMovementMode__pf, TEnumAsByte<EMovementMode>* bpp__NewMovementMode__pf, unsigned char* bpp__PrevCustomMode__pf, unsigned char* bpp__NewCustomMode__pf);
	void K2_OnEndViewTarget(class APlayerController** bpp__PC__pf);
	void K2_OnBecomeViewTarget(class APlayerController** bpp__PC__pf);
	void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1(float* bpp__AxisValue__pf);
	void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2(float* bpp__AxisValue__pf);
	void InpActEvt_T_K2Node_InputKeyEvent_1(struct FKey* bpp__Key__pf);
	void InitializeHealthPP();
	void HideZiplinePulley();
	void HideUplineDevice();
	void HealthRegenerationStopped(bool* bpp__bFullyHealed__pf);
	void HealthRegenerationStarted();
	void Handle_Downed_Ragdoll();
	void Get_FlashBang_Intensity(float* bpp__FlashxBangxIntensity__pfTT);
	void Get_ADS_Camera_By_Tag(struct FName* bpp__Tag__pf, class UCameraComponent** bpp__CameraxComponent__pfT);
	void Get_ADS_Bend_Target_Camera_Component(class UCameraComponent** bpp__CameraxComponent__pfT);
	void GetTargetFov(float* bpp__TargetFov__pf);
	void GetTargetArmorLevel(class AActor** bpp__HitxTarget__pfT, int* bpp__ArmorxLevel__pfT);
	void GetRagdollFacingDirection(bool* bpp__IsUp__pf);
	void GetLastHitDistance(float* bpp__OutDistance__pf);
	float GetFlashBangEffectDurationFromDistance(float* bpp__Distance__pf);
	void GetDownedTransitionMontage(class UAnimMontage** bpp__OutAnimMontage__pf);
	void GetDeathTransitionAnimation(class UAnimSequence** bpp__OutAnimSequence__pf);
	void FreeFall_Camera_Burst();
	void Finish_Action_Camera_Update();
	void FinishHacking();
	void ExitDownedRagdoll();
	void ExecuteUbergraph_MainCharacter_73(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_72(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_55(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_36(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_33(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_25(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_24(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_21(int* bpp__EntryPoint__pf);
	void EventSetupCamerasForSpectator(bool* bpp__Enabled__pf);
	void EnterFreeFallFOVTimeline__UpdateFunc();
	void EnterFreeFallFOVTimeline__FinishedFunc();
	void EnterDownedRagdoll();
	void End_Down_PP();
	void EndImmunity__UpdateFunc();
	void EndImmunity__FinishedFunc();
	void DoSetOnFire();
	void DoExtinguishFire();
	void DoBindZiplineEvents();
	void DoBindSprintEvents();
	void DoBindDodgeRollEvents();
	void DetermineKnockbackFacing(struct FVector* bpp__HitDirection__pf, EHitEnum* bpp__SideHit__pf, struct FRotator* bpp__ActorRotation__pf);
	void DetachSkydiveParticle();
	void DestructibleSpeedGateOverlappedEvent(struct FVector* bpp__BreakingLocation__pf, struct FVector* bpp__BreakingDirection__pf, struct FVector* bpp__BreakingNormal__pf);
	void DeathStateChange();
	void Check_Low_Health();
	void CheckFlashBangOnViewTargetChange();
	void Camera_Boom_Timeline__UpdateFunc();
	void Camera_Boom_Timeline__Switch_To_Main_Camera__EventFunc();
	void Camera_Boom_Timeline__Switch_To_ADS_Camera__EventFunc();
	void Camera_Boom_Timeline__FinishedFunc();
	void CameraDodgeRoll__UpdateFunc();
	void CameraDodgeRoll__FinishedFunc();
	void CacheRagdollPelvisLocation();
	void BlueprintOnStopSwimming();
	void BlueprintOnStartSwimming();
	bool BlueprintHandleDeath();
	void BindADSBlurSetting();
	void Audio_Init();
	void ApplyLastHitImpulse(bool* bpp__UpdateTargetRotation__pf, bool* bpp__AffectCapsule__pf);
	void PlayerReviveDelegate__DelegateSignature(class AKSPlayerState** bpp__Revivee__pf, class AKSPlayerState** bpp__Reviver__pf, int* bpp__ExpBonus__pf);
	void PlayerDownInfo__DelegateSignature(struct FCombatEventInfo* bpp__EventInfo__pf, int* bpp__ExpBonus__pf);
	void PlayerDeathInfo__DelegateSignature(struct FCombatEventInfo* bpp__EventInfo__pf);
	void OnSprintChanged__DelegateSignature(bool* bpp__IsSprinting__pf);
	void OnShoulderSwapChanged__DelegateSignature(class AKSCharacter** bpp__Character__pf);
	void OnPowerSlideChanged__DelegateSignature(bool* bpp__IsPowerSliding__pf);
	void OnPlayerStateChanged__DelegateSignature(class APlayerState** bpp__PlayerState__pf);
	void OnItemPickedUp__DelegateSignature(class AKSCharacter** bpp__Character__pf, class AKSItemDrop** bpp__ItemDrop__pf, class UKSItem** bpp__Item__pf);
	void OnHealthChanged__DelegateSignature(class AKSCharacterBase** bpp__Character__pf);
	void OnGoDown__DelegateSignature();
	void OnEndZipline__DelegateSignature();
	void OnDodgeRollChanged__DelegateSignature(bool* bpp__IsDodgeRolling__pf);
	void OnDeathStateChanged__DelegateSignature();
	void OnBeginZipline__DelegateSignature();
	void OnAnimInitialized__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
