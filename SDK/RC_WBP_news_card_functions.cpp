// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_news_card.WBP_news_card_C.SetCardData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWhatsNewPanel**       CardData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_news_card_C::SetCardData(class UKSWhatsNewPanel** CardData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_card.WBP_news_card_C.SetCardData");

	UWBP_news_card_C_SetCardData_Params params;
	params.CardData = CardData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_card.WBP_news_card_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_news_card_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_card.WBP_news_card_C.PreConstruct");

	UWBP_news_card_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_card.WBP_news_card_C.ExecuteUbergraph_WBP_news_card
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_news_card_C::ExecuteUbergraph_WBP_news_card(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_card.WBP_news_card_C.ExecuteUbergraph_WBP_news_card");

	UWBP_news_card_C_ExecuteUbergraph_WBP_news_card_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
