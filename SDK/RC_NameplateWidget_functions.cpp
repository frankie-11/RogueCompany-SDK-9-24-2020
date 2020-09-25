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

// Function NameplateWidget.NameplateWidget_C.Should Show Enemy Nameplate
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bpp__ShouldShow__pf            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::Should_Show_Enemy_Nameplate(bool* bpp__ShouldShow__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.Should Show Enemy Nameplate");

	UNameplateWidget_C_Should_Show_Enemy_Nameplate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ShouldShow__pf != nullptr)
		*bpp__ShouldShow__pf = params.bpp__ShouldShow__pf;
}


// Function NameplateWidget.NameplateWidget_C.SetNamePlateColor
// (Native, Public, BlueprintCallable)

void UNameplateWidget_C::SetNamePlateColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.SetNamePlateColor");

	UNameplateWidget_C_SetNamePlateColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.Player Is Blinded
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bpp__IsxBlind__pfT             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::Player_Is_Blinded(bool* bpp__IsxBlind__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.Player Is Blinded");

	UNameplateWidget_C_Player_Is_Blinded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__IsxBlind__pfT != nullptr)
		*bpp__IsxBlind__pfT = params.bpp__IsxBlind__pfT;
}


// Function NameplateWidget.NameplateWidget_C.OnUnhovered
// (Native, Event, Public, BlueprintCallable)

void UNameplateWidget_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.OnUnhovered");

	UNameplateWidget_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.OnPossession
// (Native, Event, Public, BlueprintCallable)
// Parameters:
// class APlayerState**           bpp__PlayerState__pf           (Parm, ZeroConstructor, IsPlainOldData)
// class AKSCharacter**           bpp__Character__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::OnPossession(class APlayerState** bpp__PlayerState__pf, class AKSCharacter** bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.OnPossession");

	UNameplateWidget_C_OnPossession_Params params;
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.OnPlayerUINeedsUpdate
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSPlayerState**         bpp__PlayerState__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::OnPlayerUINeedsUpdate(class AKSPlayerState** bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.OnPlayerUINeedsUpdate");

	UNameplateWidget_C_OnPlayerUINeedsUpdate_Params params;
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged_Event
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSPlayerState**         bpp__PlayerState__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::OnPlayerDownedChanged_Event(class AKSPlayerState** bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged_Event");

	UNameplateWidget_C_OnPlayerDownedChanged_Event_Params params;
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.OnLoaded_F5BCD8C84871643FB2979DA9F519484F
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                bpp__Loaded__pf                (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::OnLoaded_F5BCD8C84871643FB2979DA9F519484F(class UObject** bpp__Loaded__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.OnLoaded_F5BCD8C84871643FB2979DA9F519484F");

	UNameplateWidget_C_OnLoaded_F5BCD8C84871643FB2979DA9F519484F_Params params;
	params.bpp__Loaded__pf = bpp__Loaded__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.OnKillCamEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__IsEnabled__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::OnKillCamEnabled(bool* bpp__IsEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.OnKillCamEnabled");

	UNameplateWidget_C_OnKillCamEnabled_Params params;
	params.bpp__IsEnabled__pf = bpp__IsEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.OnHovered
// (Native, Event, Public, BlueprintCallable)

void UNameplateWidget_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.OnHovered");

	UNameplateWidget_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.OnDead
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSPlayerState**         bpp__PlayerState__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::OnDead(class AKSPlayerState** bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.OnDead");

	UNameplateWidget_C_OnDead_Params params;
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.Manual Tick
// (Native, Public, BlueprintCallable)

void UNameplateWidget_C::Manual_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.Manual Tick");

	UNameplateWidget_C_Manual_Tick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.Handle Overheal Changed
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSCharacterBase**       bpp__Character__pf__const      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::Handle_Overheal_Changed(class AKSCharacterBase** bpp__Character__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.Handle Overheal Changed");

	UNameplateWidget_C_Handle_Overheal_Changed_Params params;
	params.bpp__Character__pf__const = bpp__Character__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.Handle Job Changed
// (Native, Public, BlueprintCallable)

void UNameplateWidget_C::Handle_Job_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.Handle Job Changed");

	UNameplateWidget_C_Handle_Job_Changed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.HandleNameChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSPlayerState**         bpp__InKSPlayerState__pf       (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::HandleNameChanged(class AKSPlayerState** bpp__InKSPlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.HandleNameChanged");

	UNameplateWidget_C_HandleNameChanged_Params params;
	params.bpp__InKSPlayerState__pf = bpp__InKSPlayerState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_9
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::ExecuteUbergraph_NameplateWidget_9(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_9");

	UNameplateWidget_C_ExecuteUbergraph_NameplateWidget_9_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_5
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::ExecuteUbergraph_NameplateWidget_5(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_5");

	UNameplateWidget_C_ExecuteUbergraph_NameplateWidget_5_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.Destruct
// (BlueprintCosmetic, Native, Event, Public)

void UNameplateWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.Destruct");

	UNameplateWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.Deferred Player State Open
// (Native, Public, BlueprintCallable)

void UNameplateWidget_C::Deferred_Player_State_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.Deferred Player State Open");

	UNameplateWidget_C_Deferred_Player_State_Open_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.Construct
// (BlueprintCosmetic, Native, Event, Public)

void UNameplateWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.Construct");

	UNameplateWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameplateWidget.NameplateWidget_C.CharacterHealthChange
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSCharacterBase**       bpp__Character__pf__const      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::CharacterHealthChange(class AKSCharacterBase** bpp__Character__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameplateWidget.NameplateWidget_C.CharacterHealthChange");

	UNameplateWidget_C_CharacterHealthChange_Params params;
	params.bpp__Character__pf__const = bpp__Character__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnUIRelevantPlayerStateChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSPlayerState**         bpp__PlayerState__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::OnUIRelevantPlayerStateChanged__DelegateSignature(class AKSPlayerState** bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction NameplateWidget.NameplateWidget_C.OnUIRelevantPlayerStateChanged__DelegateSignature");

	UNameplateWidget_C_OnUIRelevantPlayerStateChanged__DelegateSignature_Params params;
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerEliminated__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSPlayerState**         bpp__PlayerState__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::OnPlayerEliminated__DelegateSignature(class AKSPlayerState** bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerEliminated__DelegateSignature");

	UNameplateWidget_C_OnPlayerEliminated__DelegateSignature_Params params;
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSPlayerState**         bpp__PlayerState__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::OnPlayerDownedChanged__DelegateSignature(class AKSPlayerState** bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged__DelegateSignature");

	UNameplateWidget_C_OnPlayerDownedChanged__DelegateSignature_Params params;
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnKSPlayerStateNameChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSPlayerState**         bpp__KSPlayerState__pf         (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::OnKSPlayerStateNameChanged__DelegateSignature(class AKSPlayerState** bpp__KSPlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction NameplateWidget.NameplateWidget_C.OnKSPlayerStateNameChanged__DelegateSignature");

	UNameplateWidget_C_OnKSPlayerStateNameChanged__DelegateSignature_Params params;
	params.bpp__KSPlayerState__pf = bpp__KSPlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnKillCamEnabled__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool*                          bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::OnKillCamEnabled__DelegateSignature(bool* bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction NameplateWidget.NameplateWidget_C.OnKillCamEnabled__DelegateSignature");

	UNameplateWidget_C_OnKillCamEnabled__DelegateSignature_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnJobChanged__DelegateSignature
// (Public, Delegate)

void UNameplateWidget_C::OnJobChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction NameplateWidget.NameplateWidget_C.OnJobChanged__DelegateSignature");

	UNameplateWidget_C_OnJobChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnHealthChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSCharacterBase**       bpp__Character__pf             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNameplateWidget_C::OnHealthChanged__DelegateSignature(class AKSCharacterBase** bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction NameplateWidget.NameplateWidget_C.OnHealthChanged__DelegateSignature");

	UNameplateWidget_C_OnHealthChanged__DelegateSignature_Params params;
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
