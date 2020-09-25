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

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetAlignment
struct UWBP_ItemInfoContainer_C_SetAlignment_Params
{
};

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetItemRarityInfo
struct UWBP_ItemInfoContainer_C_SetItemRarityInfo_Params
{
	class UPlatformInventoryItem**                     CosmeticItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetInfoFieldData
struct UWBP_ItemInfoContainer_C_SetInfoFieldData_Params
{
	class UPlatformInventoryItem**                     CosmeticItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.PreConstruct
struct UWBP_ItemInfoContainer_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.Construct
struct UWBP_ItemInfoContainer_C_Construct_Params
{
};

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.ExecuteUbergraph_WBP_ItemInfoContainer
struct UWBP_ItemInfoContainer_C_ExecuteUbergraph_WBP_ItemInfoContainer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
