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

// WidgetBlueprintGeneratedClass WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C
// 0x0010 (0x0550 - 0x0540)
class UWBP_Social_Friends_Tab_C : public UKSSocialFriendsPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UKSTreeView*                                 PlayerList;                                               // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C");
		return ptr;
	}


	void FocusFirstItem();
	void TryGetFirstItemForCategory(EKSSocialOverlaySection* Category, class UKSPlayerInfo** Output);
	void FindFirstOnlinePlayerOrDefault(class UObject** Item);
	void FocusFirstOnlinePlayer();
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void HandleItemClicked(class UObject** Item);
	bool NavigateConfirm();
	void GetFocusTarget(class UWidget** Target);
	void InitializeWidget(class APUMG_HUD** HUD);
	void UninitializeWidget();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject** Item, bool* bIsHovered);
	void OnShown();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject** Item);
	void OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState);
	void InitializeWidgetNavigation();
	void ExecuteUbergraph_WBP_Social_Friends_Tab(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
