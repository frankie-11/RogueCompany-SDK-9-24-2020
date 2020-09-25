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

// WidgetBlueprintGeneratedClass StatusEffectPermant.StatusEffectPermant_C
// 0x0011 (0x0519 - 0x0508)
class UStatusEffectPermant_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  StatusText;                                               // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      IsSpectating;                                             // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatusEffectPermant.StatusEffectPermant_C");
		return ptr;
	}


	void CustomEvent_1(class AKSPlayerController** Controller, class AActor** OldViewTarget, class AActor** NewViewTarget);
	void PreClearPawn();
	void RevealStatus(bool* Revealed, bool* Permanent);
	void PostSetPawn();
	void CustomEvent_2(bool* IsSpectating);
	void Construct();
	void ExecuteUbergraph_StatusEffectPermant(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
