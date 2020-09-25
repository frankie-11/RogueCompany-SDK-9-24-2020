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

// BlueprintGeneratedClass SettingsInfo_Language.SettingsInfo_Language_C
// 0x0010 (0x00E8 - 0x00D8)
class USettingsInfo_Language_C : public UKSSettingsInfoBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDataTable*                                  CultureFriendlyNames;                                     // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SettingsInfo_Language.SettingsInfo_Language_C");
		return ptr;
	}


	int FixupInvalidInt(int* inInt);
	bool IsValidValueInt(int* inInt);
	void GetCultureStringFromTextOptionIndex(int* TextOptionIndex, bool* Success, struct FString* CultureString);
	void GetLanguageTextOptionIndex(struct FString* Language, int* TextOptionIndex);
	void SetUpLanguageOptions();
	bool SaveIntValue(int* inInt);
	bool ApplyIntValue(int* inInt);
	void InitializeValue();
	void HandleOnDisplayLanguageApplied(struct FString* StringValue);
	void HandleOnDisplayLanguageSaved(struct FString* StringValue);
	void RevertSettingToDefault();
	void ExecuteUbergraph_SettingsInfo_Language(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
