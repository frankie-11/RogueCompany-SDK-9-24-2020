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

// WidgetBlueprintGeneratedClass HitIndictor.HitIndictor_C
// 0x0020 (0x0528 - 0x0508)
class UHitIndictor_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                HitCanvas;                                                // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UHitIndicatorSub_C*>                  HitIndicatorPool;                                         // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HitIndictor.HitIndictor_C");
		return ptr;
	}


	void ReturnToPool(class UHitIndicatorSub_C** HitIndicatorSub);
	void Init_Indicator_Pool();
	void CreateHitIndicator(class UClass** DamageType, struct FVector* DamageOrigin, bool* HitArmor);
	void Construct();
	void On_Viewed_Pawn_Take_Damage(float* DamageAmount, class UClass** DamageTypeClass, class AActor** DamageCauser, struct FVector* DamageOrigin);
	void HandleViewedPawnTakeArmorDamage(float* DamageAmount, class UClass** DamageTypeClass, class AActor** DamageCauser, struct FVector* DamageOrigin);
	void ExecuteUbergraph_HitIndictor(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
