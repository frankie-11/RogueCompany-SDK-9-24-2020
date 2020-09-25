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

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScoreboardPlayerStats_Lobby_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.NavigateConfirm");

	UScoreboardPlayerStats_Lobby_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFriendly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerStats_Lobby_C::SetColors(bool* IsFriendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetColors");

	UScoreboardPlayerStats_Lobby_C_SetColors_Params params;
	params.IsFriendly = IsFriendly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreboardPlayerStats_Lobby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Construct");

	UScoreboardPlayerStats_Lobby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetTeamColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFriendlyTeam                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerStats_Lobby_C::SetTeamColor(bool* IsFriendlyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetTeamColor");

	UScoreboardPlayerStats_Lobby_C_SetTeamColor_Params params;
	params.IsFriendlyTeam = IsFriendlyTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetLocalPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLocalPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerStats_Lobby_C::SetLocalPlayer(bool* IsLocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetLocalPlayer");

	UScoreboardPlayerStats_Lobby_C_SetLocalPlayer_Params params;
	params.IsLocalPlayer = IsLocalPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetJobIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSJobItem**             JobItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerStats_Lobby_C::SetJobIcon(class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetJobIcon");

	UScoreboardPlayerStats_Lobby_C_SetJobIcon_Params params;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerStats_Lobby_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.InitializeWidget");

	UScoreboardPlayerStats_Lobby_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UScoreboardPlayerStats_Lobby_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UScoreboardPlayerStats_Lobby_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UScoreboardPlayerStats_Lobby_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UScoreboardPlayerStats_Lobby_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UScoreboardPlayerStats_Lobby_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UScoreboardPlayerStats_Lobby_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UScoreboardPlayerStats_Lobby_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadHover");

	UScoreboardPlayerStats_Lobby_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UScoreboardPlayerStats_Lobby_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadUnhover");

	UScoreboardPlayerStats_Lobby_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.ExecuteUbergraph_ScoreboardPlayerStats_Lobby
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerStats_Lobby_C::ExecuteUbergraph_ScoreboardPlayerStats_Lobby(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.ExecuteUbergraph_ScoreboardPlayerStats_Lobby");

	UScoreboardPlayerStats_Lobby_C_ExecuteUbergraph_ScoreboardPlayerStats_Lobby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int64_t*                       PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerStats_Lobby_C::OnClicked__DelegateSignature(class UWidget** Widget, int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.OnClicked__DelegateSignature");

	UScoreboardPlayerStats_Lobby_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
