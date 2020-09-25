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

// Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.SetCardData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuidedCalloutCardData* CardData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Guided_Tutorial_Card_C::SetCardData(struct FGuidedCalloutCardData* CardData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.SetCardData");

	UWBP_Guided_Tutorial_Card_C_SetCardData_Params params;
	params.CardData = CardData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Guided_Tutorial_Card_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.PreConstruct");

	UWBP_Guided_Tutorial_Card_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.ExecuteUbergraph_WBP_Guided_Tutorial_Card
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Guided_Tutorial_Card_C::ExecuteUbergraph_WBP_Guided_Tutorial_Card(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.ExecuteUbergraph_WBP_Guided_Tutorial_Card");

	UWBP_Guided_Tutorial_Card_C_ExecuteUbergraph_WBP_Guided_Tutorial_Card_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
