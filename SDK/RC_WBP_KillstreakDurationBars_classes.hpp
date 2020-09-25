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

// WidgetBlueprintGeneratedClass WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C
// 0x0029 (0x0531 - 0x0508)
class UWBP_KillstreakDurationBars_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                DurationBarContainer;                                     // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AKSPlayerState*                              KSPlayerState;                                            // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UWBP_DurationBar_C*>                  DurationBars;                                             // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      ModsDirty;                                                // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C");
		return ptr;
	}


	void DestroyUnusedDurationBars(TArray<class UKSModInst_Activated*>* PlayerMods);
	void GetDurationBarForModInstance(class UKSModInst_Activated** Activated_Mod, class UWBP_DurationBar_C** Duration_Bar);
	void PostSetPawn();
	void CloseGate_PawnRetry();
	void HandleModsUpdated(class AKSCharacter** KSCharacterRef);
	void HandlePlayerDownedOrEliminated(class AKSPlayerState** KSPlayerState);
	void PreClearPawn();
	void OnKilled(class AKSCharacterBase** KillerCharacter, class AKSCharacterBase** KilledCharacter);
	void HandleOnViewedPawnChanged(class AKSPlayerController** Controller, class AActor** OldViewTarget, class AActor** NewViewTarget);
	void HandleProjectileFired(float* DurationTime, class UKSWeaponAsset** WeaponAsset);
	void CustomEvent_1(class AActor** DestroyedActor);
	void ResetDurationBars();
	void ExecuteUbergraph_WBP_KillstreakDurationBars(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
