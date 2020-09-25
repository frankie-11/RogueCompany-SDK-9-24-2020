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

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.UpdateCurrencyDisplay
struct UWBP_CurrencySummary_C_UpdateCurrencyDisplay_Params
{
};

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.InitializeWidget
struct UWBP_CurrencySummary_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.ExecuteUbergraph_WBP_CurrencySummary
struct UWBP_CurrencySummary_C_ExecuteUbergraph_WBP_CurrencySummary_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
