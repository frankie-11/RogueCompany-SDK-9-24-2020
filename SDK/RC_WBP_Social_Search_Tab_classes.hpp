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

// WidgetBlueprintGeneratedClass WBP_Social_Search_Tab.WBP_Social_Search_Tab_C
// 0x0020 (0x0590 - 0x0570)
class UWBP_Social_Search_Tab_C : public UKSSocialSearchPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UKSTreeView*                                 Results;                                                  // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_Social_Search_bar_C*                    SearchBar;                                                // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UObject*                                     LastSelectedItem;                                         // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Social_Search_Tab.WBP_Social_Search_Tab_C");
		return ptr;
	}


	void ClearListFocus();
	void TryRecoverLastKnownListFocus();
	void GetFirstVisibleItem(class UKSTreeView** List, class UObject** Item);
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void GetFocusTargets(TArray<class UWidget*>* Target);
	void ClearSearch();
	void HandlePlayerCardClicked(class UObject** Object);
	void InitializeWidget(class APUMG_HUD** HUD);
	void UninitializeWidget();
	void OnHide();
	void BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject** Item);
	void BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject** Item);
	void OnInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE>* InputState);
	void InitializeWidgetNavigation();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature(struct FText* SearchTerm);
	void ExecuteUbergraph_WBP_Social_Search_Tab(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
