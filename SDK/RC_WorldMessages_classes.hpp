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

// WidgetBlueprintGeneratedClass WorldMessages.WorldMessages_C
// 0x0048 (0x0278 - 0x0230)
class UWorldMessages_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                Container;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      Show_Instant_Kill_Downs;                                  // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UCombatLogElement_C*>                 MessagePool;                                              // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCombatLogData>                      QueuedMessages;                                           // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UCombatLogElement_C*>                 ActiveMessages;                                           // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WorldMessages.WorldMessages_C");
		return ptr;
	}


	void GetPooledMessage(class UCombatLogElement_C** Message);
	void ReturnPooledMessage(class UCombatLogElement_C** Message);
	void SFXKillFeed(class AActor** Victim, class AActor** Instigator);
	void Construct();
	void DeathMessage(struct FCombatEventInfo* EventInfo);
	void DownMessage(struct FCombatEventInfo* EventInfo, int* ExpBonus);
	void ResetMessages(struct FRoundInitState* RoundInitState);
	void OnRoundOver(class AKSGameState** GameState, struct FRoundResult* RoundResult);
	void OnKillCamEnabled(bool* bEnabled);
	void OnKillCamViewedPawn(class APawn** Pawn);
	void HandleQueuedMessage();
	void ExecuteUbergraph_WorldMessages(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
