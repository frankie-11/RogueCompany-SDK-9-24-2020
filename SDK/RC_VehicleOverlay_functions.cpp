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

// Function VehicleOverlay.VehicleOverlay_C.UpdateRevealConeReticle
// (Public, BlueprintCallable, BlueprintEvent)

void UVehicleOverlay_C::UpdateRevealConeReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.UpdateRevealConeReticle");

	UVehicleOverlay_C_UpdateRevealConeReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleOverlay.VehicleOverlay_C.SetVehicle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSVehicle**             Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOverlay_C::SetVehicle(class AKSVehicle** Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.SetVehicle");

	UVehicleOverlay_C_SetVehicle_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleOverlay.VehicleOverlay_C.UnsetVehicle
// (Private, BlueprintCallable, BlueprintEvent)

void UVehicleOverlay_C::UnsetVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.UnsetVehicle");

	UVehicleOverlay_C_UnsetVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleOverlay.VehicleOverlay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOverlay_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.Tick");

	UVehicleOverlay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleOverlay.VehicleOverlay_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOverlay_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.InitializeWidget");

	UVehicleOverlay_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleOverlay.VehicleOverlay_C.ModeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOverlay_C::ModeChange(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.ModeChange");

	UVehicleOverlay_C_ModeChange_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleOverlay.VehicleOverlay_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UVehicleOverlay_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.PostSetPawn");

	UVehicleOverlay_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleOverlay.VehicleOverlay_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UVehicleOverlay_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.PreClearPawn");

	UVehicleOverlay_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleOverlay.VehicleOverlay_C.Handle Vehicle State Changed
// (BlueprintCallable, BlueprintEvent)

void UVehicleOverlay_C::Handle_Vehicle_State_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.Handle Vehicle State Changed");

	UVehicleOverlay_C_Handle_Vehicle_State_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleOverlay.VehicleOverlay_C.HandleVehicleHealthChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentHealth                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOverlay_C::HandleVehicleHealthChanged(float* CurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.HandleVehicleHealthChanged");

	UVehicleOverlay_C_HandleVehicleHealthChanged_Params params;
	params.CurrentHealth = CurrentHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleOverlay.VehicleOverlay_C.HandleVehicleSeatingChanged
// (BlueprintCallable, BlueprintEvent)

void UVehicleOverlay_C::HandleVehicleSeatingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.HandleVehicleSeatingChanged");

	UVehicleOverlay_C_HandleVehicleSeatingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleOverlay.VehicleOverlay_C.ExecuteUbergraph_VehicleOverlay
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOverlay_C::ExecuteUbergraph_VehicleOverlay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.ExecuteUbergraph_VehicleOverlay");

	UVehicleOverlay_C_ExecuteUbergraph_VehicleOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleOverlay.VehicleOverlay_C.Vehicle State Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleOverlay_C::Vehicle_State_Changed__DelegateSignature(bool* InVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.Vehicle State Changed__DelegateSignature");

	UVehicleOverlay_C_Vehicle_State_Changed__DelegateSignature_Params params;
	params.InVehicle = InVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
