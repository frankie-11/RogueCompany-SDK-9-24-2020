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

// Function OutBound.OutBound_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOutBound_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.Construct");

	UOutBound_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutBound.OutBound_C.HandleOutBoundsStart
// (BlueprintCallable, BlueprintEvent)

void UOutBound_C::HandleOutBoundsStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.HandleOutBoundsStart");

	UOutBound_C_HandleOutBoundsStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutBound.OutBound_C.HandleOutBoundsWarningEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutBound_C::HandleOutBoundsWarningEnd(class AKSCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.HandleOutBoundsWarningEnd");

	UOutBound_C_HandleOutBoundsWarningEnd_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutBound.OutBound_C.HandleOutBoundsEnd
// (BlueprintCallable, BlueprintEvent)

void UOutBound_C::HandleOutBoundsEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.HandleOutBoundsEnd");

	UOutBound_C_HandleOutBoundsEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutBound.OutBound_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutBound_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.Tick");

	UOutBound_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutBound.OutBound_C.OpenGate
// (BlueprintCallable, BlueprintEvent)

void UOutBound_C::OpenGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.OpenGate");

	UOutBound_C_OpenGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutBound.OutBound_C.CloseGate
// (BlueprintCallable, BlueprintEvent)

void UOutBound_C::CloseGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.CloseGate");

	UOutBound_C_CloseGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutBound.OutBound_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UOutBound_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.PostSetPawn");

	UOutBound_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutBound.OutBound_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UOutBound_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.PreClearPawn");

	UOutBound_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutBound.OutBound_C.HandleKillCamViewChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerController**    Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OldActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 NewActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutBound_C::HandleKillCamViewChange(class AKSPlayerController** Controller, class AActor** OldActor, class AActor** NewActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.HandleKillCamViewChange");

	UOutBound_C_HandleKillCamViewChange_Params params;
	params.Controller = Controller;
	params.OldActor = OldActor;
	params.NewActor = NewActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutBound.OutBound_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutBound_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.InitializeWidget");

	UOutBound_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutBound.OutBound_C.OnKillCamStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  ViewPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutBound_C::OnKillCamStart(class APawn** ViewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.OnKillCamStart");

	UOutBound_C_OnKillCamStart_Params params;
	params.ViewPawn = ViewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutBound.OutBound_C.ExecuteUbergraph_OutBound
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutBound_C::ExecuteUbergraph_OutBound(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.ExecuteUbergraph_OutBound");

	UOutBound_C_ExecuteUbergraph_OutBound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
