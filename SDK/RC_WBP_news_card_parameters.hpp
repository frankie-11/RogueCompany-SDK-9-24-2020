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

// Function WBP_news_card.WBP_news_card_C.SetCardData
struct UWBP_news_card_C_SetCardData_Params
{
	class UKSWhatsNewPanel**                           CardData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_news_card.WBP_news_card_C.PreConstruct
struct UWBP_news_card_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_news_card.WBP_news_card_C.ExecuteUbergraph_WBP_news_card
struct UWBP_news_card_C_ExecuteUbergraph_WBP_news_card_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
