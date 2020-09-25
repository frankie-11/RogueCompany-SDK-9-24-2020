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

// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.Refresh Rarity Text
struct UWBP_ItemInfoContainer_Centered_C_Refresh_Rarity_Text_Params
{
};

// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetItemRarityInfo
struct UWBP_ItemInfoContainer_Centered_C_SetItemRarityInfo_Params
{
	class UPlatformInventoryItem**                     CosmeticItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetInfoFieldData
struct UWBP_ItemInfoContainer_Centered_C_SetInfoFieldData_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.PreConstruct
struct UWBP_ItemInfoContainer_Centered_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.ExecuteUbergraph_WBP_ItemInfoContainer_Centered
struct UWBP_ItemInfoContainer_Centered_C_ExecuteUbergraph_WBP_ItemInfoContainer_Centered_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
