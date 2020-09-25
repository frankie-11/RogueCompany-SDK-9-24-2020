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

// Function KevinTestPage.KevinTestPage_C.Intialize Item Helper Example
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSLobbyHUDNew**         HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKevinTestPage_C::Intialize_Item_Helper_Example(class AKSLobbyHUDNew** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function KevinTestPage.KevinTestPage_C.Intialize Item Helper Example");

	UKevinTestPage_C_Intialize_Item_Helper_Example_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KevinTestPage.KevinTestPage_C.OnShowPurchaseModal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_StoreItemPrice**   Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKevinTestPage_C::OnShowPurchaseModal(class UPUMG_StoreItem** Item, class UPUMG_StoreItemPrice** Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function KevinTestPage.KevinTestPage_C.OnShowPurchaseModal");

	UKevinTestPage_C_OnShowPurchaseModal_Params params;
	params.Item = Item;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KevinTestPage.KevinTestPage_C.OnNeedMoreMoney
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StorePurchaseRequest** Purchase_Request               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKevinTestPage_C::OnNeedMoreMoney(class UPUMG_StorePurchaseRequest** Purchase_Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function KevinTestPage.KevinTestPage_C.OnNeedMoreMoney");

	UKevinTestPage_C_OnNeedMoreMoney_Params params;
	params.Purchase_Request = Purchase_Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KevinTestPage.KevinTestPage_C.OnVendorReceived
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   VendorIds                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKevinTestPage_C::OnVendorReceived(int* GroupId, TArray<int>* VendorIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KevinTestPage.KevinTestPage_C.OnVendorReceived");

	UKevinTestPage_C_OnVendorReceived_Params params;
	params.GroupId = GroupId;
	params.VendorIds = VendorIds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KevinTestPage.KevinTestPage_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UKevinTestPage_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KevinTestPage.KevinTestPage_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UKevinTestPage_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KevinTestPage.KevinTestPage_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKevinTestPage_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function KevinTestPage.KevinTestPage_C.InitializeWidget");

	UKevinTestPage_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KevinTestPage.KevinTestPage_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature
// (BlueprintEvent)

void UKevinTestPage_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KevinTestPage.KevinTestPage_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature");

	UKevinTestPage_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KevinTestPage.KevinTestPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKevinTestPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KevinTestPage.KevinTestPage_C.Construct");

	UKevinTestPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KevinTestPage.KevinTestPage_C.BndEvt__ExampleSelector_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKevinTestPage_C::BndEvt__ExampleSelector_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KevinTestPage.KevinTestPage_C.BndEvt__ExampleSelector_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	UKevinTestPage_C_BndEvt__ExampleSelector_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KevinTestPage.KevinTestPage_C.ExecuteUbergraph_KevinTestPage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKevinTestPage_C::ExecuteUbergraph_KevinTestPage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KevinTestPage.KevinTestPage_C.ExecuteUbergraph_KevinTestPage");

	UKevinTestPage_C_ExecuteUbergraph_KevinTestPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
