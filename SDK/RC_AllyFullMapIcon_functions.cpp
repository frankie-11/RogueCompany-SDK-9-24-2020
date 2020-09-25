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

// Function AllyFullMapIcon.AllyFullMapIcon_C.GetWorldPosition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAllyFullMapIcon_C::GetWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.GetWorldPosition");

	UAllyFullMapIcon_C_GetWorldPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AllyFullMapIcon.AllyFullMapIcon_C.GetWorldYaw
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAllyFullMapIcon_C::GetWorldYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.GetWorldYaw");

	UAllyFullMapIcon_C_GetWorldYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AllyFullMapIcon.AllyFullMapIcon_C.ShouldUpdate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAllyFullMapIcon_C::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.ShouldUpdate");

	UAllyFullMapIcon_C_ShouldUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AllyFullMapIcon.AllyFullMapIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAllyFullMapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.Construct");

	UAllyFullMapIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyFullMapIcon.AllyFullMapIcon_C.Ally State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAllyFullMapIcon_C::Ally_State(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.Ally State");

	UAllyFullMapIcon_C_Ally_State_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyFullMapIcon.AllyFullMapIcon_C.ExecuteUbergraph_AllyFullMapIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAllyFullMapIcon_C::ExecuteUbergraph_AllyFullMapIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.ExecuteUbergraph_AllyFullMapIcon");

	UAllyFullMapIcon_C_ExecuteUbergraph_AllyFullMapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
