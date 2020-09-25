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

// WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C
// 0x00C8 (0x05D0 - 0x0508)
class UWBP_SettingsMenu_C : public UKSSettingsMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            BackHovered;                                              // 0x0510(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            RevertHovered;                                            // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            ApplyHovered;                                             // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              NavTabBox;                                                // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  SettingsDescription;                                      // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             SettingsPageWidgetSwitcher;                               // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  SettingsTitle;                                            // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      TabLeftImage;                                             // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      TabRightImage;                                            // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_panel_bevel_C*                          WBP_panel_bevel;                                          // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UWBP_subscreen_nav_tab_C*>            WBP_subscreen_nav_tabs;                                   // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UPUMG_Widget*>                        TopWidgets;                                               // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UPUMG_Widget*>                        BottomWidgets;                                            // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EPUMG_LoginState                                   Login_State;                                              // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TAB_LEFT_NAME;                                            // 0x0594(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TAB_RIGHT_NAME;                                           // 0x059C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       APPLY_NAME;                                               // 0x05A4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RESTORE_NAME;                                             // 0x05AC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UKSSettingsPage*>                     WBP_SubScreens;                                           // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       ESC_NAME;                                                 // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C");
		return ptr;
	}


	void On_Tab_Clicked(class UWBP_subscreen_nav_tab_C** Tab_Selected);
	void ResetPageState();
	void GetContainerWidgetForPUMGWidgetOnPage(class UKSSettingsPage** Page, class UPUMG_Widget** PUMG_Widget, class UKSSettingsContainer** KSSettingsContainerWidget);
	void On_Widget_Mouse_Entered(class UPUMG_Widget** PUMG_Widget, bool* bEntered);
	void Setup_Hover_Handling();
	void GetSettingsContainersForPage(class UKSSettingsPage** SettingsPage, TArray<class UKSSettingsContainer*>* SettingsContainers, TArray<class UPUMG_Widget*>* SettingsContainersAsPUMG);
	void GetSettingsWidgetForPUMGWidgetOnPage(class UKSSettingsPage** Page, class UPUMG_Widget** PUMG_Widget, class UKSSettingsWidget** KSSettingsWidget);
	void Get_Current_Page(class UKSSettingsPage** KSSettingsPage);
	void Assign_Tab_Icons();
	void Assign_Tab_Icon(class UImage** Icon, struct FName* Action_Name);
	void On_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE>* Input_State);
	void Setup_Input_State_Handling();
	void Setup_Login_Handling();
	void Handle_Login_State(EPUMG_LoginState* Login_State);
	void Tab_Right();
	void Tab_Left();
	void Go_To_Active_Tab(bool* bInstantSwitch);
	void Recover_From_Navigate_Failure(class UPUMG_Widget** PUMG_Widget, int* Index_Offset);
	void Widget_Navigate_Down_Failure(int* Focus_Group, class UPUMG_Widget** PUMG_Widget);
	void Widget_Navigate_Up_Failure(int* Focus_Group, class UPUMG_Widget** PUMG_Widget);
	void On_Widget_Gamepad_Hovered(class UPUMG_Widget** PUMG_Widget, bool* bHovered);
	void Scroll_Widget_Into_View(class UPUMG_Widget** PUMG_Widget);
	void Scroll_To_Start();
	void Scroll_To_End();
	void GoBack();
	void Revert_Settings();
	void ConfirmExit(bool* ShouldSaveSettings);
	void Restore_Settings();
	void ExitSettingsPage();
	void HasAnyUnsavedSetting(bool* AnyUnsaved);
	void Save_Settings();
	bool NavigateBackPressed();
	bool NavigateBack();
	void GetSettingsWidgetsForPage(class UKSSettingsPage** SettingsPage, TArray<class UKSSettingsWidget*>* SettingsWidgets, TArray<class UPUMG_Widget*>* SettingsWidgetsAsPUMG);
	void SetupNavigationForPage(class UKSSettingsPage** Page, int* Index);
	void On_Tab_Selected(class UWBP_subscreen_nav_tab_C** Tab_Selected, bool* bInstantSwitch);
	void Add_Tab_For_Settings_Page(class UKSSettingsPage** Settings_Page_Widget);
	void Add_Settings_Page_Widget(class UKSSettingsPage** Settings_Page);
	void SettingsMenuHoverSFX();
	void SettingsMenuApplyClickSFX();
	void SettingsMenuBackClickSFX();
	void SettingsMenuRevertButtonClickSFX();
	void AddSettingsPageWidget(class UKSSettingsPage** SettingsPage);
	void OnShown();
	void OnHide();
	void OnMenuConfigSet();
	void InitializeWidget(class APUMG_HUD** HUD);
	void InitializeWidgetNavigation();
	void RebuildNavigation();
	void OnBackButton();
	void OnApplyButton();
	void OnRevertButton();
	void OnConfirmExit(bool* ShouldSaveSettings);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_WBP_SettingsMenu(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
