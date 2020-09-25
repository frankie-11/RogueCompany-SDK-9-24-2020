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

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.TickAnchorAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueStatsScreen_RogueEntry_C::TickAnchorAnim(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.TickAnchorAnim");

	UWBP_RogueStatsScreen_RogueEntry_C_TickAnchorAnim_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ResetState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueStatsScreen_RogueEntry_C::ResetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ResetState");

	UWBP_RogueStatsScreen_RogueEntry_C_ResetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnimInternal
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_RogueStatsScreen_RogueEntry_C::PlayShowAnimInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnimInternal");

	UWBP_RogueStatsScreen_RogueEntry_C_PlayShowAnimInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueStatsScreen_RogueEntry_C::PlayShowAnim(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnim");

	UWBP_RogueStatsScreen_RogueEntry_C_PlayShowAnim_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateValueText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueStatsScreen_RogueEntry_C::UpdateValueText(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateValueText");

	UWBP_RogueStatsScreen_RogueEntry_C_UpdateValueText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueStatsScreen_RogueEntry_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateIcon");

	UWBP_RogueStatsScreen_RogueEntry_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.SetActivityInstance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSActivityInstance**    Instance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueStatsScreen_RogueEntry_C::SetActivityInstance(class UKSActivityInstance** Instance, int* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.SetActivityInstance");

	UWBP_RogueStatsScreen_RogueEntry_C_SetActivityInstance_Params params;
	params.Instance = Instance;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RogueStatsScreen_RogueEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Construct");

	UWBP_RogueStatsScreen_RogueEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueStatsScreen_RogueEntry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Tick");

	UWBP_RogueStatsScreen_RogueEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueStatsScreen_RogueEntry_C::ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry");

	UWBP_RogueStatsScreen_RogueEntry_C_ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
