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

// DynamicClass Master_WeaponComponent.Master_WeaponComponent_C
// 0x0B48 (0x10E0 - 0x0598)
class UMaster_WeaponComponent_C : public UKSWeaponComponent
{
public:
	unsigned char                                      Is_ADS;                                                   // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Owner_Fire_Section;                                       // 0x059C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               Owner_1p_ADS_Fire_Section;                                // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       Deattach_Slot_Name;                                       // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Attach_Slot_Name;                                         // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIrror_Attach_Slot_Name;                                  // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Weapon_Fire_Sound_ID;                                     // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Weapon_Fire_Sound_Interrupts;                             // 0x05D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Weapon_Casing_Sound;                                      // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Equip_Sound;                                              // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed_of_Sound;                                           // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Echo_Max_Distance;                                        // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FRotator>                            Echo_Directions;                                          // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     Echo_Sound_Location;                                      // 0x0600(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Muzzle_Flash_3p;                                          // 0x0610(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Muzzle_Flash_1p;                                          // 0x0618(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Muzzle_Flash_Attach_Name;                                 // 0x0620(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cartridge_Ejection_Attach_Name;                           // 0x0628(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitDecalInfo                               Default_Decal_Info;                                       // 0x0630(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<TEnumAsByte<EPhysicalSurface>, struct FHitDecalInfo> Physical_Decal_Materials;                                 // 0x0658(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             Tracer_Template;                                          // 0x06A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Next_Tracer_Time;                                         // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Minimum_Tracer_Delay;                                     // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Maximum_Tracer_Delay;                                     // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Shot_Count;                                               // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 Tracer_Mesh;                                              // 0x06C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tracer_Frequency;                                         // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      Decal_Physical_Surface;                                   // 0x06CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Decal_Location;                                           // 0x06D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Temp_Mesh_Material_Override;                              // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CountedShotsLeft;                                         // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      _1P_ADS_Camera_Shake;                                     // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               Owner_3p_Fire_Section;                                    // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Counter;                                                  // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AOS_Camera_Shake;                                         // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      _3P_Camera_Shake;                                         // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CountedMagSize;                                           // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsSecondaryWeapon;                                       // 0x0724(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Is_Pistol;                                                // 0x0725(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Is_Dual_Guns;                                             // 0x0726(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ShouldSpawnTracers;                                       // 0x0727(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ShouldHaveBulletFX;                                       // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ShouldHaveBulletSpangs;                                   // 0x0729(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bWasFiredByOwner;                                         // 0x072A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearMissDistance;                                         // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MagazineDropBone;                                         // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      DropBoneOnWeapon;                                         // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      TrackingMagDropBone;                                      // 0x0739(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DropMagSpawnTransformOveride;                             // 0x0740(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DropBonePreviousPosition;                                 // 0x0770(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DropBoneVelocity;                                         // 0x077C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DropVelocityOverride;                                     // 0x0788(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Is_Gun_Holstered;                                         // 0x0794(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      DropMultipleMags;                                         // 0x0795(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Drop_Multiple_Mags_Velocity_Inheritance_Override;         // 0x0796(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FMultiMagDropInfo>                   MultiMagArray;                                            // 0x0798(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      Is_Multi_Stage_Reload;                                    // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Maintain_Holster;                                         // 0x07A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Target_BackSlot;                                          // 0x07AC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Is_Shotgun;                                               // 0x07B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Target_Shell_Housing_Spin;                                // 0x07B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Missing_Shell_Count;                                      // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Is_Revolver;                                              // 0x07C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Interp_Speed;                                             // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VsWorldAlphaDiff;                                         // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastUpdatedAlpha;                                         // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Prevent_Vs_World_Active;                                  // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Is_Vs_World_Force_Reset_Delay;                            // 0x07D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Vs_World_Reset_Delay_Time;                                // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Able_to_Magdrop_;                                         // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Force_Holster_Mantle;                                     // 0x07E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Force_Holster_Zipline;                                    // 0x07E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Scope_Mesh_Scale;                                         // 0x07E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scope_Scale_Alpha;                                        // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Hide_Materials_Array;                                     // 0x07E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      Is_Vcol_Hide_Needed;                                      // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSetScopeScaleAlpha;                                     // 0x0800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x07F9(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnSetRevolverChamberRotate;                               // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0810(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              CosmeticShotTraceDist;                                    // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            CartridgeEjectParticles;                                  // 0x0828(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            _1PMuzzleFlashParticles;                                  // 0x0838(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            _3pMuzzleFlashParticles;                                  // 0x0848(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bShouldPlayADSFire;                                       // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSFirePlayPosition;                                      // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AOSFirePlayPosition;                                      // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSFireDelay;                                             // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSetLobbyState;                                          // 0x0868(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0868(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      DropMagazineLockout;                                      // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      _3P_Camera_Shake_Hi;                                      // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Bullet_Near_Miss_Camera_Shake;                            // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Bullet_Near_Miss_Camera_Shake_Distance;                   // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FireCameraModifier;                                       // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FFullFireRepData>                    QueuedAimData;                                            // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FHitResult>                          ValidHits_Event;                                          // 0x08B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      Should_Play_Impact_Sound;                                 // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Should_Hide_On_Holster;                                   // 0x08C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFireAudioMode                                     FireAudioMode;                                            // 0x08C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      AllowNewShotAudio;                                        // 0x08C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Post_Reload_Delay_Period;                                 // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Folded_Stock;                                             // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Stock_Rotation;                                           // 0x08CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Stock_alt_Rotation;                                       // 0x08D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Multi_Stage_Reload_Lockout;                               // 0x08E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ViewPawnForwardDir;                                       // 0x08E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ViewPawnLeftDir;                                          // 0x08F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastBulletMissTime;                                       // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoopingFireAudioCheckTriggerDelay;                        // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LoopingFireAudioFadeOutDuration;                          // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsFirstShot;                                              // 0x090C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsPlayerControlled;                                       // 0x090D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Lunging_Active;                                           // 0x090E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            _1PAuxMuzzleFlashParticles;                               // 0x0910(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            _3pAuxMuzzleFlashParticles;                               // 0x0920(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      ShouldPlayBlockedImpactSound;                             // 0x0930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                Revolving_timer;                                          // 0x0938(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    Eval_Target_Shell_Housing_Spin;                           // 0x0940(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ShouldComputeCosmeticHits;                                // 0x094C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      On_Init_Hide_Magazine;                                    // 0x094D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Use_laser_sight;                                          // 0x094E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Reticle_Material;                                         // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECombatState                                       RetrieveCombatState;                                      // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                Post_Reload_Timer;                                        // 0x0960(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	EWeaponStateNew                                    Old_State;                                                // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TracerStartPointLocalToOwner;                             // 0x096C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TracerMinimumOffsetLocallyViewed;                         // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TracerMaximumOffsetLocallyViewed;                         // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TracerMinimumOffsetNPC;                                   // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TracerMaximumOffsetNPC;                                   // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Combat_State_Change_Time;                                 // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x098C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      K2Node_CustomEvent_bBlockingHit_3;                        // 0x099C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FHitResult>                          K2Node_CustomEvent_OutHits_3;                             // 0x09A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_Start_3;                               // 0x09B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_End_3;                                 // 0x09BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_bBlockingHit_2;                        // 0x09C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FHitResult>                          K2Node_CustomEvent_OutHits_2;                             // 0x09D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_Start_2;                               // 0x09E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_End_2;                                 // 0x09EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_bBlockingHit;                          // 0x09F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FHitResult>                          K2Node_CustomEvent_OutHits;                               // 0x0A00(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_Start;                                 // 0x0A10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_End;                                   // 0x0A1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_Blocking_Hit;                          // 0x0A28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FHitResult>                          K2Node_CustomEvent_Out_Hits;                              // 0x0A30(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_Start_4;                               // 0x0A40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_End_4;                                 // 0x0A4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_Allow_Spangs;                          // 0x0A58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_Allow_Tracers;                         // 0x0A59(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_Allow_Decals;                          // 0x0A5A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FHitResult>                          CallFunc_Filter_Cosmetic_Hit_Results_Filtered_Hit_Results;// 0x0A60(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FHitResult                                  K2Node_CustomEvent_Hit;                                   // 0x0A70(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_BreakHitResult_bBlockingHit;                     // 0x0AF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_BreakHitResult_bInitialOverlap;                  // 0x0AF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakHitResult_Time;                             // 0x0AFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakHitResult_Distance;                         // 0x0B00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x0B04(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x0B10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x0B1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x0B28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x0B38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x0B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x0B48(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x0B50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x0B58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_FaceIndex;                        // 0x0B5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_TraceStart;                       // 0x0B60(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_TraceEnd;                         // 0x0B6C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_BreakHitResult_bBlockingHit_2;                   // 0x0B78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_BreakHitResult_bInitialOverlap_2;                // 0x0B79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakHitResult_Time_2;                           // 0x0B7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakHitResult_Distance_2;                       // 0x0B80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Location_2;                       // 0x0B84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint_2;                    // 0x0B90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal_2;                         // 0x0B9C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal_2;                   // 0x0BA8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat_2;                        // 0x0BB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor_2;                       // 0x0BC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent_2;                   // 0x0BC8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName_2;                    // 0x0BD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem_2;                        // 0x0BD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_FaceIndex_2;                      // 0x0BDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_TraceStart_2;                     // 0x0BE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_TraceEnd_2;                       // 0x0BEC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitDecalInfo                               CallFunc_Get_Decal_Material_Decal_Info;                   // 0x0BF8(0x0028) (Transient, DuplicateTransient)
	TArray<struct FHitResult>                          K2Node_CustomEvent_Hits;                                  // 0x0C20(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_Start_5;                               // 0x0C30(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_End_5;                                 // 0x0C3C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FHitResult>                          K2Node_CustomEvent_Hits_2;                                // 0x0C48(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_Trace_End;                             // 0x0C58(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FFullFireRepData                            K2Node_CustomEvent_Data;                                  // 0x0C68(0x0068) (Transient, DuplicateTransient)
	class APlayerController*                           K2Node_DynamicCast_AsPlayer_Controller;                   // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess;                              // 0x0CD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       Temp_name_Variable;                                       // 0x0CDC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FHitResult>                          K2Node_CustomEvent_Hits_3;                                // 0x0CE8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0CF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_bBlockingHit_4;                        // 0x0CFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FHitResult>                          K2Node_CustomEvent_OutHits_4;                             // 0x0D00(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_Start_6;                               // 0x0D10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_End_6;                                 // 0x0D1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSDefaultAimTargetingModule*                K2Node_DynamicCast_AsKSDefault_Aim_Targeting_Module;      // 0x0D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_2;                            // 0x0D30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_IsWallMarkerActive_WallLocation;                 // 0x0D34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                   // 0x0D40(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                   // 0x0D50(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FFullFireRepData                            K2Node_CustomEvent_Fire_Data;                             // 0x0D60(0x0068) (Transient, DuplicateTransient)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0DC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_4;                   // 0x0DCC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	EWeaponStateNew                                    K2Node_Event_OldState;                                    // 0x0DDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EWeaponStateNew                                    K2Node_Event_NewState;                                    // 0x0DDD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_SwitchEnum_CmpSuccess;                             // 0x0DDE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FFullFireRepData                            K2Node_Event_Data;                                        // 0x0DE0(0x0068) (Transient, DuplicateTransient)
	unsigned char                                      K2Node_SwitchEnum_CmpSuccess_2;                           // 0x0E48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority;                         // 0x0E4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_2;                       // 0x0E50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable;                            // 0x0E54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item;                                  // 0x0E58(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable_2;                         // 0x0E60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetBool_Priority;                                // 0x0E64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_5;                   // 0x0E68(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst;           // 0x0E78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetBool_Priority_2;                              // 0x0E80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       K2Node_CustomEvent_ViewPawn;                              // 0x0E88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ECombatState                                       K2Node_CustomEvent_NewState;                              // 0x0E90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_6;                   // 0x0E94(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_2;         // 0x0EA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_3;         // 0x0EB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_4;         // 0x0EB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable;                                        // 0x0EC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable;                                   // 0x0EC4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	int                                                Temp_int_Array_Index_Variable_2;                          // 0x0ED4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAudioEvent_Priority;                          // 0x0ED8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAudioEvent_Priority_2;                        // 0x0EDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAudioEvent_Priority_3;                        // 0x0EE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_3;                       // 0x0EE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_Get_Player_1P_Fire_Montage_Montage;              // 0x0EE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_4;                       // 0x0EF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_5;                       // 0x0EF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USkinnableSkeletalMeshComponent*             K2Node_Event_SkinnableSkelComp;                           // 0x0EF8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	class UPCM_Hero_ABP_C*                             K2Node_DynamicCast_AsPCM_Hero_ABP;                        // 0x0F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_3;                            // 0x0F08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable_3;                         // 0x0F0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable_3;                          // 0x0F10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item_2;                                // 0x0F18(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable_4;                          // 0x0F20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item_3;                                // 0x0F28(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable_4;                         // 0x0F30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable_2;                                 // 0x0F34(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_3;                                 // 0x0F44(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	TArray<class AActor*>                              Temp_object_Variable;                                     // 0x0F58(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      K2Node_SwitchEnum_CmpSuccess_3;                           // 0x0F68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable_5;                          // 0x0F6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item_4;                                // 0x0F70(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        K2Node_Event_EndPlayReason;                               // 0x0F78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable_5;                         // 0x0F7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacterBase*                            K2Node_CustomEvent_KillerCharacter;                       // 0x0F80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacterBase*                            K2Node_CustomEvent_KilledCharacter;                       // 0x0F88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_SwitchEnum_CmpSuccess_4;                           // 0x0F90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_CustomEvent_NewController;                         // 0x0F98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerController*                         K2Node_DynamicCast_AsKSPlayer_Controller;                 // 0x0FA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_4;                            // 0x0FA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable;                                       // 0x0FA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_Select_Default;                                    // 0x0FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable_6;                          // 0x0FB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item_5;                                // 0x0FC0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetBool_Priority_3;                              // 0x0FC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_6;                       // 0x0FCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_5;         // 0x0FD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_7;                       // 0x0FD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_6;         // 0x0FE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_8;                       // 0x0FE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_9;                       // 0x0FEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable_2;                                      // 0x0FF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetBool_Priority_4;                              // 0x0FF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_10;                      // 0x0FF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_11;                      // 0x0FFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_12;                      // 0x1000(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_7;         // 0x1008(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_8;         // 0x1010(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_13;                      // 0x1018(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class UMaterialInterface*>                  CallFunc_GetMaterials_ReturnValue;                        // 0x1020(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_GetAnimMontage_Priority_14;                      // 0x1030(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          CallFunc_Array_Get_Item_6;                                // 0x1038(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterial_Instance_Dynamic;           // 0x1040(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_5;                            // 0x1048(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_9;         // 0x1050(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_10;        // 0x1058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable_3;                                      // 0x1060(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAudioEvent_Priority_4;                        // 0x1064(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_15;                      // 0x1068(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_7;                   // 0x106C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UTexture2D*                                  Temp_object_Variable_2;                                   // 0x1080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable_2;                                     // 0x1088(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable_6;                         // 0x108C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable_4;                                 // 0x1090(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UTexture2D*                                  K2Node_Select_Default_2;                                  // 0x10A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ECombatState                                       K2Node_CustomEvent_OldCombatState;                        // 0x10A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ECombatState                                       K2Node_CustomEvent_NewCombatState;                        // 0x10A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_8;                   // 0x10AC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_11;        // 0x10C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_9;                   // 0x10C8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_12;        // 0x10D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Master_WeaponComponent.Master_WeaponComponent_C");
		return ptr;
	}


	void OnSetScopeScaleAlpha__DelegateSignature(float* bpp__NewxAlpha__pfT);
	void OnSetRevolverChamberRotate__DelegateSignature(struct FRotator* bpp__NewxRevolverxChamberxRotator__pfTTT);
	void OnSetLobbyState__DelegateSignature(bool* bpp__LobbyxState__pfT);
	void Update_Tracer_Start_Point();
	void Update_Combat_State(ECombatState* bpp__NewState__pf);
	void UpdateMagDropBoneVelocity(float* bpp__DeltaTime__pf, int* bpp__Index__pf);
	void UpdateAimDownSightsBlurValues();
	void TryDisableCameraModifier(class UClass** bpp__CameraxModifier__pfT, int* bpp__PlayerxIndex__pfT, bool* bpp__Found__pf);
	void SyncComputeCosmeticHits(struct FFullFireRepData* bpp__FireData__pf, TArray<struct FHitResult>* bpp__Hits__pf);
	void Spawn_Tracers_Simple(struct FVector* bpp__TracexEnd__pfT, TArray<struct FHitResult>* bpp__Hits__pf);
	void Spawn_Tracer(struct FVector* bpp__EndPoint__pf);
	void Spawn_Spangs_and_Decals(struct FFullFireRepData* bpp__Data__pf__const, TArray<struct FHitResult>* bpp__Hits__pf, struct FFullFireRepData* bpp__OutxData__pfT);
	void SpawnTracers(TArray<struct FHitResult>* bpp__Hits__pf, TArray<struct FFullFireRepData>* bpp__AimData__pf);
	void SpawnSpangs(TArray<struct FHitResult>* bpp__Hits__pf);
	void SpawnDecals(TArray<struct FHitResult>* bpp__Hits__pf);
	void ShouldPlayFireAnim1P(bool* bpp__Playx1PxFire__pfTT);
	void Set_Scope_Scale_Alpha(float* bpp__NewxAlpha__pfT);
	void Set_Revolver_Chamber_Rotate(struct FRotator* bpp__TargetxRotator__pfT, bool* bpp__ResetxRotation__pfT);
	void Set_Muzzle_Flash_Emitter_and_Offset();
	void Setup_Character_Anim_Init_Callback();
	class UAnimMontage* Select_Weapon_Reload_Montage(bool* bpp__IsxQuickxReload__pfTT);
	void Select_Reload_Montage(class UAnimMontage** bpp__ReloadMontage__pf, class UAnimMontage** bpp__QuickReloadMontage__pf);
	void Retrieve_Weapon();
	void Reticle_Rotate();
	void Reset_Variables_at_Start_of_Firing_Instance();
	void Reload_Weapon();
	void Reload_Cooldown_Weapon();
	void ReceiveTick(float* bpp__DeltaSeconds__pf);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* bpp__EndPlayReason__pf);
	void ReceiveBeginPlay();
	void Pre_Fire_Weapon();
	void Prepare_Next_Tracer_Spawn();
	void Post_Fire_Weapon();
	void Play_Weapon_Reload_animation(float* bpp__PlayRate__pf, bool* bpp__IsxQuickxReload__pfTT);
	void Play_Reload_MultiStage(float* bpp__PlayxRate__pfT, class UAnimMontage** bpp__SelectedxMontage__pfT);
	void Play_Reload_Logic(class UAnimMontage** bpp__ReloadxMontage__pfT, class UAnimMontage** bpp__QuickReloadxMontage__pfT, bool* bpp__IsxMultixStagexReloadx__pfTTTzy);
	void Play_Reload_Base(float* bpp__PlayxRate__pfT, class UAnimMontage** bpp__SelectedxMontage__pfT);
	void Play_Post_Reload();
	void Play_Fire_Tail_Sound(EAkCallbackType* bpp__CallbackxType__pfT, class UAkCallbackInfo** bpp__CallbackxInfo__pfT);
	void Play_Fire_Camera_Shakes(bool* bpp__LocalOnly__pf, class UClass** bpp__PrimaryxShake__pfT, class UClass** bpp__HiFreqxShake__pfT);
	void Play_Casing_Sound();
	void Play_Bullet_Impact_SFX(struct FHitResult* bpp__HitResult__pf);
	void PlayInvalidFireSound();
	void PlayFireSound(struct FAimData* bpp__InputPin__pf__const);
	void PlayEmptyFireAudio();
	void PlayBulletNearMissSound(struct FVector* bpp__InxTracexStart__pfTT, struct FVector* bpp__InxTracexEnd__pfTT, TArray<struct FHitResult>* bpp__Hits__pf);
	void On_Cosmetic_Trace_Complete_Internal(bool* bpp__BlockingxHit__pfT__const, struct FVector* bpp__Start__pf__const, struct FVector* bpp__End__pf__const, bool* bpp__AllowxSpangs__pfT, bool* bpp__AllowxTracers__pfT, bool* bpp__AllowxDecals__pfT, TArray<struct FHitResult>* bpp__OutxHits__pfT);
	void On_Comestic_Trace_Complete(bool* bpp__bBlockingHit__pf, TArray<struct FHitResult>* bpp__OutHits__pf__const, struct FVector* bpp__Start__pf__const, struct FVector* bpp__End__pf__const);
	void On_Character_Anim_Initialized();
	void OnPossessedBy_Event_1(class AController** bpp__NewController__pf);
	void OnKilled_Event_1(class AKSCharacterBase** bpp__KillerCharacter__pf__const, class AKSCharacterBase** bpp__KilledCharacter__pf__const);
	void NotifyStopFireReceived();
	bool IsDropMeshValid(int* bpp__Index__pf);
	void IdleWeapon(EWeaponStateNew* bpp__OldState__pf);
	void Holster_Weapon();
	void Hide_Magazine();
	void HandleWeaponFiringClientEffects(struct FFullFireRepData* bpp__Data__pf);
	void Get_Tracer_Offset(float* bpp__Offset__pf);
	void Get_Spang_Particle_System(struct FHitResult* bpp__Hit__pf, class UParticleSystem** bpp__SpangxToxUse__pfTT, bool* bpp__PlayOnHitCharacter__pf);
	void Get_Scaled_Reload_Playrate(class UAnimMontage** bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT);
	void Get_Scaled_Post_Reload_Playrate(class UAnimMontage** bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT);
	void Get_Scaled_Multistage_Reload_Playrate(class UAnimMontage** bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT);
	void Get_Reticle_Material();
	void Get_Post_Reload_Weapon_Section_Time(class UAnimMontage** bpp__AnimxMontage__pfT, float* bpp__PostxReloadxPosition__pfTT);
	void Get_Player_3P_Lunge_Montage(class UAnimMontage** bpp__Montage__pf);
	void Get_Player_3P_Fire_Montage(class UAnimMontage** bpp__Montage__pf);
	void Get_Player_1P_Fire_Montage(class UAnimMontage** bpp__Montage__pf);
	void Get_Expected_Aim_Data(struct FAimData* bpp__AimData__pf);
	void Get_Decal_Material(struct FHitResult* bpp__Hit__pf, struct FHitDecalInfo* bpp__DecalxInfo__pfT);
	void Get_Character_Anim_Instance(class UKSCharacterAnimInst** bpp__AnimxInst__pfT);
	void Get_Character_3p_Fire_Section(struct FName* bpp__3pxFirexSection__pfTT);
	void Get_Character_1p_Fire_Section(struct FName* bpp__1pxFirexSection__pfTT);
	void GetTracerStartPoint(struct FVector* bpp__TracerStartLocation__pf);
	void GetTableRowNameForHit(struct FHitResult* bpp__Hit__pf, struct FName* bpp__RowNamePrefix__pf, struct FName* bpp__RowName__pf);
	void GetPercentRemainingAmmo(float* bpp__Percent__pf);
	void GetMagDropBoneRotation(int* bpp__Index__pf, struct FRotator* bpp__WorldRotation__pf);
	void GetMagDropBoneLocation(int* bpp__Index__pf, struct FVector* bpp__WorldLocation__pf);
	void GetDropVelocity(int* bpp__Index__pf, struct FVector* bpp__WorldVelocity__pf);
	void GetDropMesh(int* bpp__Index__pf, class USkeletalMesh** bpp__SkelMesh__pf, class UStaticMesh** bpp__StaticMesh__pf);
	void Force_Exit_ADS_Pose();
	void Force_ADS_Scope();
	void ForceRetrieveWeapon();
	void ForceHolsterWeapon();
	void Fixup_Laser_Sight(class USkinnableSkeletalMeshComponent** bpp__MeshComponent__pf);
	void Fixup_Attach_Point();
	void Fire_Weapon(struct FFullFireRepData* bpp__Data__pf, bool* bpp__PlayNoChainFireMontage__pf);
	void Fire_Montage_Jump_To_Section(struct FString* bpp__Section__pf__const);
	void Filter_Cosmetic_Hit_Results(TArray<struct FHitResult>* bpp__TracexHitxResults__pfTT, TArray<struct FHitResult>* bpp__FilteredxHitxResults__pfTT);
	void ExecuteUbergraph_Master_WeaponComponent_10(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_Master_WeaponComponent_7(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_Master_WeaponComponent_36(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_Master_WeaponComponent_35(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_Master_WeaponComponent_34(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_Master_WeaponComponent_30(int* bpp__EntryPoint__pf);
	void Evaluate_Revolver_Chamber_Rotate();
	void End_Reload_Weapon(bool* bpp__AbortxReloadxAnimation__pfTT);
	void EnableOrAddCameraModifier(class UClass** bpp__Modifier__pf, int* bpp__PlayerIndex__pf, class UCameraModifier** bpp__ModifierxObject__pfT);
	void DropMagInternal(int* bpp__Index__pf);
	void DropMagazine();
	void DetermineMagSize();
	void Delay_Spawn_Tracers(TArray<struct FHitResult>* bpp__Hits__pf__const, struct FVector* bpp__TracexEnd__pfT__const);
	void Delay_Spawn_Spangs(TArray<struct FHitResult>* bpp__Hits__pf);
	void Delay_Spawn_Decals(TArray<struct FHitResult>* bpp__Hits__pf__const, struct FVector* bpp__Start__pf, struct FVector* bpp__End__pf);
	void CheckKillCamScope(class APawn** bpp__ViewPawn__pf);
	void Character_Combat_State_Changed(ECombatState* bpp__OldCombatState__pf, ECombatState* bpp__NewCombatState__pf);
	void Can_Spawn_Tracer_Now(bool* bpp__CanxSpawnxxTracer__pfTTT);
	void CancelReloadCosmetic();
	void Calculate_Reload_Time(class UAnimMontage** bpp__ReloadxMontage__pfT, class UAnimMontage** bpp__QuickxReloadxMontage__pfTT, float* bpp__PlayRate__pf, class UAnimMontage** bpp__SelectedxMontage__pfT, bool* bpp__IsxQuickReload__pfT);
	void Calculate_Multistage_Reload_Time(class UAnimMontage** bpp__ReloadxMontage__pfT, class UAnimMontage** bpp__QuickxReloadxMontage__pfTT, float* bpp__PlayRate__pf, class UAnimMontage** bpp__SelectedxMontage__pfT, bool* bpp__IsxQuickReload__pfT);
	void BuildupWeapon();
	void BlueprintPrepareKillCamPlayback();
	void BlueprintPersistentCosmeticsUpdate();
	void AudioOnCooldown();
	void Attach_Weapon_To_Active_Socket();
	void Attach_Weapon_Holster_Socket();
	void AsyncComputeCosmeticHitsAndPlay(struct FFullFireRepData* bpp__FirexData__pfT__const);
	void Apply_Spang_From_Hit_Result(struct FHitResult* bpp__Hit__pf);
	void ApplyDecalFromHit(struct FHitResult* bpp__Hit__pf);
	void Anim_Init_On_Weapon_Mesh(class USkinnableSkeletalMeshComponent** bpp__SkelComp__pf, class UAnimInstance** bpp__AnimInstance__pf);
	void Ancillary_Mesh_Scale_Set();
	void After_Spawn_Tracers_Delay(bool* bpp__bBlockingHit__pf, TArray<struct FHitResult>* bpp__OutHits__pf__const, struct FVector* bpp__Start__pf__const, struct FVector* bpp__End__pf__const);
	void After_Spawn_Spangs_Delay(bool* bpp__bBlockingHit__pf, TArray<struct FHitResult>* bpp__OutHits__pf__const, struct FVector* bpp__Start__pf__const, struct FVector* bpp__End__pf__const);
	void After_Spawn_Decals_Delay(bool* bpp__bBlockingHit__pf, TArray<struct FHitResult>* bpp__OutHits__pf__const, struct FVector* bpp__Start__pf__const, struct FVector* bpp__End__pf__const);
	void OnWeaponComponentStateChanged__DelegateSignature(class UKSWeaponComponent** bpp__WeaponComponent__pf, EWeaponStateNew* bpp__OldState__pf, EWeaponStateNew* bpp__NewState__pf);
	void OnPossessedBy__DelegateSignature(class AController** bpp__NewController__pf);
	void OnKilled__DelegateSignature(class AKSCharacterBase** bpp__KillerCharacter__pf, class AKSCharacterBase** bpp__KilledCharacter__pf);
	void OnCombatStateChanged__DelegateSignature(ECombatState* bpp__OldCombatState__pf, ECombatState* bpp__NewCombatState__pf);
	void OnAnimInitializedOnSkinnableMesh__DelegateSignature(class USkinnableSkeletalMeshComponent** bpp__SkinnableSkelComp__pf, class UAnimInstance** bpp__AnimInstance__pf);
	void OnAnimInitialized__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
