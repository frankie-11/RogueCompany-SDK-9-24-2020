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

// ScriptStruct MultiMagDropInfo.MultiMagDropInfo
// 0x0060
struct FMultiMagDropInfo
{
	struct FName                                       DropBone_2_2CFC9A8F4F2664ED22B08296FB92E731;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DropBoneOnWeapon_5_BC9F11844B79F021078C9BA149D169AA;      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 DropMesh_15_6B58EE524E651CF10CEB8EA7288C667F;             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  DropMultiMagSpawnOffset_21_594C51714E03815BC1D89E92B11A2550;// 0x0020(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DropMultiMagVelocityOverride_22_71C6708D4D1C99CFB8A9DF90ED02BA49;// 0x0050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
