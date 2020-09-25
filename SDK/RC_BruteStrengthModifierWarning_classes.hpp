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

// WidgetBlueprintGeneratedClass BruteStrengthModifierWarning.BruteStrengthModifierWarning_C
// 0x0010 (0x04E8 - 0x04D8)
class UBruteStrengthModifierWarning_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      PerkIcon;                                                 // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BruteStrengthModifierWarning.BruteStrengthModifierWarning_C");
		return ptr;
	}


	void InitializeWidget(class APUMG_HUD** HUD);
	void OnHide();
	void OnFade();
	void ExecuteUbergraph_BruteStrengthModifierWarning(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
