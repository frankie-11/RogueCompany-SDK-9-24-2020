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

// WidgetBlueprintGeneratedClass WBP_SettingsPage.WBP_SettingsPage_C
// 0x0024 (0x058C - 0x0568)
class UWBP_SettingsPage_C : public UKSSettingsPage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  PageScrollBox;                                            // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                SettingsGroupBox;                                         // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              StartTranslationXAnim;                                    // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartOpacityAnim;                                         // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimPlayTime;                                             // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsPage.WBP_SettingsPage_C");
		return ptr;
	}


	class UScrollBox* GetScrollBox();
	void Add_Settings_Section_Widget(class UKSSettingsSection** Selection_Widget);
	void InitializeTickAnimations();
	void HandleShowPageAnimFinished();
	void HandleShowPageAnimUpdated(float* ElapsedTime, float* ElapsedAlpha);
	void HandleHidePageAnimFinished();
	void HandleHidePageAnimUpdated(float* ElapsedTime, float* ElapsedAlpha);
	void PlayShowPageAnim();
	void PlayHidePageAnim();
	void SetInitPageState();
	void Construct();
	void AddSettingsSectionWidget(class UKSSettingsSection** SettingsSection);
	void ExecuteUbergraph_WBP_SettingsPage(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
