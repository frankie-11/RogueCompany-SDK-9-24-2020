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

// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.PostSetPawn
struct UWBP_InventoryFullWarning_C_PostSetPawn_Params
{
};

// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.Handle Inventory Full
struct UWBP_InventoryFullWarning_C_Handle_Inventory_Full_Params
{
	class AKSWeaponAssetDrop**                         WeaponAssetDrop;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.ExecuteUbergraph_WBP_InventoryFullWarning
struct UWBP_InventoryFullWarning_C_ExecuteUbergraph_WBP_InventoryFullWarning_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
