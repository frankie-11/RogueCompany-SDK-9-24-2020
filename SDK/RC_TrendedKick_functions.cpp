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

// Function TrendedKick.TrendedKick_C.GetMaximumHorizontalKick
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrendedKick_C::GetMaximumHorizontalKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrendedKick.TrendedKick_C.GetMaximumHorizontalKick");

	UTrendedKick_C_GetMaximumHorizontalKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrendedKick.TrendedKick_C.GetMaximumVerticalKick
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrendedKick_C::GetMaximumVerticalKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrendedKick.TrendedKick_C.GetMaximumVerticalKick");

	UTrendedKick_C_GetMaximumVerticalKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrendedKick.TrendedKick_C.GetCurrentTrendProfile
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           ShotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKickTrendProfile       TrendProfile                   (Parm, OutParm)

void UTrendedKick_C::GetCurrentTrendProfile(int* ShotIndex, struct FKickTrendProfile* TrendProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrendedKick.TrendedKick_C.GetCurrentTrendProfile");

	UTrendedKick_C_GetCurrentTrendProfile_Params params;
	params.ShotIndex = ShotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrendProfile != nullptr)
		*TrendProfile = params.TrendProfile;
}


// Function TrendedKick.TrendedKick_C.MakeKickbackInstance
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           ShotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         AbsoluteMaxDuration            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInterpCurveVector2D    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FInterpCurveVector2D UTrendedKick_C::MakeKickbackInstance(int* ShotIndex, float* AbsoluteMaxDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrendedKick.TrendedKick_C.MakeKickbackInstance");

	UTrendedKick_C_MakeKickbackInstance_Params params;
	params.ShotIndex = ShotIndex;
	params.AbsoluteMaxDuration = AbsoluteMaxDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
