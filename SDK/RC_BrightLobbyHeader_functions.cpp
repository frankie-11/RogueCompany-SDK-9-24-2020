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

// Function BrightLobbyHeader.BrightLobbyHeader_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyHeader_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyHeader.BrightLobbyHeader_C.InitializeWidget");

	UBrightLobbyHeader_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyHeader.BrightLobbyHeader_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyHeader_C::StartShowSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyHeader.BrightLobbyHeader_C.StartShowSequence");

	UBrightLobbyHeader_C_StartShowSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLobbyStartMenuInputAction
// (BlueprintCallable, BlueprintEvent)

void UBrightLobbyHeader_C::HandleLobbyStartMenuInputAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLobbyStartMenuInputAction");

	UBrightLobbyHeader_C_HandleLobbyStartMenuInputAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLoginStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_LoginState*              LoginState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyHeader_C::HandleLoginStateChange(EPUMG_LoginState* LoginState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLoginStateChange");

	UBrightLobbyHeader_C_HandleLoginStateChange_Params params;
	params.LoginState = LoginState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyHeader.BrightLobbyHeader_C.ExecuteUbergraph_BrightLobbyHeader
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyHeader_C::ExecuteUbergraph_BrightLobbyHeader(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyHeader.BrightLobbyHeader_C.ExecuteUbergraph_BrightLobbyHeader");

	UBrightLobbyHeader_C_ExecuteUbergraph_BrightLobbyHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
