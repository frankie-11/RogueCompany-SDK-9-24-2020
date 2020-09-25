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

// WidgetBlueprintGeneratedClass WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C
// 0x0018 (0x05D8 - 0x05C0)
class UWBP_OutOfAmmoAlert_C : public UKSLowAmmoAlertWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OutOfAmmoPulse;                                           // 0x05C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              OutOfAmmoAlert;                                           // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C");
		return ptr;
	}


	void IsValidWeaponType(bool* IsValidWeaponType);
	void HandleAmmoChanged(class UKSWeaponComponent** Weapon);
	void BindToAmmoUpdate();
	void PostSetActiveWeaponComponent();
	void PreClearActiveWeaponComponent();
	void Construct();
	void ExecuteUbergraph_WBP_OutOfAmmoAlert(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
