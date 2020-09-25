#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ItemPickup.WBP_ItemPickup_C.Construct
struct UWBP_ItemPickup_C_Construct_Params
{
};

// Function WBP_ItemPickup.WBP_ItemPickup_C.OnItemPickedUp_Event_1
struct UWBP_ItemPickup_C_OnItemPickedUp_Event_1_Params
{
	class AKSCharacter**                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSItemDrop**                                ItemDrop;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemPickup.WBP_ItemPickup_C.Tick
struct UWBP_ItemPickup_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemPickup.WBP_ItemPickup_C.ExecuteUbergraph_WBP_ItemPickup
struct UWBP_ItemPickup_C_ExecuteUbergraph_WBP_ItemPickup_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
