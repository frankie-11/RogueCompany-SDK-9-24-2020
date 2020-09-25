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

// Function WBP_ScorePips.WBP_ScorePips_C.Set Total Pips
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Pips_Number                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScorePips_C::Set_Total_Pips(int* Pips_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.Set Total Pips");

	UWBP_ScorePips_C_Set_Total_Pips_Params params;
	params.Pips_Number = Pips_Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScorePips.WBP_ScorePips_C.Set Pips Number
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Pips_Number                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScorePips_C::Set_Pips_Number(int* Pips_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.Set Pips Number");

	UWBP_ScorePips_C_Set_Pips_Number_Params params;
	params.Pips_Number = Pips_Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScorePips.WBP_ScorePips_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScorePips_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.PreConstruct");

	UWBP_ScorePips_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScorePips.WBP_ScorePips_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ScorePips_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.Construct");

	UWBP_ScorePips_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScorePips.WBP_ScorePips_C.ExecuteUbergraph_WBP_ScorePips
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScorePips_C::ExecuteUbergraph_WBP_ScorePips(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.ExecuteUbergraph_WBP_ScorePips");

	UWBP_ScorePips_C_ExecuteUbergraph_WBP_ScorePips_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
