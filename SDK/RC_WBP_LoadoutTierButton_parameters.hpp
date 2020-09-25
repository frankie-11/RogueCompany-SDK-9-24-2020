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

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.SetIsActive
struct UWBP_LoadoutTierButton_C_SetIsActive_Params
{
	bool*                                              ShowPrice;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SetActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.SetTierPrice
struct UWBP_LoadoutTierButton_C_SetTierPrice_Params
{
	struct FText*                                      PriceText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.Set Button Text
struct UWBP_LoadoutTierButton_C_Set_Button_Text_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.PreConstruct
struct UWBP_LoadoutTierButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.Construct
struct UWBP_LoadoutTierButton_C_Construct_Params
{
};

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_LoadoutTierButton_C_BndEvt__TierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_LoadoutTierButton_C_BndEvt__TierButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_LoadoutTierButton_C_BndEvt__TierButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.ExecuteUbergraph_WBP_LoadoutTierButton
struct UWBP_LoadoutTierButton_C_ExecuteUbergraph_WBP_LoadoutTierButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.OnClick__DelegateSignature
struct UWBP_LoadoutTierButton_C_OnClick__DelegateSignature_Params
{
	int*                                               TierIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.OnHover__DelegateSignature
struct UWBP_LoadoutTierButton_C_OnHover__DelegateSignature_Params
{
	int*                                               TierIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
