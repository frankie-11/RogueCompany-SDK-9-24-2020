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

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.StartConfirmHold
struct UWBP_PurchaseConfirmationButton_C_StartConfirmHold_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ClearConfirmHold
struct UWBP_PurchaseConfirmationButton_C_ClearConfirmHold_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.UpdateGamepadPromptDisplay
struct UWBP_PurchaseConfirmationButton_C_UpdateGamepadPromptDisplay_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonUnhovered
struct UWBP_PurchaseConfirmationButton_C_OnButtonUnhovered_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonHovered
struct UWBP_PurchaseConfirmationButton_C_OnButtonHovered_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonClicked
struct UWBP_PurchaseConfirmationButton_C_OnButtonClicked_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetPortalOffer
struct UWBP_PurchaseConfirmationButton_C_SetPortalOffer_Params
{
	class UPUMG_PortalOffer**                          PortalOffer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetRawText
struct UWBP_PurchaseConfirmationButton_C_SetRawText_Params
{
	struct FText*                                      ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetStorePrice
struct UWBP_PurchaseConfirmationButton_C_SetStorePrice_Params
{
	class UPUMG_StoreItemPrice**                       ItemPrice;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PreConstruct
struct UWBP_PurchaseConfirmationButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Construct
struct UWBP_PurchaseConfirmationButton_C_Construct_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Tick
struct UWBP_PurchaseConfirmationButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.InitializeWidget
struct UWBP_PurchaseConfirmationButton_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ExecuteUbergraph_WBP_PurchaseConfirmationButton
struct UWBP_PurchaseConfirmationButton_C_ExecuteUbergraph_WBP_PurchaseConfirmationButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnRawClick__DelegateSignature
struct UWBP_PurchaseConfirmationButton_C_OnRawClick__DelegateSignature_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPortalOffer__DelegateSignature
struct UWBP_PurchaseConfirmationButton_C_PurcaseItemWithPortalOffer__DelegateSignature_Params
{
	class UPUMG_PortalOffer**                          PortalOffer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPrice__DelegateSignature
struct UWBP_PurchaseConfirmationButton_C_PurcaseItemWithPrice__DelegateSignature_Params
{
	class UPUMG_StoreItemPrice**                       Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
