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

// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEscapeTeammatesStatus_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Refresh");

	UEscapeTeammatesStatus_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Player Downed Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEscapeTeammatesStatus_C::Handle_Player_Downed_Changed(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Player Downed Changed");

	UEscapeTeammatesStatus_C_Handle_Player_Downed_Changed_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Player Death
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCombatEventInfo*       EventInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UEscapeTeammatesStatus_C::Handle_Player_Death(struct FCombatEventInfo* EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Player Death");

	UEscapeTeammatesStatus_C_Handle_Player_Death_Params params;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Escape Point Changed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AKSPlayerState*>* ContainedPlayers               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEscapeTeammatesStatus_C::Handle_Escape_Point_Changed(TArray<class AKSPlayerState*>* ContainedPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Escape Point Changed");

	UEscapeTeammatesStatus_C_Handle_Escape_Point_Changed_Params params;
	params.ContainedPlayers = ContainedPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEscapeTeammatesStatus_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.InitializeWidget");

	UEscapeTeammatesStatus_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Round Start
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEscapeTeammatesStatus_C::Handle_Round_Start(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Round Start");

	UEscapeTeammatesStatus_C_Handle_Round_Start_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.ExecuteUbergraph_EscapeTeammatesStatus
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEscapeTeammatesStatus_C::ExecuteUbergraph_EscapeTeammatesStatus(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.ExecuteUbergraph_EscapeTeammatesStatus");

	UEscapeTeammatesStatus_C_ExecuteUbergraph_EscapeTeammatesStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
