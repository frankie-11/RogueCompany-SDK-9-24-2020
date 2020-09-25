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

// WidgetBlueprintGeneratedClass WBP_ControllerPrompt.WBP_ControllerPrompt_C
// 0x0038 (0x0510 - 0x04D8)
class UWBP_ControllerPrompt_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Prompt;                                                   // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<EGamepadPromptType>                    PromptType;                                               // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // 0x04EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Button;                                                   // 0x04F8(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ControllerPrompt.WBP_ControllerPrompt_C");
		return ptr;
	}


	void SetButtonPrompt(struct FKey* Button);
	void SetIsCancel();
	void SetIsConfirm();
	void SetPromptFromButton(struct FKey* Button);
	void UpdateFromSetValues();
	void SetInputAction(struct FName* ActionName);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_ControllerPrompt(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
