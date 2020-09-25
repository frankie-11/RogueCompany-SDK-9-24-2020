#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CosmeticSlotDetails.CosmeticSlotDetails
// 0x0018
struct FCosmeticSlotDetails
{
	class UKSItem*                                     CosmeticItem_2_B7D9C0A442E79C8543A25E851BA3CD93;          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSJobItem*                                  AssociatedJobItem_5_C4CDDC7E47E0690DC2FACCA2B2E68A1B;     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMercCosmeticSlot                                  MercCosmeticSlot_8_2915050748C9085E1DD7BC8F113D7A53;      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponSlot                                        WeaponSlot_11_B5AA9D88414CFC0B28DE789456A68BDD;           // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SlotPosition_14_A7CCEA944C2A098D2B251C884A3D7FC0;         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
