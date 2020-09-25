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

// Function WBP_DurationBar.WBP_DurationBar_C.SetDurationBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DurationTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSItem**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DurationBar_C::SetDurationBar(float* DurationTime, class UKSItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DurationBar.WBP_DurationBar_C.SetDurationBar");

	UWBP_DurationBar_C_SetDurationBar_Params params;
	params.DurationTime = DurationTime;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DurationBar.WBP_DurationBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DurationBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DurationBar.WBP_DurationBar_C.Construct");

	UWBP_DurationBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DurationBar.WBP_DurationBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DurationBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DurationBar.WBP_DurationBar_C.Tick");

	UWBP_DurationBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DurationBar.WBP_DurationBar_C.OpenUpdateGate
// (BlueprintCallable, BlueprintEvent)

void UWBP_DurationBar_C::OpenUpdateGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DurationBar.WBP_DurationBar_C.OpenUpdateGate");

	UWBP_DurationBar_C_OpenUpdateGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DurationBar.WBP_DurationBar_C.CloseUpdateGate
// (BlueprintCallable, BlueprintEvent)

void UWBP_DurationBar_C::CloseUpdateGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DurationBar.WBP_DurationBar_C.CloseUpdateGate");

	UWBP_DurationBar_C_CloseUpdateGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DurationBar.WBP_DurationBar_C.HandleModActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Activated                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DurationBar_C::HandleModActivated(bool* Activated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DurationBar.WBP_DurationBar_C.HandleModActivated");

	UWBP_DurationBar_C_HandleModActivated_Params params;
	params.Activated = Activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DurationBar.WBP_DurationBar_C.UpdateDurationDisplay
// (BlueprintCallable, BlueprintEvent)

void UWBP_DurationBar_C::UpdateDurationDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DurationBar.WBP_DurationBar_C.UpdateDurationDisplay");

	UWBP_DurationBar_C_UpdateDurationDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DurationBar.WBP_DurationBar_C.HideDurationBar
// (BlueprintCallable, BlueprintEvent)

void UWBP_DurationBar_C::HideDurationBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DurationBar.WBP_DurationBar_C.HideDurationBar");

	UWBP_DurationBar_C_HideDurationBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DurationBar.WBP_DurationBar_C.HandleProjectileFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWeaponAsset**         WeaponAsset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DurationBar_C::HandleProjectileFired(float* Duration, class UKSWeaponAsset** WeaponAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DurationBar.WBP_DurationBar_C.HandleProjectileFired");

	UWBP_DurationBar_C_HandleProjectileFired_Params params;
	params.Duration = Duration;
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DurationBar.WBP_DurationBar_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DurationBar_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DurationBar.WBP_DurationBar_C.InitializeWidget");

	UWBP_DurationBar_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DurationBar.WBP_DurationBar_C.ExecuteUbergraph_WBP_DurationBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DurationBar_C::ExecuteUbergraph_WBP_DurationBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DurationBar.WBP_DurationBar_C.ExecuteUbergraph_WBP_DurationBar");

	UWBP_DurationBar_C_ExecuteUbergraph_WBP_DurationBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
