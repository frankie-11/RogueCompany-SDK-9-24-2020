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

// WidgetBlueprintGeneratedClass WBP_SettingsDropdown.WBP_SettingsDropdown_C
// 0x0010 (0x0530 - 0x0520)
class UWBP_SettingsDropdown_C : public UKSSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDropdown_C*                                 Dropdown;                                                 // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsDropdown.WBP_SettingsDropdown_C");
		return ptr;
	}


	bool NavigateBack();
	bool NavigateConfirmPressed();
	bool NavigateConfirm();
	void SetDesiredIndex(int* Index, bool* Success);
	void GetDirtyIndex(int* Index);
	void Set_Text_To_Index(int* Index);
	void OnWidgetSettingsInfoSet();
	void Selection_Made(struct FText* Text, int* Index);
	void InitializeWidget(class APUMG_HUD** HUD);
	void GamepadHover();
	void InitializeWidgetNavigation();
	void FocusGroupNavigateDownFailure(int* FocusGroup);
	void FocusGroupNavigateUpFailure(int* FocusGroup);
	void OnSettingsInfoValueChanged(bool* bChangedExternally);
	void ExecuteUbergraph_WBP_SettingsDropdown(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
