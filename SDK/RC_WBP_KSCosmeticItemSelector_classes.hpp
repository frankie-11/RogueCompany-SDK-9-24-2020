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

// WidgetBlueprintGeneratedClass WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C
// 0x0090 (0x0568 - 0x04D8)
class UWBP_KSCosmeticItemSelector_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_KSCosmeticItemDisplay_C*                CosmeticItemDisplay;                                      // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UKSItem*                                     KSItem;                                                   // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnItemHovered;                                            // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04F0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnItemUnhovered;                                          // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0500(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0510(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UPUMG_StoreItem*                             StoreItem;                                                // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCosmeticSlotDetails                        CosmeticDetails;                                          // 0x0528(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      IsClearSlot;                                              // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPurchaseItem;                                           // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0541(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UAkAudioEvent*                               HoverCosmeticItemSelectorSFX;                             // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ClickCosmeticItemSelectorSFX;                             // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C");
		return ptr;
	}


	bool NavigateConfirm();
	void OnHoverSound();
	void OnClickSound();
	void Construct();
	void InitializeWidget(class APUMG_HUD** HUD);
	void OnCosmeticHover(struct FCosmeticSlotDetails* CosmeticDetails, bool* IsGamepad, class UWBP_KSCosmeticItemDisplay_C** Widget);
	void OnCosmeticUnhover();
	void OnCosmeticClicked(class UWBP_KSCosmeticItemDisplay_C** Widget, struct FCosmeticSlotDetails* CosmeticSlotDetails);
	void GamepadHover();
	void GamepadUnhover();
	void SetSlotActive(bool* Active);
	void SetItemOwned(class UPUMG_StoreItem** StoreItem);
	void ExecuteUbergraph_WBP_KSCosmeticItemSelector(int* EntryPoint);
	void OnPurchaseItem__DelegateSignature(class UPUMG_StoreItem** StoreItem);
	void OnItemSelected__DelegateSignature(class UKSItem** KSItem, class UWidget** Widget, struct FCosmeticSlotDetails* CosmeticSlot);
	void OnItemUnhovered__DelegateSignature();
	void OnItemHovered__DelegateSignature(struct FCosmeticSlotDetails* CosmeticDetails, class UKSItem** KSItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
