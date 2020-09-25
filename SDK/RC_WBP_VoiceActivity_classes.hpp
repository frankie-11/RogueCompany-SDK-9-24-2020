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

// WidgetBlueprintGeneratedClass WBP_VoiceActivity.WBP_VoiceActivity_C
// 0x0060 (0x05A8 - 0x0548)
class UWBP_VoiceActivity_C : public UKSVoiceActivityWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                VoiceBox;                                                 // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<struct FString, class UWBP_VoiceParticipantElement_C*> AccountWidgetMap;                                         // 0x0558(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VoiceActivity.WBP_VoiceActivity_C");
		return ptr;
	}


	void GetNameForMctsId(int64_t* MctsId, struct FText* Name);
	void Voice_Participant_Updated(struct FString* Account, bool* IsTalking, bool* IsMuted);
	void AddVoiceParticipant(struct FString* Account);
	void RemoveVoiceParticipant(struct FString* Account);
	void InitializeWidget(class APUMG_HUD** HUD);
	void OnVoiceParticipantRemoved(struct FString* AccountId);
	void OnVoiceParticipantAdded(struct FString* AccountId);
	void OnVoiceParticipantUpdated(struct FString* AccountId, bool* bIsTalking, bool* bIsMuted);
	void ExecuteUbergraph_WBP_VoiceActivity(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
