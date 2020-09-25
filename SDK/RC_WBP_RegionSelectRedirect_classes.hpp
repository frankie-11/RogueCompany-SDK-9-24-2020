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

// WidgetBlueprintGeneratedClass WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C
// 0x0018 (0x04F0 - 0x04D8)
class UWBP_RegionSelectRedirect_C : public UKSRegionSelectModal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_RegionSelect_C*                         WBP_RegionSelect;                                         // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAkAudioEvent*                               ShowSFX;                                                  // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C");
		return ptr;
	}


	void InitializeWidget(class APUMG_HUD** HUD);
	void Handle_Region_Selected();
	void Handle_Region_Select_Entries_Created();
	void InitializeWidgetNavigation();
	void OnShown();
	void ExecuteUbergraph_WBP_RegionSelectRedirect(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
