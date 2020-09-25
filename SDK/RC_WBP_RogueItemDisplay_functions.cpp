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

// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                KSItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueItemDisplay_C::SetItem(class UKSItem** KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.SetItem");

	UWBP_RogueItemDisplay_C_SetItem_Params params;
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RogueItemDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.Construct");

	UWBP_RogueItemDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueItemDisplay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.PreConstruct");

	UWBP_RogueItemDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.ExecuteUbergraph_WBP_RogueItemDisplay
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueItemDisplay_C::ExecuteUbergraph_WBP_RogueItemDisplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.ExecuteUbergraph_WBP_RogueItemDisplay");

	UWBP_RogueItemDisplay_C_ExecuteUbergraph_WBP_RogueItemDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
