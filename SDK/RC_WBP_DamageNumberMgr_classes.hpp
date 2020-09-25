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

// WidgetBlueprintGeneratedClass WBP_DamageNumberMgr.WBP_DamageNumberMgr_C
// 0x0010 (0x0558 - 0x0548)
class UWBP_DamageNumberMgr_C : public UKSViewedPawnDamageDisplay
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                MyCanvasPanel;                                            // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DamageNumberMgr.WBP_DamageNumberMgr_C");
		return ptr;
	}


	class UDamageNumberDisplayWidget* GetDamageNumberWidgetInstance();
	void Construct();
	void ExecuteUbergraph_WBP_DamageNumberMgr(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
