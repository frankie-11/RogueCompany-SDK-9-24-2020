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

// WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C
// 0x0100 (0x05D8 - 0x04D8)
class UWBP_QuickPlay_QueueButton_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            hoveranim;                                                // 0x04E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ButtonText;                                               // 0x04E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      WarningIcon;                                              // 0x04F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_Graphic_Button_C*                       WBP_Graphic_Button;                                       // 0x04F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnQueueBtnClicked;                                        // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0500(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnQueueBtnHovered;                                        // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0510(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnQueueBtnUnhovered;                                      // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0520(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FClientQueueInfo                            QueueInfo;                                                // 0x0530(0x00A8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C");
		return ptr;
	}


	void UpdateStatus();
	bool NavigateConfirm();
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature();
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature(bool* IsGamepad);
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature();
	void InitializeWidget(class APUMG_HUD** HUD);
	void Construct();
	void OnButtonHovered();
	void OnButtonUnhovered();
	void GamepadHover();
	void GamepadUnhover();
	void GamepadConfirm();
	void SetButtonActive(bool* bIsActive);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_WBP_QuickPlay_QueueButton(int* EntryPoint);
	void OnQueueBtnUnhovered__DelegateSignature(class UWidget** UnhoverWidget);
	void OnQueueBtnHovered__DelegateSignature(class UWidget** HoveredWidget);
	void OnQueueBtnClicked__DelegateSignature(int* QueueId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
