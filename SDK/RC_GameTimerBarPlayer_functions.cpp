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

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Try Update Is Ally
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ValueHasChanged                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarPlayer_C::Try_Update_Is_Ally(bool* ValueHasChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Try Update Is Ally");

	UGameTimerBarPlayer_C_Try_Update_Is_Ally_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValueHasChanged != nullptr)
		*ValueHasChanged = params.ValueHasChanged;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.GameTimerBarPlayer_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSTeamState**           Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarPlayer_C::GameTimerBarPlayer_AutoGenFunc(class AKSTeamState** Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.GameTimerBarPlayer_AutoGenFunc");

	UGameTimerBarPlayer_C_GameTimerBarPlayer_AutoGenFunc_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.On Player Respawns Changed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         KSPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarPlayer_C::On_Player_Respawns_Changed(class AKSPlayerState** KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.On Player Respawns Changed");

	UGameTimerBarPlayer_C_On_Player_Respawns_Changed_Params params;
	params.KSPlayerState = KSPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleBindingsForPlayerStateChanges
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBarPlayer_C::HandleBindingsForPlayerStateChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleBindingsForPlayerStateChanges");

	UGameTimerBarPlayer_C_HandleBindingsForPlayerStateChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set Merc Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameTimerBarPlayer_C::Set_Merc_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set Merc Icon");

	UGameTimerBarPlayer_C_Set_Merc_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.SetLocalIdentifier
// (Public, BlueprintCallable, BlueprintEvent)

void UGameTimerBarPlayer_C::SetLocalIdentifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.SetLocalIdentifier");

	UGameTimerBarPlayer_C_SetLocalIdentifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set View State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameTimerBarPlayerState>* State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarPlayer_C::Set_View_State(TEnumAsByte<EGameTimerBarPlayerState>* State, bool* Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set View State");

	UGameTimerBarPlayer_C_Set_View_State_Params params;
	params.State = State;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set Player State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         KS_Player_State                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarPlayer_C::Set_Player_State(class AKSPlayerState** KS_Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set Player State");

	UGameTimerBarPlayer_C_Set_Player_State_Params params;
	params.KS_Player_State = KS_Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarPlayer_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.PreConstruct");

	UGameTimerBarPlayer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarPlayer_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.InitializeWidget");

	UGameTimerBarPlayer_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Bomb State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSNeutralBombState*    BombState                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameTimerBarPlayer_C::Handle_Bomb_State_Changed(struct FKSNeutralBombState* BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Bomb State Changed");

	UGameTimerBarPlayer_C_Handle_Bomb_State_Changed_Params params;
	params.BombState = BombState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.On Player State Downed Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         KSPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarPlayer_C::On_Player_State_Downed_Changed(class AKSPlayerState** KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.On Player State Downed Changed");

	UGameTimerBarPlayer_C_On_Player_State_Downed_Changed_Params params;
	params.KSPlayerState = KSPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Player Mods Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerMod**           Mod                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSPlayerModInstance**   ModInstance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGameTimerBarPlayer_C::Handle_Player_Mods_Changed(class UKSPlayerMod** Mod, class UKSPlayerModInstance** ModInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Player Mods Changed");

	UGameTimerBarPlayer_C_Handle_Player_Mods_Changed_Params params;
	params.Mod = Mod;
	params.ModInstance = ModInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Icon Showing Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSTopBarStatusIconInterface>* StatusIconInterface            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarPlayer_C::Handle_Icon_Showing_Changed(TScriptInterface<class UKSTopBarStatusIconInterface>* StatusIconInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Icon Showing Changed");

	UGameTimerBarPlayer_C_Handle_Icon_Showing_Changed_Params params;
	params.StatusIconInterface = StatusIconInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Bound Icon Mod Removed
// (BlueprintCallable, BlueprintEvent)

void UGameTimerBarPlayer_C::Handle_Bound_Icon_Mod_Removed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Bound Icon Mod Removed");

	UGameTimerBarPlayer_C_Handle_Bound_Icon_Mod_Removed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.ExecuteUbergraph_GameTimerBarPlayer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTimerBarPlayer_C::ExecuteUbergraph_GameTimerBarPlayer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.ExecuteUbergraph_GameTimerBarPlayer");

	UGameTimerBarPlayer_C_ExecuteUbergraph_GameTimerBarPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
