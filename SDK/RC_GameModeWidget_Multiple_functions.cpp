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

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Bind Killcam
// (Public, BlueprintCallable, BlueprintEvent)

void UGameModeWidget_Multiple_C::Bind_Killcam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Bind Killcam");

	UGameModeWidget_Multiple_C_Bind_Killcam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeHudWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UGameModeWidget_Multiple_C::InitializeHudWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeHudWidgets");

	UGameModeWidget_Multiple_C_InitializeHudWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeMapWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UGameModeWidget_Multiple_C::InitializeMapWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeMapWidgets");

	UGameModeWidget_Multiple_C_InitializeMapWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameModeWidget_Multiple_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Tick");

	UGameModeWidget_Multiple_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.SetListenersActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameModeWidget_Multiple_C::SetListenersActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.SetListenersActive");

	UGameModeWidget_Multiple_C_SetListenersActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.BndEvt__VehicleOverlay_K2Node_ComponentBoundEvent_0_Vehicle State Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          InVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameModeWidget_Multiple_C::BndEvt__VehicleOverlay_K2Node_ComponentBoundEvent_0_Vehicle_State_Changed__DelegateSignature(bool* InVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.BndEvt__VehicleOverlay_K2Node_ComponentBoundEvent_0_Vehicle State Changed__DelegateSignature");

	UGameModeWidget_Multiple_C_BndEvt__VehicleOverlay_K2Node_ComponentBoundEvent_0_Vehicle_State_Changed__DelegateSignature_Params params;
	params.InVehicle = InVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HandleKillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameModeWidget_Multiple_C::HandleKillCamEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HandleKillCamEnabled");

	UGameModeWidget_Multiple_C_HandleKillCamEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ShowHUD
// (BlueprintCallable, BlueprintEvent)

void UGameModeWidget_Multiple_C::ShowHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ShowHUD");

	UGameModeWidget_Multiple_C_ShowHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HideHUD
// (BlueprintCallable, BlueprintEvent)

void UGameModeWidget_Multiple_C::HideHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HideHUD");

	UGameModeWidget_Multiple_C_HideHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ToggleTopBarHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldShow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameModeWidget_Multiple_C::ToggleTopBarHUD(bool* ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ToggleTopBarHUD");

	UGameModeWidget_Multiple_C_ToggleTopBarHUD_Params params;
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ToggleMiniMap
// (BlueprintCallable, BlueprintEvent)

void UGameModeWidget_Multiple_C::ToggleMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ToggleMiniMap");

	UGameModeWidget_Multiple_C_ToggleMiniMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameModeWidget_Multiple_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeWidget");

	UGameModeWidget_Multiple_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Handle Swimming Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSwimming                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameModeWidget_Multiple_C::Handle_Swimming_Changed(bool* IsSwimming)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Handle Swimming Changed");

	UGameModeWidget_Multiple_C_Handle_Swimming_Changed_Params params;
	params.IsSwimming = IsSwimming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HandleRoundSetup
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGameModeWidget_Multiple_C::HandleRoundSetup(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HandleRoundSetup");

	UGameModeWidget_Multiple_C_HandleRoundSetup_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ExecuteUbergraph_GameModeWidget_Multiple
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameModeWidget_Multiple_C::ExecuteUbergraph_GameModeWidget_Multiple(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ExecuteUbergraph_GameModeWidget_Multiple");

	UGameModeWidget_Multiple_C_ExecuteUbergraph_GameModeWidget_Multiple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
