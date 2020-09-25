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

// WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C
// 0x0028 (0x0258 - 0x0230)
class UWBP_QuickPlay_QueueTypeHeader_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  QueueType;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       QueueTypeTxt;                                             // 0x0240(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C");
		return ptr;
	}


	void Construct();
	void PreConstruct(bool* IsDesignTime);
	void SetHeaderText(struct FText* QueueType);
	void ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
