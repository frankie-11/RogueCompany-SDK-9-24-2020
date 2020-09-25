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

// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Update
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UPointObjectiveMinimapIcon_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Update");

	UPointObjectiveMinimapIcon_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.ShouldUpdate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPointObjectiveMinimapIcon_C::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.ShouldUpdate");

	UPointObjectiveMinimapIcon_C_ShouldUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Update From Objective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSObjectiveBase**       Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMinimapIcon_C::Update_From_Objective(class AKSObjectiveBase** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Update From Objective");

	UPointObjectiveMinimapIcon_C_Update_From_Objective_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPointObjectiveMinimapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Construct");

	UPointObjectiveMinimapIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.UpdateMeetsHeightThreshold
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bHeight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDepth                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMinimapIcon_C::UpdateMeetsHeightThreshold(bool* bHeight, bool* bDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.UpdateMeetsHeightThreshold");

	UPointObjectiveMinimapIcon_C_UpdateMeetsHeightThreshold_Params params;
	params.bHeight = bHeight;
	params.bDepth = bDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.ExecuteUbergraph_PointObjectiveMinimapIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPointObjectiveMinimapIcon_C::ExecuteUbergraph_PointObjectiveMinimapIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.ExecuteUbergraph_PointObjectiveMinimapIcon");

	UPointObjectiveMinimapIcon_C_ExecuteUbergraph_PointObjectiveMinimapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
