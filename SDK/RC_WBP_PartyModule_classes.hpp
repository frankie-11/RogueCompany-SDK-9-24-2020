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

// WidgetBlueprintGeneratedClass WBP_PartyModule.WBP_PartyModule_C
// 0x0080 (0x0558 - 0x04D8)
class UWBP_PartyModule_C : public UKSPartyManagerWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_LeaveParty_C*                           LeaveParty;                                               // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_PartyModuleCardSlot_C*                  SlotA;                                                    // 0x04E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_PartyModuleCardSlot_C*                  SlotB;                                                    // 0x04F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_PartyModuleCardSlot_C*                  SlotC;                                                    // 0x04F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_PartyModuleCardSlot_C*                  SlotD;                                                    // 0x0500(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_ModuleHeader_C*                         WBP_ModuleHeader;                                         // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_VoiceActivityContainer_C*               WBP_VoiceActivityContainer;                               // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnPlayerCardSelected;                                     // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0518(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray<struct FPUMG_PartyMemberData>               CachedPartyMembers;                                       // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPlayerCardBackButton;                                   // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0538(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPartyLeaveVisibilityChange;                             // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0548(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PartyModule.WBP_PartyModule_C");
		return ptr;
	}


	void GetPrimaryFocus(class UWBP_PartyModuleCardSlot_C** PrimaryFocus);
	void FindPlayerCardByVoiceId(struct FString* VoiceId, class UWBP_player_card_module_C** PlayerCard);
	void Get_Navigation_Widgets(TArray<class UPUMG_Widget*>* Return_Value);
	void Get_Other_Party_Members(TArray<struct FPUMG_PartyMemberData>* Party_Members, TArray<struct FPUMG_PartyMemberData>* Return_Value);
	void ApplyPartyData(TArray<struct FPUMG_PartyMemberData>* PartyMembers);
	void InitializeWidget(class APUMG_HUD** HUD);
	void VoiceParticipantAdded(struct FString* AccountId);
	void VoiceParticipantRemoved(struct FString* AccountId);
	void VoiceParticipantUpdated(struct FString* AccountId, bool* IsTalking, bool* IsMuted);
	void VoiceStateChange(EKSVoiceActivityAudioState* State);
	void Handle_Player_Card_Clicked(class UWBP_player_card_module_C** Selected_Player_Card);
	void Handle_Player_Card_Back();
	void HandlePartyLeaveVisibilityChange(bool* Visible);
	void ExecuteUbergraph_WBP_PartyModule(int* EntryPoint);
	void OnPartyLeaveVisibilityChange__DelegateSignature(bool* Visible);
	void OnPlayerCardBackButton__DelegateSignature();
	void OnPlayerCardSelected__DelegateSignature(class UWBP_player_card_module_C** Selected_Player_Card);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
