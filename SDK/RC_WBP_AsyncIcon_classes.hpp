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

// WidgetBlueprintGeneratedClass WBP_AsyncIcon.WBP_AsyncIcon_C
// 0x00B0 (0x0588 - 0x04D8)
class UWBP_AsyncIcon_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UKSAsyncImage*                               Icon;                                                     // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UThrobber*                                   LoadingThrobber;                                          // 0x04E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnIconUpdated;                                            // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04F0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FSlateBrush                                 DefaultBrush;                                             // 0x0500(0x0088) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AsyncIcon.WBP_AsyncIcon_C");
		return ptr;
	}


	void Set_Brush_from_Texture_on_Item(class UKSItem** Item, bool* MatchSize);
	void Get_Material(class UMaterialInstanceDynamic** MaterialInstanceDynamic);
	void SetMaterialToUse(class UMaterialInterface** Material);
	void ApplyDefaultBrush();
	void SetBrushFromSoftTexture(bool* MatchSize);
	void SetBrushFromTexture(class UTexture2D** Texture, bool* MatchSize);
	void SetBrushFromItemIcon(class UPlatformInventoryItem** Item, bool* MatchSize);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void OnStartLoad(class UPUMG_AsyncImage** Image);
	void OnFinishLoad(class UPUMG_AsyncImage** Image);
	void ExecuteUbergraph_WBP_AsyncIcon(int* EntryPoint);
	void OnIconUpdated__DelegateSignature(class UTexture2D** Texture);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
