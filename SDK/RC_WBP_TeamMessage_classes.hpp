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

// WidgetBlueprintGeneratedClass WBP_TeamMessage.WBP_TeamMessage_C
// 0x0030 (0x0508 - 0x04D8)
class UWBP_TeamMessage_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                AnnouncementWrapper;                                      // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                CurrentTeamAdvantage;                                     // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPUMG_Widget*                                CurrentAnnouncement;                                      // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UPUMG_Widget*>                        QueuedAnnouncments;                                       // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TeamMessage.WBP_TeamMessage_C");
		return ptr;
	}


	void AbortCurrentAnnouncement();
	void ShowAnnouncement(struct FAnnouncementData* Announcement);
	void HandleOnAnnouncement(struct FAnnouncementData* Announcement);
	void CheckShouldShow(struct FAnnouncementData* AnnouncementData, bool* Return);
	void Construct();
	void OnAnnouncementFinished();
	void OnKillCamEnabled(bool* bEnabled);
	void HandleRoundSetup(struct FRoundInitState* RoundInitState);
	void HandleQueuedAnnoucements();
	void ExecuteUbergraph_WBP_TeamMessage(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
