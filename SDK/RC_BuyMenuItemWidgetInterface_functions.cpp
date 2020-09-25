// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.RefreshData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerShop**          Player_Shop                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuyMenuItemWidgetInterface_C::RefreshData(class AKSPlayerShop** Player_Shop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.RefreshData");

	UBuyMenuItemWidgetInterface_C_RefreshData_Params params;
	params.Player_Shop = Player_Shop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.PurchaseAcknowledge
// (Public, BlueprintCallable, BlueprintEvent)

void UBuyMenuItemWidgetInterface_C::PurchaseAcknowledge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.PurchaseAcknowledge");

	UBuyMenuItemWidgetInterface_C_PurchaseAcknowledge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.Get Shop Item Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EShopItemType                  Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBuyMenuItemWidgetInterface_C::Get_Shop_Item_Type(EShopItemType* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.Get Shop Item Type");

	UBuyMenuItemWidgetInterface_C_Get_Shop_Item_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
