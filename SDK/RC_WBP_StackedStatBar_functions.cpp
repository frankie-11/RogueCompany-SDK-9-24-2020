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

// Function WBP_StackedStatBar.WBP_StackedStatBar_C.SetStatCurrentToNext
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDisplayStat*       CurrentStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemDisplayStat*       ProjectedStat                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StackedStatBar_C::SetStatCurrentToNext(struct FItemDisplayStat* CurrentStat, struct FItemDisplayStat* ProjectedStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StackedStatBar.WBP_StackedStatBar_C.SetStatCurrentToNext");

	UWBP_StackedStatBar_C_SetStatCurrentToNext_Params params;
	params.CurrentStat = CurrentStat;
	params.ProjectedStat = ProjectedStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StackedStatBar.WBP_StackedStatBar_C.SetStatCurrent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDisplayStat*       Stat                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StackedStatBar_C::SetStatCurrent(struct FItemDisplayStat* Stat)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StackedStatBar.WBP_StackedStatBar_C.SetStatCurrent");

	UWBP_StackedStatBar_C_SetStatCurrent_Params params;
	params.Stat = Stat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StackedStatBar.WBP_StackedStatBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StackedStatBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StackedStatBar.WBP_StackedStatBar_C.PreConstruct");

	UWBP_StackedStatBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StackedStatBar.WBP_StackedStatBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StackedStatBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StackedStatBar.WBP_StackedStatBar_C.Construct");

	UWBP_StackedStatBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StackedStatBar.WBP_StackedStatBar_C.ExecuteUbergraph_WBP_StackedStatBar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StackedStatBar_C::ExecuteUbergraph_WBP_StackedStatBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StackedStatBar.WBP_StackedStatBar_C.ExecuteUbergraph_WBP_StackedStatBar");

	UWBP_StackedStatBar_C_ExecuteUbergraph_WBP_StackedStatBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
