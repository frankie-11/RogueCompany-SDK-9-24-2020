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

// Function ContextualPingMarker.ContextualPingMarker_C.MovePing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPingType*                     PingType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPingMessage*                  PingMessage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UContextualPingMarker_C::MovePing(EPingType* PingType, EPingMessage* PingMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.MovePing");

	UContextualPingMarker_C_MovePing_Params params;
	params.PingType = PingType;
	params.PingMessage = PingMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContextualPingMarker.ContextualPingMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UContextualPingMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.Construct");

	UContextualPingMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContextualPingMarker.ContextualPingMarker_C.HandlePingRemoved
// (BlueprintCallable, BlueprintEvent)

void UContextualPingMarker_C::HandlePingRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.HandlePingRemoved");

	UContextualPingMarker_C_HandlePingRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContextualPingMarker.ContextualPingMarker_C.SetScreenRegion
// (Event, Public, BlueprintEvent)
// Parameters:
// EIconMarkerScreenRegion*       ScreenRegion                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UContextualPingMarker_C::SetScreenRegion(EIconMarkerScreenRegion* ScreenRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.SetScreenRegion");

	UContextualPingMarker_C_SetScreenRegion_Params params;
	params.ScreenRegion = ScreenRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContextualPingMarker.ContextualPingMarker_C.SetArrowAngle
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UContextualPingMarker_C::SetArrowAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.SetArrowAngle");

	UContextualPingMarker_C_SetArrowAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContextualPingMarker.ContextualPingMarker_C.SetupPingOnReady
// (Event, Public, BlueprintEvent)

void UContextualPingMarker_C::SetupPingOnReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.SetupPingOnReady");

	UContextualPingMarker_C_SetupPingOnReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContextualPingMarker.ContextualPingMarker_C.PlayActivationAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bPlayActiveAnim                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UContextualPingMarker_C::PlayActivationAnim(bool* bPlayActiveAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.PlayActivationAnim");

	UContextualPingMarker_C_PlayActivationAnim_Params params;
	params.bPlayActiveAnim = bPlayActiveAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContextualPingMarker.ContextualPingMarker_C.PlayActiveStateAnim
// (BlueprintCallable, BlueprintEvent)

void UContextualPingMarker_C::PlayActiveStateAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.PlayActiveStateAnim");

	UContextualPingMarker_C_PlayActiveStateAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContextualPingMarker.ContextualPingMarker_C.UpdateMetersAway
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Meters                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UContextualPingMarker_C::UpdateMetersAway(int* Meters)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.UpdateMetersAway");

	UContextualPingMarker_C_UpdateMetersAway_Params params;
	params.Meters = Meters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContextualPingMarker.ContextualPingMarker_C.HandlePingChanged
// (BlueprintCallable, BlueprintEvent)

void UContextualPingMarker_C::HandlePingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.HandlePingChanged");

	UContextualPingMarker_C_HandlePingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContextualPingMarker.ContextualPingMarker_C.ExecuteUbergraph_ContextualPingMarker
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UContextualPingMarker_C::ExecuteUbergraph_ContextualPingMarker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.ExecuteUbergraph_ContextualPingMarker");

	UContextualPingMarker_C_ExecuteUbergraph_ContextualPingMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
