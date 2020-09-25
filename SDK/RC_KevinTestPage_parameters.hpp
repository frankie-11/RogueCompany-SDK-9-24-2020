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

// Function KevinTestPage.KevinTestPage_C.Intialize Item Helper Example
struct UKevinTestPage_C_Intialize_Item_Helper_Example_Params
{
	class AKSLobbyHUDNew**                             HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KevinTestPage.KevinTestPage_C.OnShowPurchaseModal
struct UKevinTestPage_C_OnShowPurchaseModal_Params
{
	class UPUMG_StoreItem**                            Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_StoreItemPrice**                       Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KevinTestPage.KevinTestPage_C.OnNeedMoreMoney
struct UKevinTestPage_C_OnNeedMoreMoney_Params
{
	class UPUMG_StorePurchaseRequest**                 Purchase_Request;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KevinTestPage.KevinTestPage_C.OnVendorReceived
struct UKevinTestPage_C_OnVendorReceived_Params
{
	int*                                               GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>*                                       VendorIds;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function KevinTestPage.KevinTestPage_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UKevinTestPage_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function KevinTestPage.KevinTestPage_C.InitializeWidget
struct UKevinTestPage_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KevinTestPage.KevinTestPage_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature
struct UKevinTestPage_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature_Params
{
};

// Function KevinTestPage.KevinTestPage_C.Construct
struct UKevinTestPage_C_Construct_Params
{
};

// Function KevinTestPage.KevinTestPage_C.BndEvt__ExampleSelector_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
struct UKevinTestPage_C_BndEvt__ExampleSelector_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KevinTestPage.KevinTestPage_C.ExecuteUbergraph_KevinTestPage
struct UKevinTestPage_C_ExecuteUbergraph_KevinTestPage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
