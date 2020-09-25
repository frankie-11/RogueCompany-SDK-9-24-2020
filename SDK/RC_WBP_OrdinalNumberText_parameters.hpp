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

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Superscript Text
struct UWBP_OrdinalNumberText_C_Get_Language_Specific_Superscript_Text_Params
{
	struct FString*                                    Language_Code;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Return_Value;                                             // (Parm, OutParm)
};

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Main Text
struct UWBP_OrdinalNumberText_C_Get_Language_Specific_Main_Text_Params
{
	struct FString*                                    Language_Code;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Return_Value;                                             // (Parm, OutParm)
};

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.PreConstruct
struct UWBP_OrdinalNumberText_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Font
struct UWBP_OrdinalNumberText_C_Set_Font_Params
{
	struct FSlateFontInfo*                             InFontInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Value
struct UWBP_OrdinalNumberText_C_Set_Value_Params
{
	int*                                               Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.ExecuteUbergraph_WBP_OrdinalNumberText
struct UWBP_OrdinalNumberText_C_ExecuteUbergraph_WBP_OrdinalNumberText_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
