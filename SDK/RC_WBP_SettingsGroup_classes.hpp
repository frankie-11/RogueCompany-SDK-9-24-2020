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

// WidgetBlueprintGeneratedClass WBP_SettingsGroup.WBP_SettingsGroup_C
// 0x0020 (0x0610 - 0x05F0)
class UWBP_SettingsGroup_C : public UKSSettingsGroup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                MainSettingBox;                                           // 0x05F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                SubSettingsBox;                                           // 0x0600(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              SubSettingsContainer;                                     // 0x0608(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsGroup.WBP_SettingsGroup_C");
		return ptr;
	}


	void Add_Sub_Settings_Widget(class UKSSettingsContainer** Settings_Container);
	void Add_Main_Settings_Widget(class UKSSettingsContainer** Settings_Container);
	void AddSettingsWidget(class UKSSettingsContainer** Settings_Container, class UVerticalBox** Vertical_Box);
	void InitializeWidget(class APUMG_HUD** HUD);
	void AddSubSettingsContainerWidget(class UKSSettingsContainer** SettingsContainer);
	void AddMainSettingsContainerWidget(class UKSSettingsContainer** SettingsContainer);
	void ExecuteUbergraph_WBP_SettingsGroup(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
