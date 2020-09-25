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

// DynamicClass AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C
// 0x0050 (0x1130 - 0x10E0)
class UAttackBomb_WeaponComponent_C : public UMaster_WeaponComponent_C
{
public:
	struct FKSNeutralBombState                         K2Node_CustomEvent_BombState;                             // 0x10E0(0x0018) (Transient, DuplicateTransient)
	unsigned char                                      K2Node_SwitchEnum_CmpSuccess;                             // 0x10F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x10FC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class AKSCharacter*                                K2Node_Event_SkyDiver_3;                                  // 0x1110(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_Event_SkyDiver_2;                                  // 0x1118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_Event_SkyDiver;                                    // 0x1120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EWeaponStateNew                                    K2Node_Event_OldState;                                    // 0x1128(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EWeaponStateNew                                    K2Node_Event_NewState;                                    // 0x1129(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_SwitchEnum_CmpSuccess_2;                           // 0x112A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_DoesCharacterHaveBackpack_HasBackpack;           // 0x112B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C");
		return ptr;
	}


	void OnSkyDiveStarted(class AKSCharacter** bpp__SkyDiver__pf);
	void OnSkyDiveSkipped(class AKSCharacter** bpp__SkyDiver__pf);
	void OnSkyDiveEnded(class AKSCharacter** bpp__SkyDiver__pf);
	void DoesCharacterHaveBackpack(bool* bpp__HasBackpack__pf);
	void BombStateChange(struct FKSNeutralBombState* bpp__BombState__pf);
	void OnNeutralBombStateChanged__DelegateSignature(struct FKSNeutralBombState* bpp__BombState__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
