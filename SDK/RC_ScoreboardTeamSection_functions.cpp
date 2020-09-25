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

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.Get Player Widget byPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         Player_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UScoreboardPlayerEntry_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScoreboardTeamSection_C::Get_Player_Widget_byPlayerState(class AKSPlayerState** Player_State, class UScoreboardPlayerEntry_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.Get Player Widget byPlayerState");

	UScoreboardTeamSection_C_Get_Player_Widget_byPlayerState_Params params;
	params.Player_State = Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdatePlayerVoice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScoreboardTeamSection_C::UpdatePlayerVoice(class AKSPlayerState** PlayerState, bool* IsTalking, bool* IsMuted, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdatePlayerVoice");

	UScoreboardTeamSection_C_UpdatePlayerVoice_Params params;
	params.PlayerState = PlayerState;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.GetPlayerButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStandardButtonNoBorder_C*> PlayerButtons                  (Parm, OutParm, ZeroConstructor)

void UScoreboardTeamSection_C::GetPlayerButtons(TArray<class UStandardButtonNoBorder_C*>* PlayerButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.GetPlayerButtons");

	UScoreboardTeamSection_C_GetPlayerButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerButtons != nullptr)
		*PlayerButtons = params.PlayerButtons;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.EndUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScoreboardTeamSection_C::EndUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.EndUpdate");

	UScoreboardTeamSection_C_EndUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.BeginUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreboardTeamSection_C::BeginUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.BeginUpdate");

	UScoreboardTeamSection_C_BeginUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdatePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData** PlayerData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardTeamSection_C::UpdatePlayer(class UKSPersistentPlayerData** PlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdatePlayer");

	UScoreboardTeamSection_C_UpdatePlayer_Params params;
	params.PlayerData = PlayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreboardTeamSection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.Construct");

	UScoreboardTeamSection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdateHeaderColors
// (BlueprintCallable, BlueprintEvent)

void UScoreboardTeamSection_C::UpdateHeaderColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdateHeaderColors");

	UScoreboardTeamSection_C_UpdateHeaderColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.OnShown
// (Event, Public, BlueprintEvent)

void UScoreboardTeamSection_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.OnShown");

	UScoreboardTeamSection_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardTeamSection_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.InitializeWidget");

	UScoreboardTeamSection_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.Handle Display Cash Changed
// (BlueprintCallable, BlueprintEvent)

void UScoreboardTeamSection_C::Handle_Display_Cash_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.Handle Display Cash Changed");

	UScoreboardTeamSection_C_Handle_Display_Cash_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.ExecuteUbergraph_ScoreboardTeamSection
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardTeamSection_C::ExecuteUbergraph_ScoreboardTeamSection(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.ExecuteUbergraph_ScoreboardTeamSection");

	UScoreboardTeamSection_C_ExecuteUbergraph_ScoreboardTeamSection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.OnPlayerAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UScoreboardTeamSection_C::OnPlayerAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.OnPlayerAdded__DelegateSignature");

	UScoreboardTeamSection_C_OnPlayerAdded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
