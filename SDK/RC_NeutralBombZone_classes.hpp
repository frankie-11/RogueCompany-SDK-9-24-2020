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

// BlueprintGeneratedClass NeutralBombZone.NeutralBombZone_C
// 0x0030 (0x0480 - 0x0450)
class ANeutralBombZone_C : public AKSNeutralBombZone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Z_Axis;                                                   // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Beacon;                                                // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ZoneMaterial;                                             // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BeaconMaterial;                                           // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AKSCharacterBase*                            BombHolderWhenArming;                                     // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NeutralBombZone.NeutralBombZone_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UpdateZoneMaterial();
	void RoundSetup(struct FRoundInitState* RoundInitState);
	void TeamUpdated();
	void Activated(bool* bActive);
	void BombStateChanged(struct FKSNeutralBombState* BombState);
	void ExecuteUbergraph_NeutralBombZone(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
