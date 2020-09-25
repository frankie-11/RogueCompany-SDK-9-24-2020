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

// Function WBP_CompareFoundersRow.WBP_CompareFoundersRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CompareFoundersRow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersRow.WBP_CompareFoundersRow_C.PreConstruct");

	UWBP_CompareFoundersRow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CompareFoundersRow.WBP_CompareFoundersRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CompareFoundersRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersRow.WBP_CompareFoundersRow_C.Construct");

	UWBP_CompareFoundersRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CompareFoundersRow.WBP_CompareFoundersRow_C.ExecuteUbergraph_WBP_CompareFoundersRow
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CompareFoundersRow_C::ExecuteUbergraph_WBP_CompareFoundersRow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersRow.WBP_CompareFoundersRow_C.ExecuteUbergraph_WBP_CompareFoundersRow");

	UWBP_CompareFoundersRow_C_ExecuteUbergraph_WBP_CompareFoundersRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif