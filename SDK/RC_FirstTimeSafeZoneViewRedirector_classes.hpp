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

// BlueprintGeneratedClass FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C
// 0x0000 (0x0030 - 0x0030)
class UFirstTimeSafeZoneViewRedirector_C : public UKSViewRedirector_LocalSetting
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C");
		return ptr;
	}


	bool DoesLocalSettingApply(class APUMG_HUD** HUD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
