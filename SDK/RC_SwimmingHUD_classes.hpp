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

// WidgetBlueprintGeneratedClass SwimmingHUD.SwimmingHUD_C
// 0x0010 (0x0518 - 0x0508)
class USwimmingHUD_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBreathMeter_C*                              BreathMeter;                                              // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SwimmingHUD.SwimmingHUD_C");
		return ptr;
	}


	void Construct();
	void SwimmingChanged(bool* bIsSwimming);
	void PostSetPawn();
	void PreClearPawn();
	void ExecuteUbergraph_SwimmingHUD(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
