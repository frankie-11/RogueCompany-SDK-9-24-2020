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

// BlueprintGeneratedClass MainCharacterVOComponent.MainCharacterVOComponent_C
// 0x0788 (0x08D8 - 0x0150)
class UMainCharacterVOComponent_C : public UKSVOComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0150(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FKSVoicelineEvent                           UnderFire;                                                // 0x0158(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           TakingDamage;                                             // 0x0188(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AngleThresholdForShotFromBehind;                          // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSVoicelineEvent                           ShotFromBehind;                                           // 0x01C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           AbilityOnCooldown;                                        // 0x01F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           PrimaryPickedUp;                                          // 0x0220(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           GadgetPickedUp;                                           // 0x0250(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           MeleePickedUp;                                            // 0x0280(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           MedPackPickedUp;                                          // 0x02B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Revived;                                                  // 0x02E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           RevivedOther;                                             // 0x0310(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           RevivedOtherRemote;                                       // 0x0340(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           LastManStanding;                                          // 0x0370(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Zipline;                                                  // 0x03A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Upline;                                                   // 0x03D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Landed;                                                   // 0x0400(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Mantle;                                                   // 0x0430(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Jumped;                                                   // 0x0460(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           DodgeRoll;                                                // 0x0490(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           GetObjective;                                             // 0x04C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Victory;                                                  // 0x04F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Skydive;                                                  // 0x0520(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           LethalGadget;                                             // 0x0550(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           UtilityGadget;                                            // 0x0580(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           UtilityDeployable;                                        // 0x05B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           LethalDeployable;                                         // 0x05E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           InteractObjective;                                        // 0x0610(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Select;                                                   // 0x0640(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           ShopPurchase;                                             // 0x0670(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UKSShopRuleComponent*                        ShopRuleComponent;                                        // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FKSVoicelineEvent                           Intro;                                                    // 0x06A8(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           ReviveMe;                                                 // 0x06D8(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Acknowledged;                                             // 0x0708(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           CancelThat;                                               // 0x0738(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           SuddenDeath;                                              // 0x0768(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EPingMessage, struct FKSVoicelineEvent>       PingVOMap;                                                // 0x0798(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FKSVoicelineEvent                           BombPickedUp;                                             // 0x07E8(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           BombPlant;                                                // 0x0818(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           BombSpottedArmed;                                         // 0x0848(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           BombSpottedUnarmed;                                       // 0x0878(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           BombDefusing;                                             // 0x08A8(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MainCharacterVOComponent.MainCharacterVOComponent_C");
		return ptr;
	}


	void EnemyBehind(class AActor** EnemyActor, bool* Behind);
	void BindToGameStateEvents(class AKSGameState** GameState);
	void OnLastManStanding(class AKSPlayerState** LastPlayer);
	void OnWinnerSet(int* TeamNumber);
	void OnRoundSetup(struct FRoundInitState* RoundInitState);
	void OnPhaseChange(struct FName* NewPhaseName, struct FName* PreviousPhaseName);
	void BindToPingManagerEvents(class UKSPingManager** PingManager);
	void PingAdded(struct FPingInfo* PingInfo);
	void PingAcknowledged(int* PingId, class AKSPlayerState** PingingPlayer, class AKSPlayerState** AcknowledgingPlayer);
	void SentVoiceLineOnly(EPingMessage* PingMessage, class AKSPlayerState** SendingPlayer);
	void OnTakeDamage(class AActor** DamagedActor, float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnItemPickedUp(class AKSCharacter** Character, class AKSItemDrop** ItemDrop, class UKSItem** Item);
	void OnReviveCompleted(class AKSCharacter** Reviver, class AKSCharacter** Revivee);
	void BindToCharacterEvents(class AKSCharacter** Character);
	void OnInteractStart(class AActor** Target, float* Duration);
	void OnLanded(struct FVector* Velocity);
	void OnMantleChanged(bool* IsMantling);
	void OnDOdgeRollChanged(bool* IsDodgeRolling);
	void OnJumped();
	void OnCharacterFreeFallStarted();
	void OnWeaponInventoryChanged();
	void BuildWeaponStateChanged(class AKSWeapon** Weapon, EWeaponStateNew* OldState, EWeaponStateNew* NewState);
	void GadgetWeaponStateChanged(class AKSWeapon** Weapon, EWeaponStateNew* OldState, EWeaponStateNew* NewState);
	void ResetObjectiveVO();
	void OnStartReviveOther(class AKSCharacter** Reviver, class AKSCharacter** Revivee, float* ReviveTime, bool* bRemote);
	void AnnounceBombSpotted(bool* Armed);
	void OnDeathStateChanged();
	void ModFailedToActivate(class UKSModInst_Activated** AttemptedMod, EKSAbilityUsageFailureType* AbilityFailureType);
	void BindToPlayerStateEvents(class AKSPlayerState** PlayerState);
	void BindToActivatableModEvents(class UKSModInst_Activated** ActivatableMod);
	void BindToEvents();
	void BindToTeamStateEvents(class AKSTeamState** TeamState);
	void BindToPlayerControllerEvents(class AKSPlayerController** PlayerController);
	void OnJobChanged();
	void ShopItemChanged(struct FShopItem* ShopItem);
	void OnPlayerDownedChanged(class AKSPlayerState** PlayerState);
	void ModTriggered();
	void ModSetup();
	void ModActivated(bool* bActive);
	void ExecuteUbergraph_MainCharacterVOComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
