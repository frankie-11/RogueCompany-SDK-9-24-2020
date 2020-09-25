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

// Function WBP_SlotHeading.WBP_SlotHeading_C.SetText
struct UWBP_SlotHeading_C_SetText_Params
{
	struct FText*                                      newText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SlotHeading.WBP_SlotHeading_C.SetUnderlineColor
struct UWBP_SlotHeading_C_SetUnderlineColor_Params
{
	struct FLinearColor*                               NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SlotHeading.WBP_SlotHeading_C.SetTextColor
struct UWBP_SlotHeading_C_SetTextColor_Params
{
	struct FSlateColor*                                NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SlotHeading.WBP_SlotHeading_C.PreConstruct
struct UWBP_SlotHeading_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SlotHeading.WBP_SlotHeading_C.Construct
struct UWBP_SlotHeading_C_Construct_Params
{
};

// Function WBP_SlotHeading.WBP_SlotHeading_C.SetSlotHeading
struct UWBP_SlotHeading_C_SetSlotHeading_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SlotHeading.WBP_SlotHeading_C.ExecuteUbergraph_WBP_SlotHeading
struct UWBP_SlotHeading_C_ExecuteUbergraph_WBP_SlotHeading_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
