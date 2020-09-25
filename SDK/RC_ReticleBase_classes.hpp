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

// WidgetBlueprintGeneratedClass ReticleBase.ReticleBase_C
// 0x0010 (0x0240 - 0x0230)
class UReticleBase_C : public UUserWidget
{
public:
	class UImage*                                      LoneDot;                                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              LowAmmoThreshold;                                         // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CriticallyLowAmmoThreshold;                               // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReticleBase.ReticleBase_C");
		return ptr;
	}


	void GetAmmoState(class UKSWeaponComponent** NewParam, EAmmoState* Return_Value);
	void HitConfirm();
	void ForceADS(bool* Active);
	void GrenadeCook(bool* Active, float* TickPeriod);
	void ChangeADS(bool* Active);
	void KillConfirm();
	void Headshot();
	void UpdateOffset(float* Offset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
