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

// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.Get Shop Item Type
struct UWBP_InGameJobSelect_Loadout_Primary_C_Get_Shop_Item_Type_Params
{
	EShopItemType                                      Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.SetItemSlot
struct UWBP_InGameJobSelect_Loadout_Primary_C_SetItemSlot_Params
{
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.PurchaseAcknowledge
struct UWBP_InGameJobSelect_Loadout_Primary_C_PurchaseAcknowledge_Params
{
};

// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.RefreshData
struct UWBP_InGameJobSelect_Loadout_Primary_C_RefreshData_Params
{
	class AKSPlayerShop**                              Player_Shop;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.Construct
struct UWBP_InGameJobSelect_Loadout_Primary_C_Construct_Params
{
};

// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.PreConstruct
struct UWBP_InGameJobSelect_Loadout_Primary_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Primary
struct UWBP_InGameJobSelect_Loadout_Primary_C_ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Primary_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.OnUnhovered__DelegateSignature
struct UWBP_InGameJobSelect_Loadout_Primary_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.OnHovered__DelegateSignature
struct UWBP_InGameJobSelect_Loadout_Primary_C_OnHovered__DelegateSignature_Params
{
	class UKSItem**                                    KSItem_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
