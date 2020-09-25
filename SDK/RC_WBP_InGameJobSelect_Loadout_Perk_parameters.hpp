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

// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.Get Shop Item Type
struct UWBP_InGameJobSelect_Loadout_Perk_C_Get_Shop_Item_Type_Params
{
	EShopItemType                                      Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.SetItemSlot
struct UWBP_InGameJobSelect_Loadout_Perk_C_SetItemSlot_Params
{
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.PurchaseAcknowledge
struct UWBP_InGameJobSelect_Loadout_Perk_C_PurchaseAcknowledge_Params
{
};

// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.RefreshData
struct UWBP_InGameJobSelect_Loadout_Perk_C_RefreshData_Params
{
	class AKSPlayerShop**                              Player_Shop;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Perk
struct UWBP_InGameJobSelect_Loadout_Perk_C_ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Perk_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.OnUnhovered__DelegateSignature
struct UWBP_InGameJobSelect_Loadout_Perk_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.OnHovered__DelegateSignature
struct UWBP_InGameJobSelect_Loadout_Perk_C_OnHovered__DelegateSignature_Params
{
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
