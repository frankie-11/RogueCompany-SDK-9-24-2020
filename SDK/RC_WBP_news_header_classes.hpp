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

// WidgetBlueprintGeneratedClass WBP_news_header.WBP_news_header_C
// 0x0010 (0x0578 - 0x0568)
class UWBP_news_header_C : public UKSSettingsSection
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  SettingSectionDisplayName;                                // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_news_header.WBP_news_header_C");
		return ptr;
	}


	void Add_Settings_Group_Widget(class UKSSettingsGroup** Settings_Group_Widget);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_news_header(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
