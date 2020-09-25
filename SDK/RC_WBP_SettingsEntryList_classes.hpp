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

// WidgetBlueprintGeneratedClass WBP_SettingsEntryList.WBP_SettingsEntryList_C
// 0x0028 (0x0548 - 0x0520)
class UWBP_SettingsEntryList_C : public UKSSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                                    Overlay_56;                                               // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDropdownList_C*                             DropdownList;                                             // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSelection;                                              // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0538(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsEntryList.WBP_SettingsEntryList_C");
		return ptr;
	}


	void SetDesiredIndex(int* Index, bool* Success);
	bool NavigateBack();
	bool NavigateConfirmPressed();
	bool NavigateConfirm();
	void GetDirtyIndex(int* Index);
	void OnWidgetSettingsInfoSet();
	void Selection_Made(int* Index, struct FText* Text);
	void ExecuteUbergraph_WBP_SettingsEntryList(int* EntryPoint);
	void OnSelection__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
