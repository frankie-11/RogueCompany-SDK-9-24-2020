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

// BlueprintGeneratedClass FlashTrapModInst.FlashTrapModInst_C
// 0x0009 (0x0439 - 0x0430)
class UFlashTrapModInst_C : public UKSModInst_GiveWeaponOnActivation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      HasDetonator;                                             // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FlashTrapModInst.FlashTrapModInst_C");
		return ptr;
	}


	bool CanActivateNow(EKSAbilityUsageFailureType* OutAbilityFailureType);
	void ReceiveBeginPlay();
	void OnNewGivenItem();
	void OnWeaponStateChanged(class AKSWeapon** Weapon, EWeaponStateNew* OldState, EWeaponStateNew* NewState);
	void BeginActivation();
	void OnGrenadeSpawned(class AKSProjectile_Grenade** Grenade);
	void OnGrenadeDestroyed(class AActor** DestroyedActor);
	void Init_RemoteThrow(class AKSWeapon_RemoteThrow** RemoteThrow);
	void Init_Detonator(class AKSWeapon_RemoteTrigger** Detonator);
	void On_Detonator_Spawned(class AKSWeapon_RemoteTrigger** Detonator);
	void On_Remote_Throw_Spawned(class AKSWeapon_RemoteThrow** RemoteThrow);
	void FiredOnAuthority();
	void On_Reclaimed(class AKSProjectile** Reclaimed);
	void OnAbilityReleased();
	void OnNewCharacter();
	void On_Character_Died(class AKSCharacterBase** KillerCharacter, class AKSCharacterBase** KilledCharacter);
	void ExecuteUbergraph_FlashTrapModInst(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
