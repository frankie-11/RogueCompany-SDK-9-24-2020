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

// Function LobbyAnnouncer.LobbyAnnouncer_C.OnLoadingScreenEnded
// (BlueprintCallable, BlueprintEvent)

void ALobbyAnnouncer_C::OnLoadingScreenEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyAnnouncer.LobbyAnnouncer_C.OnLoadingScreenEnded");

	ALobbyAnnouncer_C_OnLoadingScreenEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyAnnouncer.LobbyAnnouncer_C.OnLobbyWidgetReady
// (BlueprintCallable, BlueprintEvent)

void ALobbyAnnouncer_C::OnLobbyWidgetReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyAnnouncer.LobbyAnnouncer_C.OnLobbyWidgetReady");

	ALobbyAnnouncer_C_OnLobbyWidgetReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALobbyAnnouncer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveBeginPlay");

	ALobbyAnnouncer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyAnnouncer.LobbyAnnouncer_C.OnViewStateChangedStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  CurrentRoute                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NextRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EViewManagerLayer*             Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyAnnouncer_C::OnViewStateChangedStarted(struct FName* CurrentRoute, struct FName* NextRoute, EViewManagerLayer* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyAnnouncer.LobbyAnnouncer_C.OnViewStateChangedStarted");

	ALobbyAnnouncer_C_OnViewStateChangedStarted_Params params;
	params.CurrentRoute = CurrentRoute;
	params.NextRoute = NextRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyAnnouncer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveEndPlay");

	ALobbyAnnouncer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyAnnouncer.LobbyAnnouncer_C.EventQueueInGame
// (Event, Public, BlueprintEvent)

void ALobbyAnnouncer_C::EventQueueInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyAnnouncer.LobbyAnnouncer_C.EventQueueInGame");

	ALobbyAnnouncer_C_EventQueueInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyAnnouncer.LobbyAnnouncer_C.ExecuteUbergraph_LobbyAnnouncer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyAnnouncer_C::ExecuteUbergraph_LobbyAnnouncer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyAnnouncer.LobbyAnnouncer_C.ExecuteUbergraph_LobbyAnnouncer");

	ALobbyAnnouncer_C_ExecuteUbergraph_LobbyAnnouncer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
