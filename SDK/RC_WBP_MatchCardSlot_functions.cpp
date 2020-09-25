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

// Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.PopulateWithPlayerStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MatchCardSlot_C::PopulateWithPlayerStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.PopulateWithPlayerStats");

	UWBP_MatchCardSlot_C_PopulateWithPlayerStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MatchCardSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.Construct");

	UWBP_MatchCardSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.AnimateIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchCardSlot_C::AnimateIn(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.AnimateIn");

	UWBP_MatchCardSlot_C_AnimateIn_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchCardSlot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.PreConstruct");

	UWBP_MatchCardSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.ExecuteUbergraph_WBP_MatchCardSlot
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchCardSlot_C::ExecuteUbergraph_WBP_MatchCardSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.ExecuteUbergraph_WBP_MatchCardSlot");

	UWBP_MatchCardSlot_C_ExecuteUbergraph_WBP_MatchCardSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.StartAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrencyEarned                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchCardSlot_C::StartAnimation__DelegateSignature(int* CurrencyEarned)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.StartAnimation__DelegateSignature");

	UWBP_MatchCardSlot_C_StartAnimation__DelegateSignature_Params params;
	params.CurrencyEarned = CurrencyEarned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
