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

// Function WatermarkWidget.WatermarkWidget_C.GetNewWatermarkTranslation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Transform_Translation          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWatermarkWidget_C::GetNewWatermarkTranslation(struct FVector2D* Transform_Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.GetNewWatermarkTranslation");

	UWatermarkWidget_C_GetNewWatermarkTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform_Translation != nullptr)
		*Transform_Translation = params.Transform_Translation;
}


// Function WatermarkWidget.WatermarkWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWatermarkWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.Construct");

	UWatermarkWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WatermarkWidget.WatermarkWidget_C.Reposition Watermark
// (BlueprintCallable, BlueprintEvent)

void UWatermarkWidget_C::Reposition_Watermark()
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.Reposition Watermark");

	UWatermarkWidget_C_Reposition_Watermark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WatermarkWidget.WatermarkWidget_C.Fade In
// (BlueprintCallable, BlueprintEvent)

void UWatermarkWidget_C::Fade_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.Fade In");

	UWatermarkWidget_C_Fade_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WatermarkWidget.WatermarkWidget_C.Fade Out
// (BlueprintCallable, BlueprintEvent)

void UWatermarkWidget_C::Fade_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.Fade Out");

	UWatermarkWidget_C_Fade_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WatermarkWidget.WatermarkWidget_C.Move Watermark To Random Position
// (BlueprintCallable, BlueprintEvent)

void UWatermarkWidget_C::Move_Watermark_To_Random_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.Move Watermark To Random Position");

	UWatermarkWidget_C_Move_Watermark_To_Random_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WatermarkWidget.WatermarkWidget_C.StartPositionChanging
// (BlueprintCallable, BlueprintEvent)

void UWatermarkWidget_C::StartPositionChanging()
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.StartPositionChanging");

	UWatermarkWidget_C_StartPositionChanging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WatermarkWidget.WatermarkWidget_C.OnResizeViewport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint*              Viewport_Size                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWatermarkWidget_C::OnResizeViewport(struct FIntPoint* Viewport_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.OnResizeViewport");

	UWatermarkWidget_C_OnResizeViewport_Params params;
	params.Viewport_Size = Viewport_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WatermarkWidget.WatermarkWidget_C.ExecuteUbergraph_WatermarkWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWatermarkWidget_C::ExecuteUbergraph_WatermarkWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.ExecuteUbergraph_WatermarkWidget");

	UWatermarkWidget_C_ExecuteUbergraph_WatermarkWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
