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

// Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.HandleMedPackFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EKSItemUsageFailureType*       FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NoGadgetWarning_C::HandleMedPackFailed(EKSItemUsageFailureType* FailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.HandleMedPackFailed");

	UWBP_NoGadgetWarning_C_HandleMedPackFailed_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.HandleGrenadeFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EKSItemUsageFailureType*       FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NoGadgetWarning_C::HandleGrenadeFailed(EKSItemUsageFailureType* FailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.HandleGrenadeFailed");

	UWBP_NoGadgetWarning_C_HandleGrenadeFailed_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UWBP_NoGadgetWarning_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.PostSetPawn");

	UWBP_NoGadgetWarning_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.ExecuteUbergraph_WBP_NoGadgetWarning
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NoGadgetWarning_C::ExecuteUbergraph_WBP_NoGadgetWarning(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.ExecuteUbergraph_WBP_NoGadgetWarning");

	UWBP_NoGadgetWarning_C_ExecuteUbergraph_WBP_NoGadgetWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
