#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SceneComponentPools.EPoolOverflowHandling
enum class EPoolOverflowHandling : uint8_t
{
	EPoolOverflowHandling__IgnoreNewRequest = 0,
	EPoolOverflowHandling__KillExistingRequest = 1,
	EPoolOverflowHandling__CreateStandaloneInstance = 2,
	EPoolOverflowHandling__EPoolOverflowHandling_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SceneComponentPools.PoolAttachmentInfo
// 0x0024
struct FPoolAttachmentInfo
{
	struct FName                                       AttachPoint;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
