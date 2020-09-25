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

// DynamicClass Hidden_WeaponComponent.Hidden_WeaponComponent_C
// 0x0010 (0x10F0 - 0x10E0)
class UHidden_WeaponComponent_C : public UMaster_WeaponComponent_C
{
public:
	EWeaponStateNew                                    K2Node_Event_OldState;                                    // 0x10E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EWeaponStateNew                                    K2Node_Event_NewState;                                    // 0x10E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_SwitchEnum_CmpSuccess;                             // 0x10E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_SwitchEnum_CmpSuccess_2;                           // 0x10E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x10E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Hidden_WeaponComponent.Hidden_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
