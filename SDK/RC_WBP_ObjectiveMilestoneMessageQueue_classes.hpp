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

// WidgetBlueprintGeneratedClass WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C
// 0x0019 (0x0519 - 0x0500)
class UWBP_ObjectiveMilestoneMessageQueue_C : public UKSAnnouncementQueueWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                AnnouncementWrapper;                                      // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_TeamMessageObjective_C*                 CurrentAnnoucement;                                       // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      IsKindOfBusy;                                             // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C");
		return ptr;
	}


	void WrapUpCurrentMessages();
	void Construct();
	void OnAnnouncementReady();
	void SetToNotBusy();
	void OnKillCamEnabled(bool* bEnabled);
	void HandleRoundSetup(struct FRoundInitState* RoundInitState);
	void OnRoundOverDel_Event_1(class AKSGameState** GameState, struct FRoundResult* RoundResult);
	void ResetDisplay();
	void ExecuteUbergraph_WBP_ObjectiveMilestoneMessageQueue(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
