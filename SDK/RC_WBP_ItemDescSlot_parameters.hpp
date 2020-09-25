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

// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.Construct
struct UWBP_ItemDescSlot_C_Construct_Params
{
};

// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.PopulateItemDescSlot
struct UWBP_ItemDescSlot_C_PopulateItemDescSlot_Params
{
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.SetTextColors
struct UWBP_ItemDescSlot_C_SetTextColors_Params
{
	struct FLinearColor*                               HeaderColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               HeadingColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.PreConstruct
struct UWBP_ItemDescSlot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.ExecuteUbergraph_WBP_ItemDescSlot
struct UWBP_ItemDescSlot_C_ExecuteUbergraph_WBP_ItemDescSlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
