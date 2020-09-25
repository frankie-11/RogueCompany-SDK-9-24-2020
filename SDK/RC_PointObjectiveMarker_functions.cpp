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

// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointScoreProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSControlPoint**        Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::UpdateControlPointScoreProgress(class AKSControlPoint** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointScoreProgress");

	UPointObjectiveMarker_C_UpdateControlPointScoreProgress_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointCaptureProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSControlPoint**        Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::UpdateControlPointCaptureProgress(class AKSControlPoint** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointCaptureProgress");

	UPointObjectiveMarker_C_UpdateControlPointCaptureProgress_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSObjectiveBase**       Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::UpdateControlPointState(class AKSObjectiveBase** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointState");

	UPointObjectiveMarker_C_UpdateControlPointState_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.SetContestedColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPointObjectiveMarkerTeamState* ObjectiveState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::SetContestedColor(EPointObjectiveMarkerTeamState* ObjectiveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.SetContestedColor");

	UPointObjectiveMarker_C_SetContestedColor_Params params;
	params.ObjectiveState = ObjectiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.GetOwningTeamColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSObjectiveBase**       Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OwningTeamColor                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OpposingTeamColor              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::GetOwningTeamColor(class AKSObjectiveBase** Objective, struct FLinearColor* OwningTeamColor, struct FLinearColor* OpposingTeamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.GetOwningTeamColor");

	UPointObjectiveMarker_C_GetOwningTeamColor_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OwningTeamColor != nullptr)
		*OwningTeamColor = params.OwningTeamColor;
	if (OpposingTeamColor != nullptr)
		*OpposingTeamColor = params.OpposingTeamColor;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.Update
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UPointObjectiveMarker_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.Update");

	UPointObjectiveMarker_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.Get Neutral Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::Get_Neutral_Color(float* Opacity, struct FLinearColor* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.Get Neutral Color");

	UPointObjectiveMarker_C_Get_Neutral_Color_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.ViewSetCaptureProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         ProgressPercent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::ViewSetCaptureProgress(float* ProgressPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.ViewSetCaptureProgress");

	UPointObjectiveMarker_C_ViewSetCaptureProgress_Params params;
	params.ProgressPercent = ProgressPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.SetView
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FKSPointObjectiveMarkerViewState* ViewState                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UPointObjectiveMarker_C::SetView(struct FKSPointObjectiveMarkerViewState* ViewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.SetView");

	UPointObjectiveMarker_C_SetView_Params params;
	params.ViewState = ViewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.SetScreenRegion
// (Event, Public, BlueprintEvent)
// Parameters:
// EIconMarkerScreenRegion*       ScreenRegion                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::SetScreenRegion(EIconMarkerScreenRegion* ScreenRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.SetScreenRegion");

	UPointObjectiveMarker_C_SetScreenRegion_Params params;
	params.ScreenRegion = ScreenRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.SetArrowAngle
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::SetArrowAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.SetArrowAngle");

	UPointObjectiveMarker_C_SetArrowAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.ViewApplyTimerValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         TimerSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalTimerSeconds              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::ViewApplyTimerValue(float* TimerSeconds, float* TotalTimerSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.ViewApplyTimerValue");

	UPointObjectiveMarker_C_ViewApplyTimerValue_Params params;
	params.TimerSeconds = TimerSeconds;
	params.TotalTimerSeconds = TotalTimerSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateMetersAway
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Meters                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::UpdateMetersAway(int* Meters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateMetersAway");

	UPointObjectiveMarker_C_UpdateMetersAway_Params params;
	params.Meters = Meters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPointObjectiveMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.Construct");

	UPointObjectiveMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.ControlPointStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AKSControlPoint**        Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::ControlPointStateUpdated(class AKSControlPoint** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.ControlPointStateUpdated");

	UPointObjectiveMarker_C_ControlPointStateUpdated_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.OnControlTeamScoreUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AKSTeamState**           TeamState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::OnControlTeamScoreUpdated(class AKSTeamState** TeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.OnControlTeamScoreUpdated");

	UPointObjectiveMarker_C_OnControlTeamScoreUpdated_Params params;
	params.TeamState = TeamState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.ExecuteUbergraph_PointObjectiveMarker
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMarker_C::ExecuteUbergraph_PointObjectiveMarker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.ExecuteUbergraph_PointObjectiveMarker");

	UPointObjectiveMarker_C_ExecuteUbergraph_PointObjectiveMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
