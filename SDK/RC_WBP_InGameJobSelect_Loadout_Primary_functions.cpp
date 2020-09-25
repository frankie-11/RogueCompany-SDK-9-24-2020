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

// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.Get Shop Item Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EShopItemType                  Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_Loadout_Primary_C::Get_Shop_Item_Type(EShopItemType* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.Get Shop Item Type");

	UWBP_InGameJobSelect_Loadout_Primary_C_Get_Shop_Item_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.SetItemSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                KSItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_Loadout_Primary_C::SetItemSlot(class UKSItem** KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.SetItemSlot");

	UWBP_InGameJobSelect_Loadout_Primary_C_SetItemSlot_Params params;
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.PurchaseAcknowledge
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_Primary_C::PurchaseAcknowledge()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.PurchaseAcknowledge");

	UWBP_InGameJobSelect_Loadout_Primary_C_PurchaseAcknowledge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.RefreshData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerShop**          Player_Shop                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_Loadout_Primary_C::RefreshData(class AKSPlayerShop** Player_Shop)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.RefreshData");

	UWBP_InGameJobSelect_Loadout_Primary_C_RefreshData_Params params;
	params.Player_Shop = Player_Shop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_Primary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.Construct");

	UWBP_InGameJobSelect_Loadout_Primary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_Loadout_Primary_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.PreConstruct");

	UWBP_InGameJobSelect_Loadout_Primary_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Primary
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_Loadout_Primary_C::ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Primary(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Primary");

	UWBP_InGameJobSelect_Loadout_Primary_C_ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Primary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_Primary_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.OnUnhovered__DelegateSignature");

	UWBP_InGameJobSelect_Loadout_Primary_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                KSItem_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_Loadout_Primary_C::OnHovered__DelegateSignature(class UKSItem** KSItem_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C.OnHovered__DelegateSignature");

	UWBP_InGameJobSelect_Loadout_Primary_C_OnHovered__DelegateSignature_Params params;
	params.KSItem_ = KSItem_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
