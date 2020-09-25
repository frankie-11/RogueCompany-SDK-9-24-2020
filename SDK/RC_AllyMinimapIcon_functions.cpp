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

// Function AllyMinimapIcon.AllyMinimapIcon_C.UIRelevantChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSPlayerState**         bpp__PlayerState__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UAllyMinimapIcon_C::UIRelevantChanged(class AKSPlayerState** bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.UIRelevantChanged");

	UAllyMinimapIcon_C_UIRelevantChanged_Params params;
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.Tick
// (BlueprintCosmetic, Native, Event, Public)
// Parameters:
// struct FGeometry*              bpp__MyGeometry__pf            (Parm, IsPlainOldData)
// float*                         bpp__InDeltaTime__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UAllyMinimapIcon_C::Tick(struct FGeometry* bpp__MyGeometry__pf, float* bpp__InDeltaTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.Tick");

	UAllyMinimapIcon_C_Tick_Params params;
	params.bpp__MyGeometry__pf = bpp__MyGeometry__pf;
	params.bpp__InDeltaTime__pf = bpp__InDeltaTime__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.OnSetupStart
// (Native, Public, BlueprintCallable)

void UAllyMinimapIcon_C::OnSetupStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.OnSetupStart");

	UAllyMinimapIcon_C_OnSetupStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.OnPlayerRevived
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSPlayerState**         bpp__Revivee__pf               (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         bpp__Reviver__pf               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__ExpBonus__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UAllyMinimapIcon_C::OnPlayerRevived(class AKSPlayerState** bpp__Revivee__pf, class AKSPlayerState** bpp__Reviver__pf, int* bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.OnPlayerRevived");

	UAllyMinimapIcon_C_OnPlayerRevived_Params params;
	params.bpp__Revivee__pf = bpp__Revivee__pf;
	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.OnPlayerDown
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FCombatEventInfo*       bpp__CombatEventInfo__pf       (Parm)
// int*                           bpp__ExpBonus__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UAllyMinimapIcon_C::OnPlayerDown(struct FCombatEventInfo* bpp__CombatEventInfo__pf, int* bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.OnPlayerDown");

	UAllyMinimapIcon_C_OnPlayerDown_Params params;
	params.bpp__CombatEventInfo__pf = bpp__CombatEventInfo__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.Handle Bomb State Changed
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKSNeutralBombState*    bpp__BombState__pf             (Parm)

void UAllyMinimapIcon_C::Handle_Bomb_State_Changed(struct FKSNeutralBombState* bpp__BombState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.Handle Bomb State Changed");

	UAllyMinimapIcon_C_Handle_Bomb_State_Changed_Params params;
	params.bpp__BombState__pf = bpp__BombState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.Construct
// (BlueprintCosmetic, Native, Event, Public)

void UAllyMinimapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.Construct");

	UAllyMinimapIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.PlayerReviveDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSPlayerState**         bpp__Revivee__pf               (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         bpp__Reviver__pf               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__ExpBonus__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UAllyMinimapIcon_C::PlayerReviveDelegate__DelegateSignature(class AKSPlayerState** bpp__Revivee__pf, class AKSPlayerState** bpp__Reviver__pf, int* bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.PlayerReviveDelegate__DelegateSignature");

	UAllyMinimapIcon_C_PlayerReviveDelegate__DelegateSignature_Params params;
	params.bpp__Revivee__pf = bpp__Revivee__pf;
	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.PlayerDownInfo__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FCombatEventInfo*       bpp__EventInfo__pf             (Parm)
// int*                           bpp__ExpBonus__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UAllyMinimapIcon_C::PlayerDownInfo__DelegateSignature(struct FCombatEventInfo* bpp__EventInfo__pf, int* bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.PlayerDownInfo__DelegateSignature");

	UAllyMinimapIcon_C_PlayerDownInfo__DelegateSignature_Params params;
	params.bpp__EventInfo__pf = bpp__EventInfo__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnUIRelevantPlayerStateChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSPlayerState**         bpp__PlayerState__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UAllyMinimapIcon_C::OnUIRelevantPlayerStateChanged__DelegateSignature(class AKSPlayerState** bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnUIRelevantPlayerStateChanged__DelegateSignature");

	UAllyMinimapIcon_C_OnUIRelevantPlayerStateChanged__DelegateSignature_Params params;
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnSetupPhaseStart__DelegateSignature
// (Public, Delegate)

void UAllyMinimapIcon_C::OnSetupPhaseStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnSetupPhaseStart__DelegateSignature");

	UAllyMinimapIcon_C_OnSetupPhaseStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnNeutralBombStateChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FKSNeutralBombState*    bpp__BombState__pf             (Parm)

void UAllyMinimapIcon_C::OnNeutralBombStateChanged__DelegateSignature(struct FKSNeutralBombState* bpp__BombState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnNeutralBombStateChanged__DelegateSignature");

	UAllyMinimapIcon_C_OnNeutralBombStateChanged__DelegateSignature_Params params;
	params.bpp__BombState__pf = bpp__BombState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
