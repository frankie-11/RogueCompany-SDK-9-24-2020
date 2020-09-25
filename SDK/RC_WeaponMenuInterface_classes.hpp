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

// BlueprintGeneratedClass WeaponMenuInterface.WeaponMenuInterface_C
// 0x0000 (0x0028 - 0x0028)
class UWeaponMenuInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponMenuInterface.WeaponMenuInterface_C");
		return ptr;
	}


	void Close(bool* Should_Cancel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
