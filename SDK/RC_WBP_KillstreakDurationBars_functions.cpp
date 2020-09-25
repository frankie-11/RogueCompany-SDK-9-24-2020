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

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.DestroyUnusedDurationBars
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UKSModInst_Activated*> PlayerMods                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_KillstreakDurationBars_C::DestroyUnusedDurationBars(TArray<class UKSModInst_Activated*>* PlayerMods)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.DestroyUnusedDurationBars");

	UWBP_KillstreakDurationBars_C_DestroyUnusedDurationBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerMods != nullptr)
		*PlayerMods = params.PlayerMods;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.GetDurationBarForModInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSModInst_Activated**   Activated_Mod                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWBP_DurationBar_C*      Duration_Bar                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_KillstreakDurationBars_C::GetDurationBarForModInstance(class UKSModInst_Activated** Activated_Mod, class UWBP_DurationBar_C** Duration_Bar)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.GetDurationBarForModInstance");

	UWBP_KillstreakDurationBars_C_GetDurationBarForModInstance_Params params;
	params.Activated_Mod = Activated_Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration_Bar != nullptr)
		*Duration_Bar = params.Duration_Bar;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UWBP_KillstreakDurationBars_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.PostSetPawn");

	UWBP_KillstreakDurationBars_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.CloseGate_PawnRetry
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakDurationBars_C::CloseGate_PawnRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.CloseGate_PawnRetry");

	UWBP_KillstreakDurationBars_C_CloseGate_PawnRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleModsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           KSCharacterRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakDurationBars_C::HandleModsUpdated(class AKSCharacter** KSCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleModsUpdated");

	UWBP_KillstreakDurationBars_C_HandleModsUpdated_Params params;
	params.KSCharacterRef = KSCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandlePlayerDownedOrEliminated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         KSPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakDurationBars_C::HandlePlayerDownedOrEliminated(class AKSPlayerState** KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandlePlayerDownedOrEliminated");

	UWBP_KillstreakDurationBars_C_HandlePlayerDownedOrEliminated_Params params;
	params.KSPlayerState = KSPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UWBP_KillstreakDurationBars_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.PreClearPawn");

	UWBP_KillstreakDurationBars_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.OnKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase**       KillerCharacter                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSCharacterBase**       KilledCharacter                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakDurationBars_C::OnKilled(class AKSCharacterBase** KillerCharacter, class AKSCharacterBase** KilledCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.OnKilled");

	UWBP_KillstreakDurationBars_C_OnKilled_Params params;
	params.KillerCharacter = KillerCharacter;
	params.KilledCharacter = KilledCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleOnViewedPawnChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerController**    Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OldViewTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 NewViewTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakDurationBars_C::HandleOnViewedPawnChanged(class AKSPlayerController** Controller, class AActor** OldViewTarget, class AActor** NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleOnViewedPawnChanged");

	UWBP_KillstreakDurationBars_C_HandleOnViewedPawnChanged_Params params;
	params.Controller = Controller;
	params.OldViewTarget = OldViewTarget;
	params.NewViewTarget = NewViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleProjectileFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DurationTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWeaponAsset**         WeaponAsset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakDurationBars_C::HandleProjectileFired(float* DurationTime, class UKSWeaponAsset** WeaponAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleProjectileFired");

	UWBP_KillstreakDurationBars_C_HandleProjectileFired_Params params;
	params.DurationTime = DurationTime;
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakDurationBars_C::CustomEvent_1(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.CustomEvent_1");

	UWBP_KillstreakDurationBars_C_CustomEvent_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.ResetDurationBars
// (BlueprintCallable, BlueprintEvent)

void UWBP_KillstreakDurationBars_C::ResetDurationBars()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.ResetDurationBars");

	UWBP_KillstreakDurationBars_C_ResetDurationBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.ExecuteUbergraph_WBP_KillstreakDurationBars
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KillstreakDurationBars_C::ExecuteUbergraph_WBP_KillstreakDurationBars(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.ExecuteUbergraph_WBP_KillstreakDurationBars");

	UWBP_KillstreakDurationBars_C_ExecuteUbergraph_WBP_KillstreakDurationBars_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
