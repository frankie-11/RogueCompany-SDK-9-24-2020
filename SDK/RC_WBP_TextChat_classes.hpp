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

// WidgetBlueprintGeneratedClass WBP_TextChat.WBP_TextChat_C
// 0x0051 (0x0559 - 0x0508)
class UWBP_TextChat_C : public UKSTextChatWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TextChat_ChatWindow_C*                  ChatWindow;                                               // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     ClickCatcher;                                             // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_TextChat_Input_C*                       TextInput;                                                // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      IsEditingActive;                                          // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChatMessageAutoHideDelay;                                 // 0x052C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	struct FPUMG_ActiveChatChannelData                 CachedCurrentChannel;                                     // 0x0530(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      NeedToClearFocus;                                         // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                CancelKeys;                                               // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      WaitForCancelReleaseToClearFocus;                         // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TextChat.WBP_TextChat_C");
		return ptr;
	}


	void IsTextChatEnabled(bool* IsEnabled);
	void HandleTextChatEnabledApplied(bool* Value);
	void AddCancelKey(struct FKey* Key);
	void ConsumeCancelInputReleased();
	void IsAnyCancelKeyDown(bool* AnyKeyDown);
	void AddAllCancelKeys(TArray<struct FName>* Actions);
	void ProcessDelayedFocusClear();
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void HandleSubmitTextInput(struct FText* Text);
	bool CanChatInChannel(EPUMG_ChatChannel* Channel);
	void GetDefaultChannel(EPUMG_ChatChannel* DefaultChannel);
	void HandleChannelChanged(struct FPUMG_ActiveChatChannelData* ChannelData);
	void HandleChatMessage(struct FPUMG_ChatData* Message);
	void DisableInputListeners();
	void EnableInputListeners();
	void ConsumeCancelInputPressed();
	void SetUIFocus(bool* IsFocused);
	void FinishTextChat(bool* ShouldSubmitText, bool* WaitForCancelRelease, struct FText* InputText);
	void StartTextChat(bool* BeginChatCommand);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void OpenTextChat(bool* BeginChatCommand);
	void OnTextCommitted(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod);
	void InitializeWidgetNavigation();
	void HandleChatMessageReceived(struct FPUMG_ChatData* ReceivedMessage);
	void OnChannelChanged(struct FPUMG_ActiveChatChannelData* ChatChannelData);
	void HandleChatChannelJoined(EPUMG_ChatChannel* Channel);
	void HandleChatChannelLeft(EPUMG_ChatChannel* Channel);
	void InitializeWidget(class APUMG_HUD** HUD);
	void OnCancelButtonPressed(struct FKey* Key);
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player);
	void HandleCloseTextChat();
	void HandleTextChatEnabledChanged();
	void ExecuteUbergraph_WBP_TextChat(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
