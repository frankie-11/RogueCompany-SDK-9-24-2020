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

// WidgetBlueprintGeneratedClass WBP_StorePriceDisplay.WBP_StorePriceDisplay_C
// 0x0008 (0x0238 - 0x0230)
class UWBP_StorePriceDisplay_C : public UUserWidget
{
public:
	class UHorizontalBox*                              PricesBox;                                                // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StorePriceDisplay.WBP_StorePriceDisplay_C");
		return ptr;
	}


	void SetStorePrices(TArray<class UPUMG_StoreItemPrice*>* Prices, TArray<class UPUMG_PortalOffer*>* PortalOffers);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
