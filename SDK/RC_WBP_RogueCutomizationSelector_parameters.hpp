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

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.IsEquipAllAllowed
struct UWBP_RogueCutomizationSelector_C_IsEquipAllAllowed_Params
{
	class UKSItem**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanEquipAll;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.DisplayEquipAllPrompt
struct UWBP_RogueCutomizationSelector_C_DisplayEquipAllPrompt_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnEquipAll
struct UWBP_RogueCutomizationSelector_C_OnEquipAll_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnKeyUp
struct UWBP_RogueCutomizationSelector_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEmoteModel
struct UWBP_RogueCutomizationSelector_C_SetEmoteModel_Params
{
	class UKSItem**                                    CosmeticItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEquippedItem
struct UWBP_RogueCutomizationSelector_C_SetEquippedItem_Params
{
	bool*                                              IsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_KSCosmeticItemSelector_C**              CosmeticItemSlot;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetOwnedItem
struct UWBP_RogueCutomizationSelector_C_SetOwnedItem_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BindItemHelper
struct UWBP_RogueCutomizationSelector_C_BindItemHelper_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnPurchaseItem
struct UWBP_RogueCutomizationSelector_C_OnPurchaseItem_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.AddClearCosmeticSlot
struct UWBP_RogueCutomizationSelector_C_AddClearCosmeticSlot_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.IsItemEquipped
struct UWBP_RogueCutomizationSelector_C_IsItemEquipped_Params
{
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquipped;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Set Active States
struct UWBP_RogueCutomizationSelector_C_Set_Active_States_Params
{
	class UWBP_KSCosmeticItemSelector_C**              ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEquipBtn
struct UWBP_RogueCutomizationSelector_C_SetEquipBtn_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetWingSuitModel
struct UWBP_RogueCutomizationSelector_C_SetWingSuitModel_Params
{
	class UKSItem**                                    CosmeticItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetSprayIcon
struct UWBP_RogueCutomizationSelector_C_ResetSprayIcon_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetModels
struct UWBP_RogueCutomizationSelector_C_ResetModels_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEmoteImage
struct UWBP_RogueCutomizationSelector_C_SetEmoteImage_Params
{
	class UKSItem**                                    CosmeticItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetCharacter
struct UWBP_RogueCutomizationSelector_C_ResetCharacter_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetWeapon
struct UWBP_RogueCutomizationSelector_C_SetWeapon_Params
{
	class UKSItem**                                    CosmeticItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem**                                 JobItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponSlot*                                       WeaponSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetModelViewer
struct UWBP_RogueCutomizationSelector_C_SetModelViewer_Params
{
	class UKSItem**                                    CosmeticItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCosmeticSlotDetails*                       CosmeticDetail;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetCharacterSkin
struct UWBP_RogueCutomizationSelector_C_SetCharacterSkin_Params
{
	class UKSItem**                                    CosmeticItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem**                                 JobItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.NavigateBack
struct UWBP_RogueCutomizationSelector_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetContextBar
struct UWBP_RogueCutomizationSelector_C_SetContextBar_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.RegisterNavigation
struct UWBP_RogueCutomizationSelector_C_RegisterNavigation_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetCosmeticSelection
struct UWBP_RogueCutomizationSelector_C_ResetCosmeticSelection_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetCosmeticSelection
struct UWBP_RogueCutomizationSelector_C_SetCosmeticSelection_Params
{
	class UWBP_KSCosmeticItemDisplay_C**               CosmeticDisplayBtn;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.InitializeWidget
struct UWBP_RogueCutomizationSelector_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnHover
struct UWBP_RogueCutomizationSelector_C_OnHover_Params
{
	struct FCosmeticSlotDetails*                       CosmeticDetails;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnUnhover
struct UWBP_RogueCutomizationSelector_C_OnUnhover_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnSelectCosmetic
struct UWBP_RogueCutomizationSelector_C_OnSelectCosmetic_Params
{
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCosmeticSlotDetails*                       CosmeticDetails;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnShown
struct UWBP_RogueCutomizationSelector_C_OnShown_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnBackPrompt
struct UWBP_RogueCutomizationSelector_C_OnBackPrompt_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.InitializeWidgetNavigation
struct UWBP_RogueCutomizationSelector_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.EquipCosmetic
struct UWBP_RogueCutomizationSelector_C_EquipCosmetic_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnHide
struct UWBP_RogueCutomizationSelector_C_OnHide_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.HandleInputStateChanged
struct UWBP_RogueCutomizationSelector_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.HandleOnPurchasedItem
struct UWBP_RogueCutomizationSelector_C_HandleOnPurchasedItem_Params
{
	class UPUMG_StoreItem**                            Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_StoreItemPrice**                       Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_RogueCutomizationSelector_C_BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWBP_RogueCutomizationSelector_C_BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.On Close Button Clicked
struct UWBP_RogueCutomizationSelector_C_On_Close_Button_Clicked_Params
{
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnItemGamepadHovered
struct UWBP_RogueCutomizationSelector_C_OnItemGamepadHovered_Params
{
	class UPUMG_Widget**                               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bHovered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ExecuteUbergraph_WBP_RogueCutomizationSelector
struct UWBP_RogueCutomizationSelector_C_ExecuteUbergraph_WBP_RogueCutomizationSelector_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnEquipCosmeticItem__DelegateSignature
struct UWBP_RogueCutomizationSelector_C_OnEquipCosmeticItem__DelegateSignature_Params
{
	EMercCosmeticSlot*                                 SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
