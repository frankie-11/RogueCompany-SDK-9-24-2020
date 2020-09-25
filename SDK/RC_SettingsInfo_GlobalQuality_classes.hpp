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

// BlueprintGeneratedClass SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C
// 0x0018 (0x0108 - 0x00F0)
class USettingsInfo_GlobalQuality_C : public UKSSettingsInfo_Generic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FString>                             QualityNames;                                             // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C");
		return ptr;
	}


	void InitializeValue();
	void ExecuteUbergraph_SettingsInfo_GlobalQuality(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
