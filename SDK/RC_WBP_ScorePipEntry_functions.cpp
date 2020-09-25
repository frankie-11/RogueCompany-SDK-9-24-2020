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

// Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.Set Pip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScorePipEntry_C::Set_Pip(bool* On)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.Set Pip");

	UWBP_ScorePipEntry_C_Set_Pip_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScorePipEntry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.PreConstruct");

	UWBP_ScorePipEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ScorePipEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.Construct");

	UWBP_ScorePipEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.ExecuteUbergraph_WBP_ScorePipEntry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScorePipEntry_C::ExecuteUbergraph_WBP_ScorePipEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.ExecuteUbergraph_WBP_ScorePipEntry");

	UWBP_ScorePipEntry_C_ExecuteUbergraph_WBP_ScorePipEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
