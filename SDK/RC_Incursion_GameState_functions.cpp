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

// Function Incursion_GameState.Incursion_GameState_C.GetUIMatchTime
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          OutTimeRemaining               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutTotalTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIncursion_GameState_C::GetUIMatchTime(float* OutTimeRemaining, float* OutTotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Incursion_GameState.Incursion_GameState_C.GetUIMatchTime");

	AIncursion_GameState_C_GetUIMatchTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTimeRemaining != nullptr)
		*OutTimeRemaining = params.OutTimeRemaining;
	if (OutTotalTime != nullptr)
		*OutTotalTime = params.OutTotalTime;
}


// Function Incursion_GameState.Incursion_GameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIncursion_GameState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Incursion_GameState.Incursion_GameState_C.ReceiveBeginPlay");

	AIncursion_GameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Incursion_GameState.Incursion_GameState_C.ExecuteUbergraph_Incursion_GameState
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIncursion_GameState_C::ExecuteUbergraph_Incursion_GameState(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Incursion_GameState.Incursion_GameState_C.ExecuteUbergraph_Incursion_GameState");

	AIncursion_GameState_C_ExecuteUbergraph_Incursion_GameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Incursion_GameState.Incursion_GameState_C.On New Wave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Current_Wave_Number            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Total_Wave_Number              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIncursion_GameState_C::On_New_Wave__DelegateSignature(int* Current_Wave_Number, int* Total_Wave_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function Incursion_GameState.Incursion_GameState_C.On New Wave__DelegateSignature");

	AIncursion_GameState_C_On_New_Wave__DelegateSignature_Params params;
	params.Current_Wave_Number = Current_Wave_Number;
	params.Total_Wave_Number = Total_Wave_Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
