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

// WidgetBlueprintGeneratedClass WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C
// 0x00E0 (0x05F8 - 0x0518)
class UWBP_InGameJobSelectManager_C : public UKSPlayerJobSelectWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                ContentWrapper;                                           // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_InGameJobSelect_Loadout_C*              JobLoadout;                                               // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_InGameJobSelect_C*                      JobSelect;                                                // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      RogueSelectOnionSkin;                                     // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_AttackerDefenderScreen_C*               WBP_AttackerDefenderScreen;                               // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       CurrentScreen;                                            // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, class UKSWidget*>               ScreenMappings;                                           // 0x0550(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, int>                            FocusGroupMapping;                                        // 0x05A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UJobSelectionEntryDetails*                   CurrentJobEntry;                                          // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C");
		return ptr;
	}


	void OnPlayerStateChanged(class AKSPlayerState** PlayerState);
	void HandlePhaseChange(struct FName* NewPhaseName, struct FName* PreviousPhaseName);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void RestoreJobSelectViewState();
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void SetFocusGroup(struct FName* FocusGroup);
	void InitializeLoadoutScreen();
	bool NavigateBack();
	void ViewScreen(struct FName* GoToScreen);
	void HandleJobSelectionEntryChanged(class UJobSelectionEntryDetails** JobEntry, bool* EnemyTeam);
	void InitializeJobSelectScreen();
	void HandleJobSelectionReady(bool* EnemyTeam, TArray<class UJobSelectionEntryDetails*>* JobEntries);
	void HandleJobSelection(class UJobSelectionEntryDetails** JobEntry);
	void HandleJobLockedIn();
	void HandleJobLoadoutView();
	void InitializeWidget(class APUMG_HUD** HUD);
	void OnJobEntryChanged(class UJobSelectionEntryDetails** JobEntry, bool* EnemyTeam);
	void InitializeWidgetNavigation();
	void OnShown();
	void HandleNavigateBack();
	void OpenMainMenu();
	void OnHide();
	void OnBackPrompt();
	void PreRoundAnimComplete();
	void Construct();
	void OnJobEntriesReady(TArray<class UJobSelectionEntryDetails*>* JobEntries, bool* EnemyTeam);
	void OnResetSelection();
	void OnPlayerSelectionStateChanged(EPlayerSelectionState* NewState);
	void ExecuteUbergraph_WBP_InGameJobSelectManager(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
