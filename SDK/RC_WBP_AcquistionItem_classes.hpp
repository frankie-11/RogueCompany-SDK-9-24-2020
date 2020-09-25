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

// WidgetBlueprintGeneratedClass WBP_AcquistionItem.WBP_AcquistionItem_C
// 0x0038 (0x0510 - 0x04D8)
class UWBP_AcquistionItem_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_KSCosmeticItemDisplay_C*                CosmeticItem;                                             // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UPUMG_StoreItem*                             StoreItem;                                                // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSlotSelected;                                           // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04F0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnSlotHover;                                              // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0500(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AcquistionItem.WBP_AcquistionItem_C");
		return ptr;
	}


	void OnSlotHovered(struct FCosmeticSlotDetails* CosmeticSlotDetails, bool* IsGamepad, class UWBP_KSCosmeticItemDisplay_C** Widget);
	void OnSlotClicked(class UWBP_KSCosmeticItemDisplay_C** Widget, struct FCosmeticSlotDetails* CosmeticSlotDetails);
	void SetSlotItem(class UPUMG_StoreItem** SlotItem);
	void InitializeWidget(class APUMG_HUD** HUD);
	void ExecuteUbergraph_WBP_AcquistionItem(int* EntryPoint);
	void OnSlotHover__DelegateSignature(class UPUMG_StoreItem** Item, class UKSWidget** Widget);
	void OnSlotSelected__DelegateSignature(class UPUMG_StoreItem** StoreItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
