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

// Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetPercentTimeRemaining
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PercentRemaining               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreItemRotator_C::SetPercentTimeRemaining(float* PercentRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetPercentTimeRemaining");

	UWBP_StoreItemRotator_C_SetPercentTimeRemaining_Params params;
	params.PercentRemaining = PercentRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetRotatorSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumElements                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreItemRotator_C::SetRotatorSize(int* NumElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetRotatorSize");

	UWBP_StoreItemRotator_C_SetRotatorSize_Params params;
	params.NumElements = NumElements;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetActiveIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreItemRotator_C::SetActiveIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetActiveIndex");

	UWBP_StoreItemRotator_C_SetActiveIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
