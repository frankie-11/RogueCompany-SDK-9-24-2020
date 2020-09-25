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

// Function WBP_RespawnTimer.WBP_RespawnTimer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RespawnTimer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnTimer.WBP_RespawnTimer_C.Tick");

	UWBP_RespawnTimer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RespawnTimer.WBP_RespawnTimer_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RespawnTimer_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnTimer.WBP_RespawnTimer_C.InitializeWidget");

	UWBP_RespawnTimer_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RespawnTimer.WBP_RespawnTimer_C.On Respawn Timer Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RespawnTimer_C::On_Respawn_Timer_Tick(float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnTimer.WBP_RespawnTimer_C.On Respawn Timer Tick");

	UWBP_RespawnTimer_C_On_Respawn_Timer_Tick_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RespawnTimer.WBP_RespawnTimer_C.On Respawn Timer Active
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RespawnTimer_C::On_Respawn_Timer_Active(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnTimer.WBP_RespawnTimer_C.On Respawn Timer Active");

	UWBP_RespawnTimer_C_On_Respawn_Timer_Active_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RespawnTimer.WBP_RespawnTimer_C.OnRespawnTimerComplete
// (BlueprintCallable, BlueprintEvent)

void UWBP_RespawnTimer_C::OnRespawnTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnTimer.WBP_RespawnTimer_C.OnRespawnTimerComplete");

	UWBP_RespawnTimer_C_OnRespawnTimerComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RespawnTimer.WBP_RespawnTimer_C.ExecuteUbergraph_WBP_RespawnTimer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RespawnTimer_C::ExecuteUbergraph_WBP_RespawnTimer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnTimer.WBP_RespawnTimer_C.ExecuteUbergraph_WBP_RespawnTimer");

	UWBP_RespawnTimer_C_ExecuteUbergraph_WBP_RespawnTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
