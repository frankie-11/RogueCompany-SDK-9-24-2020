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

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHovered
struct UWBP_AcquistionItem_C_OnSlotHovered_Params
{
	struct FCosmeticSlotDetails*                       CosmeticSlotDetails;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_KSCosmeticItemDisplay_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotClicked
struct UWBP_AcquistionItem_C_OnSlotClicked_Params
{
	class UWBP_KSCosmeticItemDisplay_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCosmeticSlotDetails*                       CosmeticSlotDetails;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.SetSlotItem
struct UWBP_AcquistionItem_C_SetSlotItem_Params
{
	class UPUMG_StoreItem**                            SlotItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.InitializeWidget
struct UWBP_AcquistionItem_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.ExecuteUbergraph_WBP_AcquistionItem
struct UWBP_AcquistionItem_C_ExecuteUbergraph_WBP_AcquistionItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHover__DelegateSignature
struct UWBP_AcquistionItem_C_OnSlotHover__DelegateSignature_Params
{
	class UPUMG_StoreItem**                            Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWidget**                                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotSelected__DelegateSignature
struct UWBP_AcquistionItem_C_OnSlotSelected__DelegateSignature_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
