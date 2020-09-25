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

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.GetStoreIconForSize
struct UWBP_StoreItemInterior_C_GetStoreIconForSize_Params
{
	class UPlatformInventoryItem**                     InventoryItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetRarityDisplay
struct UWBP_StoreItemInterior_C_SetRarityDisplay_Params
{
	class UPlatformInventoryItem**                     InventoryItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetStoreItem
struct UWBP_StoreItemInterior_C_SetStoreItem_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.PreConstruct
struct UWBP_StoreItemInterior_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentHovered
struct UWBP_StoreItemInterior_C_OnParentHovered_Params
{
};

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentUnhovered
struct UWBP_StoreItemInterior_C_OnParentUnhovered_Params
{
};

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.ExecuteUbergraph_WBP_StoreItemInterior
struct UWBP_StoreItemInterior_C_ExecuteUbergraph_WBP_StoreItemInterior_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
