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

// Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.RefreshData
struct UBuyMenuItemWidgetInterface_C_RefreshData_Params
{
	class AKSPlayerShop**                              Player_Shop;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.PurchaseAcknowledge
struct UBuyMenuItemWidgetInterface_C_PurchaseAcknowledge_Params
{
};

// Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.Get Shop Item Type
struct UBuyMenuItemWidgetInterface_C_Get_Shop_Item_Type_Params
{
	EShopItemType                                      Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
