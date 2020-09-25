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

// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.CheckForNewChallenge
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Daily_Challenge_Timer_C::CheckForNewChallenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.CheckForNewChallenge");

	UWBP_Daily_Challenge_Timer_C_CheckForNewChallenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.UpdateContractTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Daily_Challenge_Timer_C::UpdateContractTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.UpdateContractTimer");

	UWBP_Daily_Challenge_Timer_C_UpdateContractTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.SetRemainingTime
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Daily_Challenge_Timer_C::SetRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.SetRemainingTime");

	UWBP_Daily_Challenge_Timer_C_SetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Daily_Challenge_Timer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.Tick");

	UWBP_Daily_Challenge_Timer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Daily_Challenge_Timer_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.InitializeWidget");

	UWBP_Daily_Challenge_Timer_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.ExecuteUbergraph_WBP_Daily_Challenge_Timer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Daily_Challenge_Timer_C::ExecuteUbergraph_WBP_Daily_Challenge_Timer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.ExecuteUbergraph_WBP_Daily_Challenge_Timer");

	UWBP_Daily_Challenge_Timer_C_ExecuteUbergraph_WBP_Daily_Challenge_Timer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
