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

// WidgetBlueprintGeneratedClass BrightLobbyHeader.BrightLobbyHeader_C
// 0x0028 (0x0500 - 0x04D8)
class UBrightLobbyHeader_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNewMenuMain_C*                              NewMenuMain;                                              // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<EPUMG_LoginState>                           LoggedOutStates;                                          // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPUMG_LoginDataFactory*                      LoginDataFactory;                                         // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BrightLobbyHeader.BrightLobbyHeader_C");
		return ptr;
	}


	void InitializeWidget(class APUMG_HUD** HUD);
	void StartShowSequence(struct FName* FromRoute, struct FName* ToRoute);
	void HandleLobbyStartMenuInputAction();
	void HandleLoginStateChange(EPUMG_LoginState* LoginState);
	void ExecuteUbergraph_BrightLobbyHeader(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
