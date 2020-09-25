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

// BlueprintGeneratedClass ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C
// 0x0070 (0x0470 - 0x0400)
class UReviveSelfOnActivateModInst_C : public UKSModInst_ReviveSelfOnActivation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UKSFXCurveComponent*                         AppliedCurveComponent;                                    // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FKSSpecialEffect                            ImmunityPPEffect;                                         // 0x0410(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                Outro_Timer;                                              // 0x0460(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                BruteStrengthMontage;                                     // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C");
		return ptr;
	}


	void Get_outro_timer(class UAnimMontage** Montage, float* Outro_Duration_timer);
	bool StopAnimationFromEvent(struct FName* AnimEventName, class UKSCharacterAnimInst** CharAnimInstance);
	bool ReactsToAnimationEvent(struct FName* AnimEventName, int* Priority);
	void OnNotifyEnd_9E1EC10C43864E26E4E9E1B703588426(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_9E1EC10C43864E26E4E9E1B703588426(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_9E1EC10C43864E26E4E9E1B703588426(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_9E1EC10C43864E26E4E9E1B703588426(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_9E1EC10C43864E26E4E9E1B703588426(struct FName* NotifyName, int* MontageInstanceID);
	void VO_Revive_Activate();
	void StimPackDownedEndSFX();
	void StimPackActivateStandingSFX();
	void StimPackActivateDownedSFX();
	void SFX_Revive_Activate();
	void SFX_Revive_Complete();
	void StimPackReviveCompleteSFX();
	void PlayAnimationFromEvent(struct FName* AnimEventName, class UKSCharacterAnimInst** CharAnimInstance);
	void ReceiveBeginPlay();
	void OnActivated(bool* bActive);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void AdjustImmunityEffect(bool* Active);
	void OnSetup();
	void Brute_Strength_Effect_Stop();
	void Play_Outro();
	void Brute_Strength_Effect_Play();
	void OnNewCharacter();
	void OnDeathStateChanged();
	void ExecuteUbergraph_ReviveSelfOnActivateModInst(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
