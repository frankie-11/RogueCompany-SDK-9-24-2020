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

// BlueprintGeneratedClass ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C
// 0x000C (0x019C - 0x0190)
class UReloadOnDodgeRollModInst_C : public UKSModInst_OnDodgeRoll
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0190(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Previous_ammo_in_clip;                                    // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C");
		return ptr;
	}


	void MagDropForDodgeReload(class UKSWeaponComponent** Master_Weapon_Ref);
	bool StopAnimationFromEvent(struct FName* AnimEventName, class UKSCharacterAnimInst** CharAnimInstance);
	bool ReactsToAnimationEvent(struct FName* AnimEventName, int* Priority);
	void OnDodgeRoll(float* RollDuration);
	void RemotePlayerAudio();
	void Dodge_Reload_Mod_Notified();
	void ExecuteUbergraph_ReloadOnDodgeRollModInst(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
