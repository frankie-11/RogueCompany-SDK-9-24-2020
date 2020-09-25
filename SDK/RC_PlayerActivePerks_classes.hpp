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

// WidgetBlueprintGeneratedClass PlayerActivePerks.PlayerActivePerks_C
// 0x0028 (0x0530 - 0x0508)
class UPlayerActivePerks_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              PerkSlotWrapper;                                          // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AKSPlayerState*                              BoundPlayerState;                                         // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsDirty;                                                  // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AKSCharacter*                                BoundPawn;                                                // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerActivePerks.PlayerActivePerks_C");
		return ptr;
	}


	void PostSetPawn();
	void PreClearPawn();
	void HandleModsUpdated(class AKSCharacter** KSCharacter);
	void HandleDownedElim(class AKSPlayerState** KSPlayerState);
	void Bind_Callbacks_to_Player_State(class AKSPlayerState** In_Player_State);
	void Unbind_Callbacks_to_Player_State();
	void Bind_Callbacks_to_Pawn(class AKSCharacter** In_Pawn);
	void Unbind_Callbacks_to_Pawn();
	void PreClearPlayerState();
	void PostSetPlayerState();
	void SetPlayerStateUIRelevanceChanged();
	void Try_To_Show_On_UI_Relevant();
	void ExecuteUbergraph_PlayerActivePerks(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
