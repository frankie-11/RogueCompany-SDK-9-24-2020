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

// Function WBP_VoteChoice.WBP_VoteChoice_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteChoice_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteChoice.WBP_VoteChoice_C.PreConstruct");

	UWBP_VoteChoice_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteChoice.WBP_VoteChoice_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_VoteChoice_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteChoice.WBP_VoteChoice_C.Construct");

	UWBP_VoteChoice_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteChoice.WBP_VoteChoice_C.UpdateVoteFill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TimeToFill                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteChoice_C::UpdateVoteFill(float* Delta_Time, float* TimeToFill)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteChoice.WBP_VoteChoice_C.UpdateVoteFill");

	UWBP_VoteChoice_C_UpdateVoteFill_Params params;
	params.Delta_Time = Delta_Time;
	params.TimeToFill = TimeToFill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteChoice.WBP_VoteChoice_C.ResetFill
// (BlueprintCallable, BlueprintEvent)

void UWBP_VoteChoice_C::ResetFill()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteChoice.WBP_VoteChoice_C.ResetFill");

	UWBP_VoteChoice_C_ResetFill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoteChoice.WBP_VoteChoice_C.ExecuteUbergraph_WBP_VoteChoice
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoteChoice_C::ExecuteUbergraph_WBP_VoteChoice(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteChoice.WBP_VoteChoice_C.ExecuteUbergraph_WBP_VoteChoice");

	UWBP_VoteChoice_C_ExecuteUbergraph_WBP_VoteChoice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
