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

// Function WBP_news_header.WBP_news_header_C.Add Settings Group Widget
struct UWBP_news_header_C_Add_Settings_Group_Widget_Params
{
	class UKSSettingsGroup**                           Settings_Group_Widget;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_news_header.WBP_news_header_C.PreConstruct
struct UWBP_news_header_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_news_header.WBP_news_header_C.Construct
struct UWBP_news_header_C_Construct_Params
{
};

// Function WBP_news_header.WBP_news_header_C.ExecuteUbergraph_WBP_news_header
struct UWBP_news_header_C_ExecuteUbergraph_WBP_news_header_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
