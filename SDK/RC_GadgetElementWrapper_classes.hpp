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

// WidgetBlueprintGeneratedClass GadgetElementWrapper.GadgetElementWrapper_C
// 0x0040 (0x05E0 - 0x05A0)
class UGadgetElementWrapper_C : public UKSViewedPawnInventoryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                                    Overlay_1;                                                // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGadgetCompInventoryElement_C*               TrueDisplayElement;                                       // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       ValidGameplayTagContainer;                                // 0x05B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UKSWeaponComponent*                          TrackedWeaponComponent;                                   // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GadgetElementWrapper.GadgetElementWrapper_C");
		return ptr;
	}


	void Set_Jammed(bool* Is_Jammed);
	void InitializeWidget(class APUMG_HUD** HUD);
	void PostSetPawn();
	void OnWeaponInventoryChanged();
	void GadgetSwapped(class AKSCharacter** EquipmentOwner, class UKSWeaponComponent** Equipment);
	void ExecuteUbergraph_GadgetElementWrapper(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
