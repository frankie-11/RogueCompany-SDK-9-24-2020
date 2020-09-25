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

// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.ShouldUpdate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPointObjectiveFullMapIcon_C::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.ShouldUpdate");

	UPointObjectiveFullMapIcon_C_ShouldUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.DoCaptureAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UPointObjectiveFullMapIcon_C::DoCaptureAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.DoCaptureAnimation");

	UPointObjectiveFullMapIcon_C_DoCaptureAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.SetProgressValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveFullMapIcon_C::SetProgressValue(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.SetProgressValue");

	UPointObjectiveFullMapIcon_C_SetProgressValue_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.SetProgressColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           OffColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           OnColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveFullMapIcon_C::SetProgressColors(struct FLinearColor* OffColor, struct FLinearColor* OnColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.SetProgressColors");

	UPointObjectiveFullMapIcon_C_SetProgressColors_Params params;
	params.OffColor = OffColor;
	params.OnColor = OnColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveFullMapIcon_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Tick");

	UPointObjectiveFullMapIcon_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Objective State Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSObjectiveBase**       Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveFullMapIcon_C::Objective_State_Change(class AKSObjectiveBase** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Objective State Change");

	UPointObjectiveFullMapIcon_C_Objective_State_Change_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPointObjectiveFullMapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Construct");

	UPointObjectiveFullMapIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.OnCaptureAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UPointObjectiveFullMapIcon_C::OnCaptureAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.OnCaptureAnimFinished");

	UPointObjectiveFullMapIcon_C_OnCaptureAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.ExecuteUbergraph_PointObjectiveFullMapIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveFullMapIcon_C::ExecuteUbergraph_PointObjectiveFullMapIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.ExecuteUbergraph_PointObjectiveFullMapIcon");

	UPointObjectiveFullMapIcon_C_ExecuteUbergraph_PointObjectiveFullMapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
