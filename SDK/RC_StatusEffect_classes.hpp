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

// WidgetBlueprintGeneratedClass StatusEffect.StatusEffect_C
// 0x0018 (0x0520 - 0x0508)
class UStatusEffect_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  StatusText;                                               // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTimerHandle                                HideTimerHandle;                                          // 0x0518(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatusEffect.StatusEffect_C");
		return ptr;
	}


	void StopHideTimer();
	void StartHideTimer(float* Time);
	void PreClearPawn();
	void PostSetPawn();
	void RevealStatus(bool* Revealed, bool* Permanent);
	void OnStuck();
	void HideTimeExpired();
	void UpdateRevealStatus(bool* IsRevealed);
	void ExecuteUbergraph_StatusEffect(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
