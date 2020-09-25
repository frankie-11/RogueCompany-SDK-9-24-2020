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

// BlueprintGeneratedClass BP_GameHUDNew.BP_GameHUDNew_C
// 0x00C8 (0x0680 - 0x05B8)
class ABP_GameHUDNew_C : public AKSGameHUDNew
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameHUDWidget_C*                            HUD_Widget;                                               // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              HUDXRatio;                                                // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDYRatio;                                                // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      AccuracyDebugMode;                                        // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSwimmingChanged;                                        // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x05D9(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    HUDMessage;                                               // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x05F0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TMap<class UUserWidget*, struct FString>           WidgetsToAddToHUD;                                        // 0x0600(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnRuleWidgetCreated;                                      // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0650(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray<struct FAsyncWidgetInfoParams>              AsyncWidgetInfos;                                         // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUserWidget*                                 WatermarkWidget;                                          // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCINE_Walkin_Widget_C*                       WalkInWidget;                                             // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameHUDNew.BP_GameHUDNew_C");
		return ptr;
	}


	void GetFocusableWidgets(TArray<class UPUMG_Widget*>* FocusableWidgets);
	class UKSContextBarWidget* GetContextBarWidget();
	void ToggleWatermarkDisplay(bool* Show);
	void GetAsyncWidgetsForString(struct FString* String, TArray<class UUserWidget*>* UserWidgets);
	void SetupJobSelectionManager();
	class UPUMG_PopupManager* GetPopupManager();
	void EvaluateFocus();
	void OnLoaded_9A584D3E423F982EA7A073A29FBFC2FD(class UClass** Loaded);
	void ReceiveBeginPlay();
	void SetUIFocus();
	void HandleReturnToHomeClick();
	void OnShowHUD();
	void OnHideHUD();
	void Spawn_Tutorial_Widget();
	void OnToggleHUD();
	void OnToggleTopBar(bool* ShouldShow);
	void SetHUDVisible(bool* bVisible);
	void CreateGameRuleWidget(struct FKSWidgetInfoParams* WidgetInfoParams);
	void BroadcastWidgetMessage(struct FName* Message);
	void BindEventToWidgetMessages(struct FScriptDelegate* Callback);
	void HandleOnPhaseChanged(struct FName* NewPhaseName, struct FName* PreviousPhaseName);
	void HandleOpenTextChat(bool* BeginChatCommand);
	void DisplayWatermark();
	void OnAsyncWidgetInfoLoaded(class UClass** LoadedClass, struct FString* ParentWidget, class AKSWidgetInfoActor** WidgetInfoActor);
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player);
	void ApplySafeFrameScale(float* SafeFrameScale);
	void WalkinAnim(class AWalkinCinematicCharacter_C** Player01, class AWalkinCinematicCharacter_C** Player02, class AWalkinCinematicCharacter_C** Player03, class AWalkinCinematicCharacter_C** Player04);
	void ExecuteUbergraph_BP_GameHUDNew(int* EntryPoint);
	void OnRuleWidgetCreated__DelegateSignature(class UUserWidget** UserWidget, struct FString* Placement);
	void HUDMessage__DelegateSignature(struct FName* Message);
	void OnSwimmingChanged__DelegateSignature(bool* IsSwimming);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
