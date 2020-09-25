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

// Function ReloadReticle.ReloadReticle_C.ColorSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReloadReticle_C::ColorSet(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.ColorSet");

	UReloadReticle_C_ColorSet_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadReticle.ReloadReticle_C.UpdateShotgunReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ReloadTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReloadReticle_C::UpdateShotgunReload(float* ReloadTime, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.UpdateShotgunReload");

	UReloadReticle_C_UpdateShotgunReload_Params params;
	params.ReloadTime = ReloadTime;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadReticle.ReloadReticle_C.SetReloadTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReloadReticle_C::SetReloadTime(float* NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.SetReloadTime");

	UReloadReticle_C_SetReloadTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadReticle.ReloadReticle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReloadReticle_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.Tick");

	UReloadReticle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadReticle.ReloadReticle_C.Circle Progress Open
// (BlueprintCallable, BlueprintEvent)

void UReloadReticle_C::Circle_Progress_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.Circle Progress Open");

	UReloadReticle_C_Circle_Progress_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadReticle.ReloadReticle_C.Circle Progress Close
// (BlueprintCallable, BlueprintEvent)

void UReloadReticle_C::Circle_Progress_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.Circle Progress Close");

	UReloadReticle_C_Circle_Progress_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadReticle.ReloadReticle_C.PreventCircleFill
// (BlueprintCallable, BlueprintEvent)

void UReloadReticle_C::PreventCircleFill()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.PreventCircleFill");

	UReloadReticle_C_PreventCircleFill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadReticle.ReloadReticle_C.ShotgunCircleOpen
// (BlueprintCallable, BlueprintEvent)

void UReloadReticle_C::ShotgunCircleOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.ShotgunCircleOpen");

	UReloadReticle_C_ShotgunCircleOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadReticle.ReloadReticle_C.ShotgunCircleClose
// (BlueprintCallable, BlueprintEvent)

void UReloadReticle_C::ShotgunCircleClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.ShotgunCircleClose");

	UReloadReticle_C_ShotgunCircleClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadReticle.ReloadReticle_C.ExecuteUbergraph_ReloadReticle
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReloadReticle_C::ExecuteUbergraph_ReloadReticle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.ExecuteUbergraph_ReloadReticle");

	UReloadReticle_C_ExecuteUbergraph_ReloadReticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
