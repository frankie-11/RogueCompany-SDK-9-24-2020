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

// DynamicClass CharacterEmotionComponent.CharacterEmotionComponent_C
// 0x0078 (0x02B0 - 0x0238)
class UCharacterEmotionComponent_C : public UKSEmotionComponent
{
public:
	float                                              CachedPlayerHealth;                                       // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PainedDuration;                                           // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FocusedId;                                                // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DeadId;                                                   // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WoundedId;                                                // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x024C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                         // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess;                              // 0x0268(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                   // 0x026C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                   // 0x027C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class AKSCharacterBase*                            K2Node_DynamicCast_AsKSCharacter_Base;                    // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_2;                            // 0x0298(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_4;                   // 0x029C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass CharacterEmotionComponent.CharacterEmotionComponent_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void Player_Downed_Changed(class AKSCharacter** bpp__Character__pf);
	void Check_Death_State();
	void Character_Health_Changed(class AKSCharacterBase** bpp__KSCharacter__pf);
	void Character_Aim_State_Changed(EKSCharacterAimMode* bpp__NewParam__pf);
	void OnHealthChanged__DelegateSignature(class AKSCharacterBase** bpp__Character__pf);
	void OnDeathStateChanged__DelegateSignature();
	void OnCharacterDownedChanged__DelegateSignature(class AKSCharacter** bpp__Character__pf);
	void OnAimStateChange__DelegateSignature(EKSCharacterAimMode* bpp__NewAimMode__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
